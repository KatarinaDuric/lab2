// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_RESETREG_H_
#define VERILATED_VTOP_VC_RESETREG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_ResetReg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__q,0,0);
    VL_IN8(__PVT__d,0,0);
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__q;
    CData/*0:0*/ __Vtogcov__d;
    CData/*0:0*/ __Vdly__q;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_ResetReg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_ResetReg();
    VL_UNCOPYABLE(Vtop_vc_ResetReg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
