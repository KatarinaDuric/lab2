// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_TESTSINKFILE__P20_PBA_H_
#define VERILATED_VTOP_VC_TESTSINKFILE__P20_PBA_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_EnResetReg__P4_PBz2;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_TestSinkFile__P20_PBa final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_EnResetReg__P4_PBz2* __PVT__index_reg;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__val,0,0);
    VL_OUT8(__PVT__rdy,0,0);
    VL_OUT8(__PVT__done,0,0);
    CData/*0:0*/ __PVT__index_en;
    CData/*3:0*/ __PVT__index_next;
    CData/*3:0*/ __PVT__index;
    CData/*3:0*/ __PVT__index_max;
    CData/*0:0*/ __PVT__reset_reg;
    CData/*0:0*/ __PVT__done_next;
    CData/*0:0*/ __PVT__go;
    CData/*0:0*/ __PVT__failed;
    CData/*3:0*/ __PVT__verbose;
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__val;
    CData/*0:0*/ __Vtogcov__rdy;
    CData/*0:0*/ __Vtogcov__done;
    CData/*0:0*/ __Vtogcov__index_en;
    CData/*3:0*/ __Vtogcov__index_next;
    CData/*3:0*/ __Vtogcov__index;
    CData/*3:0*/ __Vtogcov__index_max;
    CData/*0:0*/ __Vtogcov__reset_reg;
    CData/*0:0*/ __Vtogcov__done_next;
    CData/*0:0*/ __Vtogcov__go;
    CData/*0:0*/ __Vtogcov__failed;
    CData/*3:0*/ __Vtogcov__verbose;
    CData/*0:0*/ __Vdly__reset_reg;
    CData/*0:0*/ __Vdly__failed;
    VL_IN(__PVT__msg,31,0);
    IData/*31:0*/ __PVT__data_data;
    IData/*31:0*/ __PVT__load__Vstatic__unnamedblk1__DOT__count;
    IData/*31:0*/ __PVT__m_curr;
    IData/*31:0*/ __PVT__t;
    IData/*31:0*/ __Vtogcov__msg;
    IData/*31:0*/ __Vtogcov__data_data;
    IData/*31:0*/ __Vtogcov__m_curr;
    IData/*31:0*/ __Vlvbound_h000547a2__0;
    VlUnpacked<IData/*31:0*/, 10> __PVT__m;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_TestSinkFile__P20_PBa(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_TestSinkFile__P20_PBa();
    VL_UNCOPYABLE(Vtop_vc_TestSinkFile__P20_PBa);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
