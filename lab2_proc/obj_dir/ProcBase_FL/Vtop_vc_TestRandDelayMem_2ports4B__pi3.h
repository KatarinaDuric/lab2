// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_TESTRANDDELAYMEM_2PORTS4B__PI3_H_
#define VERILATED_VTOP_VC_TESTRANDDELAYMEM_2PORTS4B__PI3_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_MemReqMsg4BTrace;
class Vtop_vc_MemRespMsg4BTrace;
class Vtop_vc_TestMem_2ports4B__P4000;
class Vtop_vc_TestRandDelay__P2f;
class Vtop_vc_TestRandDelay__P4d;
class Vtop_vc_Trace;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_TestRandDelayMem_2ports4B__pi3 final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_TestRandDelay__P4d* __PVT__rand_req_delay0;
    Vtop_vc_TestRandDelay__P4d* __PVT__rand_req_delay1;
    Vtop_vc_TestMem_2ports4B__P4000* __PVT__mem;
    Vtop_vc_TestRandDelay__P2f* __PVT__rand_resp_delay0;
    Vtop_vc_TestRandDelay__P2f* __PVT__rand_resp_delay1;
    Vtop_vc_MemReqMsg4BTrace* __PVT__memreq0_trace;
    Vtop_vc_MemReqMsg4BTrace* __PVT__memreq1_trace;
    Vtop_vc_MemRespMsg4BTrace* __PVT__memresp0_trace;
    Vtop_vc_MemRespMsg4BTrace* __PVT__memresp1_trace;
    Vtop_vc_Trace* __PVT__vc_trace;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__mem_clear,0,0);
        VL_IN8(__PVT__memreq0_val,0,0);
        VL_OUT8(__PVT__memreq0_rdy,0,0);
        VL_IN8(__PVT__memreq1_val,0,0);
        VL_OUT8(__PVT__memreq1_rdy,0,0);
        VL_OUT8(__PVT__memresp0_val,0,0);
        VL_IN8(__PVT__memresp0_rdy,0,0);
        VL_OUT8(__PVT__memresp1_val,0,0);
        VL_IN8(__PVT__memresp1_rdy,0,0);
        CData/*0:0*/ __PVT__mem_memreq0_val;
        CData/*0:0*/ __PVT__mem_memreq0_rdy;
        CData/*0:0*/ __PVT__mem_memreq1_val;
        CData/*0:0*/ __PVT__mem_memreq1_rdy;
        CData/*0:0*/ __PVT__mem_memresp0_val;
        CData/*0:0*/ __PVT__mem_memresp0_rdy;
        CData/*0:0*/ __PVT__mem_memresp1_val;
        CData/*0:0*/ __PVT__mem_memresp1_rdy;
        CData/*0:0*/ __Vtogcov__clk;
        CData/*0:0*/ __Vtogcov__reset;
        CData/*0:0*/ __Vtogcov__mem_clear;
        CData/*0:0*/ __Vtogcov__memreq0_val;
        CData/*0:0*/ __Vtogcov__memreq0_rdy;
        CData/*0:0*/ __Vtogcov__memreq1_val;
        CData/*0:0*/ __Vtogcov__memreq1_rdy;
        CData/*0:0*/ __Vtogcov__memresp0_val;
        CData/*0:0*/ __Vtogcov__memresp0_rdy;
        CData/*0:0*/ __Vtogcov__memresp1_val;
        CData/*0:0*/ __Vtogcov__memresp1_rdy;
        CData/*0:0*/ __Vtogcov__mem_memreq0_val;
        CData/*0:0*/ __Vtogcov__mem_memreq0_rdy;
        CData/*0:0*/ __Vtogcov__mem_memreq1_val;
        CData/*0:0*/ __Vtogcov__mem_memreq1_rdy;
        CData/*0:0*/ __Vtogcov__mem_memresp0_val;
        CData/*0:0*/ __Vtogcov__mem_memresp0_rdy;
        CData/*0:0*/ __Vtogcov__mem_memresp1_val;
        CData/*0:0*/ __Vtogcov__mem_memresp1_rdy;
        VL_IN(__PVT__max_delay,31,0);
        VL_INW(__PVT__memreq0_msg,76,0,3);
        VL_INW(__PVT__memreq1_msg,76,0,3);
        VlWide<3>/*76:0*/ __PVT__mem_memreq0_msg;
        VlWide<3>/*76:0*/ __PVT__mem_memreq1_msg;
        IData/*31:0*/ __Vcellinp__rand_req_delay0__max_delay;
        IData/*31:0*/ __Vcellinp__rand_req_delay1__max_delay;
        IData/*31:0*/ __Vcellinp__rand_resp_delay0__max_delay;
        IData/*31:0*/ __Vcellinp__rand_resp_delay1__max_delay;
        IData/*31:0*/ __PVT__idx1;
        IData/*31:0*/ __PVT__idx0;
        IData/*31:0*/ __Vtogcov__max_delay;
        VlWide<3>/*76:0*/ __Vtogcov__memreq0_msg;
        VlWide<3>/*76:0*/ __Vtogcov__memreq1_msg;
        VlWide<3>/*76:0*/ __Vtogcov__mem_memreq0_msg;
        VlWide<3>/*76:0*/ __Vtogcov__mem_memreq1_msg;
        VL_OUT64(__PVT__memresp0_msg,46,0);
        VL_OUT64(__PVT__memresp1_msg,46,0);
        QData/*46:0*/ __PVT__mem_memresp0_msg;
        QData/*46:0*/ __PVT__mem_memresp1_msg;
        VlWide<3>/*76:0*/ __Vcellinp__memreq0_trace__msg;
        VlWide<3>/*76:0*/ __Vcellinp__memreq1_trace__msg;
        QData/*46:0*/ __Vcellinp__memresp0_trace__msg;
        QData/*46:0*/ __Vcellinp__memresp1_trace__msg;
        QData/*46:0*/ __Vtogcov__memresp0_msg;
        QData/*46:0*/ __Vtogcov__memresp1_msg;
    };
    struct {
        QData/*46:0*/ __Vtogcov__mem_memresp0_msg;
        QData/*46:0*/ __Vtogcov__mem_memresp1_msg;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_TestRandDelayMem_2ports4B__pi3(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_TestRandDelayMem_2ports4B__pi3();
    VL_UNCOPYABLE(Vtop_vc_TestRandDelayMem_2ports4B__pi3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
