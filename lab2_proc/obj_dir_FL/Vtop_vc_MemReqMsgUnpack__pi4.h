// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_MEMREQMSGUNPACK__PI4_H_
#define VERILATED_VTOP_VC_MEMREQMSGUNPACK__PI4_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_MemReqMsgUnpack__pi4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__type_,2,0);
    VL_OUT8(__PVT__opaque,7,0);
    VL_OUT8(__PVT__len,1,0);
    CData/*2:0*/ __Vtogcov__type_;
    CData/*7:0*/ __Vtogcov__opaque;
    CData/*1:0*/ __Vtogcov__len;
    VL_INW(__PVT__msg,76,0,3);
    VL_OUT(__PVT__addr,31,0);
    VL_OUT(__PVT__data,31,0);
    VlWide<3>/*76:0*/ __Vtogcov__msg;
    IData/*31:0*/ __Vtogcov__addr;
    IData/*31:0*/ __Vtogcov__data;
    VlWide<3>/*76:0*/ __PVT__req;
    VlWide<3>/*76:0*/ __Vtogcov__req;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_MemReqMsgUnpack__pi4(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_MemReqMsgUnpack__pi4();
    VL_UNCOPYABLE(Vtop_vc_MemReqMsgUnpack__pi4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
