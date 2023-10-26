// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_TESTRANDDELAYSINKFILE__PI2_H_
#define VERILATED_VTOP_VC_TESTRANDDELAYSINKFILE__PI2_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_TestRandDelay__P20;
class Vtop_vc_TestSinkFile__P20_PBa;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_TestRandDelaySinkFile__pi2 final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_TestRandDelay__P20* __PVT__msg_delay;
    Vtop_vc_TestSinkFile__P20_PBa* __PVT__sink;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__val,0,0);
    VL_OUT8(__PVT__rdy,0,0);
    VL_OUT8(__PVT__done,0,0);
    CData/*0:0*/ __PVT__sink_val;
    CData/*0:0*/ __PVT__sink_rdy;
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__val;
    CData/*0:0*/ __Vtogcov__rdy;
    CData/*0:0*/ __Vtogcov__done;
    CData/*0:0*/ __Vtogcov__sink_val;
    CData/*0:0*/ __Vtogcov__sink_rdy;
    VL_IN(__PVT__max_delay,31,0);
    VL_IN(__PVT__msg,31,0);
    IData/*31:0*/ __PVT__sink_msg;
    IData/*31:0*/ __Vtogcov__max_delay;
    IData/*31:0*/ __Vtogcov__msg;
    IData/*31:0*/ __Vtogcov__sink_msg;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_TestRandDelaySinkFile__pi2(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_TestRandDelaySinkFile__pi2();
    VL_UNCOPYABLE(Vtop_vc_TestRandDelaySinkFile__pi2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
