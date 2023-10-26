// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB2_PROC_DROPUNIT__P2F_H_
#define VERILATED_VTOP_LAB2_PROC_DROPUNIT__P2F_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab2_proc_DropUnit__P2f final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__drop,0,0);
    VL_IN8(__PVT__istream_val,0,0);
    VL_OUT8(__PVT__istream_rdy,0,0);
    VL_OUT8(__PVT__ostream_val,0,0);
    VL_IN8(__PVT__ostream_rdy,0,0);
    CData/*0:0*/ __PVT__state;
    CData/*0:0*/ __PVT__next_state;
    CData/*0:0*/ __PVT__istream_go;
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__drop;
    CData/*0:0*/ __Vtogcov__istream_val;
    CData/*0:0*/ __Vtogcov__istream_rdy;
    CData/*0:0*/ __Vtogcov__ostream_val;
    CData/*0:0*/ __Vtogcov__ostream_rdy;
    CData/*0:0*/ __Vtogcov__state;
    CData/*0:0*/ __Vtogcov__next_state;
    CData/*0:0*/ __Vtogcov__istream_go;
    CData/*0:0*/ __Vdly__state;
    VL_IN64(__PVT__istream_msg,46,0);
    VL_OUT64(__PVT__ostream_msg,46,0);
    QData/*46:0*/ __Vtogcov__istream_msg;
    QData/*46:0*/ __Vtogcov__ostream_msg;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab2_proc_DropUnit__P2f(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab2_proc_DropUnit__P2f();
    VL_UNCOPYABLE(Vtop_lab2_proc_DropUnit__P2f);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
