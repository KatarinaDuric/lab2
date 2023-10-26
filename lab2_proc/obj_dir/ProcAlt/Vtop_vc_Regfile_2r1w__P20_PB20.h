// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_REGFILE_2R1W__P20_PB20_H_
#define VERILATED_VTOP_VC_REGFILE_2R1W__P20_PB20_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_Regfile_2r1w__P20_PB20 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__read_addr0,4,0);
    VL_IN8(__PVT__read_addr1,4,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_IN8(__PVT__write_addr,4,0);
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*4:0*/ __Vtogcov__read_addr0;
    CData/*4:0*/ __Vtogcov__read_addr1;
    CData/*0:0*/ __Vtogcov__write_en;
    CData/*4:0*/ __Vtogcov__write_addr;
    CData/*4:0*/ __Vdlyvdim0__rfile__v0;
    CData/*0:0*/ __Vdlyvset__rfile__v0;
    VL_OUT(__PVT__read_data0,31,0);
    VL_OUT(__PVT__read_data1,31,0);
    VL_IN(__PVT__write_data,31,0);
    IData/*31:0*/ __Vtogcov__read_data0;
    IData/*31:0*/ __Vtogcov__read_data1;
    IData/*31:0*/ __Vtogcov__write_data;
    IData/*31:0*/ __Vdlyvval__rfile__v0;
    VlUnpacked<IData/*31:0*/, 32> __PVT__rfile;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_Regfile_2r1w__P20_PB20(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_Regfile_2r1w__P20_PB20();
    VL_UNCOPYABLE(Vtop_vc_Regfile_2r1w__P20_PB20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
