// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_MUX2__P4D_H_
#define VERILATED_VTOP_VC_MUX2__P4D_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_Mux2__P4d final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__sel,0,0);
    CData/*0:0*/ __Vtogcov__sel;
    VL_INW(__PVT__in0,76,0,3);
    VL_INW(__PVT__in1,76,0,3);
    VL_OUTW(__PVT__out,76,0,3);
    VlWide<3>/*76:0*/ __Vtogcov__in0;
    VlWide<3>/*76:0*/ __Vtogcov__in1;
    VlWide<3>/*76:0*/ __Vtogcov__out;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_Mux2__P4d(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_Mux2__P4d();
    VL_UNCOPYABLE(Vtop_vc_Mux2__P4d);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
