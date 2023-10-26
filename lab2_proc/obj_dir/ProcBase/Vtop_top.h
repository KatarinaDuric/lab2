// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_lab2_proc_ProcBase;
class Vtop_vc_TestRandDelayMem_2ports4B__pi3;
class Vtop_vc_TestRandDelaySinkFile__pi2;
class Vtop_vc_TestRandDelaySourceFile__pi1;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_TestRandDelaySourceFile__pi1* __PVT__src;
    Vtop_vc_TestRandDelaySinkFile__pi2* __PVT__sink;
    Vtop_lab2_proc_ProcBase* __PVT__DUT;
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
        CData/*7:0*/ __Vtask_append_chars__25__char;
        CData/*7:0*/ __Vtask_append_chars__27__char;
        CData/*7:0*/ __Vtask_append_chars__30__char;
        CData/*7:0*/ __Vtask_append_chars__32__char;
        CData/*4:0*/ __Vfunc_imm_shamt__41__Vfuncout;
        CData/*4:0*/ __Vfunc_imm_shamt__42__Vfuncout;
        CData/*4:0*/ __Vfunc_imm_shamt__43__Vfuncout;
        CData/*4:0*/ __Vfunc_imm_shamt__44__Vfuncout;
        CData/*4:0*/ __Vfunc_imm_shamt__45__Vfuncout;
        CData/*4:0*/ __Vfunc_imm_shamt__46__Vfuncout;
        CData/*7:0*/ __Vtask_append_chars__59__char;
        CData/*7:0*/ __Vtask_append_chars__62__char;
        CData/*7:0*/ __Vtask_append_chars__65__char;
        CData/*7:0*/ __Vtask_append_chars__68__char;
        CData/*7:0*/ __Vtask_append_chars__71__char;
        CData/*7:0*/ __Vtask_append_chars__74__char;
        CData/*7:0*/ __Vtask_append_chars__77__char;
    };
    struct {
        CData/*0:0*/ __Vtask_append_val_rdy_str__79__val;
        CData/*0:0*/ __Vtask_append_val_rdy_str__79__rdy;
        CData/*7:0*/ __Vtask_append_chars__81__char;
        CData/*7:0*/ __Vtask_append_chars__83__char;
        CData/*7:0*/ __Vtask_append_chars__85__char;
        CData/*7:0*/ __Vtask_append_chars__87__char;
        SData/*11:0*/ __Vfunc_imm_i__35__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__36__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__37__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__38__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__39__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__40__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__49__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_s__50__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__52__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__53__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__54__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__55__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__56__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__57__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__58__Vfuncout;
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
    };
    struct {
        IData/*31:0*/ __Vtask_append_chars__23__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__24__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__24__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__25__trace;
        IData/*31:0*/ __Vtask_append_chars__25__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__26__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__26__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__27__trace;
        IData/*31:0*/ __Vtask_append_chars__27__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__28__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__28__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__29__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__29__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__30__trace;
        IData/*31:0*/ __Vtask_append_chars__30__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__31__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__31__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__32__trace;
        IData/*31:0*/ __Vtask_append_chars__32__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__33__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__33__str;
        VlWide<7>/*199:0*/ __Vfunc_disasm__34__Vfuncout;
        IData/*31:0*/ __Vfunc_disasm__34__inst;
        IData/*31:0*/ __Vfunc_imm_i__35__inst;
        IData/*31:0*/ __Vfunc_imm_i__36__inst;
        IData/*31:0*/ __Vfunc_imm_i__37__inst;
        IData/*31:0*/ __Vfunc_imm_i__38__inst;
        IData/*31:0*/ __Vfunc_imm_i__39__inst;
        IData/*31:0*/ __Vfunc_imm_i__40__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__41__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__42__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__43__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__44__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__45__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__46__inst;
        IData/*19:0*/ __Vfunc_imm_u_sh12__47__Vfuncout;
        IData/*31:0*/ __Vfunc_imm_u_sh12__47__inst;
        IData/*19:0*/ __Vfunc_imm_u_sh12__48__Vfuncout;
        IData/*31:0*/ __Vfunc_imm_u_sh12__48__inst;
        IData/*31:0*/ __Vfunc_imm_i__49__inst;
        IData/*31:0*/ __Vfunc_imm_s__50__inst;
        IData/*20:0*/ __Vfunc_imm_j__51__Vfuncout;
        IData/*31:0*/ __Vfunc_imm_j__51__inst;
        IData/*31:0*/ __Vfunc_imm_i__52__inst;
        IData/*31:0*/ __Vfunc_imm_b__53__inst;
        IData/*31:0*/ __Vfunc_imm_b__54__inst;
        IData/*31:0*/ __Vfunc_imm_b__55__inst;
        IData/*31:0*/ __Vfunc_imm_b__56__inst;
        IData/*31:0*/ __Vfunc_imm_b__57__inst;
        IData/*31:0*/ __Vfunc_imm_b__58__inst;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__59__trace;
        IData/*31:0*/ __Vtask_append_chars__59__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__60__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__60__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__61__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__61__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__62__trace;
        IData/*31:0*/ __Vtask_append_chars__62__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__63__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__63__str;
        IData/*31:0*/ __Vfunc_disasm_tiny__64__Vfuncout;
        IData/*31:0*/ __Vfunc_disasm_tiny__64__inst;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__65__trace;
        IData/*31:0*/ __Vtask_append_chars__65__num;
    };
    struct {
        VlWide<128>/*4095:0*/ __Vtask_append_str__66__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__66__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__67__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__67__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__68__trace;
        IData/*31:0*/ __Vtask_append_chars__68__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__69__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__69__str;
        IData/*31:0*/ __Vfunc_disasm_tiny__70__Vfuncout;
        IData/*31:0*/ __Vfunc_disasm_tiny__70__inst;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__71__trace;
        IData/*31:0*/ __Vtask_append_chars__71__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__72__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__72__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__73__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__73__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__74__trace;
        IData/*31:0*/ __Vtask_append_chars__74__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__75__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__75__str;
        IData/*31:0*/ __Vfunc_disasm_tiny__76__Vfuncout;
        IData/*31:0*/ __Vfunc_disasm_tiny__76__inst;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__77__trace;
        IData/*31:0*/ __Vtask_append_chars__77__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__78__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__78__str;
        VlWide<128>/*4095:0*/ __Vtask_append_val_rdy_str__79__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_val_rdy_str__79__str;
        VlWide<128>/*4095:0*/ __Vtask_append_str__80__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__80__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__81__trace;
        IData/*31:0*/ __Vtask_append_chars__81__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__82__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__82__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__83__trace;
        IData/*31:0*/ __Vtask_append_chars__83__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__84__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__84__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__85__trace;
        IData/*31:0*/ __Vtask_append_chars__85__num;
        VlWide<128>/*4095:0*/ __Vtask_append_str__86__trace;
        VlWide<128>/*4095:0*/ __Vtask_append_str__86__str;
        VlWide<128>/*4095:0*/ __Vtask_append_chars__87__trace;
        IData/*31:0*/ __Vtask_append_chars__87__num;
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
