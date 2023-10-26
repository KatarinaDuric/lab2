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
#include "Vtop_lab2_proc_ProcAlt.h"
#include "Vtop_vc_TestRandDelaySourceFile__pi1.h"
#include "Vtop_vc_TestRandDelaySinkFile__pi2.h"
#include "Vtop_vc_TestRandDelayMem_2ports4B__pi3.h"
#include "Vtop_lab2_proc_tinyrv2_encoding_InstTasks.h"
#include "Vtop_lab2_proc_ProcAltCtrl.h"
#include "Vtop_lab2_proc_ProcAltDpath.h"
#include "Vtop_vc_TestSourceFile__P20_PBa.h"
#include "Vtop_vc_TestRandDelay__P20.h"
#include "Vtop_vc_TestSinkFile__P20_PBa.h"
#include "Vtop_lab2_proc_DropUnit__P2f.h"
#include "Vtop_vc_TestRandDelay__P4d.h"
#include "Vtop_vc_TestMem_2ports4B__P4000.h"
#include "Vtop_vc_TestRandDelay__P2f.h"
#include "Vtop_vc_MemReqMsg4BTrace.h"
#include "Vtop_vc_MemRespMsg4BTrace.h"
#include "Vtop_vc_Regfile_2r1w_zero.h"
#include "Vtop_lab2_proc_tinyrv2_encoding_InstUnpack.h"
#include "Vtop_lab2_proc_ProcDpathImmGen.h"
#include "Vtop_lab2_proc_ProcDpathAlu.h"
#include "Vtop_lab1_imul_IntMulAlt.h"
#include "Vtop_vc_Queue__Pz1_PB4d.h"
#include "Vtop_vc_Queue__Pz1_PB4d_PC1.h"
#include "Vtop_vc_Queue__Pz1_PB20_PC1.h"
#include "Vtop_vc_EnResetReg__P4_PBz2.h"
#include "Vtop_vc_EnResetReg__P20.h"
#include "Vtop_vc_EnResetReg__P20_PB1fc.h"
#include "Vtop_vc_Incrementer__P20_PB4.h"
#include "Vtop_vc_Mux4__P20.h"
#include "Vtop_vc_Mux3__P20.h"
#include "Vtop_vc_Adder__P20.h"
#include "Vtop_vc_Queue__Pz3_PB4d_PC1.h"
#include "Vtop_vc_MemReqMsgUnpack__pi4.h"
#include "Vtop_vc_MemRespMsgPack__pi5.h"
#include "Vtop_vc_Queue__Pz1_PB2f_PC1.h"
#include "Vtop_vc_Trace.h"
#include "Vtop_multiplier2.h"
#include "Vtop_vc_QueueCtrl__Pz1.h"
#include "Vtop_vc_QueueDpath__Pz1_PB4d.h"
#include "Vtop_vc_QueueCtrl1__Pz1.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB4d.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB20.h"
#include "Vtop_vc_Regfile_2r1w__P20_PB20.h"
#include "Vtop_vc_EqComparator__P20.h"
#include "Vtop_vc_QueueCtrl1__Pz3.h"
#include "Vtop_vc_QueueDpath1__Pz3_PB4d.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB2f.h"
#include "Vtop_vc_ResetReg.h"
#include "Vtop_adder.h"
#include "Vtop_left_shifter.h"
#include "Vtop_right_shifter.h"
#include "Vtop_vc_Mux2__P20.h"
#include "Vtop_vc_Regfile_1r1w__P4d.h"
#include "Vtop_vc_Mux2__P4d.h"
#include "Vtop_vc_EnReg__P4d.h"
#include "Vtop_vc_EnReg__P20.h"
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
    Vtop_lab2_proc_ProcAlt         TOP__top__DUT;
    Vtop_lab2_proc_ProcAltCtrl     TOP__top__DUT__ctrl;
    Vtop_lab2_proc_tinyrv2_encoding_InstUnpack TOP__top__DUT__ctrl__inst_unpack;
    Vtop_vc_Queue__Pz1_PB4d_PC1    TOP__top__DUT__dmem_queue;
    Vtop_vc_QueueCtrl1__Pz1        TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl;
    Vtop_vc_QueueDpath1__Pz1_PB4d  TOP__top__DUT__dmem_queue__genblk1__DOT__dpath;
    Vtop_vc_Mux2__P4d              TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux;
    Vtop_vc_EnReg__P4d             TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg;
    Vtop_vc_MemReqMsg4BTrace       TOP__top__DUT__dmem_reqstream_trace;
    Vtop_vc_Trace                  TOP__top__DUT__dmem_reqstream_trace__vc_trace;
    Vtop_vc_MemRespMsg4BTrace      TOP__top__DUT__dmem_respstream_trace;
    Vtop_vc_Trace                  TOP__top__DUT__dmem_respstream_trace__vc_trace;
    Vtop_lab2_proc_ProcAltDpath    TOP__top__DUT__dpath;
    Vtop_lab2_proc_ProcDpathAlu    TOP__top__DUT__dpath__alu;
    Vtop_vc_EqComparator__P20      TOP__top__DUT__dpath__alu__cond_eq_comp;
    Vtop_vc_EnResetReg__P20        TOP__top__DUT__dpath__br_target_reg_X;
    Vtop_vc_Mux3__P20              TOP__top__DUT__dpath__csrr_sel_mux_D;
    Vtop_vc_EnResetReg__P20        TOP__top__DUT__dpath__dmem_write_data_reg_X;
    Vtop_vc_EnResetReg__P20        TOP__top__DUT__dpath__ex_result_reg_M;
    Vtop_vc_Mux3__P20              TOP__top__DUT__dpath__ex_result_sel_mux_X;
    Vtop_lab2_proc_ProcDpathImmGen TOP__top__DUT__dpath__imm_gen_D;
    Vtop_lab1_imul_IntMulAlt       TOP__top__DUT__dpath__imul;
    Vtop_multiplier2               TOP__top__DUT__dpath__imul__multi;
    Vtop_adder                     TOP__top__DUT__dpath__imul__multi__add_mul_block;
    Vtop_left_shifter              TOP__top__DUT__dpath__imul__multi__ls_block;
    Vtop_right_shifter             TOP__top__DUT__dpath__imul__multi__rs_block;
    Vtop_vc_Trace                  TOP__top__DUT__dpath__imul__vc_trace;
    Vtop_vc_EnResetReg__P20        TOP__top__DUT__dpath__inst_D_reg;
    Vtop_lab2_proc_tinyrv2_encoding_InstUnpack TOP__top__DUT__dpath__inst_unpack;
    Vtop_vc_Mux4__P20              TOP__top__DUT__dpath__op1_byp_sel_mux_D;
    Vtop_vc_EnResetReg__P20        TOP__top__DUT__dpath__op1_reg_X;
    Vtop_vc_Mux2__P20              TOP__top__DUT__dpath__op1_sel_mux_D;
    Vtop_vc_Mux4__P20              TOP__top__DUT__dpath__op2_byp_sel_mux_D;
    Vtop_vc_EnResetReg__P20        TOP__top__DUT__dpath__op2_reg_X;
    Vtop_vc_Mux3__P20              TOP__top__DUT__dpath__op2_sel_mux_D;
    Vtop_vc_Incrementer__P20_PB4   TOP__top__DUT__dpath__pc_incr_F;
    Vtop_vc_Incrementer__P20_PB4   TOP__top__DUT__dpath__pc_incr_X;
    Vtop_vc_Adder__P20             TOP__top__DUT__dpath__pc_plus_imm_D;
    Vtop_vc_EnResetReg__P20        TOP__top__DUT__dpath__pc_reg_D;
    Vtop_vc_EnResetReg__P20_PB1fc  TOP__top__DUT__dpath__pc_reg_F;
    Vtop_vc_EnResetReg__P20        TOP__top__DUT__dpath__pc_reg_X;
    Vtop_vc_Mux4__P20              TOP__top__DUT__dpath__pc_sel_mux_F;
    Vtop_vc_Regfile_2r1w_zero      TOP__top__DUT__dpath__rf;
    Vtop_vc_Regfile_2r1w__P20_PB20 TOP__top__DUT__dpath__rf__rfile;
    Vtop_vc_EnResetReg__P20        TOP__top__DUT__dpath__stats_en_reg_W;
    Vtop_vc_EnResetReg__P20        TOP__top__DUT__dpath__wb_result_reg_W;
    Vtop_vc_Mux2__P20              TOP__top__DUT__dpath__wb_result_sel_mux_M;
    Vtop_vc_Queue__Pz1_PB4d        TOP__top__DUT__imem_queue;
    Vtop_vc_QueueCtrl__Pz1         TOP__top__DUT__imem_queue__genblk1__DOT__ctrl;
    Vtop_vc_ResetReg               TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg;
    Vtop_vc_ResetReg               TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg;
    Vtop_vc_ResetReg               TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg;
    Vtop_vc_QueueDpath__Pz1_PB4d   TOP__top__DUT__imem_queue__genblk1__DOT__dpath;
    Vtop_vc_Mux2__P4d              TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux;
    Vtop_vc_Regfile_1r1w__P4d      TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore;
    Vtop_vc_MemReqMsg4BTrace       TOP__top__DUT__imem_reqstream_trace;
    Vtop_vc_Trace                  TOP__top__DUT__imem_reqstream_trace__vc_trace;
    Vtop_lab2_proc_DropUnit__P2f   TOP__top__DUT__imem_respstream_drop_unit;
    Vtop_vc_MemRespMsg4BTrace      TOP__top__DUT__imem_respstream_trace;
    Vtop_vc_Trace                  TOP__top__DUT__imem_respstream_trace__vc_trace;
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
    std::atomic<uint32_t> __Vcoverage[11782];

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
