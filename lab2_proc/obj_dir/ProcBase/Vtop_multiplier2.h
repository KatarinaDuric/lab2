// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_MULTIPLIER2_H_
#define VERILATED_VTOP_MULTIPLIER2_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_adder;
class Vtop_left_shifter;
class Vtop_right_shifter;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_multiplier2 final : public VerilatedModule {
  public:
    // CELLS
    Vtop_left_shifter* __PVT__ls_block;
    Vtop_right_shifter* __PVT__rs_block;
    Vtop_adder* __PVT__add_mul_block;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__istream_val,0,0);
    VL_OUT8(__PVT__istream_rdy,0,0);
    VL_OUT8(__PVT__ostream_val,0,0);
    VL_IN8(__PVT__ostream_rdy,0,0);
    CData/*5:0*/ __PVT__counter;
    CData/*3:0*/ __Vcellinp__ls_block____pinNumber2;
    CData/*3:0*/ __Vcellinp__rs_block____pinNumber2;
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__reset;
    CData/*0:0*/ __Vtogcov__istream_val;
    CData/*0:0*/ __Vtogcov__istream_rdy;
    CData/*0:0*/ __Vtogcov__ostream_val;
    CData/*0:0*/ __Vtogcov__ostream_rdy;
    CData/*5:0*/ __Vtogcov__counter;
    CData/*3:0*/ __Vfunc_jump__0__Vfuncout;
    CData/*6:0*/ __Vfunc_jump__0__b;
    CData/*3:0*/ __Vfunc_jump__1__Vfuncout;
    CData/*6:0*/ __Vfunc_jump__1__b;
    CData/*3:0*/ __Vfunc_jump__2__Vfuncout;
    CData/*6:0*/ __Vfunc_jump__2__b;
    CData/*3:0*/ __Vfunc_jump__3__Vfuncout;
    CData/*6:0*/ __Vfunc_jump__3__b;
    CData/*5:0*/ __Vdly__counter;
    CData/*0:0*/ __Vdly__istream_rdy;
    CData/*0:0*/ __Vdly__ostream_val;
    VL_OUT(__PVT__ostream_msg,31,0);
    IData/*31:0*/ __PVT__req_msg_a;
    IData/*31:0*/ __PVT__req_msg_b;
    IData/*31:0*/ __PVT__a_reg;
    IData/*31:0*/ __PVT__b_reg;
    IData/*31:0*/ __PVT__a_new;
    IData/*31:0*/ __PVT__b_new;
    IData/*31:0*/ __PVT__msg_new;
    IData/*31:0*/ __Vcellinp__ls_block____pinNumber1;
    IData/*31:0*/ __Vcellinp__rs_block____pinNumber1;
    IData/*31:0*/ __Vcellinp__add_mul_block____pinNumber1;
    IData/*31:0*/ __Vtogcov__ostream_msg;
    IData/*31:0*/ __Vtogcov__req_msg_a;
    IData/*31:0*/ __Vtogcov__req_msg_b;
    IData/*31:0*/ __Vtogcov__a_reg;
    IData/*31:0*/ __Vtogcov__b_reg;
    IData/*31:0*/ __Vtogcov__a_new;
    IData/*31:0*/ __Vtogcov__b_new;
    IData/*31:0*/ __Vtogcov__msg_new;
    IData/*31:0*/ __Vdly__a_reg;
    IData/*31:0*/ __Vdly__b_reg;
    IData/*31:0*/ __Vdly__ostream_msg;
    VL_IN64(__PVT__istream_msg,63,0);
    QData/*63:0*/ __Vtogcov__istream_msg;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_multiplier2(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_multiplier2();
    VL_UNCOPYABLE(Vtop_multiplier2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
