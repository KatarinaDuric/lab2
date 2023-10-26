// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_MEMRESPMSGPACK__PI5_H_
#define VERILATED_VTOP_VC_MEMRESPMSGPACK__PI5_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_MemRespMsgPack__pi5 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__type_,2,0);
    VL_IN8(__PVT__opaque,7,0);
    VL_IN8(__PVT__len,1,0);
    VL_IN8(__PVT__test,1,0);
    CData/*2:0*/ __Vtogcov__type_;
    CData/*7:0*/ __Vtogcov__opaque;
    CData/*1:0*/ __Vtogcov__len;
    CData/*1:0*/ __Vtogcov__test;
    VL_IN(__PVT__data,31,0);
    IData/*31:0*/ __Vtogcov__data;
    VL_OUT64(__PVT__msg,46,0);
    QData/*46:0*/ __PVT__resp;
    QData/*46:0*/ __Vtogcov__msg;
    QData/*46:0*/ __Vtogcov__resp;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_MemRespMsgPack__pi5(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_MemRespMsgPack__pi5();
    VL_UNCOPYABLE(Vtop_vc_MemRespMsgPack__pi5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
