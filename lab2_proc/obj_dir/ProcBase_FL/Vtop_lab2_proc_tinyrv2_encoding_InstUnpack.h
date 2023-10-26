// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB2_PROC_TINYRV2_ENCODING_INSTUNPACK_H_
#define VERILATED_VTOP_LAB2_PROC_TINYRV2_ENCODING_INSTUNPACK_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab2_proc_tinyrv2_encoding_InstUnpack final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__opcode,6,0);
    VL_OUT8(__PVT__rd,4,0);
    VL_OUT8(__PVT__rs1,4,0);
    VL_OUT8(__PVT__rs2,4,0);
    VL_OUT8(__PVT__funct3,2,0);
    VL_OUT8(__PVT__funct7,6,0);
    CData/*6:0*/ __Vtogcov__opcode;
    CData/*4:0*/ __Vtogcov__rd;
    CData/*4:0*/ __Vtogcov__rs1;
    CData/*4:0*/ __Vtogcov__rs2;
    CData/*2:0*/ __Vtogcov__funct3;
    CData/*6:0*/ __Vtogcov__funct7;
    VL_OUT16(__PVT__csr,11,0);
    SData/*11:0*/ __Vtogcov__csr;
    VL_IN(__PVT__inst,31,0);
    IData/*31:0*/ __Vtogcov__inst;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab2_proc_tinyrv2_encoding_InstUnpack(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab2_proc_tinyrv2_encoding_InstUnpack();
    VL_UNCOPYABLE(Vtop_lab2_proc_tinyrv2_encoding_InstUnpack);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
