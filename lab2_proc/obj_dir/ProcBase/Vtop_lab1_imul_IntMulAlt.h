// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB1_IMUL_INTMULALT_H_
#define VERILATED_VTOP_LAB1_IMUL_INTMULALT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_multiplier2;
class Vtop_vc_Trace;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab1_imul_IntMulAlt final : public VerilatedModule {
  public:
    // CELLS
    Vtop_multiplier2* __PVT__multi;
    Vtop_vc_Trace* __PVT__vc_trace;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__istream_val,0,0);
    VL_OUT8(__PVT__istream_rdy,0,0);
    VL_OUT8(__PVT__ostream_val,0,0);
    VL_IN8(__PVT__ostream_rdy,0,0);
    CData/*1:0*/ __PVT__state;
    CData/*1:0*/ __PVT__new_state;
    CData/*0:0*/ __PVT__req_rdy;
    CData/*0:0*/ __PVT__resp_val;
    CData/*0:0*/ __PVT__in_val;
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__istream_val;
    CData/*0:0*/ __Vtogcov__istream_rdy;
    CData/*0:0*/ __Vtogcov__ostream_val;
    CData/*0:0*/ __Vtogcov__ostream_rdy;
    CData/*1:0*/ __Vtogcov__state;
    CData/*1:0*/ __Vtogcov__new_state;
    CData/*0:0*/ __Vtogcov__req_rdy;
    CData/*0:0*/ __Vtogcov__resp_val;
    CData/*0:0*/ __Vtogcov__in_val;
    CData/*1:0*/ __Vdly__state;
    VL_OUT(__PVT__ostream_msg,31,0);
    VlWide<128>/*4095:0*/ __PVT__str;
    IData/*31:0*/ __PVT__idx1;
    IData/*31:0*/ __PVT__idx0;
    IData/*31:0*/ __Vtogcov__ostream_msg;
    VL_IN64(__PVT__istream_msg,63,0);
    QData/*63:0*/ __Vtogcov__istream_msg;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab1_imul_IntMulAlt(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab1_imul_IntMulAlt();
    VL_UNCOPYABLE(Vtop_lab1_imul_IntMulAlt);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
