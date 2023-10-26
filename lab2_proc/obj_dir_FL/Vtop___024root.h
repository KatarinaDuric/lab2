// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit;
class Vtop_top;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_top* __PVT__top;
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DUT____PVT__imem_reqstream_rdy__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__src__msg_delay____PVT__out_val__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__rand_resp_delay0____PVT__out_val__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__rand_resp_delay1____PVT__out_val__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlContinue;
        CData/*0:0*/ __VicoContinue;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DUT____PVT__imem_reqstream_rdy__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__src__msg_delay____PVT__out_val__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__rand_resp_delay0____PVT__out_val__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__rand_resp_delay1____PVT__out_val__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DUT____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__src__src____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__src__msg_delay____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__sink__msg_delay____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__sink__sink____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__rand_req_delay0____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__rand_req_delay1____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__rand_resp_delay0____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__rand_resp_delay1____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__src__src__index_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__sink__sink__index_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__src__msg_delay__rand_delay_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__sink__msg_delay__rand_delay_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__rand_req_delay0__rand_delay_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__rand_req_delay1__rand_delay_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__rand_resp_delay0__rand_delay_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__rand_resp_delay1__rand_delay_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DUT__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DUT__imem_reqstream_trace__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DUT__dmem_reqstream_trace__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DUT__imem_respstream_trace__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DUT__dmem_respstream_trace__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__memreq0_trace__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__memreq1_trace__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__memresp0_trace__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__memresp1_trace__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__memreq0_trace__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__memreq1_trace__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__memresp0_trace__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__memresp1_trace__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__vc_trace____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg____PVT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        CData/*0:0*/ __VnbaContinue;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
    };
    struct {
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VnbaIterCount;
        VlUnpacked<CData/*0:0*/, 46> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7c60deff__0;
    VlTriggerVec<5> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<51> __VactTriggered;
    VlTriggerVec<51> __VpreTriggered;
    VlTriggerVec<51> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
