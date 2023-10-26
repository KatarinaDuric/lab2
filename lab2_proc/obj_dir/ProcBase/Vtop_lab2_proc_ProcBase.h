// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB2_PROC_PROCBASE_H_
#define VERILATED_VTOP_LAB2_PROC_PROCBASE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_lab2_proc_DropUnit__P2f;
class Vtop_lab2_proc_ProcBaseCtrl;
class Vtop_lab2_proc_ProcBaseDpath;
class Vtop_lab2_proc_tinyrv2_encoding_InstTasks;
class Vtop_vc_MemReqMsg4BTrace;
class Vtop_vc_MemRespMsg4BTrace;
class Vtop_vc_Queue__Pz1_PB20_PC1;
class Vtop_vc_Queue__Pz1_PB4d;
class Vtop_vc_Queue__Pz1_PB4d_PC1;
class Vtop_vc_Trace;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab2_proc_ProcBase final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_Queue__Pz1_PB4d* __PVT__imem_queue;
    Vtop_lab2_proc_DropUnit__P2f* __PVT__imem_respstream_drop_unit;
    Vtop_vc_Queue__Pz1_PB4d_PC1* __PVT__dmem_queue;
    Vtop_vc_Queue__Pz1_PB20_PC1* __PVT__proc2mngr_queue;
    Vtop_lab2_proc_ProcBaseCtrl* __PVT__ctrl;
    Vtop_lab2_proc_ProcBaseDpath* __PVT__dpath;
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
        CData/*0:0*/ __PVT__imem_respstream_drop;
        CData/*0:0*/ __PVT__imem_respstream_drop_val;
        CData/*0:0*/ __PVT__imem_respstream_drop_rdy;
        CData/*0:0*/ __PVT__dmem_queue_num_free_entries;
        CData/*0:0*/ __PVT__dmem_reqstream_enq_val;
        CData/*0:0*/ __PVT__dmem_reqstream_enq_rdy;
        CData/*0:0*/ __PVT__proc2mngr_queue_num_free_entries;
        CData/*0:0*/ __PVT__proc2mngr_enq_val;
        CData/*0:0*/ __PVT__proc2mngr_enq_rdy;
        CData/*0:0*/ __PVT__reg_en_F;
        CData/*1:0*/ __PVT__pc_sel_F;
        CData/*0:0*/ __PVT__reg_en_D;
        CData/*0:0*/ __PVT__op1_sel_D;
        CData/*1:0*/ __PVT__op2_sel_D;
        CData/*1:0*/ __PVT__csrr_sel_D;
        CData/*2:0*/ __PVT__imm_type_D;
        CData/*0:0*/ __PVT__reg_en_X;
        CData/*3:0*/ __PVT__alu_fn_X;
        CData/*1:0*/ __PVT__ex_result_sel_X;
        CData/*1:0*/ __PVT__dmem_reqstream_type_X;
        CData/*0:0*/ __PVT__imul_req_val_D;
        CData/*0:0*/ __PVT__imul_resp_val_X;
        CData/*0:0*/ __PVT__imul_req_rdy_D;
        CData/*0:0*/ __PVT__imul_resp_rdy_X;
        CData/*0:0*/ __PVT__reg_en_M;
        CData/*0:0*/ __PVT__wb_result_sel_M;
        CData/*0:0*/ __PVT__reg_en_W;
        CData/*4:0*/ __PVT__rf_waddr_W;
        CData/*0:0*/ __PVT__rf_wen_W;
        CData/*0:0*/ __PVT__stats_en_wen_W;
        CData/*0:0*/ __PVT__br_cond_eq_X;
        CData/*0:0*/ __PVT__br_cond_lt_X;
        CData/*0:0*/ __PVT__br_cond_ltu_X;
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
    };
    struct {
        CData/*0:0*/ __Vtogcov__dmem_respstream_val;
        CData/*0:0*/ __Vtogcov__dmem_respstream_rdy;
        CData/*0:0*/ __Vtogcov__commit_inst;
        CData/*0:0*/ __Vtogcov__stats_en;
        CData/*1:0*/ __Vtogcov__imem_queue_num_free_entries;
        CData/*0:0*/ __Vtogcov__imem_reqstream_enq_val;
        CData/*0:0*/ __Vtogcov__imem_reqstream_enq_rdy;
        CData/*0:0*/ __Vtogcov__imem_respstream_drop;
        CData/*0:0*/ __Vtogcov__imem_respstream_drop_val;
        CData/*0:0*/ __Vtogcov__imem_respstream_drop_rdy;
        CData/*0:0*/ __Vtogcov__dmem_queue_num_free_entries;
        CData/*0:0*/ __Vtogcov__dmem_reqstream_enq_val;
        CData/*0:0*/ __Vtogcov__dmem_reqstream_enq_rdy;
        CData/*0:0*/ __Vtogcov__proc2mngr_queue_num_free_entries;
        CData/*0:0*/ __Vtogcov__proc2mngr_enq_val;
        CData/*0:0*/ __Vtogcov__proc2mngr_enq_rdy;
        CData/*0:0*/ __Vtogcov__reg_en_F;
        CData/*1:0*/ __Vtogcov__pc_sel_F;
        CData/*0:0*/ __Vtogcov__reg_en_D;
        CData/*0:0*/ __Vtogcov__op1_sel_D;
        CData/*1:0*/ __Vtogcov__op2_sel_D;
        CData/*1:0*/ __Vtogcov__csrr_sel_D;
        CData/*2:0*/ __Vtogcov__imm_type_D;
        CData/*0:0*/ __Vtogcov__reg_en_X;
        CData/*3:0*/ __Vtogcov__alu_fn_X;
        CData/*1:0*/ __Vtogcov__ex_result_sel_X;
        CData/*1:0*/ __Vtogcov__dmem_reqstream_type_X;
        CData/*0:0*/ __Vtogcov__imul_req_val_D;
        CData/*0:0*/ __Vtogcov__imul_resp_val_X;
        CData/*0:0*/ __Vtogcov__imul_req_rdy_D;
        CData/*0:0*/ __Vtogcov__imul_resp_rdy_X;
        CData/*0:0*/ __Vtogcov__reg_en_M;
        CData/*0:0*/ __Vtogcov__wb_result_sel_M;
        CData/*0:0*/ __Vtogcov__reg_en_W;
        CData/*4:0*/ __Vtogcov__rf_waddr_W;
        CData/*0:0*/ __Vtogcov__rf_wen_W;
        CData/*0:0*/ __Vtogcov__stats_en_wen_W;
        CData/*0:0*/ __Vtogcov__br_cond_eq_X;
        CData/*0:0*/ __Vtogcov__br_cond_lt_X;
        CData/*0:0*/ __Vtogcov__br_cond_ltu_X;
        VL_IN(__PVT__mngr2proc_msg,31,0);
        VL_OUT(__PVT__proc2mngr_msg,31,0);
        VL_IN(__PVT__core_id,31,0);
        IData/*31:0*/ __PVT__imem_reqstream_enq_msg_addr;
        VlWide<3>/*76:0*/ __Vcellout__imem_queue__deq_msg;
        VlWide<3>/*76:0*/ __Vcellinp__imem_queue__enq_msg;
        IData/*31:0*/ __PVT__dmem_reqstream_enq_msg_addr;
        IData/*31:0*/ __PVT__dmem_reqstream_enq_msg_data;
        VlWide<3>/*76:0*/ __Vcellout__dmem_queue__deq_msg;
        VlWide<3>/*76:0*/ __Vcellinp__dmem_queue__enq_msg;
        IData/*31:0*/ __PVT__proc2mngr_enq_msg;
        IData/*31:0*/ __PVT__inst_D;
        IData/*31:0*/ __Vcellinp__dpath__dmem_respstream_msg_data;
        VlWide<128>/*4095:0*/ __PVT__temp;
        VlWide<128>/*4095:0*/ __PVT__str;
        IData/*31:0*/ __PVT__idx1;
        IData/*31:0*/ __PVT__idx0;
        IData/*31:0*/ __Vtogcov__mngr2proc_msg;
        IData/*31:0*/ __Vtogcov__proc2mngr_msg;
        IData/*31:0*/ __Vtogcov__core_id;
        IData/*31:0*/ __Vtogcov__imem_reqstream_enq_msg_addr;
        IData/*31:0*/ __Vtogcov__dmem_reqstream_enq_msg_addr;
        IData/*31:0*/ __Vtogcov__dmem_reqstream_enq_msg_data;
        IData/*31:0*/ __Vtogcov__proc2mngr_enq_msg;
    };
    struct {
        IData/*31:0*/ __Vtogcov__inst_D;
        VL_OUTW(__PVT__imem_reqstream_msg,76,0,3);
        VL_IN64(__PVT__imem_respstream_msg,46,0);
        VL_OUTW(__PVT__dmem_reqstream_msg,76,0,3);
        VL_IN64(__PVT__dmem_respstream_msg,46,0);
        VlWide<3>/*76:0*/ __PVT__imem_reqstream_enq_msg;
        QData/*46:0*/ __PVT__imem_respstream_drop_msg;
        QData/*46:0*/ __Vcellout__imem_respstream_drop_unit__ostream_msg;
        QData/*46:0*/ __Vcellinp__imem_respstream_drop_unit__istream_msg;
        VlWide<3>/*76:0*/ __PVT__dmem_reqstream_enq_msg;
        VlWide<3>/*76:0*/ __Vtogcov__imem_reqstream_msg;
        QData/*46:0*/ __Vtogcov__imem_respstream_msg;
        VlWide<3>/*76:0*/ __Vtogcov__dmem_reqstream_msg;
        QData/*46:0*/ __Vtogcov__dmem_respstream_msg;
        VlWide<3>/*76:0*/ __Vtogcov__imem_reqstream_enq_msg;
        QData/*46:0*/ __Vtogcov__imem_respstream_drop_msg;
        VlWide<3>/*76:0*/ __Vtogcov__dmem_reqstream_enq_msg;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab2_proc_ProcBase(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab2_proc_ProcBase();
    VL_UNCOPYABLE(Vtop_lab2_proc_ProcBase);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
