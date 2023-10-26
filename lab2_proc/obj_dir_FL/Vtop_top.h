// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_lab2_proc_ProcFLMultiCycle;
class Vtop_vc_TestRandDelayMem_2ports4B__pi3;
class Vtop_vc_TestRandDelaySinkFile__pi2;
class Vtop_vc_TestRandDelaySourceFile__pi1;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_TestRandDelaySourceFile__pi1* __PVT__src;
    Vtop_vc_TestRandDelaySinkFile__pi2* __PVT__sink;
    Vtop_lab2_proc_ProcFLMultiCycle* __PVT__DUT;
    Vtop_vc_TestRandDelayMem_2ports4B__pi3* __PVT__mem;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__mngr2proc_val;
        CData/*0:0*/ __PVT__mngr2proc_rdy;
        CData/*0:0*/ __PVT__proc2mngr_val;
        CData/*0:0*/ __PVT__proc2mngr_rdy;
        CData/*0:0*/ __PVT__imem_reqstream_val;
        CData/*0:0*/ __PVT__imem_reqstream_rdy;
        CData/*0:0*/ __PVT__imem_respstream_val;
        CData/*0:0*/ __PVT__imem_respstream_rdy;
        CData/*0:0*/ __PVT__dmem_reqstream_val;
        CData/*0:0*/ __PVT__dmem_reqstream_rdy;
        CData/*0:0*/ __PVT__dmem_respstream_val;
        CData/*0:0*/ __PVT__dmem_respstream_rdy;
        CData/*0:0*/ __PVT__commit_inst;
        CData/*0:0*/ __PVT__stats_en;
        CData/*0:0*/ __PVT__src_done;
        CData/*0:0*/ __PVT__snk_done;
        CData/*0:0*/ __PVT__mem_clear;
        CData/*0:0*/ __Vtogcov__clk;
        CData/*0:0*/ __Vtogcov__linetrace;
        CData/*0:0*/ __Vtogcov__reset;
        CData/*0:0*/ __Vtogcov__mngr2proc_val;
        CData/*0:0*/ __Vtogcov__mngr2proc_rdy;
        CData/*0:0*/ __Vtogcov__proc2mngr_val;
        CData/*0:0*/ __Vtogcov__proc2mngr_rdy;
        CData/*0:0*/ __Vtogcov__imem_reqstream_val;
        CData/*0:0*/ __Vtogcov__imem_reqstream_rdy;
        CData/*0:0*/ __Vtogcov__imem_respstream_val;
        CData/*0:0*/ __Vtogcov__imem_respstream_rdy;
        CData/*0:0*/ __Vtogcov__dmem_reqstream_val;
        CData/*0:0*/ __Vtogcov__dmem_reqstream_rdy;
        CData/*0:0*/ __Vtogcov__dmem_respstream_val;
        CData/*0:0*/ __Vtogcov__dmem_respstream_rdy;
        CData/*0:0*/ __Vtogcov__commit_inst;
        CData/*0:0*/ __Vtogcov__stats_en;
        CData/*0:0*/ __Vtogcov__src_done;
        CData/*0:0*/ __Vtogcov__snk_done;
        CData/*0:0*/ __Vtogcov__mem_clear;
        CData/*0:0*/ __Vtask_append_val_rdy_str__12__val;
        CData/*0:0*/ __Vtask_append_val_rdy_str__12__rdy;
        CData/*7:0*/ __Vtask_append_chars__14__char;
        CData/*7:0*/ __Vtask_append_chars__16__char;
        CData/*7:0*/ __Vtask_append_chars__18__char;
        CData/*7:0*/ __Vtask_append_chars__20__char;
        CData/*7:0*/ __Vtask_append_chars__23__char;
        CData/*4:0*/ __Vfunc_imm_shamt__33__Vfuncout;
        CData/*4:0*/ __Vfunc_imm_shamt__34__Vfuncout;
        CData/*4:0*/ __Vfunc_imm_shamt__35__Vfuncout;
        CData/*4:0*/ __Vfunc_imm_shamt__36__Vfuncout;
        CData/*4:0*/ __Vfunc_imm_shamt__37__Vfuncout;
        CData/*4:0*/ __Vfunc_imm_shamt__38__Vfuncout;
        CData/*0:0*/ __Vtask_append_val_rdy_str__52__val;
        CData/*0:0*/ __Vtask_append_val_rdy_str__52__rdy;
        CData/*7:0*/ __Vtask_append_chars__54__char;
        CData/*7:0*/ __Vtask_append_chars__56__char;
        CData/*7:0*/ __Vtask_append_chars__58__char;
        CData/*7:0*/ __Vtask_append_chars__60__char;
        SData/*11:0*/ __Vfunc_imm_i__27__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__28__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__29__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__30__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__31__Vfuncout;
    };
    struct {
        SData/*11:0*/ __Vfunc_imm_i__32__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__41__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_s__42__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__44__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__45__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__46__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__47__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__48__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__49__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__50__Vfuncout;
        IData/*31:0*/ __PVT__mngr2proc_msg;
        IData/*31:0*/ __PVT__proc2mngr_msg;
        IData/*31:0*/ __PVT__core_id;
        VlWide<3>/*76:0*/ __Vcellinp__mem__memreq1_msg;
        VlWide<3>/*76:0*/ __Vcellinp__mem__memreq0_msg;
        IData/*31:0*/ __PVT__idx;
        IData/*31:0*/ __PVT__fp;
        IData/*31:0*/ __Vtogcov__mngr2proc_msg;
        IData/*31:0*/ __Vtogcov__proc2mngr_msg;
        IData/*31:0*/ __Vtogcov__core_id;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vtask_load__0__filein;
        IData/*31:0*/ __Vtask_load__1__file_load;
        IData/*31:0*/ __Vtask_load__2__file_load;
        IData/*31:0*/ __Vtask_load__3__file_load;
        IData/*31:0*/ __Vtask_load__4__file_load;
        IData/*31:0*/ __Vtask_load__5__file_load;
        IData/*31:0*/ __Vtask_dump__6__filein;
        IData/*31:0*/ __Vtask_dump__7__file_out;
        VlWide<128>/*4095:0*/ __Vtask_line_trace__11__trace_str;
        VlWide<128>/*4095:0*/ __Vtask_append_val_rdy_str__12__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_val_rdy_str__12__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__13__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__13__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__14__trace;
        IData/*31:0*/ __Vtask_append_chars__14__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__15__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__15__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__16__trace;
        IData/*31:0*/ __Vtask_append_chars__16__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__17__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__17__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__18__trace;
        IData/*31:0*/ __Vtask_append_chars__18__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__19__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__19__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__20__trace;
        IData/*31:0*/ __Vtask_append_chars__20__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__21__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__21__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__22__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__22__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__23__trace;
        IData/*31:0*/ __Vtask_append_chars__23__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__24__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__24__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__25__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__25__str;
        VlWide<7>/*199:0*/ __Vfunc_disasm__26__Vfuncout;
        IData/*31:0*/ __Vfunc_disasm__26__inst;
        IData/*31:0*/ __Vfunc_imm_i__27__inst;
        IData/*31:0*/ __Vfunc_imm_i__28__inst;
        IData/*31:0*/ __Vfunc_imm_i__29__inst;
        IData/*31:0*/ __Vfunc_imm_i__30__inst;
    };
    struct {
        IData/*31:0*/ __Vfunc_imm_i__31__inst;
        IData/*31:0*/ __Vfunc_imm_i__32__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__33__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__34__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__35__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__36__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__37__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__38__inst;
        IData/*19:0*/ __Vfunc_imm_u_sh12__39__Vfuncout;
        IData/*31:0*/ __Vfunc_imm_u_sh12__39__inst;
        IData/*19:0*/ __Vfunc_imm_u_sh12__40__Vfuncout;
        IData/*31:0*/ __Vfunc_imm_u_sh12__40__inst;
        IData/*31:0*/ __Vfunc_imm_i__41__inst;
        IData/*31:0*/ __Vfunc_imm_s__42__inst;
        IData/*20:0*/ __Vfunc_imm_j__43__Vfuncout;
        IData/*31:0*/ __Vfunc_imm_j__43__inst;
        IData/*31:0*/ __Vfunc_imm_i__44__inst;
        IData/*31:0*/ __Vfunc_imm_b__45__inst;
        IData/*31:0*/ __Vfunc_imm_b__46__inst;
        IData/*31:0*/ __Vfunc_imm_b__47__inst;
        IData/*31:0*/ __Vfunc_imm_b__48__inst;
        IData/*31:0*/ __Vfunc_imm_b__49__inst;
        IData/*31:0*/ __Vfunc_imm_b__50__inst;
        VlWide<128>/*4095:0*/ __Vtask_append_str__51__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__51__str;
        VlWide<128>/*4095:0*/ __Vtask_append_val_rdy_str__52__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_val_rdy_str__52__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__53__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__53__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__54__trace;
        IData/*31:0*/ __Vtask_append_chars__54__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__55__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__55__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__56__trace;
        IData/*31:0*/ __Vtask_append_chars__56__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__57__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__57__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__58__trace;
        IData/*31:0*/ __Vtask_append_chars__58__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__59__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__59__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__60__trace;
        IData/*31:0*/ __Vtask_append_chars__60__num;
        VlWide<3>/*76:0*/ __PVT__imem_reqstream_msg;
        QData/*46:0*/ __PVT__imem_respstream_msg;
        VlWide<3>/*76:0*/ __PVT__dmem_reqstream_msg;
        QData/*46:0*/ __PVT__dmem_respstream_msg;
        QData/*46:0*/ __Vcellout__mem__memresp1_msg;
        QData/*46:0*/ __Vcellout__mem__memresp0_msg;
        VlWide<3>/*76:0*/ __Vtogcov__imem_reqstream_msg;
        QData/*46:0*/ __Vtogcov__imem_respstream_msg;
        VlWide<3>/*76:0*/ __Vtogcov__dmem_reqstream_msg;
        QData/*46:0*/ __Vtogcov__dmem_respstream_msg;
        VlUnpacked<IData/*31:0*/, 10> __PVT__src_msgs;
        VlUnpacked<IData/*31:0*/, 10> __PVT__snk_msgs;
    };
    std::string __PVT__temp;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_top(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_top();
    VL_UNCOPYABLE(Vtop_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
