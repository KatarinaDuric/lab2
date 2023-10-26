// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB2_PROC_PROCDPATHALU_H_
#define VERILATED_VTOP_LAB2_PROC_PROCDPATHALU_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_EqComparator__P20;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab2_proc_ProcDpathAlu final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_EqComparator__P20* __PVT__cond_eq_comp;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__fn,3,0);
    VL_OUT8(__PVT__ops_eq,0,0);
    VL_OUT8(__PVT__ops_lt,0,0);
    VL_OUT8(__PVT__ops_ltu,0,0);
    CData/*3:0*/ __Vtogcov__fn;
    CData/*0:0*/ __Vtogcov__ops_eq;
    CData/*0:0*/ __Vtogcov__ops_lt;
    CData/*0:0*/ __Vtogcov__ops_ltu;
    VL_IN(__PVT__in0,31,0);
    VL_IN(__PVT__in1,31,0);
    VL_OUT(__PVT__out,31,0);
    IData/*31:0*/ __Vtogcov__in0;
    IData/*31:0*/ __Vtogcov__in1;
    IData/*31:0*/ __Vtogcov__out;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab2_proc_ProcDpathAlu(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab2_proc_ProcDpathAlu();
    VL_UNCOPYABLE(Vtop_lab2_proc_ProcDpathAlu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
