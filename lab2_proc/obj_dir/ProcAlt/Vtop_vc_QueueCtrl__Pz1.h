// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_VC_QUEUECTRL__PZ1_H_
#define VERILATED_VTOP_VC_QUEUECTRL__PZ1_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_ResetReg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_vc_QueueCtrl__Pz1 final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_ResetReg* __PVT__enq_ptr_reg;
    Vtop_vc_ResetReg* __PVT__deq_ptr_reg;
    Vtop_vc_ResetReg* __PVT__full_reg;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__enq_val,0,0);
    VL_OUT8(__PVT__enq_rdy,0,0);
    VL_OUT8(__PVT__deq_val,0,0);
    VL_IN8(__PVT__deq_rdy,0,0);
    VL_OUT8(__PVT__write_en,0,0);
    VL_OUT8(__PVT__write_addr,0,0);
    VL_OUT8(__PVT__read_addr,0,0);
    VL_OUT8(__PVT__bypass_mux_sel,0,0);
    VL_OUT8(__PVT__num_free_entries,1,0);
    CData/*0:0*/ __PVT__enq_ptr;
    CData/*0:0*/ __PVT__enq_ptr_next;
    CData/*0:0*/ __PVT__deq_ptr;
    CData/*0:0*/ __PVT__deq_ptr_next;
    CData/*0:0*/ __PVT__full;
    CData/*0:0*/ __PVT__full_next;
    CData/*0:0*/ __PVT__do_enq;
    CData/*0:0*/ __PVT__do_deq;
    CData/*0:0*/ __PVT__empty;
    CData/*0:0*/ __PVT__do_pipe;
    CData/*0:0*/ __PVT__do_bypass;
    CData/*0:0*/ __PVT__deq_ptr_plus1;
    CData/*0:0*/ __PVT__deq_ptr_inc;
    CData/*0:0*/ __PVT__enq_ptr_plus1;
    CData/*0:0*/ __PVT__enq_ptr_inc;
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__enq_val;
    CData/*0:0*/ __Vtogcov__enq_rdy;
    CData/*0:0*/ __Vtogcov__deq_val;
    CData/*0:0*/ __Vtogcov__deq_rdy;
    CData/*0:0*/ __Vtogcov__write_en;
    CData/*0:0*/ __Vtogcov__write_addr;
    CData/*0:0*/ __Vtogcov__read_addr;
    CData/*0:0*/ __Vtogcov__bypass_mux_sel;
    CData/*1:0*/ __Vtogcov__num_free_entries;
    CData/*0:0*/ __Vtogcov__enq_ptr;
    CData/*0:0*/ __Vtogcov__enq_ptr_next;
    CData/*0:0*/ __Vtogcov__deq_ptr;
    CData/*0:0*/ __Vtogcov__deq_ptr_next;
    CData/*0:0*/ __Vtogcov__full;
    CData/*0:0*/ __Vtogcov__full_next;
    CData/*0:0*/ __Vtogcov__do_enq;
    CData/*0:0*/ __Vtogcov__do_deq;
    CData/*0:0*/ __Vtogcov__empty;
    CData/*0:0*/ __Vtogcov__do_pipe;
    CData/*0:0*/ __Vtogcov__do_bypass;
    CData/*0:0*/ __Vtogcov__deq_ptr_plus1;
    CData/*0:0*/ __Vtogcov__deq_ptr_inc;
    CData/*0:0*/ __Vtogcov__enq_ptr_plus1;
    CData/*0:0*/ __Vtogcov__enq_ptr_inc;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_vc_QueueCtrl__Pz1(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_vc_QueueCtrl__Pz1();
    VL_UNCOPYABLE(Vtop_vc_QueueCtrl__Pz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
