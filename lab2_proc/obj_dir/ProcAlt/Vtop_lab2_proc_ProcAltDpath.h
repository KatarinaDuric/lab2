// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB2_PROC_PROCALTDPATH_H_
#define VERILATED_VTOP_LAB2_PROC_PROCALTDPATH_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_lab1_imul_IntMulAlt;
class Vtop_lab2_proc_ProcDpathAlu;
class Vtop_lab2_proc_ProcDpathImmGen;
class Vtop_lab2_proc_tinyrv2_encoding_InstUnpack;
class Vtop_vc_Adder__P20;
class Vtop_vc_EnResetReg__P20;
class Vtop_vc_EnResetReg__P20_PB1fc;
class Vtop_vc_Incrementer__P20_PB4;
class Vtop_vc_Mux2__P20;
class Vtop_vc_Mux3__P20;
class Vtop_vc_Mux4__P20;
class Vtop_vc_Regfile_2r1w_zero;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab2_proc_ProcAltDpath final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_EnResetReg__P20_PB1fc* __PVT__pc_reg_F;
    Vtop_vc_Incrementer__P20_PB4* __PVT__pc_incr_F;
    Vtop_vc_Mux4__P20* __PVT__pc_sel_mux_F;
    Vtop_vc_EnResetReg__P20* __PVT__pc_reg_D;
    Vtop_vc_EnResetReg__P20* __PVT__inst_D_reg;
    Vtop_lab2_proc_tinyrv2_encoding_InstUnpack* __PVT__inst_unpack;
    Vtop_lab2_proc_ProcDpathImmGen* __PVT__imm_gen_D;
    Vtop_vc_Regfile_2r1w_zero* __PVT__rf;
    Vtop_vc_Mux3__P20* __PVT__csrr_sel_mux_D;
    Vtop_vc_Mux4__P20* __PVT__op1_byp_sel_mux_D;
    Vtop_vc_Mux4__P20* __PVT__op2_byp_sel_mux_D;
    Vtop_vc_Mux2__P20* __PVT__op1_sel_mux_D;
    Vtop_vc_Mux3__P20* __PVT__op2_sel_mux_D;
    Vtop_vc_Adder__P20* __PVT__pc_plus_imm_D;
    Vtop_lab1_imul_IntMulAlt* __PVT__imul;
    Vtop_vc_Mux3__P20* __PVT__ex_result_sel_mux_X;
    Vtop_vc_EnResetReg__P20* __PVT__pc_reg_X;
    Vtop_vc_EnResetReg__P20* __PVT__op1_reg_X;
    Vtop_vc_EnResetReg__P20* __PVT__op2_reg_X;
    Vtop_vc_EnResetReg__P20* __PVT__br_target_reg_X;
    Vtop_vc_EnResetReg__P20* __PVT__dmem_write_data_reg_X;
    Vtop_vc_Incrementer__P20_PB4* __PVT__pc_incr_X;
    Vtop_lab2_proc_ProcDpathAlu* __PVT__alu;
    Vtop_vc_EnResetReg__P20* __PVT__ex_result_reg_M;
    Vtop_vc_Mux2__P20* __PVT__wb_result_sel_mux_M;
    Vtop_vc_EnResetReg__P20* __PVT__wb_result_reg_W;
    Vtop_vc_EnResetReg__P20* __PVT__stats_en_reg_W;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__imem_respstream_drop,0,0);
        VL_IN8(__PVT__reg_en_F,0,0);
        VL_IN8(__PVT__pc_sel_F,1,0);
        VL_IN8(__PVT__reg_en_D,0,0);
        VL_IN8(__PVT__op1_sel_D,0,0);
        VL_IN8(__PVT__op2_sel_D,1,0);
        VL_IN8(__PVT__csrr_sel_D,1,0);
        VL_IN8(__PVT__imm_type_D,2,0);
        VL_IN8(__PVT__op1_byp_sel_D,1,0);
        VL_IN8(__PVT__op2_byp_sel_D,1,0);
        VL_IN8(__PVT__reg_en_X,0,0);
        VL_IN8(__PVT__alu_fn_X,3,0);
        VL_IN8(__PVT__ex_result_sel_X,1,0);
        VL_IN8(__PVT__imul_req_val_D,0,0);
        VL_IN8(__PVT__imul_resp_rdy_X,0,0);
        VL_OUT8(__PVT__imul_req_rdy_D,0,0);
        VL_OUT8(__PVT__imul_resp_val_X,0,0);
        VL_IN8(__PVT__reg_en_M,0,0);
        VL_IN8(__PVT__wb_result_sel_M,0,0);
        VL_IN8(__PVT__reg_en_W,0,0);
        VL_IN8(__PVT__rf_waddr_W,4,0);
        VL_IN8(__PVT__rf_wen_W,0,0);
        VL_IN8(__PVT__stats_en_wen_W,0,0);
        VL_OUT8(__PVT__br_cond_eq_X,0,0);
        VL_OUT8(__PVT__br_cond_lt_X,0,0);
        VL_OUT8(__PVT__br_cond_ltu_X,0,0);
        VL_OUT8(__PVT__stats_en,0,0);
        CData/*4:0*/ __PVT__inst_rd_D;
        CData/*4:0*/ __PVT__inst_rs1_D;
        CData/*4:0*/ __PVT__inst_rs2_D;
        CData/*0:0*/ __Vtogcov__clk;
        CData/*0:0*/ __Vtogcov__reset;
        CData/*0:0*/ __Vtogcov__imem_respstream_drop;
        CData/*0:0*/ __Vtogcov__reg_en_F;
        CData/*1:0*/ __Vtogcov__pc_sel_F;
        CData/*0:0*/ __Vtogcov__reg_en_D;
        CData/*0:0*/ __Vtogcov__op1_sel_D;
        CData/*1:0*/ __Vtogcov__op2_sel_D;
        CData/*1:0*/ __Vtogcov__csrr_sel_D;
        CData/*2:0*/ __Vtogcov__imm_type_D;
        CData/*1:0*/ __Vtogcov__op1_byp_sel_D;
        CData/*1:0*/ __Vtogcov__op2_byp_sel_D;
        CData/*0:0*/ __Vtogcov__reg_en_X;
        CData/*3:0*/ __Vtogcov__alu_fn_X;
        CData/*1:0*/ __Vtogcov__ex_result_sel_X;
        CData/*0:0*/ __Vtogcov__imul_req_val_D;
        CData/*0:0*/ __Vtogcov__imul_resp_rdy_X;
        CData/*0:0*/ __Vtogcov__imul_req_rdy_D;
        CData/*0:0*/ __Vtogcov__imul_resp_val_X;
        CData/*0:0*/ __Vtogcov__reg_en_M;
        CData/*0:0*/ __Vtogcov__wb_result_sel_M;
        CData/*0:0*/ __Vtogcov__reg_en_W;
        CData/*4:0*/ __Vtogcov__rf_waddr_W;
        CData/*0:0*/ __Vtogcov__rf_wen_W;
        CData/*0:0*/ __Vtogcov__stats_en_wen_W;
        CData/*0:0*/ __Vtogcov__br_cond_eq_X;
        CData/*0:0*/ __Vtogcov__br_cond_lt_X;
        CData/*0:0*/ __Vtogcov__br_cond_ltu_X;
        CData/*0:0*/ __Vtogcov__stats_en;
        CData/*4:0*/ __Vtogcov__inst_rd_D;
        CData/*4:0*/ __Vtogcov__inst_rs1_D;
        CData/*4:0*/ __Vtogcov__inst_rs2_D;
    };
    struct {
        VL_OUT(__PVT__imem_reqstream_msg_addr,31,0);
        VL_OUT(__PVT__dmem_reqstream_msg_addr,31,0);
        VL_OUT(__PVT__dmem_reqstream_msg_data,31,0);
        VL_IN(__PVT__dmem_respstream_msg_data,31,0);
        VL_IN(__PVT__mngr2proc_data,31,0);
        VL_OUT(__PVT__proc2mngr_data,31,0);
        VL_OUT(__PVT__inst_D,31,0);
        VL_IN(__PVT__core_id,31,0);
        IData/*31:0*/ __PVT__pc_F;
        IData/*31:0*/ __PVT__pc_next_F;
        IData/*31:0*/ __PVT__pc_plus4_F;
        IData/*31:0*/ __PVT__br_target_X;
        IData/*31:0*/ __PVT__jal_target_D;
        IData/*31:0*/ __PVT__jalr_target_X;
        IData/*31:0*/ __PVT__pc_D;
        IData/*31:0*/ __PVT__imm_D;
        IData/*31:0*/ __PVT__bypass_from_X;
        IData/*31:0*/ __PVT__bypass_from_M;
        IData/*31:0*/ __PVT__bypass_from_W;
        IData/*31:0*/ __Vcellinp__inst_D_reg__d;
        IData/*31:0*/ __PVT__rf_rdata0_D;
        IData/*31:0*/ __PVT__rf_rdata1_D;
        IData/*31:0*/ __PVT__rf_wdata_W;
        IData/*31:0*/ __PVT__op1_D;
        IData/*31:0*/ __PVT__op2_D;
        IData/*31:0*/ __PVT__csrr_data_D;
        IData/*31:0*/ __PVT__num_cores;
        IData/*31:0*/ __PVT__op1_byp_mux_out;
        IData/*31:0*/ __PVT__op2_byp_mux_out;
        IData/*31:0*/ __PVT__ostream_msg;
        IData/*31:0*/ __PVT__op1_X;
        IData/*31:0*/ __PVT__op2_X;
        IData/*31:0*/ __PVT__pc_X;
        IData/*31:0*/ __PVT__alu_result_X;
        IData/*31:0*/ __PVT__ex_result_X;
        IData/*31:0*/ __PVT__pc_plus4_X;
        IData/*31:0*/ __PVT__ex_result_M;
        IData/*31:0*/ __PVT__dmem_result_M;
        IData/*31:0*/ __PVT__wb_result_M;
        IData/*31:0*/ __PVT__wb_result_W;
        IData/*31:0*/ __PVT__stats_en_W;
        IData/*31:0*/ __Vtogcov__imem_reqstream_msg_addr;
        IData/*31:0*/ __Vtogcov__dmem_reqstream_msg_addr;
        IData/*31:0*/ __Vtogcov__dmem_reqstream_msg_data;
        IData/*31:0*/ __Vtogcov__dmem_respstream_msg_data;
        IData/*31:0*/ __Vtogcov__mngr2proc_data;
        IData/*31:0*/ __Vtogcov__proc2mngr_data;
        IData/*31:0*/ __Vtogcov__inst_D;
        IData/*31:0*/ __Vtogcov__core_id;
        IData/*31:0*/ __Vtogcov__pc_F;
        IData/*31:0*/ __Vtogcov__pc_next_F;
        IData/*31:0*/ __Vtogcov__pc_plus4_F;
        IData/*31:0*/ __Vtogcov__br_target_X;
        IData/*31:0*/ __Vtogcov__jal_target_D;
        IData/*31:0*/ __Vtogcov__jalr_target_X;
        IData/*31:0*/ __Vtogcov__pc_D;
        IData/*31:0*/ __Vtogcov__imm_D;
        IData/*31:0*/ __Vtogcov__bypass_from_X;
        IData/*31:0*/ __Vtogcov__bypass_from_M;
        IData/*31:0*/ __Vtogcov__bypass_from_W;
        IData/*31:0*/ __Vtogcov__rf_rdata0_D;
        IData/*31:0*/ __Vtogcov__rf_rdata1_D;
        IData/*31:0*/ __Vtogcov__rf_wdata_W;
        IData/*31:0*/ __Vtogcov__op1_D;
    };
    struct {
        IData/*31:0*/ __Vtogcov__op2_D;
        IData/*31:0*/ __Vtogcov__csrr_data_D;
        IData/*31:0*/ __Vtogcov__num_cores;
        IData/*31:0*/ __Vtogcov__op1_byp_mux_out;
        IData/*31:0*/ __Vtogcov__op2_byp_mux_out;
        IData/*31:0*/ __Vtogcov__ostream_msg;
        IData/*31:0*/ __Vtogcov__op1_X;
        IData/*31:0*/ __Vtogcov__op2_X;
        IData/*31:0*/ __Vtogcov__pc_X;
        IData/*31:0*/ __Vtogcov__alu_result_X;
        IData/*31:0*/ __Vtogcov__ex_result_X;
        IData/*31:0*/ __Vtogcov__pc_plus4_X;
        IData/*31:0*/ __Vtogcov__ex_result_M;
        IData/*31:0*/ __Vtogcov__dmem_result_M;
        IData/*31:0*/ __Vtogcov__wb_result_M;
        IData/*31:0*/ __Vtogcov__wb_result_W;
        IData/*31:0*/ __Vtogcov__stats_en_W;
        VL_IN64(__PVT__imem_respstream_msg,46,0);
        QData/*63:0*/ __PVT__istream_msg;
        QData/*46:0*/ __Vtogcov__imem_respstream_msg;
        QData/*63:0*/ __Vtogcov__istream_msg;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab2_proc_ProcAltDpath(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab2_proc_ProcAltDpath();
    VL_UNCOPYABLE(Vtop_lab2_proc_ProcAltDpath);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
