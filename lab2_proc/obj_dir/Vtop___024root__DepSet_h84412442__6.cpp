// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

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
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    // Init
    CData/*3:0*/ __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b;
    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b = 0;
    CData/*3:0*/ __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__Vfuncout = 0;
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
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[2420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D = 
        ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
          ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_mux_out
          : ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
              ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D
              : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
                  ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D
                  : 0U)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6648b1bd__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6bfbc66e__0));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__req_rdy) {
        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b 
            = (0x7fU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        >> 1U));
        vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b 
            = (0x7fU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        >> 1U));
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D;
    } else {
        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b 
            = (0x7fU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_reg 
                        >> 1U));
        vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b 
            = (0x7fU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_reg 
                        >> 1U));
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_reg;
    }
    if ((0x40U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
        if ((0x20U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
            if ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__Vfuncout = 1U;
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            } else {
                                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__Vfuncout = 2U;
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        } else {
                            __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__Vfuncout 
                                = ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 3U);
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    } else {
                        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__Vfuncout 
                            = ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 4U));
                    }
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                } else {
                    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__Vfuncout 
                        = ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 5U)));
                }
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            } else {
                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__Vfuncout 
                    = ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 6U))));
            }
            if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        } else {
            __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__Vfuncout 
                = ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                    ? ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 7U)))));
        }
        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                      >> 5U)))) {
            if ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    } else {
        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__Vfuncout 
            = ((0x20U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                ? ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                    ? ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 6U)))))
                : ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                    ? ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                        ? ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                            ? ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                ? ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))
                                                   ? 1U
                                                   : 8U))))));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2 
        = __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__Vfuncout;
    if ((0x40U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
        if ((0x20U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
            if ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__Vfuncout = 1U;
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            } else {
                                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__Vfuncout = 2U;
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        } else {
                            __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__Vfuncout 
                                = ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 3U);
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    } else {
                        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__Vfuncout 
                            = ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 4U));
                    }
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                } else {
                    __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__Vfuncout 
                        = ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 5U)));
                }
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            } else {
                __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__Vfuncout 
                    = ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 6U))));
            }
            if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        } else {
            __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__Vfuncout 
                = ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                    ? ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 7U)))));
        }
        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    } else {
        __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__Vfuncout 
            = ((0x20U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                ? ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                    ? ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 6U)))))
                : ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                    ? ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 5U))))
                    : ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                        ? ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 4U)))
                        : ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                            ? ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 3U))
                            : ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                ? ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                    ? 1U : 2U) : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))
                                                   ? 1U
                                                   : 8U))))));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2 
        = __Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__Vfuncout;
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
        = (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6648b1bd__0));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6648b1bd__0)));
    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                              >> 3U)))) {
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
            if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                              >> 3U)))) {
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                    if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                        if ((1U & (~ ((IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                            if ((1U & (~ (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__127__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__ls_block__DOT____Vtogcov__shamt)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2)));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__add_mul_block____pinNumber1 
           << (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__ls_block____pinNumber2));
    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
            if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                    if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                        if ((1U & (~ ((IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                            if ((1U & (~ (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b)))) {
                                vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__jump__128__b))) {
                                vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)))) {
        vlSymsp->__Vcoverage[3217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__shamt)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__rs_block__DOT____Vtogcov__a) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber1 
           >> (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vcellinp__rs_block____pinNumber2));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[2516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[2562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[2563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[2564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[2565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[2566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[2567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[2568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[2569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[2570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[2571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[2572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[2573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[2574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[2575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[2576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[2577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[2578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[2579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__istream_msg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h94fdfff0__0 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[3036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new))) {
        vlSymsp->__Vcoverage[3066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__a_new) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__a_new));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__b_new 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__b_new) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_req_val_D 
            = vlSelf->top__DOT__DUT__DOT__imul_req_val_D;
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__in_val 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imul_req_val_D));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h94fdfff0__0));
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h94fdfff0__0) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_F))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[2964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__in_val 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__in_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
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
            vlSymsp->__Vcoverage[1554].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[1555].fetch_add(1, std::memory_order_relaxed);
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
            vlSymsp->__Vcoverage[1552].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
                      & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))))) {
            vlSymsp->__Vcoverage[1553].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__istream_go))) {
        vlSymsp->__Vcoverage[1551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__istream_go 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[5534].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[5535].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[5528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                  & (IData)(vlSelf->top__DOT__imem_respstream_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[5537].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                           & (IData)(vlSelf->top__DOT__imem_respstream_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[5538].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[3970].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__next_state 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[5463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[5529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[4959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[4960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[4955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[4957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__new_state 
        = (((IData)(vlSelf->top__DOT__reset) | (((~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__in_val)) 
                                                 & (0U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__state))) 
                                                | ((2U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__state)) 
                                                   & (IData)(vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X))))
            ? 0U : ((1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__resp_val)) 
                           | ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__state)) 
                              & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__in_val))))
                     ? 1U : 2U));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_val 
            = vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val));
    vlSelf->top__DOT__imem_reqstream_val = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)) 
                                                  | ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
                                                     & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val))));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__new_state) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__new_state)))) {
        vlSymsp->__Vcoverage[2960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__new_state 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__new_state)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__new_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__new_state) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__new_state)))) {
        vlSymsp->__Vcoverage[2961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__new_state 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__new_state)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__new_state)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_val 
            = vlSelf->top__DOT__imem_reqstream_val;
    }
    vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
           & (IData)(vlSelf->top__DOT__imem_reqstream_val));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[4175].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[4176].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[4169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[4178].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[4179].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memreq0_val 
                = ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memreq0_val = 0U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memreq0_val 
            = ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val))) {
        vlSymsp->__Vcoverage[3811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_val;
    }
    if (vlSelf->top__DOT__mem__DOT__mem_memreq0_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len 
            = (3U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ 
            = (7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                     >> 0xaU));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque 
            = (0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                        >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
            = ((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                             >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U];
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy;
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[4104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[4170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                  ? ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[5118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[5119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[4938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_next))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_reg__DOT____Vtogcov__d 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[4942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_next))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_reg__DOT____Vtogcov__d 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[4939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}
