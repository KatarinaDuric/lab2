// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_REGFILE_1R1W__P4D_H_
#define VERILATED_VTOP_VC_REGFILE_1R1W__P4D_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_Regfile_1r1w__P4d final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__read_addr,0,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_IN8(__PVT__write_addr,0,0);
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__read_addr;
    CData/*0:0*/ __Vtogcov__write_en;
    CData/*0:0*/ __Vtogcov__write_addr;
    CData/*0:0*/ __Vdlyvdim0__rfile__v0;
    CData/*0:0*/ __Vdlyvset__rfile__v0;
    VL_OUTW(__PVT__read_data,76,0,3);
    VL_INW(__PVT__write_data,76,0,3);
    VlWide<3>/*76:0*/ __Vtogcov__read_data;
    VlWide<3>/*76:0*/ __Vtogcov__write_data;
    VlWide<3>/*76:0*/ __Vdlyvval__rfile__v0;
    VlUnpacked<VlWide<3>/*76:0*/, 2> __PVT__rfile;
    VlUnpacked<VlWide<3>/*76:0*/, 2> __Vtogcov__rfile;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_Regfile_1r1w__P4d(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_Regfile_1r1w__P4d();
    VL_UNCOPYABLE(Vtop_vc_Regfile_1r1w__P4d);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
