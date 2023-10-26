// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB2_PROC_PROCFLMULTICYCLE_H_
#define VERILATED_VTOP_LAB2_PROC_PROCFLMULTICYCLE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_lab2_proc_tinyrv2_encoding_InstTasks;
class Vtop_lab2_proc_tinyrv2_encoding_InstUnpack;
class Vtop_vc_MemReqMsg4BTrace;
class Vtop_vc_MemRespMsg4BTrace;
class Vtop_vc_Queue__Pz1_PB20_PC1;
class Vtop_vc_Queue__Pz1_PB4d_PC1;
class Vtop_vc_Trace;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab2_proc_ProcFLMultiCycle final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_Queue__Pz1_PB4d_PC1* __PVT__dmem_queue;
    Vtop_vc_Queue__Pz1_PB20_PC1* __PVT__proc2mngr_queue;
    Vtop_lab2_proc_tinyrv2_encoding_InstUnpack* __PVT__inst_unpack;
    Vtop_lab2_proc_tinyrv2_encoding_InstTasks* __PVT__tinyrv2;
    Vtop_vc_Trace* __PVT__vc_trace;
    Vtop_vc_MemReqMsg4BTrace* __PVT__imem_reqstream_trace;
    Vtop_vc_MemReqMsg4BTrace* __PVT__dmem_reqstream_trace;
    Vtop_vc_MemRespMsg4BTrace* __PVT__imem_respstream_trace;
    Vtop_vc_MemRespMsg4BTrace* __PVT__dmem_respstream_trace;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__mngr2proc_val,0,0);
        VL_OUT8(__PVT__mngr2proc_rdy,0,0);
        VL_OUT8(__PVT__proc2mngr_val,0,0);
        VL_IN8(__PVT__proc2mngr_rdy,0,0);
        VL_OUT8(__PVT__imem_reqstream_val,0,0);
        VL_IN8(__PVT__imem_reqstream_rdy,0,0);
        VL_IN8(__PVT__imem_respstream_val,0,0);
        VL_OUT8(__PVT__imem_respstream_rdy,0,0);
        VL_OUT8(__PVT__dmem_reqstream_val,0,0);
        VL_IN8(__PVT__dmem_reqstream_rdy,0,0);
        VL_IN8(__PVT__dmem_respstream_val,0,0);
        VL_OUT8(__PVT__dmem_respstream_rdy,0,0);
        VL_OUT8(__PVT__commit_inst,0,0);
        VL_OUT8(__PVT__stats_en,0,0);
        CData/*1:0*/ __PVT__imem_queue_num_free_entries;
        CData/*0:0*/ __PVT__imem_reqstream_enq_val;
        CData/*0:0*/ __PVT__imem_reqstream_enq_rdy;
        CData/*0:0*/ __PVT__dmem_queue_num_free_entries;
        CData/*0:0*/ __PVT__dmem_reqstream_enq_val;
        CData/*0:0*/ __PVT__dmem_reqstream_enq_rdy;
        CData/*2:0*/ __PVT__dmem_reqstream_enq_msg_type;
        CData/*0:0*/ __PVT__proc2mngr_queue_num_free_entries;
        CData/*0:0*/ __PVT__proc2mngr_enq_val;
        CData/*0:0*/ __PVT__proc2mngr_enq_rdy;
        CData/*6:0*/ __PVT__opcode;
        CData/*4:0*/ __PVT__rd;
        CData/*4:0*/ __PVT__rs1;
        CData/*4:0*/ __PVT__rs2;
        CData/*2:0*/ __PVT__funct3;
        CData/*6:0*/ __PVT__funct7;
        CData/*0:0*/ __PVT__print_trace;
        CData/*0:0*/ __Vtogcov__clk;
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
        CData/*1:0*/ __Vtogcov__imem_queue_num_free_entries;
        CData/*0:0*/ __Vtogcov__imem_reqstream_enq_val;
        CData/*0:0*/ __Vtogcov__imem_reqstream_enq_rdy;
        CData/*0:0*/ __Vtogcov__dmem_queue_num_free_entries;
        CData/*0:0*/ __Vtogcov__dmem_reqstream_enq_val;
        CData/*0:0*/ __Vtogcov__dmem_reqstream_enq_rdy;
        CData/*2:0*/ __Vtogcov__dmem_reqstream_enq_msg_type;
        CData/*0:0*/ __Vtogcov__proc2mngr_queue_num_free_entries;
        CData/*0:0*/ __Vtogcov__proc2mngr_enq_val;
        CData/*0:0*/ __Vtogcov__proc2mngr_enq_rdy;
        CData/*6:0*/ __Vtogcov__opcode;
        CData/*4:0*/ __Vtogcov__rd;
        CData/*4:0*/ __Vtogcov__rs1;
        CData/*4:0*/ __Vtogcov__rs2;
        CData/*2:0*/ __Vtogcov__funct3;
    };
    struct {
        CData/*6:0*/ __Vtogcov__funct7;
        CData/*0:0*/ __Vtogcov__print_trace;
        CData/*4:0*/ __Vfunc_imm_shamt__6__Vfuncout;
        CData/*4:0*/ __Vfunc_imm_shamt__7__Vfuncout;
        CData/*4:0*/ __Vfunc_imm_shamt__8__Vfuncout;
        CData/*0:0*/ __Vdlyvset__rf__v0;
        SData/*11:0*/ __PVT__csr;
        SData/*11:0*/ __Vtogcov__csr;
        SData/*11:0*/ __Vfunc_imm_i__0__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__1__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__2__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__3__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__4__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__5__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__11__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_s__12__Vfuncout;
        SData/*11:0*/ __Vfunc_imm_i__14__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__15__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__16__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__17__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__18__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__19__Vfuncout;
        SData/*12:0*/ __Vfunc_imm_b__20__Vfuncout;
        VL_IN(__PVT__mngr2proc_msg,31,0);
        VL_OUT(__PVT__proc2mngr_msg,31,0);
        VL_IN(__PVT__core_id,31,0);
        IData/*31:0*/ __PVT__imem_reqstream_msg_addr;
        IData/*31:0*/ __PVT__dmem_reqstream_enq_msg_addr;
        IData/*31:0*/ __PVT__dmem_reqstream_enq_msg_data;
        VlWide<3>/*76:0*/ __Vcellout__dmem_queue__deq_msg;
        VlWide<3>/*76:0*/ __Vcellinp__dmem_queue__enq_msg;
        IData/*31:0*/ __PVT__proc2mngr_enq_msg;
        IData/*31:0*/ __PVT__PC;
        IData/*31:0*/ __PVT__PC_prev;
        IData/*31:0*/ __PVT__n_PC;
        IData/*31:0*/ __PVT__inst;
        IData/*31:0*/ __PVT__n_inst;
        IData/*31:0*/ __PVT__state;
        IData/*31:0*/ __PVT__n_state;
        VlWide<128>/*4095:0*/ __PVT__temp;
        VlWide<128>/*4095:0*/ __PVT__str;
        IData/*31:0*/ __PVT__idx1;
        IData/*31:0*/ __PVT__idx0;
        IData/*31:0*/ __Vtogcov__mngr2proc_msg;
        IData/*31:0*/ __Vtogcov__proc2mngr_msg;
        IData/*31:0*/ __Vtogcov__core_id;
        IData/*31:0*/ __Vtogcov__imem_reqstream_msg_addr;
        IData/*31:0*/ __Vtogcov__dmem_reqstream_enq_msg_addr;
        IData/*31:0*/ __Vtogcov__dmem_reqstream_enq_msg_data;
        IData/*31:0*/ __Vtogcov__proc2mngr_enq_msg;
        IData/*31:0*/ __Vtogcov__PC;
        IData/*31:0*/ __Vtogcov__PC_prev;
        IData/*31:0*/ __Vtogcov__n_PC;
        IData/*31:0*/ __Vtogcov__inst;
        IData/*31:0*/ __Vtogcov__n_inst;
        IData/*31:0*/ __Vfunc_imm_i__0__inst;
        IData/*31:0*/ __Vfunc_imm_i__1__inst;
        IData/*31:0*/ __Vfunc_imm_i__2__inst;
        IData/*31:0*/ __Vfunc_imm_i__3__inst;
        IData/*31:0*/ __Vfunc_imm_i__4__inst;
        IData/*31:0*/ __Vfunc_imm_i__5__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__6__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__7__inst;
        IData/*31:0*/ __Vfunc_imm_shamt__8__inst;
    };
    struct {
        IData/*19:0*/ __Vfunc_imm_u_sh12__9__Vfuncout;
        IData/*31:0*/ __Vfunc_imm_u_sh12__9__inst;
        IData/*19:0*/ __Vfunc_imm_u_sh12__10__Vfuncout;
        IData/*31:0*/ __Vfunc_imm_u_sh12__10__inst;
        IData/*31:0*/ __Vfunc_imm_i__11__inst;
        IData/*31:0*/ __Vfunc_imm_s__12__inst;
        IData/*20:0*/ __Vfunc_imm_j__13__Vfuncout;
        IData/*31:0*/ __Vfunc_imm_j__13__inst;
        IData/*31:0*/ __Vfunc_imm_i__14__inst;
        IData/*31:0*/ __Vfunc_imm_b__15__inst;
        IData/*31:0*/ __Vfunc_imm_b__16__inst;
        IData/*31:0*/ __Vfunc_imm_b__17__inst;
        IData/*31:0*/ __Vfunc_imm_b__18__inst;
        IData/*31:0*/ __Vfunc_imm_b__19__inst;
        IData/*31:0*/ __Vfunc_imm_b__20__inst;
        IData/*31:0*/ __Vdly__inst;
        IData/*31:0*/ __Vdly__PC;
        IData/*31:0*/ __Vdly__PC_prev;
        IData/*31:0*/ __Vdlyvval__rf__v0;
        IData/*31:0*/ __Vdlyvval__rf__v1;
        IData/*31:0*/ __Vdlyvval__rf__v2;
        IData/*31:0*/ __Vdlyvval__rf__v3;
        IData/*31:0*/ __Vdlyvval__rf__v4;
        IData/*31:0*/ __Vdlyvval__rf__v5;
        IData/*31:0*/ __Vdlyvval__rf__v6;
        IData/*31:0*/ __Vdlyvval__rf__v7;
        IData/*31:0*/ __Vdlyvval__rf__v8;
        IData/*31:0*/ __Vdlyvval__rf__v9;
        IData/*31:0*/ __Vdlyvval__rf__v10;
        IData/*31:0*/ __Vdlyvval__rf__v11;
        IData/*31:0*/ __Vdlyvval__rf__v12;
        IData/*31:0*/ __Vdlyvval__rf__v13;
        IData/*31:0*/ __Vdlyvval__rf__v14;
        IData/*31:0*/ __Vdlyvval__rf__v15;
        IData/*31:0*/ __Vdlyvval__rf__v16;
        IData/*31:0*/ __Vdlyvval__rf__v17;
        IData/*31:0*/ __Vdlyvval__rf__v18;
        IData/*31:0*/ __Vdlyvval__rf__v19;
        IData/*31:0*/ __Vdlyvval__rf__v20;
        IData/*31:0*/ __Vdlyvval__rf__v21;
        IData/*31:0*/ __Vdlyvval__rf__v22;
        IData/*31:0*/ __Vdlyvval__rf__v23;
        IData/*31:0*/ __Vdlyvval__rf__v24;
        IData/*31:0*/ __Vdlyvval__rf__v25;
        IData/*31:0*/ __Vdlyvval__rf__v26;
        IData/*31:0*/ __Vdlyvval__rf__v27;
        IData/*31:0*/ __Vdlyvval__rf__v28;
        IData/*31:0*/ __Vdlyvval__rf__v29;
        IData/*31:0*/ __Vdlyvval__rf__v30;
        IData/*31:0*/ __Vdlyvval__rf__v31;
        IData/*31:0*/ __Vdly__state;
        VL_OUTW(__PVT__imem_reqstream_msg,76,0,3);
        VL_IN64(__PVT__imem_respstream_msg,46,0);
        VL_OUTW(__PVT__dmem_reqstream_msg,76,0,3);
        VL_IN64(__PVT__dmem_respstream_msg,46,0);
        VlWide<3>/*76:0*/ __PVT__imem_reqstream_enq_msg;
        VlWide<3>/*76:0*/ __PVT__dmem_reqstream_enq_msg;
        VlWide<3>/*76:0*/ __Vtogcov__imem_reqstream_msg;
        QData/*46:0*/ __Vtogcov__imem_respstream_msg;
        VlWide<3>/*76:0*/ __Vtogcov__dmem_reqstream_msg;
        QData/*46:0*/ __Vtogcov__dmem_respstream_msg;
        VlWide<3>/*76:0*/ __Vtogcov__imem_reqstream_enq_msg;
        VlWide<3>/*76:0*/ __Vtogcov__dmem_reqstream_enq_msg;
        VlUnpacked<IData/*31:0*/, 32> __PVT__rf;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 32> __PVT__n_rf;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab2_proc_ProcFLMultiCycle(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab2_proc_ProcFLMultiCycle();
    VL_UNCOPYABLE(Vtop_lab2_proc_ProcFLMultiCycle);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
