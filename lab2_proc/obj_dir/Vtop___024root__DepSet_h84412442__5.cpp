// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    // Body
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    vlSelf->top__DOT__DUT__DOT__op1_sel_D = (0x17U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D));
    if (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
               | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
        if ((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D)) {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
        } else if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
        } else if ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
        } else if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 2U;
        } else {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 
                ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                  ? 2U : 0U);
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
               & ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  | ((0x2003U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     & ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        | ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           & (0x1073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))));
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D 
            = ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
               & ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  | ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     | ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        | (0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))));
    } else {
        if (((((((((0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 
                ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                  ? 0U : ((0x6033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))
                           ? 0U : ((0x4033U == (0xfe00707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst_D))
                                    ? 0U : ((0x5033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))
                                             ? 0U : 
                                            ((0x1033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))
                                              ? 0U : 1U)))));
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D 
                = ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | ((0x5033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x1033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))))));
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
        } else if (((((((((0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          | (0x5013U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x1013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            if ((0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
            } else if ((0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
            } else if ((0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
            } else if ((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__imm_type_D = 3U;
            } else if ((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__imm_type_D = 3U;
            } else if ((0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__imm_type_D = 1U;
            } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__imm_type_D = 4U;
            } else {
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
            }
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D 
                = ((0x4013U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   & ((0x5013U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      & ((0x1013U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         & ((0x37U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            & ((0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                               & (0x2023U == (0x707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D)))))));
        } else {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D 
                = ((0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | ((0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x7063U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))))));
            vlSelf->top__DOT__DUT__DOT__imm_type_D 
                = ((0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                    ? 2U : ((0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                             ? 2U : ((0x6063U == (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))
                                      ? 2U : ((0x5063U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))
                                               ? 2U
                                               : ((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                   ? 2U
                                                   : 0U)))));
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D 
            = (((((((((0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (((((((((0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x1013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))
                   ? ((0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | ((0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | ((0x1013U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | ((0x37U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                               & ((0x17U != (0x7fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                  & ((0x2023U == (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                     | (0x6fU != (0x7fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))))))))
                   : ((0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | ((0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | ((0x5063U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                               | (0x7063U == (0x707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
        = vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
        [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   >> 0xfU))];
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
        = vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
        [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   >> 0x14U))];
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D 
        = (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D = 
        (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
            & ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
               & ((0x2003U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  & ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     & (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))));
    if ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D = 1U;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D = 2U;
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D = 0U;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D = 0U;
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink_msg ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy 
            = vlSelf->top__DOT__dmem_respstream_rdy;
    }
    vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
           & ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_resp_rdy_X))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_resp_rdy_X 
            = vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_X))) {
        vlSymsp->__Vcoverage[1879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
           & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_val_D))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_D))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_D))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
                  & (0x7c1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
                  & (0x7c0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrw_D))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrw_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D)))) {
        vlSymsp->__Vcoverage[2879].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_sel_D 
            = vlSelf->top__DOT__DUT__DOT__op1_sel_D;
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
                vlSymsp->__Vcoverage[2885].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
                vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
            vlSymsp->__Vcoverage[2884].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
        vlSymsp->__Vcoverage[2883].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
        = ((0U == (0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                            >> 0xfU))) ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0);
    if (vlSelf->top__DOT__DUT__DOT__op1_sel_D) {
        if (vlSelf->top__DOT__DUT__DOT__op1_sel_D) {
            vlSymsp->__Vcoverage[2880].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D)))) {
            vlSymsp->__Vcoverage[2881].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
        = ((0U == (0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                            >> 0x14U))) ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1);
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_D))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
                  & (0xfc0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
                  & (0xfc1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
                  & (0xf14U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrr_D))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrr_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D = 1U;
    }
    vlSelf->top__DOT__DUT__DOT__csrr_sel_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         & (0xf14U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__csrr_sel_D = 2U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X)))) {
        if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D) {
            vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D)))) {
            vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_redirect_D))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_redirect_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D)));
    }
    vlSelf->top__DOT__DUT__DOT__pc_sel_F = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X)
                                             ? (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X)
                                             : ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D)
                                                 ? (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D)
                                                 : 0U));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs2_en_D))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs2_en_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs1_en_D))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs1_en_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))))));
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[2801].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[2800].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[2802].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[2803].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[2804].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[2805].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
            vlSymsp->__Vcoverage[2805].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D = 0U;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))
                    ? 0U : (((- (IData)((vlSelf->top__DOT__DUT__DOT__inst_D 
                                         >> 0x1fU))) 
                             << 0x14U) | ((0xff000U 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D) 
                                          | ((0x800U 
                                              & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                 >> 9U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                      >> 0x14U)))))));
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))
                ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))
                    ? (0xfffff000U & vlSelf->top__DOT__DUT__DOT__inst_D)
                    : (((- (IData)((vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                      >> 7U))))))
                : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))
                    ? (((- (IData)((vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | ((0x7e0U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | (0x7ffU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x14U)))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[5605].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[5606].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[5599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                  & (IData)(vlSelf->top__DOT__dmem_respstream_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[5608].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                           & (IData)(vlSelf->top__DOT__dmem_respstream_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[5609].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy 
                = ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy = 0U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy 
            = ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_rdy))) {
        vlSymsp->__Vcoverage[3947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_val 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_X))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_D) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_D))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_D))) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mngr2proc_rdy_D))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mngr2proc_rdy_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D;
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[2877].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[2876].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
            vlSymsp->__Vcoverage[2875].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
        vlSymsp->__Vcoverage[2874].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
            vlSymsp->__Vcoverage[2750].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)))) {
            vlSymsp->__Vcoverage[2749].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_X_rs2_D))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_M_rs2_D))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_M_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_W_rs2_D))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_W_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_X_rs1_D))) {
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_M_rs1_D))) {
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_M_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_W_rs1_D))) {
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_W_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D) 
           | ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D) 
              | ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D) 
                 | ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D) 
                    | ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D) 
                       | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D))))));
    if ((1U & ((IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                 + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                >> 0x20U))) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_plus_imm_D__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[2888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_plus_imm_D__DOT____Vtogcov__cout 
            = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                      + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                     >> 0x20U))));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
           + vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D);
    if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
            vlSymsp->__Vcoverage[2752].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                = (0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X);
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)))) {
            vlSymsp->__Vcoverage[2751].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[5534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[5600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[4947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__dmem_reqstream_val = ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                            | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__squash_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F;
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)) 
           & ((IData)(vlSelf->top__DOT__imem_respstream_val) 
              & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F))));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D))) {
        vlSymsp->__Vcoverage[2329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__req_rdy)
            ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D
            : vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_reg);
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_hazard_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[4948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_val 
            = vlSelf->top__DOT__dmem_reqstream_val;
    }
    vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num)));
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__dmem_reqstream_rdy) 
           & (IData)(vlSelf->top__DOT__dmem_reqstream_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_val))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_val 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__a) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
           + vlSelf->top__DOT__DUT__DOT__dpath__DOT__ostream_msg);
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x2000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x4000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x8000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x10000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x20000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x40000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x80000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x100000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x200000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x400000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x800000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x1000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x2000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x4000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x8000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x10000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((0x20000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((0x40000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if (((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1dU)) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
                              >> 0x1fU))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((1U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((2U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((4U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((8U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x80U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x100U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x200U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x400U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x800U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x1000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x2000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x4000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x8000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x80000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x100000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x200000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x400000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x800000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x1000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x2000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x4000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x8000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U];
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[4943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[4246].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[4247].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[4240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[4249].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[4250].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memreq1_val 
                = ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memreq1_val = 0U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memreq1_val 
            = ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val))) {
        vlSymsp->__Vcoverage[3818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_val;
    }
    if (vlSelf->top__DOT__mem__DOT__mem_memreq1_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len 
            = (3U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_ 
            = (7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                     >> 0xaU));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque 
            = (0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                        >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
            = ((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                             >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U];
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy;
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new))) {
        vlSymsp->__Vcoverage[3061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__msg_new) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__msg_new));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
          ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
          ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[4945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[4175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[4241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[5166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[5167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[4875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[4879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[4876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    // Body
    if (vlSelf->top__DOT__mem_clear) {
        vlSymsp->__Vcoverage[4736].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if (vlSelf->top__DOT__reset) {
            vlSymsp->__Vcoverage[4735].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if (vlSelf->top__DOT__reset) {
                vlSymsp->__Vcoverage[4734].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                vlSymsp->__Vcoverage[4733].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__mem_clear) ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_clear = vlSelf->top__DOT__mem_clear;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[4563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[4564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xeU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xdU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xbU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (4U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((7U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (8U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->top__DOT__mem_clear) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) {
            vlSymsp->__Vcoverage[4714].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSymsp->__Vcoverage[4713].fetch_add(1, std::memory_order_relaxed);
        }
    }
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
           == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M)))) {
                    vlSymsp->__Vcoverage[4717].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
                    vlSymsp->__Vcoverage[4716].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M)))) {
                    vlSymsp->__Vcoverage[4726].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
                    vlSymsp->__Vcoverage[4725].fetch_add(1, std::memory_order_relaxed);
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4724].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4723].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[4722].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[4721].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M)))) {
                    vlSymsp->__Vcoverage[4720].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
                    vlSymsp->__Vcoverage[4719].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
                    vlSymsp->__Vcoverage[4731].fetch_add(1, std::memory_order_relaxed);
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[4727].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4730].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4729].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[4728].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M)))) {
                    vlSymsp->__Vcoverage[4732].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    vlSelf->top__DOT__snk_done = ((~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                  & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
                                     == (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    __Vilp = 0x508U;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x507U)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->top__DOT__mem_clear) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i = 0U;
            while (VL_GTS_III(32, 0x1000U, vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)] = 0U;
                vlSymsp->__Vcoverage[4712].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i);
            }
        }
    } else if (vlSelf->top__DOT__reset) {
        __Vilp = 0U;
        while ((__Vilp <= 0xfffU)) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
                = vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i = 0U;
            while ((vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    < (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (((~ ((IData)(0xffU) << (0x1fU 
                                               & ((0x18U 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      << 1U)) 
                                                  + 
                                                  (vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                                                   << 3U))))) 
                        & vlSelf->top__DOT__mem__DOT__mem__DOT__m_next
                        [(0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                    >> 4U))]) | (0xffffffffULL 
                                                 & ((0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))))) 
                                                        | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((0x18U 
                                                         & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                            << 1U)) 
                                                        + 
                                                        (vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                                                         << 3U))))));
                vlSymsp->__Vcoverage[4715].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i = 0U;
            while ((vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                    < (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (((~ ((IData)(0xffU) << (0x1fU 
                                               & ((0x18U 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      << 1U)) 
                                                  + 
                                                  (vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                                                   << 3U))))) 
                        & vlSelf->top__DOT__mem__DOT__mem__DOT__m_next
                        [(0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                    >> 4U))]) | (0xffffffffULL 
                                                 & ((0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))))) 
                                                        | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((0x18U 
                                                         & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                            << 1U)) 
                                                        + 
                                                        (vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                                                         << 3U))))));
                vlSymsp->__Vcoverage[4718].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
            if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                              >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       + vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            } else if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            } else if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       | vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
            if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                              >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       + vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            } else if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            } else if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       | vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            }
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__src__DOT__src__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__snk_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__snk_done))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__snk_done = vlSelf->top__DOT__snk_done;
    }
    vlSelf->top__DOT__sink__DOT__sink_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                                   & (~ (IData)(vlSelf->top__DOT__snk_done))));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy 
            = vlSelf->top__DOT__sink__DOT__sink_rdy;
    }
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__proc2mngr_val) 
           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
              & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy));
    vlSelf->top__DOT__proc2mngr_rdy = ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)
                                        ? ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
                                           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                              & (0U 
                                                 == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay)))
                                        : ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                           & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__proc2mngr_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_rdy 
            = vlSelf->top__DOT__proc2mngr_rdy;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__proc2mngr_rdy) 
           & (IData)(vlSelf->top__DOT__proc2mngr_val));
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                      & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__proc2mngr_val) 
                  & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                 & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__proc2mngr_val) 
                           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                          & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__index_en;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h9e9d4821__0;
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h9e9d4821__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hbe8d2200__0;
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hbe8d2200__0 = 0;
    CData/*3:0*/ __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b;
    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b = 0;
    CData/*3:0*/ __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__Vfuncout = 0;
    // Body
    if (((IData)(vlSelf->top__DOT__mngr2proc_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_val 
            = vlSelf->top__DOT__mngr2proc_val;
    }
    vlSelf->top__DOT__mngr2proc_msg = ((IData)(vlSelf->top__DOT__mngr2proc_val)
                                        ? vlSelf->top__DOT__src__DOT__src_msg
                                        : 0U);
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__mngr2proc_val)) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D)));
    if ((1U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (1U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((2U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (2U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((4U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (4U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((8U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (8U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x10U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x20U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x40U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x80U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x100U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x200U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x400U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x800U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x1000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x2000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x4000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x8000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x10000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x20000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x40000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x80000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x100000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x200000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x400000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x800000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x1000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x2000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x4000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x8000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mngr2proc_msg 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x10000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mngr2proc_msg 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x20000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mngr2proc_msg 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x40000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if (((vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x80000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
        = ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))
            ? vlSelf->top__DOT__mngr2proc_msg : ((1U 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))
                                                  ? 1U
                                                  : 0U));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_mngr2proc_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D) 
              | ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D)) 
                 | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D))));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D = 
        ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
          ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D
          : ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
              ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D
              : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
                  ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D
                  : 0U)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D;
    }
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hbe8d2200__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6bfbc66e__0));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__req_rdy) {
        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b 
            = (0x7fU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        >> 1U));
        vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b 
            = (0x7fU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        >> 1U));
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D;
    } else {
        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b 
            = (0x7fU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_reg 
                        >> 1U));
        vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b 
            = (0x7fU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_reg 
                        >> 1U));
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_reg;
    }
    if ((0x40U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
        if ((0x20U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
            if ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__Vfuncout = 1U;
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            } else {
                                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__Vfuncout = 2U;
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        } else {
                            __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__Vfuncout 
                                = ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 3U);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    } else {
                        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__Vfuncout 
                            = ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 4U));
                    }
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                } else {
                    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__Vfuncout 
                        = ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 5U)));
                }
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            } else {
                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__Vfuncout 
                    = ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 6U))));
            }
            if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        } else {
            __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__Vfuncout 
                = ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                    ? ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 7U)))));
        }
        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                      >> 5U)))) {
            if ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    } else {
        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__Vfuncout 
            = ((0x20U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                ? ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                    ? ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 6U)))))
                : ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                    ? ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))
                                                   ? 1U
                                                   : 8U))))));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2 
        = __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__Vfuncout;
    if ((0x40U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
        if ((0x20U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
            if ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__Vfuncout = 1U;
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            } else {
                                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__Vfuncout = 2U;
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        } else {
                            __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__Vfuncout 
                                = ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 3U);
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    } else {
                        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__Vfuncout 
                            = ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 4U));
                    }
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                } else {
                    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__Vfuncout 
                        = ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 5U)));
                }
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            } else {
                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__Vfuncout 
                    = ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 6U))));
            }
            if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        } else {
            __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__Vfuncout 
                = ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                    ? ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 7U)))));
        }
        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    } else {
        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__Vfuncout 
            = ((0x20U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                ? ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                    ? ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 6U)))))
                : ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                    ? ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))
                                                   ? 1U
                                                   : 8U))))));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2 
        = __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__Vfuncout;
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
        = (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hbe8d2200__0));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
              | (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hbe8d2200__0)));
    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                              >> 3U)))) {
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3068].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
            if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                              >> 3U)))) {
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__121__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2)));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
           << (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2));
    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3068].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
            if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b)))) {
                                vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__122__b))) {
                                vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
           >> (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[2395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[2441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[2442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[2443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[2444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[2445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[2446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[2447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[2448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[2449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[2450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[2451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[2452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[2453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[2454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[2455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[2456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[2457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[2458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D;
    }
    vlSelf->top__DOT__DUT__DOT__reg_en_D = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)));
    vlSelf->top__DOT__DUT__DOT__imul_req_val_D = ((0x2000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                                  & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)));
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h9e9d4821__0 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F)) 
              & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F))));
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[2997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[2999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__reg_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_D 
            = vlSelf->top__DOT__DUT__DOT__reg_en_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul_req_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_req_val_D 
            = vlSelf->top__DOT__DUT__DOT__imul_req_val_D;
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__in_val 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imul_req_val_D));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)) 
           & (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h9e9d4821__0));
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h9e9d4821__0) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_F))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_rdy))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_rdy 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy;
    }
    vlSelf->top__DOT__imem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) 
                                             | (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__in_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__in_val))) {
        vlSymsp->__Vcoverage[2895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__in_val 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__in_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D;
    }
    if (((IData)(vlSelf->top__DOT__mngr2proc_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_rdy 
            = vlSelf->top__DOT__mngr2proc_rdy;
    }
    vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
              & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_rdy 
            = vlSelf->top__DOT__imem_respstream_rdy;
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go 
        = ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
           & (IData)(vlSelf->top__DOT__imem_respstream_val));
    vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
           & ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num)));
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                 & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                           & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                          & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__src__DOT__src_rdy = ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
                                                   & (0U 
                                                      == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
        } else {
            vlSelf->top__DOT__src__DOT__src_rdy = 0U;
        }
    } else {
        vlSelf->top__DOT__src__DOT__src_rdy = ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
                                               & (0U 
                                                  == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src_rdy) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_rdy))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_rdy 
            = vlSelf->top__DOT__src__DOT__src_rdy;
    }
    vlSelf->top__DOT__src__DOT__src__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & (IData)(vlSelf->top__DOT__src__DOT__src_rdy));
    if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
             & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                      & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                 & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))) {
                vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
             & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) {
        if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go) {
            vlSymsp->__Vcoverage[1550].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[1551].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state = 1U;
        } else {
            vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state = 0U;
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state 
            = (1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
                     & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go))));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
             & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[1548].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
                      & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))))) {
            vlSymsp->__Vcoverage[1549].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__istream_go))) {
        vlSymsp->__Vcoverage[1547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__istream_go 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[5462].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[5463].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[5456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                  & (IData)(vlSelf->top__DOT__imem_respstream_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[5465].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                           & (IData)(vlSelf->top__DOT__imem_respstream_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[5466].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy 
                = ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy = 0U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy 
            = ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_rdy))) {
        vlSymsp->__Vcoverage[3898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val));
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__src__DOT__src__DOT__index_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__next_state))) {
        vlSymsp->__Vcoverage[1546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__next_state 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[5391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[5457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[4887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[4888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[4883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[4885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}
