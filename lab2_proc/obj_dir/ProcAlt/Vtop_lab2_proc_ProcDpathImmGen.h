// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB2_PROC_PROCDPATHIMMGEN_H_
#define VERILATED_VTOP_LAB2_PROC_PROCDPATHIMMGEN_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab2_proc_ProcDpathImmGen final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__imm_type,2,0);
    CData/*2:0*/ __Vtogcov__imm_type;
    VL_IN(__PVT__inst,31,0);
    VL_OUT(__PVT__imm,31,0);
    IData/*31:0*/ __Vtogcov__inst;
    IData/*31:0*/ __Vtogcov__imm;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab2_proc_ProcDpathImmGen(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab2_proc_ProcDpathImmGen();
    VL_UNCOPYABLE(Vtop_lab2_proc_ProcDpathImmGen);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
