// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LEFT_SHIFTER_H_
#define VERILATED_VTOP_LEFT_SHIFTER_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_left_shifter final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__shamt,3,0);
    CData/*3:0*/ __Vtogcov__shamt;
    VL_IN(__PVT__a,31,0);
    VL_OUT(__PVT__result,31,0);
    IData/*31:0*/ __Vtogcov__a;
    IData/*31:0*/ __Vtogcov__result;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_left_shifter(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_left_shifter();
    VL_UNCOPYABLE(Vtop_left_shifter);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
