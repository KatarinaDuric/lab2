// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_REGFILE_2R1W_ZERO_H_
#define VERILATED_VTOP_VC_REGFILE_2R1W_ZERO_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_Regfile_2r1w__P20_PB20;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_Regfile_2r1w_zero final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_Regfile_2r1w__P20_PB20* __PVT__rfile;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__rd_addr0,4,0);
    VL_IN8(__PVT__rd_addr1,4,0);
    VL_IN8(__PVT__wr_en,0,0);
    VL_IN8(__PVT__wr_addr,4,0);
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*4:0*/ __Vtogcov__rd_addr0;
    CData/*4:0*/ __Vtogcov__rd_addr1;
    CData/*0:0*/ __Vtogcov__wr_en;
    CData/*4:0*/ __Vtogcov__wr_addr;
    VL_OUT(__PVT__rd_data0,31,0);
    VL_OUT(__PVT__rd_data1,31,0);
    VL_IN(__PVT__wr_data,31,0);
    IData/*31:0*/ __PVT__rf_read_data0;
    IData/*31:0*/ __PVT__rf_read_data1;
    IData/*31:0*/ __Vtogcov__rd_data0;
    IData/*31:0*/ __Vtogcov__rd_data1;
    IData/*31:0*/ __Vtogcov__wr_data;
    IData/*31:0*/ __Vtogcov__rf_read_data0;
    IData/*31:0*/ __Vtogcov__rf_read_data1;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_Regfile_2r1w_zero(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_Regfile_2r1w_zero();
    VL_UNCOPYABLE(Vtop_vc_Regfile_2r1w_zero);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
