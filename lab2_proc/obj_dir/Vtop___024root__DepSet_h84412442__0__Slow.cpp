// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__idx = 0U;
    vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3150].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3510].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3511].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3553].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3554].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3596].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3597].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3712].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3713].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared = 0U;
    vlSymsp->__Vcoverage[4711].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5096].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5097].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5216].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5217].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5259].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5260].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5302].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5303].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5329].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5330].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5658].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5659].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5701].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5702].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5744].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5745].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5787].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5788].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5814].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5815].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    if ((1U & vlSelf->top__DOT__src__DOT____Vtogcov__max_delay)) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__max_delay 
            = (0xfffffffeU & vlSelf->top__DOT__src__DOT____Vtogcov__max_delay);
    }
    if ((1U & (~ (vlSelf->top__DOT__src__DOT____Vtogcov__max_delay 
                  >> 2U)))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__max_delay 
            = (4U | vlSelf->top__DOT__src__DOT____Vtogcov__max_delay);
    }
    vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1544].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1554].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1557].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1875].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1878].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1887].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2754].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2806].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2878].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2882].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2887].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3180].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3207].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3214].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4109].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4113].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4252].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4256].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4737].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4942].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5002].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5468].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5472].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5611].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5615].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3155].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3516].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3559].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3602].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3718].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5102].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5222].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5265].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5308].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5335].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5664].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5707].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5750].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5793].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5820].fetch_add(1, std::memory_order_relaxed);
}

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_ATTR_COLD void Vtop___024root___eval_final__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final__TOP\n"); );
    // Body
    if (vlSelf->top__DOT__src_done) {
        Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        VL_WRITEF("     [ passed ] Finished gracefully\n");
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
    } else {
        Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
        VL_WRITEF("     [ failed ] Simulation did not naturally stop\n");
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__sink__DOT__sink__DOT__t = vlSelf->top__DOT__sink__DOT__sink__DOT__index;
    while ((vlSelf->top__DOT__sink__DOT__sink__DOT__t 
            < (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max))) {
        Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
        VL_WRITEF("     [ FAILED ] expected = %x, actual = None\n",
                  32,((9U >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))
                       ? vlSelf->top__DOT__sink__DOT__sink__DOT__m
                      [vlSelf->top__DOT__sink__DOT__sink__DOT__index]
                       : 0U));
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT__t = 
            ((IData)(1U) + vlSelf->top__DOT__sink__DOT__sink__DOT__t);
    }
    vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        }
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
    if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) {
        vlSymsp->__Vcoverage[1553].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1556].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)))) {
        vlSymsp->__Vcoverage[1552].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1555].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[1694].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x6fU != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
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
                 | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            if ((0x7033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x6033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x4033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x5033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0x5033U != (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x1033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x13U != (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x6013U == 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x6013U != 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x13U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x1033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U & (~ ((((((((0x7033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x6033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x4033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x5033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
            if (((((((((0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                if ((0x4013U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0x5013U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x1013U != (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x37U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x17U != (0x7fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x2023U != 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        if ((0x6fU 
                                             != (0x7fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x2023U == 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x17U == (0x7fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x1013U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((((((((0x4013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                | (0x5013U == (0xfe00707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                               | (0x1013U == (0xfe00707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                              | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                             | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                            | (0x2023U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
                if ((0x63U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x4063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0x6063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x5063U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x5063U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x7063U == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x7063U != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                    }
                    if ((0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x2000033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
        vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x67U != (0x707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                      & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                          & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                     & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                    vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                              & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                         & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                  & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                      & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                            if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                 & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                                vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                          & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                                vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                             & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                            vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
            if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                 & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
             & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
            vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
        vlSymsp->__Vcoverage[1876].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1883].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x2000033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
        vlSymsp->__Vcoverage[1877].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        if ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
            vlSymsp->__Vcoverage[1884].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x6fU != (0x7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
            if ((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
                vlSymsp->__Vcoverage[1885].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x67U != (0x707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
                vlSymsp->__Vcoverage[1886].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                vlSymsp->__Vcoverage[3206].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3206].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3204].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3205].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3206].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                vlSymsp->__Vcoverage[3206].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3200].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3201].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3203].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3202].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3197].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3196].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[3199].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[3198].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) {
        if (vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) {
            vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)))) {
            vlSymsp->__Vcoverage[3213].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)))) {
        vlSymsp->__Vcoverage[3211].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        vlSymsp->__Vcoverage[4105].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4110].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            vlSymsp->__Vcoverage[4108].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[4111].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
            vlSymsp->__Vcoverage[4112].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        vlSymsp->__Vcoverage[4248].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4253].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            vlSymsp->__Vcoverage[4251].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[4254].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
            vlSymsp->__Vcoverage[4255].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem_clear) {
        vlSymsp->__Vcoverage[4736].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) {
            vlSymsp->__Vcoverage[4714].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSymsp->__Vcoverage[4713].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[4940].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[4941].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[4939].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[5000].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[5001].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[4999].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        vlSymsp->__Vcoverage[5464].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[5469].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            vlSymsp->__Vcoverage[5467].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[5470].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
            vlSymsp->__Vcoverage[5471].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
        vlSymsp->__Vcoverage[5607].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[5612].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
            vlSymsp->__Vcoverage[5610].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[5613].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
            vlSymsp->__Vcoverage[5614].fetch_add(1, std::memory_order_relaxed);
        }
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
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__stats_en))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en = (0U 
                                                 != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W);
    }
    if (((IData)(vlSelf->top__DOT__src_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__src_done))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__src_done = vlSelf->top__DOT__src_done;
    }
    if (((IData)(vlSelf->top__DOT__mem_clear) ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_clear = vlSelf->top__DOT__mem_clear;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__src__DOT__src__DOT__reset_reg;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__failed) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__failed))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__failed 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__failed;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_rdy)))) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_rdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_queue_num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_queue_num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_M 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_addr))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_addr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__read_addr))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__read_addr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_plus1)))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_plus1 
            = (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_plus1)))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_plus1 
            = (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[1545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__state 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_F))) {
        vlSymsp->__Vcoverage[1698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_D))) {
        vlSymsp->__Vcoverage[1699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_X))) {
        vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_M))) {
        vlSymsp->__Vcoverage[1701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_W))) {
        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_X))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_X))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_X))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_X))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_M))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_M))) {
        vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_M))) {
        vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_W))) {
        vlSymsp->__Vcoverage[1967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_pending_W))) {
        vlSymsp->__Vcoverage[1968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_pending_W))) {
        vlSymsp->__Vcoverage[1969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__req_rdy) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__req_rdy))) {
        vlSymsp->__Vcoverage[2893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__req_rdy 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__req_rdy;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__resp_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__resp_val))) {
        vlSymsp->__Vcoverage[2894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__resp_val 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__resp_val;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[4099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state;
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
                                    vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x40000033U != 
                                     (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x1073U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D)) {
            vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else if ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 1U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
            } else {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                        ? 0xcU : ((0x1073U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))
                                   ? 0xbU : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))
                                              ? 1U : 0U)));
            }
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
               & ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  | ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     | ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        & ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x1073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))));
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D 
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
                            | ((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                               | ((0x17U == (0x7fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                  | (0x2023U != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D)))))))
                   : ((0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | ((0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | ((0x5063U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                               | (0x7063U == (0x707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
        if (((((((((0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D 
                = ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                    ? 3U : ((0x6033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))
                             ? 4U : ((0x4033U == (0xfe00707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))
                                      ? 2U : ((0x5033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))
                                               ? 5U
                                               : ((0x1033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                   ? 6U
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                     ? 4U
                                                     : 3U)))))));
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
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 2U;
            } else if ((0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 5U;
            } else if ((0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 6U;
            } else if ((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xcU;
            } else if ((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 7U;
            } else {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D 
                    = ((0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                        ? 2U : 0U);
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
            }
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
        } else {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D 
                = ((0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                    ? 2U : ((0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                             ? 3U : ((0x6063U == (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))
                                      ? 4U : ((0x5063U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))
                                               ? 5U
                                               : ((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                   ? 6U
                                                   : 0U)))));
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[4242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_val_M))) {
        vlSymsp->__Vcoverage[4283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_val_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_rdy_M)))) {
        vlSymsp->__Vcoverage[4284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_rdy_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_val_M))) {
        vlSymsp->__Vcoverage[4362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_val_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_rdy_M)))) {
        vlSymsp->__Vcoverage[4363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_rdy_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memory_cleared))) {
        vlSymsp->__Vcoverage[4710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memory_cleared 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT____Vtogcov__num_free_entries)))) {
        vlSymsp->__Vcoverage[4865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT____Vtogcov__num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT____Vtogcov__num_free_entries)))) {
        vlSymsp->__Vcoverage[4874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT____Vtogcov__num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[4884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[4944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[5458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[5601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state;
    }
    vlSelf->top__DOT__src__DOT__src__DOT__index_next 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_next 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[2889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__state 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__state)))) {
        vlSymsp->__Vcoverage[2890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__state 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__state)));
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
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0xeU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 1U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 1U)))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0xdU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 2U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 2U)))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0xbU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((7U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0xeU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0xdU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0xbU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (4U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((7U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (8U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
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
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 1U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 1U)))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 2U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 2U)))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
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
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D 
        = (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                  | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (((((((((0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
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
                       | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | ((0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                    | ((0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          | ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                             | (0x7063U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D)))))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D 
        = (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                  | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
              & ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                 & (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
           == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max));
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter 
            = ((0x3eU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__counter)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter 
            = ((0x3dU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__counter)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[2899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter 
            = ((0x3bU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__counter)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[2900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter 
            = ((0x37U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__counter)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[2901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter 
            = ((0x2fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__counter)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[2902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter 
            = ((0x1fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT____Vtogcov__counter)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__multi__DOT__counter)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
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
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3fefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3fdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3fbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3f7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3effU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3dffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3bffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x37ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x2fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x1fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xf7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0x7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xf7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0x7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xf7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0x7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D = 
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
                     & ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        & (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
    if ((2U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (2U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((4U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (4U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((8U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (8U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x100U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x200U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x400U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x800U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x1000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x2000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x4000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x8000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x100000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x200000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x400000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x800000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x1000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x2000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x4000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x8000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if (((((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((2U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (2U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((4U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (4U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((8U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (8U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x10U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x20U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x40U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x80U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x100U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x200U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x400U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x800U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x1000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x2000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x4000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x8000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x10000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x20000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x40000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x80000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x100000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x200000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x400000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x800000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x1000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x2000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x4000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x8000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x10000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x20000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X))) {
        vlSymsp->__Vcoverage[2648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x40000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if (((((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X) 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_X) 
               | (0x80000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)));
    }
    if ((1U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffeU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (1U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((2U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffdU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (2U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((4U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffbU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (4U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((8U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffff7U 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (8U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffefU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffdfU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffbfU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x80U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffff7fU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x100U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffeffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x100U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x200U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffdffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x200U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x400U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffbffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x400U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x800U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffff7ffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x800U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x1000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffefffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x1000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x2000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffdfffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x2000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x4000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffbfffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x4000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x8000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffff7fffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x8000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffeffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffdffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffbffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x80000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfff7ffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x100000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffefffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x100000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x200000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffdfffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x200000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x400000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffbfffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x400000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x800000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xff7fffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x800000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x1000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfeffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x1000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x2000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfdffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x2000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x4000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfbffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x4000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x8000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xf7ffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x8000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xefffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xdfffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xbfffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if (((vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0x7fffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                        ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                        ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                        ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if (((vlSelf->top__DOT__src__DOT__src__DOT__data_data 
          ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
          ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
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
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
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
    if ((1U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (1U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (2U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (4U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (8U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if (((vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
          ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
}
