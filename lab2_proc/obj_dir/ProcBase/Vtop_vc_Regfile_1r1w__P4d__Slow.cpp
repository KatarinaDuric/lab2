// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Regfile_1r1w__P4d.h"

void Vtop_vc_Regfile_1r1w__P4d___ctor_var_reset(Vtop_vc_Regfile_1r1w__P4d* vlSelf);

Vtop_vc_Regfile_1r1w__P4d::Vtop_vc_Regfile_1r1w__P4d(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_vc_Regfile_1r1w__P4d___ctor_var_reset(this);
}

void Vtop_vc_Regfile_1r1w__P4d___configure_coverage(Vtop_vc_Regfile_1r1w__P4d* vlSelf, bool first);

void Vtop_vc_Regfile_1r1w__P4d::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vtop_vc_Regfile_1r1w__P4d___configure_coverage(this, first);
}

Vtop_vc_Regfile_1r1w__P4d::~Vtop_vc_Regfile_1r1w__P4d() {
}

// Coverage
void Vtop_vc_Regfile_1r1w__P4d::__vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    assert(sizeof(uint32_t) == sizeof(std::atomic<uint32_t>));
    uint32_t* count32p = reinterpret_cast<uint32_t*>(countp);
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
