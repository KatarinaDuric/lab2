// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_MEMRESPMSG4BTRACE_H_
#define VERILATED_VTOP_VC_MEMRESPMSG4BTRACE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_Trace;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_MemRespMsg4BTrace final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_Trace* __PVT__vc_trace;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__val,0,0);
    VL_IN8(__PVT__rdy,0,0);
    CData/*2:0*/ __PVT__type_;
    CData/*7:0*/ __PVT__opaque;
    CData/*1:0*/ __PVT__test;
    CData/*1:0*/ __PVT__len;
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__val;
    CData/*0:0*/ __Vtogcov__rdy;
    CData/*2:0*/ __Vtogcov__type_;
    CData/*7:0*/ __Vtogcov__opaque;
    CData/*1:0*/ __Vtogcov__test;
    CData/*1:0*/ __Vtogcov__len;
    SData/*15:0*/ __PVT__type_str;
    SData/*15:0*/ __Vtogcov__type_str;
    IData/*31:0*/ __PVT__data;
    VlWide<128>/*4095:0*/ __PVT__str;
    IData/*31:0*/ __PVT__idx1;
    IData/*31:0*/ __PVT__idx0;
    IData/*31:0*/ __Vtogcov__data;
    VL_IN64(__PVT__msg,46,0);
    QData/*46:0*/ __Vtogcov__msg;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_MemRespMsg4BTrace(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_MemRespMsg4BTrace();
    VL_UNCOPYABLE(Vtop_vc_MemRespMsg4BTrace);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
