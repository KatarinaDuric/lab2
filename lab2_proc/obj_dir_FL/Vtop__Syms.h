// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_top.h"
#include "Vtop___024unit.h"
#include "Vtop_lab2_proc_ProcFLMultiCycle.h"
#include "Vtop_vc_TestRandDelaySourceFile__pi1.h"
#include "Vtop_vc_TestRandDelaySinkFile__pi2.h"
#include "Vtop_vc_TestRandDelayMem_2ports4B__pi3.h"
#include "Vtop_lab2_proc_tinyrv2_encoding_InstTasks.h"
#include "Vtop_lab2_proc_tinyrv2_encoding_InstUnpack.h"
#include "Vtop_vc_TestSourceFile__P20_PBa.h"
#include "Vtop_vc_TestRandDelay__P20.h"
#include "Vtop_vc_TestSinkFile__P20_PBa.h"
#include "Vtop_vc_TestRandDelay__P4d.h"
#include "Vtop_vc_TestMem_2ports4B__P4000.h"
#include "Vtop_vc_TestRandDelay__P2f.h"
#include "Vtop_vc_MemReqMsg4BTrace.h"
#include "Vtop_vc_MemRespMsg4BTrace.h"
#include "Vtop_vc_Queue__Pz1_PB4d_PC1.h"
#include "Vtop_vc_Queue__Pz1_PB20_PC1.h"
#include "Vtop_vc_EnResetReg__P4_PBz2.h"
#include "Vtop_vc_EnResetReg__P20.h"
#include "Vtop_vc_Queue__Pz3_PB4d_PC1.h"
#include "Vtop_vc_MemReqMsgUnpack__pi4.h"
#include "Vtop_vc_MemRespMsgPack__pi5.h"
#include "Vtop_vc_Queue__Pz1_PB2f_PC1.h"
#include "Vtop_vc_Trace.h"
#include "Vtop_vc_QueueCtrl1__Pz1.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB4d.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB20.h"
#include "Vtop_vc_QueueCtrl1__Pz3.h"
#include "Vtop_vc_QueueDpath1__Pz3_PB4d.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB2f.h"
#include "Vtop_vc_EnReg__P4d.h"
#include "Vtop_vc_Mux2__P4d.h"
#include "Vtop_vc_EnReg__P20.h"
#include "Vtop_vc_Mux2__P20.h"
#include "Vtop_vc_EnReg__P2f.h"
#include "Vtop_vc_Mux2__P2f.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop___024unit                 TOP____024unit;
    Vtop_top                       TOP__top;
    Vtop_lab2_proc_ProcFLMultiCycle TOP__top__DUT;
    Vtop_vc_Queue__Pz1_PB4d_PC1    TOP__top__DUT__dmem_queue;
    Vtop_vc_QueueCtrl1__Pz1        TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl;
    Vtop_vc_QueueDpath1__Pz1_PB4d  TOP__top__DUT__dmem_queue__genblk1__DOT__dpath;
    Vtop_vc_Mux2__P4d              TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux;
    Vtop_vc_EnReg__P4d             TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg;
    Vtop_vc_MemReqMsg4BTrace       TOP__top__DUT__dmem_reqstream_trace;
    Vtop_vc_Trace                  TOP__top__DUT__dmem_reqstream_trace__vc_trace;
    Vtop_vc_MemRespMsg4BTrace      TOP__top__DUT__dmem_respstream_trace;
    Vtop_vc_Trace                  TOP__top__DUT__dmem_respstream_trace__vc_trace;
    Vtop_vc_MemReqMsg4BTrace       TOP__top__DUT__imem_reqstream_trace;
    Vtop_vc_Trace                  TOP__top__DUT__imem_reqstream_trace__vc_trace;
    Vtop_vc_MemRespMsg4BTrace      TOP__top__DUT__imem_respstream_trace;
    Vtop_vc_Trace                  TOP__top__DUT__imem_respstream_trace__vc_trace;
    Vtop_lab2_proc_tinyrv2_encoding_InstUnpack TOP__top__DUT__inst_unpack;
    Vtop_vc_Queue__Pz1_PB20_PC1    TOP__top__DUT__proc2mngr_queue;
    Vtop_vc_QueueCtrl1__Pz1        TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl;
    Vtop_vc_QueueDpath1__Pz1_PB20  TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath;
    Vtop_vc_Mux2__P20              TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux;
    Vtop_vc_EnReg__P20             TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg;
    Vtop_lab2_proc_tinyrv2_encoding_InstTasks TOP__top__DUT__tinyrv2;
    Vtop_vc_Trace                  TOP__top__DUT__vc_trace;
    Vtop_vc_TestRandDelayMem_2ports4B__pi3 TOP__top__mem;
    Vtop_vc_TestMem_2ports4B__P4000 TOP__top__mem__mem;
    Vtop_vc_MemReqMsgUnpack__pi4   TOP__top__mem__mem__memreq0_msg_unpack;
    Vtop_vc_Queue__Pz3_PB4d_PC1    TOP__top__mem__mem__memreq0_queue;
    Vtop_vc_QueueCtrl1__Pz3        TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl;
    Vtop_vc_QueueDpath1__Pz3_PB4d  TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath;
    Vtop_vc_EnReg__P4d             TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg;
    Vtop_vc_MemReqMsg4BTrace       TOP__top__mem__mem__memreq0_trace;
    Vtop_vc_Trace                  TOP__top__mem__mem__memreq0_trace__vc_trace;
    Vtop_vc_MemReqMsgUnpack__pi4   TOP__top__mem__mem__memreq1_msg_unpack;
    Vtop_vc_Queue__Pz3_PB4d_PC1    TOP__top__mem__mem__memreq1_queue;
    Vtop_vc_QueueCtrl1__Pz3        TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl;
    Vtop_vc_QueueDpath1__Pz3_PB4d  TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath;
    Vtop_vc_EnReg__P4d             TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg;
    Vtop_vc_MemReqMsg4BTrace       TOP__top__mem__mem__memreq1_trace;
    Vtop_vc_Trace                  TOP__top__mem__mem__memreq1_trace__vc_trace;
    Vtop_vc_MemRespMsgPack__pi5    TOP__top__mem__mem__memresp0_msg_pack;
    Vtop_vc_Queue__Pz1_PB2f_PC1    TOP__top__mem__mem__memresp0_queue;
    Vtop_vc_QueueCtrl1__Pz1        TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl;
    Vtop_vc_QueueDpath1__Pz1_PB2f  TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath;
    Vtop_vc_Mux2__P2f              TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux;
    Vtop_vc_EnReg__P2f             TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg;
    Vtop_vc_MemRespMsg4BTrace      TOP__top__mem__mem__memresp0_trace;
    Vtop_vc_Trace                  TOP__top__mem__mem__memresp0_trace__vc_trace;
    Vtop_vc_MemRespMsgPack__pi5    TOP__top__mem__mem__memresp1_msg_pack;
    Vtop_vc_Queue__Pz1_PB2f_PC1    TOP__top__mem__mem__memresp1_queue;
    Vtop_vc_QueueCtrl1__Pz1        TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl;
    Vtop_vc_QueueDpath1__Pz1_PB2f  TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath;
    Vtop_vc_Mux2__P2f              TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux;
    Vtop_vc_EnReg__P2f             TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg;
    Vtop_vc_MemRespMsg4BTrace      TOP__top__mem__mem__memresp1_trace;
    Vtop_vc_Trace                  TOP__top__mem__mem__memresp1_trace__vc_trace;
    Vtop_vc_Trace                  TOP__top__mem__mem__vc_trace;
    Vtop_vc_MemReqMsg4BTrace       TOP__top__mem__memreq0_trace;
    Vtop_vc_Trace                  TOP__top__mem__memreq0_trace__vc_trace;
    Vtop_vc_MemReqMsg4BTrace       TOP__top__mem__memreq1_trace;
    Vtop_vc_Trace                  TOP__top__mem__memreq1_trace__vc_trace;
    Vtop_vc_MemRespMsg4BTrace      TOP__top__mem__memresp0_trace;
    Vtop_vc_Trace                  TOP__top__mem__memresp0_trace__vc_trace;
    Vtop_vc_MemRespMsg4BTrace      TOP__top__mem__memresp1_trace;
    Vtop_vc_Trace                  TOP__top__mem__memresp1_trace__vc_trace;
    Vtop_vc_TestRandDelay__P4d     TOP__top__mem__rand_req_delay0;
    Vtop_vc_EnResetReg__P20        TOP__top__mem__rand_req_delay0__rand_delay_reg;
    Vtop_vc_TestRandDelay__P4d     TOP__top__mem__rand_req_delay1;
    Vtop_vc_EnResetReg__P20        TOP__top__mem__rand_req_delay1__rand_delay_reg;
    Vtop_vc_TestRandDelay__P2f     TOP__top__mem__rand_resp_delay0;
    Vtop_vc_EnResetReg__P20        TOP__top__mem__rand_resp_delay0__rand_delay_reg;
    Vtop_vc_TestRandDelay__P2f     TOP__top__mem__rand_resp_delay1;
    Vtop_vc_EnResetReg__P20        TOP__top__mem__rand_resp_delay1__rand_delay_reg;
    Vtop_vc_Trace                  TOP__top__mem__vc_trace;
    Vtop_vc_TestRandDelaySinkFile__pi2 TOP__top__sink;
    Vtop_vc_TestRandDelay__P20     TOP__top__sink__msg_delay;
    Vtop_vc_EnResetReg__P20        TOP__top__sink__msg_delay__rand_delay_reg;
    Vtop_vc_TestSinkFile__P20_PBa  TOP__top__sink__sink;
    Vtop_vc_EnResetReg__P4_PBz2    TOP__top__sink__sink__index_reg;
    Vtop_vc_TestRandDelaySourceFile__pi1 TOP__top__src;
    Vtop_vc_TestRandDelay__P20     TOP__top__src__msg_delay;
    Vtop_vc_EnResetReg__P20        TOP__top__src__msg_delay__rand_delay_reg;
    Vtop_vc_TestSourceFile__P20_PBa TOP__top__src__src;
    Vtop_vc_EnResetReg__P4_PBz2    TOP__top__src__src__index_reg;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[7434];

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
