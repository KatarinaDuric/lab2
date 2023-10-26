// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB2_PROC_TINYRV2_ENCODING_INSTTASKS_H_
#define VERILATED_VTOP_LAB2_PROC_TINYRV2_ENCODING_INSTTASKS_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab2_proc_tinyrv2_encoding_InstTasks final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ __PVT__rs1;
    CData/*4:0*/ __PVT__rs2;
    CData/*4:0*/ __PVT__rd;
    CData/*6:0*/ __PVT__funct;
    CData/*4:0*/ __Vtogcov__rs1;
    CData/*4:0*/ __Vtogcov__rs2;
    CData/*4:0*/ __Vtogcov__rd;
    CData/*6:0*/ __Vtogcov__funct;
    SData/*15:0*/ __PVT__funct_str;
    SData/*11:0*/ __PVT__csr;
    SData/*15:0*/ __Vtogcov__funct_str;
    SData/*11:0*/ __Vtogcov__csr;
    IData/*23:0*/ __PVT__rs1_str;
    IData/*23:0*/ __PVT__rs2_str;
    IData/*23:0*/ __PVT__rd_str;
    VlWide<3>/*71:0*/ __PVT__csr_str;
    IData/*23:0*/ __Vtogcov__rs1_str;
    IData/*23:0*/ __Vtogcov__rs2_str;
    IData/*23:0*/ __Vtogcov__rd_str;
    VlWide<3>/*71:0*/ __Vtogcov__csr_str;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab2_proc_tinyrv2_encoding_InstTasks(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab2_proc_tinyrv2_encoding_InstTasks();
    VL_UNCOPYABLE(Vtop_lab2_proc_tinyrv2_encoding_InstTasks);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
