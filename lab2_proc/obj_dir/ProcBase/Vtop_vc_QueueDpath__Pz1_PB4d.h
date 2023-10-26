// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_QUEUEDPATH__PZ1_PB4D_H_
#define VERILATED_VTOP_VC_QUEUEDPATH__PZ1_PB4D_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_Mux2__P4d;
class Vtop_vc_Regfile_1r1w__P4d;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_QueueDpath__Pz1_PB4d final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_Regfile_1r1w__P4d* __PVT__qstore;
    Vtop_vc_Mux2__P4d* __PVT__genblk1__DOT__bypass_mux;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_IN8(__PVT__bypass_mux_sel,0,0);
    VL_IN8(__PVT__write_addr,0,0);
    VL_IN8(__PVT__read_addr,0,0);
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__write_en;
    CData/*0:0*/ __Vtogcov__bypass_mux_sel;
    CData/*0:0*/ __Vtogcov__write_addr;
    CData/*0:0*/ __Vtogcov__read_addr;
    VL_INW(__PVT__enq_msg,76,0,3);
    VL_OUTW(__PVT__deq_msg,76,0,3);
    VlWide<3>/*76:0*/ __PVT__read_data;
    VlWide<3>/*76:0*/ __Vtogcov__enq_msg;
    VlWide<3>/*76:0*/ __Vtogcov__deq_msg;
    VlWide<3>/*76:0*/ __Vtogcov__read_data;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_QueueDpath__Pz1_PB4d(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_QueueDpath__Pz1_PB4d();
    VL_UNCOPYABLE(Vtop_vc_QueueDpath__Pz1_PB4d);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
