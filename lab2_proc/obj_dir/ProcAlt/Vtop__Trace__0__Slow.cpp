// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+3774,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3775,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2412,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2413,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1978,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3776,"mngr2proc_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3777,"mngr2proc_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2639,"mngr2proc_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3268,"proc2mngr_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3248,"proc2mngr_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2618,"proc2mngr_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+3699,"imem_reqstream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+2724,"imem_reqstream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2732,"imem_reqstream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+3445,"imem_respstream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declBit(c+3378,"imem_respstream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2672,"imem_respstream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+3622,"dmem_reqstream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+3568,"dmem_reqstream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3659,"dmem_reqstream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+3489,"dmem_respstream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declBit(c+3407,"dmem_respstream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3536,"dmem_respstream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3873,"core_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3249,"commit_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2853,"stats_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2796,"src_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2612,"snk_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1979,"mem_clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3874,"SINK_SOURCE_MAX",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3875,"MAX_DELAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+3876+i*1,"src_msgs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+3886+i*1,"snk_msgs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"idx",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3778,"fp",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+3779,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3896,"p_num_cores",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2414,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2512,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3780,"mngr2proc_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3781,"mngr2proc_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2640,"mngr2proc_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3269,"proc2mngr_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3250,"proc2mngr_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2619,"proc2mngr_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3702,"imem_reqstream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2725,"imem_reqstream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2733,"imem_reqstream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3447,"imem_respstream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3379,"imem_respstream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2673,"imem_respstream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3625,"dmem_reqstream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3569,"dmem_reqstream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3660,"dmem_reqstream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3491,"dmem_respstream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3408,"dmem_respstream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3537,"dmem_respstream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"core_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3251,"commit_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2854,"stats_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3283,"imem_queue_num_free_entries",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declArray(c+3602,"imem_reqstream_enq_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+3782,"imem_reqstream_enq_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2963,"imem_reqstream_enq_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3605,"imem_reqstream_enq_msg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3736,"imem_respstream_drop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+3449,"imem_respstream_drop_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declBit(c+3770,"imem_respstream_drop_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2663,"imem_respstream_drop_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3083,"dmem_queue_num_free_entries",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+3783,"dmem_reqstream_enq_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+3570,"dmem_reqstream_enq_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3084,"dmem_reqstream_enq_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3433,"dmem_reqstream_enq_msg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2943,"dmem_reqstream_enq_msg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3024,"proc2mngr_queue_num_free_entries",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2900,"proc2mngr_enq_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3252,"proc2mngr_enq_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3025,"proc2mngr_enq_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2698,"reg_en_F",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3514,"pc_sel_F",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+2664,"reg_en_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3159,"op1_sel_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3160,"op2_sel_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3161,"csrr_sel_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3162,"imm_type_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3476,"op1_byp_sel_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3477,"op2_byp_sel_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+3571,"reg_en_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2974,"alu_fn_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+2975,"ex_result_sel_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+2976,"dmem_reqstream_type_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+2641,"imul_req_val_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3275,"imul_resp_val_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3276,"imul_req_rdy_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3572,"imul_resp_rdy_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3538,"reg_en_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2977,"wb_result_sel_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3253,"reg_en_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2978,"rf_waddr_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+2979,"rf_wen_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2980,"stats_en_wen_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3163,"inst_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3365,"br_cond_eq_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3366,"br_cond_lt_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3367,"br_cond_ltu_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+2009,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declArray(c+2137,"temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+2265,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+2266,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3874,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2513,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3786,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2642,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3787,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2797,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2798,"src_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2643,"src_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2866,"src_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3874,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2416,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2514,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3254,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2620,"rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3270,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2613,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3385,"sink_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2614,"sink_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3442,"sink_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3898,"p_mem_nbytes",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3899,"p_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3896,"p_reset_to_x",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3899,"o",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"a",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"d",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3900,"c_req_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3901,"c_resp_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2417,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2515,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2516,"mem_clear",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2726,"memreq0_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2734,"memreq0_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3705,"memreq0_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3573,"memreq1_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3661,"memreq1_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3628,"memreq1_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3380,"memresp0_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2674,"memresp0_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3451,"memresp0_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3409,"memresp1_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3539,"memresp1_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3493,"memresp1_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+2735,"mem_memreq0_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3234,"mem_memreq0_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+2770,"mem_memreq0_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+3662,"mem_memreq1_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3315,"mem_memreq1_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+3741,"mem_memreq1_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+3235,"mem_memresp0_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2706,"mem_memresp0_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+3388,"mem_memresp0_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declBit(c+3316,"mem_memresp1_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3540,"mem_memresp1_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+3414,"mem_memresp1_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declBus(c+3902,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3903,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__tinyrv2__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__tinyrv2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2267,"rs1_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+2268,"rs2_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+2269,"rd_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declArray(c+2270,"csr_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 71,0);
    tracep->declBus(c+2273,"funct_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+2274,"rs1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+2275,"rs2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+2276,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+2277,"csr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+2278,"funct",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2418,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2566,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3788,"imem_reqstream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2964,"imem_reqstream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3771,"imem_respstream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2665,"imem_respstream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3737,"imem_respstream_drop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3574,"dmem_reqstream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3085,"dmem_reqstream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3410,"dmem_respstream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3541,"dmem_respstream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3789,"mngr2proc_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2644,"mngr2proc_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3255,"proc2mngr_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3026,"proc2mngr_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2699,"reg_en_F",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3515,"pc_sel_F",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+2666,"reg_en_D",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3164,"op1_sel_D",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3165,"op2_sel_D",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3166,"csrr_sel_D",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3167,"imm_type_D",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+3575,"reg_en_X",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2981,"alu_fn_X",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2982,"ex_result_sel_X",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+2983,"dmem_reqstream_type_X",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3478,"op1_byp_sel_D",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3479,"op2_byp_sel_D",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+2645,"imul_req_val_D",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3576,"imul_resp_rdy_X",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3277,"imul_req_rdy_D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3278,"imul_resp_val_X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3542,"reg_en_M",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2984,"wb_result_sel_M",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3256,"reg_en_W",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2985,"rf_waddr_W",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+2986,"rf_wen_W",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2987,"stats_en_wen_W",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3168,"inst_D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3368,"br_cond_eq_X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3369,"br_cond_lt_X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3370,"br_cond_ltu_X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3257,"commit_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2988,"val_F",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2989,"val_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2990,"val_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2991,"val_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2992,"val_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3772,"ostall_F",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3790,"ostall_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3791,"ostall_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3792,"ostall_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3258,"ostall_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2700,"stall_F",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2646,"stall_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3577,"stall_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3543,"stall_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3259,"stall_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3169,"osquash_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3793,"osquash_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3738,"squash_F",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3794,"squash_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3170,"pc_redirect_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3434,"pc_redirect_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3171,"pc_sel_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3435,"pc_sel_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+2701,"next_val_F",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3172,"inst_rd_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+3173,"inst_rs1_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+3174,"inst_rs2_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+3175,"inst_csr_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+3904,"n",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"y",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3906,"rx",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+3906,"r0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+3907,"rL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+3908,"br_x",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3908,"br_na",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"br_bne",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"br_beq",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3911,"br_blt",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3912,"br_bltu",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3913,"br_bge",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3914,"br_bgeu",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3915,"bm_x",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+3915,"bm_rf",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+3916,"bm_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+3917,"bm_csr",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+3918,"alu_x",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3918,"alu_add",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3919,"alu_sub",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3920,"alu_xor",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3921,"alu_and",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3922,"alu_or",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3923,"alu_srl",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3924,"alu_sll",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3925,"alu_add2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3926,"alu_slt",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3927,"alu_sltu",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3928,"alu_sra",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3929,"alu_cp0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3930,"alu_cp1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3908,"imm_x",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3908,"imm_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"imm_s",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"imm_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3911,"imm_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3912,"imm_j",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3915,"nr",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+3916,"ld",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+3917,"st",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+3904,"wm_x",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3904,"wm_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"wm_m",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+3176,"inst_val_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3177,"br_type_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+3178,"rs1_en_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3179,"rs2_en_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3180,"alu_fn_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+3181,"dmem_reqstream_type_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+3182,"wb_result_sel_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3183,"rf_wen_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3184,"csrr_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3185,"csrw_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3186,"proc2mngr_val_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3187,"mngr2proc_rdy_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3188,"stats_en_wen_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3189,"rf_waddr_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+3795,"ostall_mngr2proc_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3354,"ostall_waddr_X_rs1_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3480,"ostall_waddr_M_rs1_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3355,"ostall_waddr_X_rs2_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3481,"ostall_waddr_M_rs2_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3482,"ostall_hazard_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3356,"bypass_waddr_X_rs1_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3357,"bypass_waddr_X_rs2_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3483,"bypass_waddr_M_rs1_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3484,"bypass_waddr_M_rs2_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3358,"bypass_waddr_W_rs1_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3359,"bypass_waddr_W_rs2_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2667,"next_val_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2993,"inst_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2994,"wb_result_sel_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2995,"rf_wen_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2996,"rf_waddr_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+2997,"proc2mngr_val_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2998,"stats_en_wen_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2999,"br_type_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+3578,"next_val_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3000,"inst_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3001,"dmem_reqstream_type_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+3002,"rf_wen_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3003,"rf_waddr_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+3004,"proc2mngr_val_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3005,"stats_en_wen_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3544,"next_val_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3006,"inst_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3007,"proc2mngr_val_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3008,"rf_wen_pending_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3009,"stats_en_wen_pending_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3896,"p_num_cores",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2419,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2517,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3606,"imem_reqstream_msg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+3453,"imem_respstream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3436,"dmem_reqstream_msg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2944,"dmem_reqstream_msg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3495,"dmem_respstream_msg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3796,"mngr2proc_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2901,"proc2mngr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3739,"imem_respstream_drop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2702,"reg_en_F",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3516,"pc_sel_F",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+2668,"reg_en_D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3190,"op1_sel_D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3191,"op2_sel_D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3192,"csrr_sel_D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3193,"imm_type_D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+3485,"op1_byp_sel_D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3486,"op2_byp_sel_D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+3579,"reg_en_X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3010,"alu_fn_X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+3011,"ex_result_sel_X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+2647,"imul_req_val_D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3580,"imul_resp_rdy_X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3279,"imul_req_rdy_D",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3280,"imul_resp_val_X",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3545,"reg_en_M",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3012,"wb_result_sel_M",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3260,"reg_en_W",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3013,"rf_waddr_W",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+3014,"rf_wen_W",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3015,"stats_en_wen_W",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3194,"inst_D",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3371,"br_cond_eq_X",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3372,"br_cond_lt_X",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3373,"br_cond_ltu_X",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"core_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2855,"stats_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3931,"c_reset_vector",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"c_reset_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2949,"pc_F",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3607,"pc_next_F",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2950,"pc_plus4_F",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2946,"br_target_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3360,"jal_target_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3437,"jalr_target_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2969,"pc_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3195,"inst_rd_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+3196,"inst_rs1_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+3197,"inst_rs2_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+3198,"imm_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3518,"bypass_from_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3596,"bypass_from_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2902,"bypass_from_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3344,"rf_rdata0_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3345,"rf_rdata1_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2903,"rf_wdata_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3767,"op1_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3797,"op2_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3798,"csrr_data_D",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,"num_cores",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3692,"op1_byp_mux_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3693,"op2_byp_mux_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2679,"istream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+2835,"ostream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3226,"op1_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3230,"op2_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2882,"pc_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3438,"alu_result_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3519,"ex_result_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2883,"pc_plus4_X",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2879,"ex_result_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3496,"dmem_result_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3597,"wb_result_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2904,"wb_result_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2856,"stats_en_W",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__src__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__src__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3874,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2420,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2518,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2799,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2648,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2867,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2800,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3933,"c_index_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1980+i*1,"m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+3934+i*1,"m_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+2649,"index_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2868,"index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+2869,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1990,"index_max",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+2801,"reset_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1991,"data_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3799,"done_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2650,"go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("load__Vstatic__unnamedblk1 ");
    tracep->declBus(c+1992,"count",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2421,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2519,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2802,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2651,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2870,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3800,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2652,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3801,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3802,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2653,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2654,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3803,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2655,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3896,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3904,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+2656,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3804,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2422,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2520,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3261,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2621,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3271,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3386,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2615,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3443,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3805,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2622,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2623,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3806,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3807,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3896,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3904,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+2624,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3808,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__sink__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__sink__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3874,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_sim_mode",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2423,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2521,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3387,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2616,"rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3444,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2617,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3933,"c_index_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1993+i*1,"m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+2625,"index_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2858,"index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+2859,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+2003,"index_max",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+3809,"reset_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2004,"data_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3944,"done_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2626,"go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3810,"failed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3945,"verbose",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+2860,"m_curr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,"t",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("load__Vstatic__unnamedblk1 ");
    tracep->declBus(c+2005,"count",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_drop_unit__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_drop_unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3901,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2424,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2567,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3740,"drop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3455,"istream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3381,"istream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2675,"istream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3457,"ostream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3773,"ostream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2669,"ostream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3904,"c_state_pass",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"c_state_drop",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+3811,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2703,"next_state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2704,"istream_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay0__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3900,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2425,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2522,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2727,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2736,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3708,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2737,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3236,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2773,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3812,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2738,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2739,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3813,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3814,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3896,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3904,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+2740,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3815,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay1__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3900,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2426,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2523,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3581,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3663,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3631,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3664,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3317,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3744,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3816,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3665,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3666,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3817,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3818,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3896,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3904,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3667,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3819,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3898,"p_mem_nbytes",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3899,"p_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3899,"o",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"a",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"d",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3900,"c_req_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3901,"c_resp_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2427,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2524,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2525,"mem_clear",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2741,"memreq0_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3237,"memreq0_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2776,"memreq0_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3668,"memreq1_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3318,"memreq1_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3747,"memreq1_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3238,"memresp0_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2707,"memresp0_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3390,"memresp0_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3319,"memresp1_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3546,"memresp1_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3416,"memresp1_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3946,"c_physical_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3933,"c_data_byte_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"c_num_blocks",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3948,"c_physical_block_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3949,"c_block_offset_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3911,"c_amo_add",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3912,"c_amo_and",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3913,"c_amo_or",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3950,"c_req_type_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3899,"c_req_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"c_req_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3949,"c_req_len_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"c_req_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3950,"c_resp_type_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3899,"c_resp_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3949,"c_resp_len_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"c_resp_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2888,"memreq0_val_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2930,"memreq0_rdy_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+3045,"memreq0_msg_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+3096,"memreq1_val_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3108,"memreq1_rdy_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+3121,"memreq1_msg_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBus(c+3048,"memreq0_msg_type_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3049,"memreq0_msg_opaque_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3050,"memreq0_msg_addr_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3051,"memreq0_msg_len_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3052,"memreq0_msg_data_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3124,"memreq1_msg_type_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3125,"memreq1_msg_opaque_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3126,"memreq1_msg_addr_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3127,"memreq1_msg_len_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3128,"memreq1_msg_data_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3820,"data_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2006,"data_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3951,"addr_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2007,"physical_block_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+3952,"physical_byte_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
    tracep->declBus(c+2008,"block_offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3821,"wr_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3053,"memreq0_msg_len_modified_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3129,"memreq1_msg_len_modified_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3054,"physical_byte_addr0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
    tracep->declBus(c+3130,"physical_byte_addr1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
    tracep->declBus(c+3055,"physical_block_addr0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+3056,"block_offset0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3131,"physical_block_addr1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+3132,"block_offset1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3300,"read_block0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3301,"read_data0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3329,"read_block1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3330,"read_data1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3822,"write_en0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3823,"write_en1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3824,"amo_en0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3825,"amo_en1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3826,"wr0_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3827,"wr1_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBit(c+3828,"memory_cleared",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+3302,"memresp0_msg_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declQuad(c+3331,"memresp1_msg_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declBus(c+3953,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3954,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("dump__Vstatic__unnamedblk1 ");
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay0__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3901,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2428,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2526,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3239,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2708,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3392,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3382,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2676,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3459,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3829,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2709,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2710,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3830,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3831,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3896,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3904,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+2711,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3832,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay1__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3901,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2429,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2527,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3320,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3547,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3418,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3411,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3548,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3497,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3833,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3549,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3550,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3834,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3551,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3896,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3904,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3552,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3835,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_reqstream_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_reqstream_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2430,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2528,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2728,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2742,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3711,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3714,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3715,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3716,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3717,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3718,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3900,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3955,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+3956,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4084,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4085,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_reqstream_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_reqstream_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2431,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2529,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3582,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3669,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3634,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3637,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3638,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3639,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3640,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3641,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3900,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4086,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4087,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4215,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4216,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2432,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2530,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2743,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3240,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2779,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+2782,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2783,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+2784,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2785,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+2786,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3900,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4217,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4218,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4346,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4347,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2433,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2531,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3670,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3321,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3750,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3753,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3754,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3755,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3756,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3757,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3900,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4348,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4349,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4477,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4478,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memreq0_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memreq0_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2434,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2532,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2729,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2744,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3719,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3722,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3723,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3724,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3725,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3726,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3900,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4479,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4480,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4608,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4609,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memreq1_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memreq1_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2435,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2533,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3583,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3671,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3642,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3645,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3646,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3647,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3648,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3649,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3900,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4610,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4611,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4739,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4740,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2436,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2534,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3383,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2677,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3461,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3463,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3464,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3465,"test",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3466,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3467,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3901,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4741,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4742,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4870,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4871,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_respstream_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_respstream_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2437,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2535,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3412,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3553,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3499,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3501,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3502,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3503,"test",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3504,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3505,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3901,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4872,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4873,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+5001,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5002,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2438,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2536,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3241,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2712,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3394,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3396,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3397,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3398,"test",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3399,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3400,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3901,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+5003,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+5004,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+5132,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5133,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2439,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2537,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3322,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3554,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3420,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3422,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3423,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3424,"test",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3425,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3426,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3901,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+5134,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+5135,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+5263,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5264,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memresp0_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memresp0_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2440,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2538,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3384,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2678,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3468,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3470,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3471,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3472,"test",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3473,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3474,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3901,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+5265,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+5266,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+5394,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5395,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memresp1_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memresp1_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2441,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2539,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3413,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3555,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3506,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3508,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3509,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3510,"test",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3511,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3512,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3901,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3908,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3909,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3910,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+5396,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+5397,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+5525,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5526,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__rf__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__rf__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2442,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2540,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3199,"rd_addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3346,"rd_data0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3200,"rd_addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3347,"rd_data1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3016,"wr_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3017,"wr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+2905,"wr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3348,"rf_read_data0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3349,"rf_read_data1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__ctrl__inst_unpack__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__ctrl__inst_unpack__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3201,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3202,"opcode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+3203,"rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3204,"rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3205,"rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3206,"funct3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+5527,"funct7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+3207,"csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__inst_unpack__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__inst_unpack__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3208,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3209,"opcode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+3210,"rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3211,"rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3212,"rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3213,"funct3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+5528,"funct7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+3214,"csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imm_gen_D__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imm_gen_D__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3215,"imm_type",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+3216,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3217,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__alu__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__alu__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3227,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3231,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3018,"fn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+3439,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3374,"ops_eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3375,"ops_lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3376,"ops_ltu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2443,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2541,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2657,"istream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3281,"istream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+2681,"istream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+3282,"ostream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3584,"ostream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2836,"ostream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3836,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3837,"new_state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+2837,"req_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2838,"resp_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2658,"in_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+5529,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+5657,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5658,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3900,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3949,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3896,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2444,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2542,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3838,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2965,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3608,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2730,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2745,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3727,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3284,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+2746,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3285,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2955,"write_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3037,"read_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3900,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3896,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2445,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2543,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3585,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3086,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3524,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3586,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3672,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3650,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3087,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+3673,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3088,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3897,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3896,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2446,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2544,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3262,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3027,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2906,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3263,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2627,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3272,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3028,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+2628,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3029,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__src__index_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__src__index_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3933,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3918,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2447,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2568,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2871,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2872,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+2659,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__sink__index_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__sink__index_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3933,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3918,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2448,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2569,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2861,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2862,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+2629,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2449,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2570,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3839,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2660,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2661,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2450,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2571,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3840,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2630,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2631,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_reg_D__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_reg_D__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2451,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2572,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2970,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3841,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2670,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__inst_D_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__inst_D_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2452,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2573,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3218,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3475,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2671,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_reg_X__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_reg_X__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2453,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2574,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2884,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2971,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3587,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op1_reg_X__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op1_reg_X__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2454,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2575,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3228,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3768,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3588,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op2_reg_X__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op2_reg_X__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2455,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2576,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3232,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3842,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3589,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__br_target_reg_X__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__br_target_reg_X__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2456,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2577,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2947,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3361,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3590,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__dmem_write_data_reg_X__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__dmem_write_data_reg_X__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2457,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2578,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2945,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3694,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3591,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__ex_result_reg_M__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__ex_result_reg_M__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2458,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2579,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2880,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3520,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3556,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__wb_result_reg_W__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__wb_result_reg_W__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2459,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2580,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2907,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3598,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3264,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__stats_en_reg_W__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__stats_en_reg_W__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2460,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2581,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2857,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2908,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3019,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay0__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay0__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2461,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2582,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3843,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2747,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2748,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay1__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay1__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2462,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2583,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3844,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3674,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3675,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay0__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay0__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2463,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2584,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3845,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2713,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2714,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay1__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay1__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2464,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2585,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3846,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3557,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3558,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_reg_F__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_reg_F__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+5659,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2465,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2586,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2951,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3611,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2705,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_incr_F__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_incr_F__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3933,"p_inc_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2952,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2953,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_incr_X__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_incr_X__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3933,"p_inc_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2885,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2886,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_sel_mux_F__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_sel_mux_F__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2954,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2948,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3362,"in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3440,"in3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3517,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3612,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op1_byp_sel_mux_D__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op1_byp_sel_mux_D__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3350,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3521,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3599,"in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2909,"in3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3487,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3695,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op2_byp_sel_mux_D__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op2_byp_sel_mux_D__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3351,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3522,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3600,"in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2910,"in3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3488,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3696,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__csrr_sel_mux_D__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__csrr_sel_mux_D__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3847,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3219,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3848,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op2_sel_mux_D__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op2_sel_mux_D__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3697,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3220,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3849,"in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3221,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3850,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__ex_result_sel_mux_X__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__ex_result_sel_mux_X__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2839,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2887,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3441,"in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3020,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3523,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_plus_imm_D__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_plus_imm_D__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2972,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3222,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3363,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3364,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3919,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3900,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3896,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2466,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2545,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2749,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3242,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2787,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2889,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2931,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3057,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+2890,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+2750,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2891,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3919,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3900,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3896,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2467,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2546,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3676,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3323,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3758,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3097,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3109,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3133,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3098,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+3677,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3099,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_msg_unpack__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_msg_unpack__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3899,"p_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3900,"c_req_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3950,"c_req_type_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3899,"c_req_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"c_req_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3949,"c_req_len_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"c_req_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+3060,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3063,"type_",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+3064,"opaque",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+3065,"addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3066,"len",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3067,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+3068,"req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_msg_unpack__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_msg_unpack__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3899,"p_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3900,"c_req_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3950,"c_req_type_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3899,"c_req_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"c_req_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3949,"c_req_len_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"c_req_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+3136,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3139,"type_",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+3140,"opaque",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+3141,"addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3142,"len",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3143,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+3144,"req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_msg_pack__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_msg_pack__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3899,"p_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3901,"c_resp_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3950,"c_resp_type_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3899,"c_resp_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"c_resp_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3949,"c_resp_len_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"c_resp_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+3304,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3071,"type_",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+3072,"opaque",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+3073,"len",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3306,"data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"test",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declQuad(c+3851,"resp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_msg_pack__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_msg_pack__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3899,"p_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3901,"c_resp_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3950,"c_resp_type_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3899,"c_resp_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"c_resp_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3949,"c_resp_len_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"c_resp_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+3333,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3147,"type_",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+3148,"opaque",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+3149,"len",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3335,"data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"test",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declQuad(c+3853,"resp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3901,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3896,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2468,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2547,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2892,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2932,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3307,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3243,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2715,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3401,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+2933,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+2716,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2934,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3901,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3896,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2548,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3100,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3110,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3336,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3324,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3559,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3427,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3111,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+3560,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3112,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2470,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2587,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5660,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5661,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5662,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5663,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+35,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+12,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3855,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+163,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2471,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2588,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2279,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+2280,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+2281,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+2282,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+2283,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+2411,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3856,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+164,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_reqstream_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_reqstream_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2472,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2589,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5664,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5665,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5666,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5667,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+165,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+13,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3857,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+293,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2473,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2590,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5668,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5669,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5670,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5671,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+294,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+14,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3858,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+422,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2474,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2591,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5672,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5673,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5674,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5675,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+423,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+15,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3859,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+551,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_respstream_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_respstream_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2475,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2592,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5676,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5677,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5678,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5679,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+552,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+16,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3860,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+680,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2476,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2593,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5680,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5681,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5682,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5683,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+681,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+17,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3861,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+809,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2477,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2594,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5684,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5685,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5686,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5687,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+810,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+18,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3862,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+938,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2478,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2595,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5688,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5689,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5690,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5691,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+939,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+19,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3863,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1067,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2479,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2596,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5692,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5693,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5694,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5695,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1068,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+20,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3864,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1196,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2480,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2597,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5696,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5697,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5698,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5699,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1197,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+21,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3865,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1325,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memreq0_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memreq0_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2481,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2598,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5700,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5701,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5702,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5703,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1326,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+22,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3866,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1454,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memreq1_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memreq1_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2482,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2599,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5704,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5705,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5706,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5707,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1455,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+23,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3867,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1583,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memresp0_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memresp0_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2483,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2600,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5708,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5709,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5710,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5711,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1584,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+24,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3868,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1712,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memresp1_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memresp1_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2484,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2601,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5712,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5713,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5714,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5715,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1713,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+25,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3869,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1841,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2485,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2602,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5716,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5717,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5718,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+5719,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3931,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3947,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1842,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+26,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3870,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1970,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__multi__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__multi__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2486,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2549,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2662,"istream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2840,"istream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+2683,"istream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+2841,"ostream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3592,"ostream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2842,"ostream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2685,"req_msg_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2686,"req_msg_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2843,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+2844,"a_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2845,"b_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2687,"a_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2688,"b_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2689,"msg_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3949,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3896,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2487,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2550,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3871,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2966,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2731,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2751,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2752,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2956,"write_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+3038,"read_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBit(c+3286,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3287,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+2957,"enq_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+2753,"enq_ptr_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3039,"deq_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+2754,"deq_ptr_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBit(c+2967,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2755,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3904,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+3872,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2756,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3288,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1971,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2757,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3040,"deq_ptr_plus1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3041,"deq_ptr_inc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+2958,"enq_ptr_plus1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+2959,"enq_ptr_inc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3900,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3949,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3896,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2488,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2551,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2758,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3289,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2960,"write_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+3042,"read_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declArray(c+3613,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3730,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3291,"read_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2489,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2603,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3593,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3089,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3594,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3678,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3679,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3090,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3091,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3092,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3680,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3904,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+3595,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3681,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3093,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1972,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3682,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2490,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2604,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3265,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3030,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3266,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2632,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2633,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3031,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3032,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3033,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2634,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3904,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+3267,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2635,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3034,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1973,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2636,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2491,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2605,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2893,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2935,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3244,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2717,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2718,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2936,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2937,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2938,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2719,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3904,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+3245,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2720,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2939,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1974,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2721,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2492,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2606,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3101,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3113,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3325,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3561,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3562,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3114,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3115,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3116,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3563,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3904,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3905,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+3326,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3564,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3117,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1975,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3565,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3900,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2493,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2552,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3683,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3094,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3527,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3653,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+2921,"qstore",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3897,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2494,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2553,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2637,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3035,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2911,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3273,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2863,"qstore",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__rf__rfile__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__rf__rfile__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3897,"p_num_entries",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+5720,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2495,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2554,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3223,"read_addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3352,"read_data0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3224,"read_addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3353,"read_data1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3021,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3022,"write_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+2912,"write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2803+i*1,"rfile",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__alu__cond_eq_comp__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__alu__cond_eq_comp__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3229,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3233,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3377,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3919,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2496,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2607,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2759,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3246,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2894,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2940,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2760,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2895,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2896,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2897,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2761,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3905,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3904,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+2762,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3247,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2898,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2763,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1976,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3919,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2497,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2608,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3684,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3327,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3102,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3118,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3685,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3103,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3104,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3105,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3686,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3905,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3904,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+3687,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3328,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3106,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3688,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1977,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3919,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3900,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2498,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2555,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2764,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2899,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2790,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3074,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3077,"qstore",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3919,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3900,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2499,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2556,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3689,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3107,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3761,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3150,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3153,"qstore",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3901,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2500,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2557,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2722,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2941,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3309,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+3403,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+2873,"qstore",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3920,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3901,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2501,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2558,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3566,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3119,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3338,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+3429,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+2915,"qstore",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3896,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2502,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2609,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2961,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+2765,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3896,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2503,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2610,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3043,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+2766,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3896,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3932,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2504,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2611,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2968,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+2767,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__multi__add_mul_block__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__multi__add_mul_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2690,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2846,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2691,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__multi__ls_block__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__multi__ls_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2692,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2693,"shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2694,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__multi__rs_block__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__multi__rs_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2695,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2696,"shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2697,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2864,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2913,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3036,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3274,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op1_sel_mux_D__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op1_sel_mux_D__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3698,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2973,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3225,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3769,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__wb_result_sel_mux_M__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__wb_result_sel_mux_M__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2881,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3513,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3023,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3601,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3900,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3949,"p_num_entries",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3896,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2505,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2559,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3044,"read_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declArray(c+3294,"read_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2768,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2962,"write_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declArray(c+3616,"write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+2847+i*3,"rfile",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 76,0);
    }
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3900,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+3297,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3619,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3290,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3733,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3900,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+2924,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3530,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3095,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3656,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3900,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2506,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2560,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2927,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3533,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3690,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3900,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2507,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2561,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3080,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+2793,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2769,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3900,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2508,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2562,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3156,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3764,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3691,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3897,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2509,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2563,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2865,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2914,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2638,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3901,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2510,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2564,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+2875,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+3311,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+2723,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3901,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2511,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2565,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+2917,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+3340,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3567,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3901,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+2877,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+3313,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+2942,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3405,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3901,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+2919,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+3342,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3120,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3431,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("top ");
    Vtop___024root__trace_init_sub__TOP__top__0(vlSelf, tracep);
    tracep->pushNamePrefix("DUT ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__0(vlSelf, tracep);
    tracep->pushNamePrefix("ctrl ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__ctrl__0(vlSelf, tracep);
    tracep->pushNamePrefix("inst_unpack ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__ctrl__inst_unpack__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dmem_queue ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__0(vlSelf, tracep);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("ctrl ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpath ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__0(vlSelf, tracep);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("bypass_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("qstore_reg ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("dmem_reqstream_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_reqstream_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dmem_respstream_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_respstream_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_respstream_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dpath ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__0(vlSelf, tracep);
    tracep->pushNamePrefix("alu ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__alu__0(vlSelf, tracep);
    tracep->pushNamePrefix("cond_eq_comp ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__alu__cond_eq_comp__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("br_target_reg_X ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__br_target_reg_X__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrr_sel_mux_D ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__csrr_sel_mux_D__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dmem_write_data_reg_X ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__dmem_write_data_reg_X__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_result_reg_M ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__ex_result_reg_M__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_result_sel_mux_X ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__ex_result_sel_mux_X__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_gen_D ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imm_gen_D__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imul ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__0(vlSelf, tracep);
    tracep->pushNamePrefix("multi ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__multi__0(vlSelf, tracep);
    tracep->pushNamePrefix("add_mul_block ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__multi__add_mul_block__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ls_block ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__multi__ls_block__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs_block ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__multi__rs_block__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__imul__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_D_reg ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__inst_D_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_unpack ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__inst_unpack__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op1_byp_sel_mux_D ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op1_byp_sel_mux_D__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op1_reg_X ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op1_reg_X__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op1_sel_mux_D ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op1_sel_mux_D__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op2_byp_sel_mux_D ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op2_byp_sel_mux_D__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op2_reg_X ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op2_reg_X__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op2_sel_mux_D ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__op2_sel_mux_D__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_incr_F ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_incr_F__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_incr_X ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_incr_X__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_plus_imm_D ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_plus_imm_D__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_D ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_reg_D__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_F ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_reg_F__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_X ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_reg_X__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_sel_mux_F ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__pc_sel_mux_F__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rf ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__rf__0(vlSelf, tracep);
    tracep->pushNamePrefix("rfile ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__rf__rfile__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stats_en_reg_W ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__stats_en_reg_W__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_result_reg_W ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__wb_result_reg_W__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_result_sel_mux_M ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__dpath__wb_result_sel_mux_M__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imem_queue ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__0(vlSelf, tracep);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("ctrl ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0(vlSelf, tracep);
    tracep->pushNamePrefix("deq_ptr_reg ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("enq_ptr_reg ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_reg ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dpath ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0(vlSelf, tracep);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("bypass_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("qstore ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("imem_reqstream_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_reqstream_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_reqstream_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imem_respstream_drop_unit ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_drop_unit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem_respstream_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("proc2mngr_queue ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__0(vlSelf, tracep);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("ctrl ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpath ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0(vlSelf, tracep);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("bypass_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("qstore_reg ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("tinyrv2 ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__tinyrv2__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    Vtop___024root__trace_init_sub__TOP__top__mem__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__0(vlSelf, tracep);
    tracep->pushNamePrefix("memreq0_msg_unpack ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_msg_unpack__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memreq0_queue ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__0(vlSelf, tracep);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("ctrl ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpath ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__0(vlSelf, tracep);
    tracep->pushNamePrefix("qstore_reg ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("memreq0_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memreq1_msg_unpack ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_msg_unpack__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memreq1_queue ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__0(vlSelf, tracep);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("ctrl ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpath ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__0(vlSelf, tracep);
    tracep->pushNamePrefix("qstore_reg ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("memreq1_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memresp0_msg_pack ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_msg_pack__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memresp0_queue ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__0(vlSelf, tracep);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("ctrl ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpath ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0(vlSelf, tracep);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("bypass_mux ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("qstore_reg ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("memresp0_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memresp1_msg_pack ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_msg_pack__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memresp1_queue ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__0(vlSelf, tracep);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("ctrl ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpath ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0(vlSelf, tracep);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("bypass_mux ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("qstore_reg ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("memresp1_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__mem__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memreq0_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__memreq0_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__memreq0_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memreq1_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__memreq1_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__memreq1_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memresp0_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__memresp0_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__memresp0_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memresp1_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__memresp1_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__memresp1_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rand_req_delay0 ");
    Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay0__0(vlSelf, tracep);
    tracep->pushNamePrefix("rand_delay_reg ");
    Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay0__rand_delay_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rand_req_delay1 ");
    Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay1__0(vlSelf, tracep);
    tracep->pushNamePrefix("rand_delay_reg ");
    Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay1__rand_delay_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rand_resp_delay0 ");
    Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay0__0(vlSelf, tracep);
    tracep->pushNamePrefix("rand_delay_reg ");
    Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay0__rand_delay_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rand_resp_delay1 ");
    Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay1__0(vlSelf, tracep);
    tracep->pushNamePrefix("rand_delay_reg ");
    Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay1__rand_delay_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__mem__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink ");
    Vtop___024root__trace_init_sub__TOP__top__sink__0(vlSelf, tracep);
    tracep->pushNamePrefix("msg_delay ");
    Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__0(vlSelf, tracep);
    tracep->pushNamePrefix("rand_delay_reg ");
    Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__rand_delay_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink ");
    Vtop___024root__trace_init_sub__TOP__top__sink__sink__0(vlSelf, tracep);
    tracep->pushNamePrefix("index_reg ");
    Vtop___024root__trace_init_sub__TOP__top__sink__sink__index_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("src ");
    Vtop___024root__trace_init_sub__TOP__top__src__0(vlSelf, tracep);
    tracep->pushNamePrefix("msg_delay ");
    Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__0(vlSelf, tracep);
    tracep->pushNamePrefix("rand_delay_reg ");
    Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__rand_delay_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("src ");
    Vtop___024root__trace_init_sub__TOP__top__src__src__0(vlSelf, tracep);
    tracep->pushNamePrefix("index_reg ");
    Vtop___024root__trace_init_sub__TOP__top__src__src__index_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__top.__PVT__idx),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__top__DUT__dpath.__PVT__core_id),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__top__src__msg_delay.__PVT__max_delay),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__top__sink__msg_delay.__PVT__max_delay),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__top__sink__sink.__PVT__t),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__max_delay),32);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__max_delay),32);
    bufp->fullIData(oldp+8,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__max_delay),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__max_delay),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__in1),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__in2),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+20,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+23,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__top__mem__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__top__DUT.__PVT__core_id),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__top__src.__PVT__max_delay),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__top__sink.__PVT__max_delay),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__top__mem.__PVT__max_delay),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__top__DUT__dpath.__PVT__num_cores),32);
    bufp->fullBit(oldp+32,(vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__cin));
    bufp->fullCData(oldp+33,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__test),2);
    bufp->fullCData(oldp+34,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__test),2);
    bufp->fullWData(oldp+35,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+163,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__level),4);
    bufp->fullCData(oldp+164,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+165,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+293,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+294,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+422,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+423,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+551,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+552,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+680,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+681,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+809,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+810,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+938,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+939,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1067,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1068,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1196,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1197,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1325,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1326,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1454,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1455,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1583,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1584,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1712,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1713,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1841,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1842,(vlSymsp->TOP__top__mem__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1970,(vlSymsp->TOP__top__mem__vc_trace.__PVT__level),4);
    bufp->fullBit(oldp+1971,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+1972,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+1973,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+1974,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+1975,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+1976,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullBit(oldp+1977,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullBit(oldp+1978,(vlSymsp->TOP__top.__PVT__reset));
    bufp->fullBit(oldp+1979,(vlSymsp->TOP__top.__PVT__mem_clear));
    bufp->fullIData(oldp+1980,(vlSymsp->TOP__top__src__src.__PVT__m[0]),32);
    bufp->fullIData(oldp+1981,(vlSymsp->TOP__top__src__src.__PVT__m[1]),32);
    bufp->fullIData(oldp+1982,(vlSymsp->TOP__top__src__src.__PVT__m[2]),32);
    bufp->fullIData(oldp+1983,(vlSymsp->TOP__top__src__src.__PVT__m[3]),32);
    bufp->fullIData(oldp+1984,(vlSymsp->TOP__top__src__src.__PVT__m[4]),32);
    bufp->fullIData(oldp+1985,(vlSymsp->TOP__top__src__src.__PVT__m[5]),32);
    bufp->fullIData(oldp+1986,(vlSymsp->TOP__top__src__src.__PVT__m[6]),32);
    bufp->fullIData(oldp+1987,(vlSymsp->TOP__top__src__src.__PVT__m[7]),32);
    bufp->fullIData(oldp+1988,(vlSymsp->TOP__top__src__src.__PVT__m[8]),32);
    bufp->fullIData(oldp+1989,(vlSymsp->TOP__top__src__src.__PVT__m[9]),32);
    bufp->fullCData(oldp+1990,(vlSymsp->TOP__top__src__src.__PVT__index_max),4);
    bufp->fullIData(oldp+1991,(vlSymsp->TOP__top__src__src.__PVT__data_data),32);
    bufp->fullIData(oldp+1992,(vlSymsp->TOP__top__src__src.__PVT__load__Vstatic__unnamedblk1__DOT__count),32);
    bufp->fullIData(oldp+1993,(vlSymsp->TOP__top__sink__sink.__PVT__m[0]),32);
    bufp->fullIData(oldp+1994,(vlSymsp->TOP__top__sink__sink.__PVT__m[1]),32);
    bufp->fullIData(oldp+1995,(vlSymsp->TOP__top__sink__sink.__PVT__m[2]),32);
    bufp->fullIData(oldp+1996,(vlSymsp->TOP__top__sink__sink.__PVT__m[3]),32);
    bufp->fullIData(oldp+1997,(vlSymsp->TOP__top__sink__sink.__PVT__m[4]),32);
    bufp->fullIData(oldp+1998,(vlSymsp->TOP__top__sink__sink.__PVT__m[5]),32);
    bufp->fullIData(oldp+1999,(vlSymsp->TOP__top__sink__sink.__PVT__m[6]),32);
    bufp->fullIData(oldp+2000,(vlSymsp->TOP__top__sink__sink.__PVT__m[7]),32);
    bufp->fullIData(oldp+2001,(vlSymsp->TOP__top__sink__sink.__PVT__m[8]),32);
    bufp->fullIData(oldp+2002,(vlSymsp->TOP__top__sink__sink.__PVT__m[9]),32);
    bufp->fullCData(oldp+2003,(vlSymsp->TOP__top__sink__sink.__PVT__index_max),4);
    bufp->fullIData(oldp+2004,(vlSymsp->TOP__top__sink__sink.__PVT__data_data),32);
    bufp->fullIData(oldp+2005,(vlSymsp->TOP__top__sink__sink.__PVT__load__Vstatic__unnamedblk1__DOT__count),32);
    bufp->fullIData(oldp+2006,(vlSymsp->TOP__top__mem__mem.__PVT__data_address),32);
    bufp->fullSData(oldp+2007,(vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr),12);
    bufp->fullCData(oldp+2008,(vlSymsp->TOP__top__mem__mem.__PVT__block_offset),2);
    bufp->fullWData(oldp+2009,(vlSymsp->TOP__top__DUT.__PVT__str),4096);
    bufp->fullWData(oldp+2137,(vlSymsp->TOP__top__DUT.__PVT__temp),4096);
    bufp->fullIData(oldp+2265,(vlSymsp->TOP__top__DUT.__PVT__idx0),32);
    bufp->fullIData(oldp+2266,(vlSymsp->TOP__top__DUT.__PVT__idx1),32);
    bufp->fullIData(oldp+2267,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str),24);
    bufp->fullIData(oldp+2268,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str),24);
    bufp->fullIData(oldp+2269,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str),24);
    bufp->fullWData(oldp+2270,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr_str),72);
    bufp->fullSData(oldp+2273,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__funct_str),16);
    bufp->fullCData(oldp+2274,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1),5);
    bufp->fullCData(oldp+2275,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2),5);
    bufp->fullCData(oldp+2276,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd),5);
    bufp->fullSData(oldp+2277,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr),12);
    bufp->fullCData(oldp+2278,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__funct),7);
    bufp->fullIData(oldp+2279,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+2280,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+2281,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+2282,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1),32);
    bufp->fullWData(oldp+2283,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__storage),4096);
    bufp->fullIData(oldp+2411,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__cycles_next),32);
    bufp->fullBit(oldp+2412,(vlSymsp->TOP__top.clk));
    bufp->fullBit(oldp+2413,(vlSymsp->TOP__top.linetrace));
    bufp->fullBit(oldp+2414,(vlSymsp->TOP__top__DUT.__PVT__clk));
    bufp->fullBit(oldp+2415,(vlSymsp->TOP__top__src.__PVT__clk));
    bufp->fullBit(oldp+2416,(vlSymsp->TOP__top__sink.__PVT__clk));
    bufp->fullBit(oldp+2417,(vlSymsp->TOP__top__mem.__PVT__clk));
    bufp->fullBit(oldp+2418,(vlSymsp->TOP__top__DUT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2419,(vlSymsp->TOP__top__DUT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2420,(vlSymsp->TOP__top__src__src.__PVT__clk));
    bufp->fullBit(oldp+2421,(vlSymsp->TOP__top__src__msg_delay.__PVT__clk));
    bufp->fullBit(oldp+2422,(vlSymsp->TOP__top__sink__msg_delay.__PVT__clk));
    bufp->fullBit(oldp+2423,(vlSymsp->TOP__top__sink__sink.__PVT__clk));
    bufp->fullBit(oldp+2424,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__clk));
    bufp->fullBit(oldp+2425,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__clk));
    bufp->fullBit(oldp+2426,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__clk));
    bufp->fullBit(oldp+2427,(vlSymsp->TOP__top__mem__mem.__PVT__clk));
    bufp->fullBit(oldp+2428,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__clk));
    bufp->fullBit(oldp+2429,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__clk));
    bufp->fullBit(oldp+2430,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__clk));
    bufp->fullBit(oldp+2431,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__clk));
    bufp->fullBit(oldp+2432,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__clk));
    bufp->fullBit(oldp+2433,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__clk));
    bufp->fullBit(oldp+2434,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__clk));
    bufp->fullBit(oldp+2435,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__clk));
    bufp->fullBit(oldp+2436,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__clk));
    bufp->fullBit(oldp+2437,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__clk));
    bufp->fullBit(oldp+2438,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__clk));
    bufp->fullBit(oldp+2439,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__clk));
    bufp->fullBit(oldp+2440,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__clk));
    bufp->fullBit(oldp+2441,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__clk));
    bufp->fullBit(oldp+2442,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__clk));
    bufp->fullBit(oldp+2443,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__clk));
    bufp->fullBit(oldp+2444,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__clk));
    bufp->fullBit(oldp+2445,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__clk));
    bufp->fullBit(oldp+2446,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__clk));
    bufp->fullBit(oldp+2447,(vlSymsp->TOP__top__src__src__index_reg.__PVT__clk));
    bufp->fullBit(oldp+2448,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk));
    bufp->fullBit(oldp+2449,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+2450,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+2451,(vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__clk));
    bufp->fullBit(oldp+2452,(vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__clk));
    bufp->fullBit(oldp+2453,(vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__clk));
    bufp->fullBit(oldp+2454,(vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__clk));
    bufp->fullBit(oldp+2455,(vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__clk));
    bufp->fullBit(oldp+2456,(vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__clk));
    bufp->fullBit(oldp+2457,(vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__clk));
    bufp->fullBit(oldp+2458,(vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__clk));
    bufp->fullBit(oldp+2459,(vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__clk));
    bufp->fullBit(oldp+2460,(vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__clk));
    bufp->fullBit(oldp+2461,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+2462,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+2463,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+2464,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+2465,(vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__clk));
    bufp->fullBit(oldp+2466,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__clk));
    bufp->fullBit(oldp+2467,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__clk));
    bufp->fullBit(oldp+2468,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__clk));
    bufp->fullBit(oldp+2469,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__clk));
    bufp->fullBit(oldp+2470,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2471,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2472,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2473,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2474,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2475,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2476,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2477,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2478,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2479,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2480,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2481,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2482,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2483,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2484,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2485,(vlSymsp->TOP__top__mem__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2486,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__clk));
    bufp->fullBit(oldp+2487,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2488,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2489,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2490,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2491,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2492,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2493,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2494,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2495,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__clk));
    bufp->fullBit(oldp+2496,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2497,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2498,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2499,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2500,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2501,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2502,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__clk));
    bufp->fullBit(oldp+2503,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__clk));
    bufp->fullBit(oldp+2504,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__clk));
    bufp->fullBit(oldp+2505,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__clk));
    bufp->fullBit(oldp+2506,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    bufp->fullBit(oldp+2507,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    bufp->fullBit(oldp+2508,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    bufp->fullBit(oldp+2509,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    bufp->fullBit(oldp+2510,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    bufp->fullBit(oldp+2511,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    bufp->fullBit(oldp+2512,(vlSymsp->TOP__top__DUT.__PVT__reset));
    bufp->fullBit(oldp+2513,(vlSymsp->TOP__top__src.__PVT__reset));
    bufp->fullBit(oldp+2514,(vlSymsp->TOP__top__sink.__PVT__reset));
    bufp->fullBit(oldp+2515,(vlSymsp->TOP__top__mem.__PVT__reset));
    bufp->fullBit(oldp+2516,(vlSymsp->TOP__top__mem.__PVT__mem_clear));
    bufp->fullBit(oldp+2517,(vlSymsp->TOP__top__DUT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2518,(vlSymsp->TOP__top__src__src.__PVT__reset));
    bufp->fullBit(oldp+2519,(vlSymsp->TOP__top__src__msg_delay.__PVT__reset));
    bufp->fullBit(oldp+2520,(vlSymsp->TOP__top__sink__msg_delay.__PVT__reset));
    bufp->fullBit(oldp+2521,(vlSymsp->TOP__top__sink__sink.__PVT__reset));
    bufp->fullBit(oldp+2522,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__reset));
    bufp->fullBit(oldp+2523,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__reset));
    bufp->fullBit(oldp+2524,(vlSymsp->TOP__top__mem__mem.__PVT__reset));
    bufp->fullBit(oldp+2525,(vlSymsp->TOP__top__mem__mem.__PVT__mem_clear));
    bufp->fullBit(oldp+2526,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__reset));
    bufp->fullBit(oldp+2527,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__reset));
    bufp->fullBit(oldp+2528,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__reset));
    bufp->fullBit(oldp+2529,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__reset));
    bufp->fullBit(oldp+2530,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__reset));
    bufp->fullBit(oldp+2531,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__reset));
    bufp->fullBit(oldp+2532,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__reset));
    bufp->fullBit(oldp+2533,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__reset));
    bufp->fullBit(oldp+2534,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__reset));
    bufp->fullBit(oldp+2535,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__reset));
    bufp->fullBit(oldp+2536,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__reset));
    bufp->fullBit(oldp+2537,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__reset));
    bufp->fullBit(oldp+2538,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__reset));
    bufp->fullBit(oldp+2539,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__reset));
    bufp->fullBit(oldp+2540,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__reset));
    bufp->fullBit(oldp+2541,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__reset));
    bufp->fullBit(oldp+2542,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__reset));
    bufp->fullBit(oldp+2543,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__reset));
    bufp->fullBit(oldp+2544,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__reset));
    bufp->fullBit(oldp+2545,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__reset));
    bufp->fullBit(oldp+2546,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__reset));
    bufp->fullBit(oldp+2547,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__reset));
    bufp->fullBit(oldp+2548,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__reset));
    bufp->fullBit(oldp+2549,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__reset));
    bufp->fullBit(oldp+2550,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2551,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2552,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2553,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2554,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__reset));
    bufp->fullBit(oldp+2555,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2556,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2557,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2558,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2559,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__reset));
    bufp->fullBit(oldp+2560,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    bufp->fullBit(oldp+2561,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    bufp->fullBit(oldp+2562,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    bufp->fullBit(oldp+2563,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    bufp->fullBit(oldp+2564,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    bufp->fullBit(oldp+2565,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    bufp->fullBit(oldp+2566,(vlSymsp->TOP__top__DUT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2567,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__reset));
    bufp->fullBit(oldp+2568,(vlSymsp->TOP__top__src__src__index_reg.__PVT__reset));
    bufp->fullBit(oldp+2569,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset));
    bufp->fullBit(oldp+2570,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+2571,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+2572,(vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__reset));
    bufp->fullBit(oldp+2573,(vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__reset));
    bufp->fullBit(oldp+2574,(vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__reset));
    bufp->fullBit(oldp+2575,(vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__reset));
    bufp->fullBit(oldp+2576,(vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__reset));
    bufp->fullBit(oldp+2577,(vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__reset));
    bufp->fullBit(oldp+2578,(vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__reset));
    bufp->fullBit(oldp+2579,(vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__reset));
    bufp->fullBit(oldp+2580,(vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__reset));
    bufp->fullBit(oldp+2581,(vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__reset));
    bufp->fullBit(oldp+2582,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+2583,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+2584,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+2585,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+2586,(vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__reset));
    bufp->fullBit(oldp+2587,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2588,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2589,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2590,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2591,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2592,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2593,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2594,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2595,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2596,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2597,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2598,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2599,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2600,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2601,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2602,(vlSymsp->TOP__top__mem__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2603,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2604,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2605,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2606,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2607,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2608,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2609,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__reset));
    bufp->fullBit(oldp+2610,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__reset));
    bufp->fullBit(oldp+2611,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__reset));
    bufp->fullBit(oldp+2612,(vlSymsp->TOP__top.__PVT__snk_done));
    bufp->fullBit(oldp+2613,(vlSymsp->TOP__top__sink.__PVT__done));
    bufp->fullBit(oldp+2614,(vlSymsp->TOP__top__sink.__PVT__sink_rdy));
    bufp->fullBit(oldp+2615,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_rdy));
    bufp->fullBit(oldp+2616,(vlSymsp->TOP__top__sink__sink.__PVT__rdy));
    bufp->fullBit(oldp+2617,(vlSymsp->TOP__top__sink__sink.__PVT__done));
    bufp->fullBit(oldp+2618,(vlSymsp->TOP__top.__PVT__proc2mngr_rdy));
    bufp->fullBit(oldp+2619,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_rdy));
    bufp->fullBit(oldp+2620,(vlSymsp->TOP__top__sink.__PVT__rdy));
    bufp->fullBit(oldp+2621,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_rdy));
    bufp->fullBit(oldp+2622,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay_en));
    bufp->fullIData(oldp+2623,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+2624,(vlSymsp->TOP__top__sink__msg_delay.__PVT__state_next));
    bufp->fullBit(oldp+2625,(vlSymsp->TOP__top__sink__sink.__PVT__index_en));
    bufp->fullBit(oldp+2626,(vlSymsp->TOP__top__sink__sink.__PVT__go));
    bufp->fullBit(oldp+2627,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+2628,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+2629,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__en));
    bufp->fullIData(oldp+2630,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+2631,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__en));
    bufp->fullBit(oldp+2632,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+2633,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+2634,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+2635,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullBit(oldp+2636,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullBit(oldp+2637,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullBit(oldp+2638,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    bufp->fullBit(oldp+2639,(vlSymsp->TOP__top.__PVT__mngr2proc_rdy));
    bufp->fullBit(oldp+2640,(vlSymsp->TOP__top__DUT.__PVT__mngr2proc_rdy));
    bufp->fullBit(oldp+2641,(vlSymsp->TOP__top__DUT.__PVT__imul_req_val_D));
    bufp->fullBit(oldp+2642,(vlSymsp->TOP__top__src.__PVT__rdy));
    bufp->fullBit(oldp+2643,(vlSymsp->TOP__top__src.__PVT__src_rdy));
    bufp->fullBit(oldp+2644,(vlSymsp->TOP__top__DUT__ctrl.__PVT__mngr2proc_rdy));
    bufp->fullBit(oldp+2645,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_req_val_D));
    bufp->fullBit(oldp+2646,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stall_D));
    bufp->fullBit(oldp+2647,(vlSymsp->TOP__top__DUT__dpath.__PVT__imul_req_val_D));
    bufp->fullBit(oldp+2648,(vlSymsp->TOP__top__src__src.__PVT__rdy));
    bufp->fullBit(oldp+2649,(vlSymsp->TOP__top__src__src.__PVT__index_en));
    bufp->fullBit(oldp+2650,(vlSymsp->TOP__top__src__src.__PVT__go));
    bufp->fullBit(oldp+2651,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_rdy));
    bufp->fullBit(oldp+2652,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_rdy));
    bufp->fullBit(oldp+2653,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay_en));
    bufp->fullIData(oldp+2654,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+2655,(vlSymsp->TOP__top__src__msg_delay.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+2656,(vlSymsp->TOP__top__src__msg_delay.__PVT__state_next));
    bufp->fullBit(oldp+2657,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__istream_val));
    bufp->fullBit(oldp+2658,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__in_val));
    bufp->fullBit(oldp+2659,(vlSymsp->TOP__top__src__src__index_reg.__PVT__en));
    bufp->fullIData(oldp+2660,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+2661,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__en));
    bufp->fullBit(oldp+2662,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__istream_val));
    bufp->fullBit(oldp+2663,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_drop_rdy));
    bufp->fullBit(oldp+2664,(vlSymsp->TOP__top__DUT.__PVT__reg_en_D));
    bufp->fullBit(oldp+2665,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_respstream_rdy));
    bufp->fullBit(oldp+2666,(vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_D));
    bufp->fullBit(oldp+2667,(vlSymsp->TOP__top__DUT__ctrl.__PVT__next_val_D));
    bufp->fullBit(oldp+2668,(vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_D));
    bufp->fullBit(oldp+2669,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__ostream_rdy));
    bufp->fullBit(oldp+2670,(vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__en));
    bufp->fullBit(oldp+2671,(vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__en));
    bufp->fullBit(oldp+2672,(vlSymsp->TOP__top.__PVT__imem_respstream_rdy));
    bufp->fullBit(oldp+2673,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_rdy));
    bufp->fullBit(oldp+2674,(vlSymsp->TOP__top__mem.__PVT__memresp0_rdy));
    bufp->fullBit(oldp+2675,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__istream_rdy));
    bufp->fullBit(oldp+2676,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_rdy));
    bufp->fullBit(oldp+2677,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__rdy));
    bufp->fullBit(oldp+2678,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__rdy));
    bufp->fullQData(oldp+2679,(vlSymsp->TOP__top__DUT__dpath.__PVT__istream_msg),64);
    bufp->fullQData(oldp+2681,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__istream_msg),64);
    bufp->fullQData(oldp+2683,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__istream_msg),64);
    bufp->fullIData(oldp+2685,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__req_msg_a),32);
    bufp->fullIData(oldp+2686,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__req_msg_b),32);
    bufp->fullIData(oldp+2687,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__a_new),32);
    bufp->fullIData(oldp+2688,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__b_new),32);
    bufp->fullIData(oldp+2689,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__msg_new),32);
    bufp->fullIData(oldp+2690,(vlSymsp->TOP__top__DUT__dpath__imul__multi__add_mul_block.__PVT__a),32);
    bufp->fullIData(oldp+2691,(vlSymsp->TOP__top__DUT__dpath__imul__multi__add_mul_block.__PVT__sum),32);
    bufp->fullIData(oldp+2692,(vlSymsp->TOP__top__DUT__dpath__imul__multi__ls_block.__PVT__a),32);
    bufp->fullCData(oldp+2693,(vlSymsp->TOP__top__DUT__dpath__imul__multi__ls_block.__PVT__shamt),4);
    bufp->fullIData(oldp+2694,(vlSymsp->TOP__top__DUT__dpath__imul__multi__ls_block.__PVT__result),32);
    bufp->fullIData(oldp+2695,(vlSymsp->TOP__top__DUT__dpath__imul__multi__rs_block.__PVT__a),32);
    bufp->fullCData(oldp+2696,(vlSymsp->TOP__top__DUT__dpath__imul__multi__rs_block.__PVT__shamt),4);
    bufp->fullIData(oldp+2697,(vlSymsp->TOP__top__DUT__dpath__imul__multi__rs_block.__PVT__result),32);
    bufp->fullBit(oldp+2698,(vlSymsp->TOP__top__DUT.__PVT__reg_en_F));
    bufp->fullBit(oldp+2699,(vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_F));
    bufp->fullBit(oldp+2700,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stall_F));
    bufp->fullBit(oldp+2701,(vlSymsp->TOP__top__DUT__ctrl.__PVT__next_val_F));
    bufp->fullBit(oldp+2702,(vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_F));
    bufp->fullBit(oldp+2703,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__next_state));
    bufp->fullBit(oldp+2704,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__istream_go));
    bufp->fullBit(oldp+2705,(vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__en));
    bufp->fullBit(oldp+2706,(vlSymsp->TOP__top__mem.__PVT__mem_memresp0_rdy));
    bufp->fullBit(oldp+2707,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_rdy));
    bufp->fullBit(oldp+2708,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_rdy));
    bufp->fullBit(oldp+2709,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_delay_en));
    bufp->fullIData(oldp+2710,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+2711,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__state_next));
    bufp->fullBit(oldp+2712,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__rdy));
    bufp->fullIData(oldp+2713,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+2714,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__en));
    bufp->fullBit(oldp+2715,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+2716,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+2717,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+2718,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+2719,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+2720,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullBit(oldp+2721,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullBit(oldp+2722,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullBit(oldp+2723,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    bufp->fullBit(oldp+2724,(vlSymsp->TOP__top.__PVT__imem_reqstream_val));
    bufp->fullBit(oldp+2725,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_val));
    bufp->fullBit(oldp+2726,(vlSymsp->TOP__top__mem.__PVT__memreq0_val));
    bufp->fullBit(oldp+2727,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_val));
    bufp->fullBit(oldp+2728,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__val));
    bufp->fullBit(oldp+2729,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__val));
    bufp->fullBit(oldp+2730,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__deq_val));
    bufp->fullBit(oldp+2731,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+2732,(vlSymsp->TOP__top.__PVT__imem_reqstream_rdy));
    bufp->fullBit(oldp+2733,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_rdy));
    bufp->fullBit(oldp+2734,(vlSymsp->TOP__top__mem.__PVT__memreq0_rdy));
    bufp->fullBit(oldp+2735,(vlSymsp->TOP__top__mem.__PVT__mem_memreq0_val));
    bufp->fullBit(oldp+2736,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_rdy));
    bufp->fullBit(oldp+2737,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_val));
    bufp->fullBit(oldp+2738,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_delay_en));
    bufp->fullIData(oldp+2739,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+2740,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__state_next));
    bufp->fullBit(oldp+2741,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_val));
    bufp->fullBit(oldp+2742,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__rdy));
    bufp->fullBit(oldp+2743,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__val));
    bufp->fullBit(oldp+2744,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__rdy));
    bufp->fullBit(oldp+2745,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+2746,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullIData(oldp+2747,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+2748,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__en));
    bufp->fullBit(oldp+2749,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_val));
    bufp->fullBit(oldp+2750,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+2751,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+2752,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+2753,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__enq_ptr_next));
    bufp->fullBit(oldp+2754,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__deq_ptr_next));
    bufp->fullBit(oldp+2755,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+2756,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullBit(oldp+2757,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullBit(oldp+2758,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullBit(oldp+2759,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+2760,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+2761,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+2762,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullBit(oldp+2763,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+2764,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullBit(oldp+2765,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__d));
    bufp->fullBit(oldp+2766,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__d));
    bufp->fullBit(oldp+2767,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__d));
    bufp->fullBit(oldp+2768,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__write_en));
    bufp->fullBit(oldp+2769,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    bufp->fullWData(oldp+2770,(vlSymsp->TOP__top__mem.__PVT__mem_memreq0_msg),77);
    bufp->fullWData(oldp+2773,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_msg),77);
    bufp->fullWData(oldp+2776,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg),77);
    bufp->fullWData(oldp+2779,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__msg),77);
    bufp->fullCData(oldp+2782,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__type_),3);
    bufp->fullCData(oldp+2783,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__opaque),8);
    bufp->fullIData(oldp+2784,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__addr),32);
    bufp->fullCData(oldp+2785,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__len),2);
    bufp->fullIData(oldp+2786,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__data),32);
    bufp->fullWData(oldp+2787,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_msg),77);
    bufp->fullWData(oldp+2790,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
    bufp->fullWData(oldp+2793,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),77);
    bufp->fullBit(oldp+2796,(vlSymsp->TOP__top.__PVT__src_done));
    bufp->fullBit(oldp+2797,(vlSymsp->TOP__top__src.__PVT__done));
    bufp->fullBit(oldp+2798,(vlSymsp->TOP__top__src.__PVT__src_val));
    bufp->fullBit(oldp+2799,(vlSymsp->TOP__top__src__src.__PVT__val));
    bufp->fullBit(oldp+2800,(vlSymsp->TOP__top__src__src.__PVT__done));
    bufp->fullBit(oldp+2801,(vlSymsp->TOP__top__src__src.__PVT__reset_reg));
    bufp->fullBit(oldp+2802,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_val));
    bufp->fullIData(oldp+2803,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[0]),32);
    bufp->fullIData(oldp+2804,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[1]),32);
    bufp->fullIData(oldp+2805,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[2]),32);
    bufp->fullIData(oldp+2806,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[3]),32);
    bufp->fullIData(oldp+2807,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[4]),32);
    bufp->fullIData(oldp+2808,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[5]),32);
    bufp->fullIData(oldp+2809,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[6]),32);
    bufp->fullIData(oldp+2810,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[7]),32);
    bufp->fullIData(oldp+2811,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[8]),32);
    bufp->fullIData(oldp+2812,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[9]),32);
    bufp->fullIData(oldp+2813,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[10]),32);
    bufp->fullIData(oldp+2814,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[11]),32);
    bufp->fullIData(oldp+2815,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[12]),32);
    bufp->fullIData(oldp+2816,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[13]),32);
    bufp->fullIData(oldp+2817,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[14]),32);
    bufp->fullIData(oldp+2818,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[15]),32);
    bufp->fullIData(oldp+2819,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[16]),32);
    bufp->fullIData(oldp+2820,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[17]),32);
    bufp->fullIData(oldp+2821,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[18]),32);
    bufp->fullIData(oldp+2822,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[19]),32);
    bufp->fullIData(oldp+2823,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[20]),32);
    bufp->fullIData(oldp+2824,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[21]),32);
    bufp->fullIData(oldp+2825,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[22]),32);
    bufp->fullIData(oldp+2826,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[23]),32);
    bufp->fullIData(oldp+2827,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[24]),32);
    bufp->fullIData(oldp+2828,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[25]),32);
    bufp->fullIData(oldp+2829,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[26]),32);
    bufp->fullIData(oldp+2830,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[27]),32);
    bufp->fullIData(oldp+2831,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[28]),32);
    bufp->fullIData(oldp+2832,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[29]),32);
    bufp->fullIData(oldp+2833,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[30]),32);
    bufp->fullIData(oldp+2834,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[31]),32);
    bufp->fullIData(oldp+2835,(vlSymsp->TOP__top__DUT__dpath.__PVT__ostream_msg),32);
    bufp->fullIData(oldp+2836,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__ostream_msg),32);
    bufp->fullBit(oldp+2837,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__req_rdy));
    bufp->fullBit(oldp+2838,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__resp_val));
    bufp->fullIData(oldp+2839,(vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__in0),32);
    bufp->fullBit(oldp+2840,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__istream_rdy));
    bufp->fullBit(oldp+2841,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__ostream_val));
    bufp->fullIData(oldp+2842,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__ostream_msg),32);
    bufp->fullCData(oldp+2843,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__counter),6);
    bufp->fullIData(oldp+2844,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__a_reg),32);
    bufp->fullIData(oldp+2845,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__b_reg),32);
    bufp->fullIData(oldp+2846,(vlSymsp->TOP__top__DUT__dpath__imul__multi__add_mul_block.__PVT__b),32);
    bufp->fullWData(oldp+2847,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__rfile[0]),77);
    bufp->fullWData(oldp+2850,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__rfile[1]),77);
    bufp->fullBit(oldp+2853,(vlSymsp->TOP__top.__PVT__stats_en));
    bufp->fullBit(oldp+2854,(vlSymsp->TOP__top__DUT.__PVT__stats_en));
    bufp->fullBit(oldp+2855,(vlSymsp->TOP__top__DUT__dpath.__PVT__stats_en));
    bufp->fullIData(oldp+2856,(vlSymsp->TOP__top__DUT__dpath.__PVT__stats_en_W),32);
    bufp->fullIData(oldp+2857,(vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__q),32);
    bufp->fullCData(oldp+2858,(vlSymsp->TOP__top__sink__sink.__PVT__index_next),4);
    bufp->fullCData(oldp+2859,(vlSymsp->TOP__top__sink__sink.__PVT__index),4);
    bufp->fullIData(oldp+2860,(vlSymsp->TOP__top__sink__sink.__PVT__m_curr),32);
    bufp->fullCData(oldp+2861,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__q),4);
    bufp->fullCData(oldp+2862,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__d),4);
    bufp->fullIData(oldp+2863,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__qstore),32);
    bufp->fullIData(oldp+2864,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),32);
    bufp->fullIData(oldp+2865,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),32);
    bufp->fullIData(oldp+2866,(vlSymsp->TOP__top__src.__PVT__src_msg),32);
    bufp->fullIData(oldp+2867,(vlSymsp->TOP__top__src__src.__PVT__msg),32);
    bufp->fullCData(oldp+2868,(vlSymsp->TOP__top__src__src.__PVT__index_next),4);
    bufp->fullCData(oldp+2869,(vlSymsp->TOP__top__src__src.__PVT__index),4);
    bufp->fullIData(oldp+2870,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_msg),32);
    bufp->fullCData(oldp+2871,(vlSymsp->TOP__top__src__src__index_reg.__PVT__q),4);
    bufp->fullCData(oldp+2872,(vlSymsp->TOP__top__src__src__index_reg.__PVT__d),4);
    bufp->fullQData(oldp+2873,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__qstore),47);
    bufp->fullQData(oldp+2875,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),47);
    bufp->fullQData(oldp+2877,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),47);
    bufp->fullIData(oldp+2879,(vlSymsp->TOP__top__DUT__dpath.__PVT__ex_result_M),32);
    bufp->fullIData(oldp+2880,(vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__q),32);
    bufp->fullIData(oldp+2881,(vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__in0),32);
    bufp->fullIData(oldp+2882,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_X),32);
    bufp->fullIData(oldp+2883,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_plus4_X),32);
    bufp->fullIData(oldp+2884,(vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__q),32);
    bufp->fullIData(oldp+2885,(vlSymsp->TOP__top__DUT__dpath__pc_incr_X.__PVT__in),32);
    bufp->fullIData(oldp+2886,(vlSymsp->TOP__top__DUT__dpath__pc_incr_X.__PVT__out),32);
    bufp->fullIData(oldp+2887,(vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__in1),32);
    bufp->fullBit(oldp+2888,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_val_M));
    bufp->fullBit(oldp+2889,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__deq_val));
    bufp->fullBit(oldp+2890,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__num_free_entries));
    bufp->fullBit(oldp+2891,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+2892,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__enq_val));
    bufp->fullBit(oldp+2893,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+2894,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+2895,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2896,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
    bufp->fullBit(oldp+2897,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+2898,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+2899,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullIData(oldp+2900,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_msg),32);
    bufp->fullIData(oldp+2901,(vlSymsp->TOP__top__DUT__dpath.__PVT__proc2mngr_data),32);
    bufp->fullIData(oldp+2902,(vlSymsp->TOP__top__DUT__dpath.__PVT__bypass_from_W),32);
    bufp->fullIData(oldp+2903,(vlSymsp->TOP__top__DUT__dpath.__PVT__rf_wdata_W),32);
    bufp->fullIData(oldp+2904,(vlSymsp->TOP__top__DUT__dpath.__PVT__wb_result_W),32);
    bufp->fullIData(oldp+2905,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__wr_data),32);
    bufp->fullIData(oldp+2906,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_msg),32);
    bufp->fullIData(oldp+2907,(vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__q),32);
    bufp->fullIData(oldp+2908,(vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__d),32);
    bufp->fullIData(oldp+2909,(vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__in3),32);
    bufp->fullIData(oldp+2910,(vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__in3),32);
    bufp->fullIData(oldp+2911,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__enq_msg),32);
    bufp->fullIData(oldp+2912,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__write_data),32);
    bufp->fullIData(oldp+2913,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),32);
    bufp->fullIData(oldp+2914,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),32);
    bufp->fullQData(oldp+2915,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__qstore),47);
    bufp->fullQData(oldp+2917,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),47);
    bufp->fullQData(oldp+2919,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),47);
    bufp->fullWData(oldp+2921,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__qstore),77);
    bufp->fullWData(oldp+2924,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),77);
    bufp->fullWData(oldp+2927,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),77);
    bufp->fullBit(oldp+2930,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_rdy_M));
    bufp->fullBit(oldp+2931,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+2932,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+2933,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__num_free_entries));
    bufp->fullBit(oldp+2934,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+2935,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+2936,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2937,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
    bufp->fullBit(oldp+2938,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+2939,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+2940,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+2941,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2942,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    bufp->fullIData(oldp+2943,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg_data),32);
    bufp->fullIData(oldp+2944,(vlSymsp->TOP__top__DUT__dpath.__PVT__dmem_reqstream_msg_data),32);
    bufp->fullIData(oldp+2945,(vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__q),32);
    bufp->fullIData(oldp+2946,(vlSymsp->TOP__top__DUT__dpath.__PVT__br_target_X),32);
    bufp->fullIData(oldp+2947,(vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__q),32);
    bufp->fullIData(oldp+2948,(vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in1),32);
    bufp->fullIData(oldp+2949,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_F),32);
    bufp->fullIData(oldp+2950,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_plus4_F),32);
    bufp->fullIData(oldp+2951,(vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__q),32);
    bufp->fullIData(oldp+2952,(vlSymsp->TOP__top__DUT__dpath__pc_incr_F.__PVT__in),32);
    bufp->fullIData(oldp+2953,(vlSymsp->TOP__top__DUT__dpath__pc_incr_F.__PVT__out),32);
    bufp->fullIData(oldp+2954,(vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in0),32);
    bufp->fullBit(oldp+2955,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__genblk1__DOT__write_addr));
    bufp->fullBit(oldp+2956,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__write_addr));
    bufp->fullBit(oldp+2957,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__enq_ptr));
    bufp->fullBit(oldp+2958,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__enq_ptr_plus1));
    bufp->fullBit(oldp+2959,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__enq_ptr_inc));
    bufp->fullBit(oldp+2960,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__write_addr));
    bufp->fullBit(oldp+2961,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__q));
    bufp->fullBit(oldp+2962,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__write_addr));
    bufp->fullBit(oldp+2963,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_enq_rdy));
    bufp->fullBit(oldp+2964,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_reqstream_rdy));
    bufp->fullBit(oldp+2965,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+2966,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+2967,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+2968,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__q));
    bufp->fullIData(oldp+2969,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_D),32);
    bufp->fullIData(oldp+2970,(vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__q),32);
    bufp->fullIData(oldp+2971,(vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__d),32);
    bufp->fullIData(oldp+2972,(vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__in0),32);
    bufp->fullIData(oldp+2973,(vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__in1),32);
    bufp->fullCData(oldp+2974,(vlSymsp->TOP__top__DUT.__PVT__alu_fn_X),4);
    bufp->fullCData(oldp+2975,(vlSymsp->TOP__top__DUT.__PVT__ex_result_sel_X),2);
    bufp->fullCData(oldp+2976,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_type_X),2);
    bufp->fullBit(oldp+2977,(vlSymsp->TOP__top__DUT.__PVT__wb_result_sel_M));
    bufp->fullCData(oldp+2978,(vlSymsp->TOP__top__DUT.__PVT__rf_waddr_W),5);
    bufp->fullBit(oldp+2979,(vlSymsp->TOP__top__DUT.__PVT__rf_wen_W));
    bufp->fullBit(oldp+2980,(vlSymsp->TOP__top__DUT.__PVT__stats_en_wen_W));
    bufp->fullCData(oldp+2981,(vlSymsp->TOP__top__DUT__ctrl.__PVT__alu_fn_X),4);
    bufp->fullCData(oldp+2982,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ex_result_sel_X),2);
    bufp->fullCData(oldp+2983,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_type_X),2);
    bufp->fullBit(oldp+2984,(vlSymsp->TOP__top__DUT__ctrl.__PVT__wb_result_sel_M));
    bufp->fullCData(oldp+2985,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_waddr_W),5);
    bufp->fullBit(oldp+2986,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_wen_W));
    bufp->fullBit(oldp+2987,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stats_en_wen_W));
    bufp->fullBit(oldp+2988,(vlSymsp->TOP__top__DUT__ctrl.__PVT__val_F));
    bufp->fullBit(oldp+2989,(vlSymsp->TOP__top__DUT__ctrl.__PVT__val_D));
    bufp->fullBit(oldp+2990,(vlSymsp->TOP__top__DUT__ctrl.__PVT__val_X));
    bufp->fullBit(oldp+2991,(vlSymsp->TOP__top__DUT__ctrl.__PVT__val_M));
    bufp->fullBit(oldp+2992,(vlSymsp->TOP__top__DUT__ctrl.__PVT__val_W));
    bufp->fullIData(oldp+2993,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_X),32);
    bufp->fullBit(oldp+2994,(vlSymsp->TOP__top__DUT__ctrl.__PVT__wb_result_sel_X));
    bufp->fullBit(oldp+2995,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_wen_X));
    bufp->fullCData(oldp+2996,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_waddr_X),5);
    bufp->fullBit(oldp+2997,(vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_val_X));
    bufp->fullBit(oldp+2998,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stats_en_wen_X));
    bufp->fullCData(oldp+2999,(vlSymsp->TOP__top__DUT__ctrl.__PVT__br_type_X),3);
    bufp->fullIData(oldp+3000,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_M),32);
    bufp->fullCData(oldp+3001,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_type_M),2);
    bufp->fullBit(oldp+3002,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_wen_M));
    bufp->fullCData(oldp+3003,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_waddr_M),5);
    bufp->fullBit(oldp+3004,(vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_val_M));
    bufp->fullBit(oldp+3005,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stats_en_wen_M));
    bufp->fullIData(oldp+3006,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_W),32);
    bufp->fullBit(oldp+3007,(vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_val_W));
    bufp->fullBit(oldp+3008,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_wen_pending_W));
    bufp->fullBit(oldp+3009,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stats_en_wen_pending_W));
    bufp->fullCData(oldp+3010,(vlSymsp->TOP__top__DUT__dpath.__PVT__alu_fn_X),4);
    bufp->fullCData(oldp+3011,(vlSymsp->TOP__top__DUT__dpath.__PVT__ex_result_sel_X),2);
    bufp->fullBit(oldp+3012,(vlSymsp->TOP__top__DUT__dpath.__PVT__wb_result_sel_M));
    bufp->fullCData(oldp+3013,(vlSymsp->TOP__top__DUT__dpath.__PVT__rf_waddr_W),5);
    bufp->fullBit(oldp+3014,(vlSymsp->TOP__top__DUT__dpath.__PVT__rf_wen_W));
    bufp->fullBit(oldp+3015,(vlSymsp->TOP__top__DUT__dpath.__PVT__stats_en_wen_W));
    bufp->fullBit(oldp+3016,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__wr_en));
    bufp->fullCData(oldp+3017,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__wr_addr),5);
    bufp->fullCData(oldp+3018,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__fn),4);
    bufp->fullBit(oldp+3019,(vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__en));
    bufp->fullCData(oldp+3020,(vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__sel),2);
    bufp->fullBit(oldp+3021,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__write_en));
    bufp->fullCData(oldp+3022,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__write_addr),5);
    bufp->fullBit(oldp+3023,(vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__sel));
    bufp->fullBit(oldp+3024,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_queue_num_free_entries));
    bufp->fullBit(oldp+3025,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_rdy));
    bufp->fullBit(oldp+3026,(vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_rdy));
    bufp->fullBit(oldp+3027,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+3028,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__num_free_entries));
    bufp->fullBit(oldp+3029,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+3030,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+3031,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+3032,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
    bufp->fullBit(oldp+3033,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+3034,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+3035,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+3036,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    bufp->fullBit(oldp+3037,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__genblk1__DOT__read_addr));
    bufp->fullBit(oldp+3038,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__read_addr));
    bufp->fullBit(oldp+3039,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__deq_ptr));
    bufp->fullBit(oldp+3040,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__deq_ptr_plus1));
    bufp->fullBit(oldp+3041,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__deq_ptr_inc));
    bufp->fullBit(oldp+3042,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__read_addr));
    bufp->fullBit(oldp+3043,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__q));
    bufp->fullBit(oldp+3044,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__read_addr));
    bufp->fullWData(oldp+3045,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_M),77);
    bufp->fullCData(oldp+3048,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_type_M),3);
    bufp->fullCData(oldp+3049,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_opaque_M),8);
    bufp->fullIData(oldp+3050,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_addr_M),32);
    bufp->fullCData(oldp+3051,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_len_M),2);
    bufp->fullIData(oldp+3052,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_data_M),32);
    bufp->fullCData(oldp+3053,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_len_modified_M),3);
    bufp->fullSData(oldp+3054,(vlSymsp->TOP__top__mem__mem.__PVT__physical_byte_addr0_M),14);
    bufp->fullSData(oldp+3055,(vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr0_M),12);
    bufp->fullCData(oldp+3056,(vlSymsp->TOP__top__mem__mem.__PVT__block_offset0_M),2);
    bufp->fullWData(oldp+3057,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__deq_msg),77);
    bufp->fullWData(oldp+3060,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__msg),77);
    bufp->fullCData(oldp+3063,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__type_),3);
    bufp->fullCData(oldp+3064,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__opaque),8);
    bufp->fullIData(oldp+3065,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__addr),32);
    bufp->fullCData(oldp+3066,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__len),2);
    bufp->fullIData(oldp+3067,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__data),32);
    bufp->fullWData(oldp+3068,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__req),77);
    bufp->fullCData(oldp+3071,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__type_),3);
    bufp->fullCData(oldp+3072,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__opaque),8);
    bufp->fullCData(oldp+3073,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__len),2);
    bufp->fullWData(oldp+3074,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
    bufp->fullWData(oldp+3077,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__qstore),77);
    bufp->fullWData(oldp+3080,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),77);
    bufp->fullBit(oldp+3083,(vlSymsp->TOP__top__DUT.__PVT__dmem_queue_num_free_entries));
    bufp->fullBit(oldp+3084,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_rdy));
    bufp->fullBit(oldp+3085,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_rdy));
    bufp->fullBit(oldp+3086,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+3087,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__num_free_entries));
    bufp->fullBit(oldp+3088,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+3089,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+3090,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+3091,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
    bufp->fullBit(oldp+3092,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+3093,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+3094,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+3095,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    bufp->fullBit(oldp+3096,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_val_M));
    bufp->fullBit(oldp+3097,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__deq_val));
    bufp->fullBit(oldp+3098,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__num_free_entries));
    bufp->fullBit(oldp+3099,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+3100,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__enq_val));
    bufp->fullBit(oldp+3101,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+3102,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+3103,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+3104,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
    bufp->fullBit(oldp+3105,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+3106,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+3107,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+3108,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_rdy_M));
    bufp->fullBit(oldp+3109,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+3110,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+3111,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__num_free_entries));
    bufp->fullBit(oldp+3112,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+3113,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+3114,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+3115,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
    bufp->fullBit(oldp+3116,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+3117,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+3118,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+3119,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+3120,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    bufp->fullWData(oldp+3121,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_M),77);
    bufp->fullCData(oldp+3124,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_type_M),3);
    bufp->fullCData(oldp+3125,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_opaque_M),8);
    bufp->fullIData(oldp+3126,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_addr_M),32);
    bufp->fullCData(oldp+3127,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_len_M),2);
    bufp->fullIData(oldp+3128,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_data_M),32);
    bufp->fullCData(oldp+3129,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_len_modified_M),3);
    bufp->fullSData(oldp+3130,(vlSymsp->TOP__top__mem__mem.__PVT__physical_byte_addr1_M),14);
    bufp->fullSData(oldp+3131,(vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr1_M),12);
    bufp->fullCData(oldp+3132,(vlSymsp->TOP__top__mem__mem.__PVT__block_offset1_M),2);
    bufp->fullWData(oldp+3133,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__deq_msg),77);
    bufp->fullWData(oldp+3136,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__msg),77);
    bufp->fullCData(oldp+3139,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__type_),3);
    bufp->fullCData(oldp+3140,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__opaque),8);
    bufp->fullIData(oldp+3141,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__addr),32);
    bufp->fullCData(oldp+3142,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__len),2);
    bufp->fullIData(oldp+3143,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__data),32);
    bufp->fullWData(oldp+3144,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__req),77);
    bufp->fullCData(oldp+3147,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__type_),3);
    bufp->fullCData(oldp+3148,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__opaque),8);
    bufp->fullCData(oldp+3149,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__len),2);
    bufp->fullWData(oldp+3150,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
    bufp->fullWData(oldp+3153,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__qstore),77);
    bufp->fullWData(oldp+3156,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),77);
    bufp->fullBit(oldp+3159,(vlSymsp->TOP__top__DUT.__PVT__op1_sel_D));
    bufp->fullCData(oldp+3160,(vlSymsp->TOP__top__DUT.__PVT__op2_sel_D),2);
    bufp->fullCData(oldp+3161,(vlSymsp->TOP__top__DUT.__PVT__csrr_sel_D),2);
    bufp->fullCData(oldp+3162,(vlSymsp->TOP__top__DUT.__PVT__imm_type_D),3);
    bufp->fullIData(oldp+3163,(vlSymsp->TOP__top__DUT.__PVT__inst_D),32);
    bufp->fullBit(oldp+3164,(vlSymsp->TOP__top__DUT__ctrl.__PVT__op1_sel_D));
    bufp->fullCData(oldp+3165,(vlSymsp->TOP__top__DUT__ctrl.__PVT__op2_sel_D),2);
    bufp->fullCData(oldp+3166,(vlSymsp->TOP__top__DUT__ctrl.__PVT__csrr_sel_D),2);
    bufp->fullCData(oldp+3167,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imm_type_D),3);
    bufp->fullIData(oldp+3168,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_D),32);
    bufp->fullBit(oldp+3169,(vlSymsp->TOP__top__DUT__ctrl.__PVT__osquash_D));
    bufp->fullBit(oldp+3170,(vlSymsp->TOP__top__DUT__ctrl.__PVT__pc_redirect_D));
    bufp->fullCData(oldp+3171,(vlSymsp->TOP__top__DUT__ctrl.__PVT__pc_sel_D),2);
    bufp->fullCData(oldp+3172,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_rd_D),5);
    bufp->fullCData(oldp+3173,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_rs1_D),5);
    bufp->fullCData(oldp+3174,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_rs2_D),5);
    bufp->fullSData(oldp+3175,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_csr_D),12);
    bufp->fullBit(oldp+3176,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_val_D));
    bufp->fullCData(oldp+3177,(vlSymsp->TOP__top__DUT__ctrl.__PVT__br_type_D),3);
    bufp->fullBit(oldp+3178,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rs1_en_D));
    bufp->fullBit(oldp+3179,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rs2_en_D));
    bufp->fullCData(oldp+3180,(vlSymsp->TOP__top__DUT__ctrl.__PVT__alu_fn_D),4);
    bufp->fullCData(oldp+3181,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_type_D),2);
    bufp->fullBit(oldp+3182,(vlSymsp->TOP__top__DUT__ctrl.__PVT__wb_result_sel_D));
    bufp->fullBit(oldp+3183,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_wen_D));
    bufp->fullBit(oldp+3184,(vlSymsp->TOP__top__DUT__ctrl.__PVT__csrr_D));
    bufp->fullBit(oldp+3185,(vlSymsp->TOP__top__DUT__ctrl.__PVT__csrw_D));
    bufp->fullBit(oldp+3186,(vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_val_D));
    bufp->fullBit(oldp+3187,(vlSymsp->TOP__top__DUT__ctrl.__PVT__mngr2proc_rdy_D));
    bufp->fullBit(oldp+3188,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stats_en_wen_D));
    bufp->fullCData(oldp+3189,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_waddr_D),5);
    bufp->fullBit(oldp+3190,(vlSymsp->TOP__top__DUT__dpath.__PVT__op1_sel_D));
    bufp->fullCData(oldp+3191,(vlSymsp->TOP__top__DUT__dpath.__PVT__op2_sel_D),2);
    bufp->fullCData(oldp+3192,(vlSymsp->TOP__top__DUT__dpath.__PVT__csrr_sel_D),2);
    bufp->fullCData(oldp+3193,(vlSymsp->TOP__top__DUT__dpath.__PVT__imm_type_D),3);
    bufp->fullIData(oldp+3194,(vlSymsp->TOP__top__DUT__dpath.__PVT__inst_D),32);
    bufp->fullCData(oldp+3195,(vlSymsp->TOP__top__DUT__dpath.__PVT__inst_rd_D),5);
    bufp->fullCData(oldp+3196,(vlSymsp->TOP__top__DUT__dpath.__PVT__inst_rs1_D),5);
    bufp->fullCData(oldp+3197,(vlSymsp->TOP__top__DUT__dpath.__PVT__inst_rs2_D),5);
    bufp->fullIData(oldp+3198,(vlSymsp->TOP__top__DUT__dpath.__PVT__imm_D),32);
    bufp->fullCData(oldp+3199,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_addr0),5);
    bufp->fullCData(oldp+3200,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_addr1),5);
    bufp->fullIData(oldp+3201,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__inst),32);
    bufp->fullCData(oldp+3202,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__opcode),7);
    bufp->fullCData(oldp+3203,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__rd),5);
    bufp->fullCData(oldp+3204,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__rs1),5);
    bufp->fullCData(oldp+3205,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__rs2),5);
    bufp->fullCData(oldp+3206,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__funct3),3);
    bufp->fullSData(oldp+3207,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__csr),12);
    bufp->fullIData(oldp+3208,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__inst),32);
    bufp->fullCData(oldp+3209,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__opcode),7);
    bufp->fullCData(oldp+3210,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__rd),5);
    bufp->fullCData(oldp+3211,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__rs1),5);
    bufp->fullCData(oldp+3212,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__rs2),5);
    bufp->fullCData(oldp+3213,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__funct3),3);
    bufp->fullSData(oldp+3214,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__csr),12);
    bufp->fullCData(oldp+3215,(vlSymsp->TOP__top__DUT__dpath__imm_gen_D.__PVT__imm_type),3);
    bufp->fullIData(oldp+3216,(vlSymsp->TOP__top__DUT__dpath__imm_gen_D.__PVT__inst),32);
    bufp->fullIData(oldp+3217,(vlSymsp->TOP__top__DUT__dpath__imm_gen_D.__PVT__imm),32);
    bufp->fullIData(oldp+3218,(vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__q),32);
    bufp->fullCData(oldp+3219,(vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__sel),2);
    bufp->fullIData(oldp+3220,(vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__in1),32);
    bufp->fullCData(oldp+3221,(vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__sel),2);
    bufp->fullIData(oldp+3222,(vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__in1),32);
    bufp->fullCData(oldp+3223,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_addr0),5);
    bufp->fullCData(oldp+3224,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_addr1),5);
    bufp->fullBit(oldp+3225,(vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__sel));
    bufp->fullIData(oldp+3226,(vlSymsp->TOP__top__DUT__dpath.__PVT__op1_X),32);
    bufp->fullIData(oldp+3227,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__in0),32);
    bufp->fullIData(oldp+3228,(vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__q),32);
    bufp->fullIData(oldp+3229,(vlSymsp->TOP__top__DUT__dpath__alu__cond_eq_comp.__PVT__in0),32);
    bufp->fullIData(oldp+3230,(vlSymsp->TOP__top__DUT__dpath.__PVT__op2_X),32);
    bufp->fullIData(oldp+3231,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__in1),32);
    bufp->fullIData(oldp+3232,(vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__q),32);
    bufp->fullIData(oldp+3233,(vlSymsp->TOP__top__DUT__dpath__alu__cond_eq_comp.__PVT__in1),32);
    bufp->fullBit(oldp+3234,(vlSymsp->TOP__top__mem.__PVT__mem_memreq0_rdy));
    bufp->fullBit(oldp+3235,(vlSymsp->TOP__top__mem.__PVT__mem_memresp0_val));
    bufp->fullBit(oldp+3236,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_rdy));
    bufp->fullBit(oldp+3237,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_rdy));
    bufp->fullBit(oldp+3238,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_val));
    bufp->fullBit(oldp+3239,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_val));
    bufp->fullBit(oldp+3240,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__rdy));
    bufp->fullBit(oldp+3241,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__val));
    bufp->fullBit(oldp+3242,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+3243,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_val));
    bufp->fullBit(oldp+3244,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+3245,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullBit(oldp+3246,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+3247,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullBit(oldp+3248,(vlSymsp->TOP__top.__PVT__proc2mngr_val));
    bufp->fullBit(oldp+3249,(vlSymsp->TOP__top.__PVT__commit_inst));
    bufp->fullBit(oldp+3250,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_val));
    bufp->fullBit(oldp+3251,(vlSymsp->TOP__top__DUT.__PVT__commit_inst));
    bufp->fullBit(oldp+3252,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_val));
    bufp->fullBit(oldp+3253,(vlSymsp->TOP__top__DUT.__PVT__reg_en_W));
    bufp->fullBit(oldp+3254,(vlSymsp->TOP__top__sink.__PVT__val));
    bufp->fullBit(oldp+3255,(vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_val));
    bufp->fullBit(oldp+3256,(vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_W));
    bufp->fullBit(oldp+3257,(vlSymsp->TOP__top__DUT__ctrl.__PVT__commit_inst));
    bufp->fullBit(oldp+3258,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_W));
    bufp->fullBit(oldp+3259,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stall_W));
    bufp->fullBit(oldp+3260,(vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_W));
    bufp->fullBit(oldp+3261,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_val));
    bufp->fullBit(oldp+3262,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_val));
    bufp->fullBit(oldp+3263,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_val));
    bufp->fullBit(oldp+3264,(vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__en));
    bufp->fullBit(oldp+3265,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+3266,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+3267,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullIData(oldp+3268,(vlSymsp->TOP__top.__PVT__proc2mngr_msg),32);
    bufp->fullIData(oldp+3269,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_msg),32);
    bufp->fullIData(oldp+3270,(vlSymsp->TOP__top__sink.__PVT__msg),32);
    bufp->fullIData(oldp+3271,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_msg),32);
    bufp->fullIData(oldp+3272,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_msg),32);
    bufp->fullIData(oldp+3273,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__deq_msg),32);
    bufp->fullIData(oldp+3274,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),32);
    bufp->fullBit(oldp+3275,(vlSymsp->TOP__top__DUT.__PVT__imul_resp_val_X));
    bufp->fullBit(oldp+3276,(vlSymsp->TOP__top__DUT.__PVT__imul_req_rdy_D));
    bufp->fullBit(oldp+3277,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_req_rdy_D));
    bufp->fullBit(oldp+3278,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_resp_val_X));
    bufp->fullBit(oldp+3279,(vlSymsp->TOP__top__DUT__dpath.__PVT__imul_req_rdy_D));
    bufp->fullBit(oldp+3280,(vlSymsp->TOP__top__DUT__dpath.__PVT__imul_resp_val_X));
    bufp->fullBit(oldp+3281,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__istream_rdy));
    bufp->fullBit(oldp+3282,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__ostream_val));
    bufp->fullCData(oldp+3283,(vlSymsp->TOP__top__DUT.__PVT__imem_queue_num_free_entries),2);
    bufp->fullCData(oldp+3284,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__num_free_entries),2);
    bufp->fullBit(oldp+3285,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+3286,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullCData(oldp+3287,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__num_free_entries),2);
    bufp->fullBit(oldp+3288,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+3289,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+3290,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    bufp->fullWData(oldp+3291,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__read_data),77);
    bufp->fullWData(oldp+3294,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__read_data),77);
    bufp->fullWData(oldp+3297,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),77);
    bufp->fullIData(oldp+3300,(vlSymsp->TOP__top__mem__mem.__PVT__read_block0_M),32);
    bufp->fullIData(oldp+3301,(vlSymsp->TOP__top__mem__mem.__PVT__read_data0_M),32);
    bufp->fullQData(oldp+3302,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_msg_M),47);
    bufp->fullQData(oldp+3304,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__msg),47);
    bufp->fullIData(oldp+3306,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__data),32);
    bufp->fullQData(oldp+3307,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__enq_msg),47);
    bufp->fullQData(oldp+3309,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__enq_msg),47);
    bufp->fullQData(oldp+3311,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),47);
    bufp->fullQData(oldp+3313,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),47);
    bufp->fullBit(oldp+3315,(vlSymsp->TOP__top__mem.__PVT__mem_memreq1_rdy));
    bufp->fullBit(oldp+3316,(vlSymsp->TOP__top__mem.__PVT__mem_memresp1_val));
    bufp->fullBit(oldp+3317,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_rdy));
    bufp->fullBit(oldp+3318,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_rdy));
    bufp->fullBit(oldp+3319,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_val));
    bufp->fullBit(oldp+3320,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_val));
    bufp->fullBit(oldp+3321,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__rdy));
    bufp->fullBit(oldp+3322,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__val));
    bufp->fullBit(oldp+3323,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+3324,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_val));
    bufp->fullBit(oldp+3325,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+3326,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullBit(oldp+3327,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+3328,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullIData(oldp+3329,(vlSymsp->TOP__top__mem__mem.__PVT__read_block1_M),32);
    bufp->fullIData(oldp+3330,(vlSymsp->TOP__top__mem__mem.__PVT__read_data1_M),32);
    bufp->fullQData(oldp+3331,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_msg_M),47);
    bufp->fullQData(oldp+3333,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__msg),47);
    bufp->fullIData(oldp+3335,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__data),32);
    bufp->fullQData(oldp+3336,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__enq_msg),47);
    bufp->fullQData(oldp+3338,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__enq_msg),47);
    bufp->fullQData(oldp+3340,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),47);
    bufp->fullQData(oldp+3342,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),47);
    bufp->fullIData(oldp+3344,(vlSymsp->TOP__top__DUT__dpath.__PVT__rf_rdata0_D),32);
    bufp->fullIData(oldp+3345,(vlSymsp->TOP__top__DUT__dpath.__PVT__rf_rdata1_D),32);
    bufp->fullIData(oldp+3346,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_data0),32);
    bufp->fullIData(oldp+3347,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_data1),32);
    bufp->fullIData(oldp+3348,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rf_read_data0),32);
    bufp->fullIData(oldp+3349,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rf_read_data1),32);
    bufp->fullIData(oldp+3350,(vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__in0),32);
    bufp->fullIData(oldp+3351,(vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__in0),32);
    bufp->fullIData(oldp+3352,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_data0),32);
    bufp->fullIData(oldp+3353,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_data1),32);
    bufp->fullBit(oldp+3354,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_waddr_X_rs1_D));
    bufp->fullBit(oldp+3355,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_waddr_X_rs2_D));
    bufp->fullBit(oldp+3356,(vlSymsp->TOP__top__DUT__ctrl.__PVT__bypass_waddr_X_rs1_D));
    bufp->fullBit(oldp+3357,(vlSymsp->TOP__top__DUT__ctrl.__PVT__bypass_waddr_X_rs2_D));
    bufp->fullBit(oldp+3358,(vlSymsp->TOP__top__DUT__ctrl.__PVT__bypass_waddr_W_rs1_D));
    bufp->fullBit(oldp+3359,(vlSymsp->TOP__top__DUT__ctrl.__PVT__bypass_waddr_W_rs2_D));
    bufp->fullIData(oldp+3360,(vlSymsp->TOP__top__DUT__dpath.__PVT__jal_target_D),32);
    bufp->fullIData(oldp+3361,(vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__d),32);
    bufp->fullIData(oldp+3362,(vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in2),32);
    bufp->fullIData(oldp+3363,(vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__out),32);
    bufp->fullBit(oldp+3364,(vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__cout));
    bufp->fullBit(oldp+3365,(vlSymsp->TOP__top__DUT.__PVT__br_cond_eq_X));
    bufp->fullBit(oldp+3366,(vlSymsp->TOP__top__DUT.__PVT__br_cond_lt_X));
    bufp->fullBit(oldp+3367,(vlSymsp->TOP__top__DUT.__PVT__br_cond_ltu_X));
    bufp->fullBit(oldp+3368,(vlSymsp->TOP__top__DUT__ctrl.__PVT__br_cond_eq_X));
    bufp->fullBit(oldp+3369,(vlSymsp->TOP__top__DUT__ctrl.__PVT__br_cond_lt_X));
    bufp->fullBit(oldp+3370,(vlSymsp->TOP__top__DUT__ctrl.__PVT__br_cond_ltu_X));
    bufp->fullBit(oldp+3371,(vlSymsp->TOP__top__DUT__dpath.__PVT__br_cond_eq_X));
    bufp->fullBit(oldp+3372,(vlSymsp->TOP__top__DUT__dpath.__PVT__br_cond_lt_X));
    bufp->fullBit(oldp+3373,(vlSymsp->TOP__top__DUT__dpath.__PVT__br_cond_ltu_X));
    bufp->fullBit(oldp+3374,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__ops_eq));
    bufp->fullBit(oldp+3375,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__ops_lt));
    bufp->fullBit(oldp+3376,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__ops_ltu));
    bufp->fullBit(oldp+3377,(vlSymsp->TOP__top__DUT__dpath__alu__cond_eq_comp.__PVT__out));
    bufp->fullBit(oldp+3378,(vlSymsp->TOP__top.__PVT__imem_respstream_val));
    bufp->fullBit(oldp+3379,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_val));
    bufp->fullBit(oldp+3380,(vlSymsp->TOP__top__mem.__PVT__memresp0_val));
    bufp->fullBit(oldp+3381,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__istream_val));
    bufp->fullBit(oldp+3382,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_val));
    bufp->fullBit(oldp+3383,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__val));
    bufp->fullBit(oldp+3384,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__val));
    bufp->fullBit(oldp+3385,(vlSymsp->TOP__top__sink.__PVT__sink_val));
    bufp->fullBit(oldp+3386,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_val));
    bufp->fullBit(oldp+3387,(vlSymsp->TOP__top__sink__sink.__PVT__val));
    bufp->fullQData(oldp+3388,(vlSymsp->TOP__top__mem.__PVT__mem_memresp0_msg),47);
    bufp->fullQData(oldp+3390,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_msg),47);
    bufp->fullQData(oldp+3392,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_msg),47);
    bufp->fullQData(oldp+3394,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__msg),47);
    bufp->fullCData(oldp+3396,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3397,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__opaque),8);
    bufp->fullCData(oldp+3398,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__test),2);
    bufp->fullCData(oldp+3399,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__len),2);
    bufp->fullIData(oldp+3400,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__data),32);
    bufp->fullQData(oldp+3401,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_msg),47);
    bufp->fullQData(oldp+3403,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__deq_msg),47);
    bufp->fullQData(oldp+3405,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),47);
    bufp->fullBit(oldp+3407,(vlSymsp->TOP__top.__PVT__dmem_respstream_val));
    bufp->fullBit(oldp+3408,(vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_val));
    bufp->fullBit(oldp+3409,(vlSymsp->TOP__top__mem.__PVT__memresp1_val));
    bufp->fullBit(oldp+3410,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_respstream_val));
    bufp->fullBit(oldp+3411,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_val));
    bufp->fullBit(oldp+3412,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__val));
    bufp->fullBit(oldp+3413,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__val));
    bufp->fullQData(oldp+3414,(vlSymsp->TOP__top__mem.__PVT__mem_memresp1_msg),47);
    bufp->fullQData(oldp+3416,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_msg),47);
    bufp->fullQData(oldp+3418,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_msg),47);
    bufp->fullQData(oldp+3420,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__msg),47);
    bufp->fullCData(oldp+3422,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3423,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__opaque),8);
    bufp->fullCData(oldp+3424,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__test),2);
    bufp->fullCData(oldp+3425,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__len),2);
    bufp->fullIData(oldp+3426,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__data),32);
    bufp->fullQData(oldp+3427,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_msg),47);
    bufp->fullQData(oldp+3429,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__deq_msg),47);
    bufp->fullQData(oldp+3431,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),47);
    bufp->fullIData(oldp+3433,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg_addr),32);
    bufp->fullBit(oldp+3434,(vlSymsp->TOP__top__DUT__ctrl.__PVT__pc_redirect_X));
    bufp->fullCData(oldp+3435,(vlSymsp->TOP__top__DUT__ctrl.__PVT__pc_sel_X),2);
    bufp->fullIData(oldp+3436,(vlSymsp->TOP__top__DUT__dpath.__PVT__dmem_reqstream_msg_addr),32);
    bufp->fullIData(oldp+3437,(vlSymsp->TOP__top__DUT__dpath.__PVT__jalr_target_X),32);
    bufp->fullIData(oldp+3438,(vlSymsp->TOP__top__DUT__dpath.__PVT__alu_result_X),32);
    bufp->fullIData(oldp+3439,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__out),32);
    bufp->fullIData(oldp+3440,(vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in3),32);
    bufp->fullIData(oldp+3441,(vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__in2),32);
    bufp->fullIData(oldp+3442,(vlSymsp->TOP__top__sink.__PVT__sink_msg),32);
    bufp->fullIData(oldp+3443,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_msg),32);
    bufp->fullIData(oldp+3444,(vlSymsp->TOP__top__sink__sink.__PVT__msg),32);
    bufp->fullQData(oldp+3445,(vlSymsp->TOP__top.__PVT__imem_respstream_msg),47);
    bufp->fullQData(oldp+3447,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_msg),47);
    bufp->fullQData(oldp+3449,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_drop_msg),47);
    bufp->fullQData(oldp+3451,(vlSymsp->TOP__top__mem.__PVT__memresp0_msg),47);
    bufp->fullQData(oldp+3453,(vlSymsp->TOP__top__DUT__dpath.__PVT__imem_respstream_msg),47);
    bufp->fullQData(oldp+3455,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__istream_msg),47);
    bufp->fullQData(oldp+3457,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__ostream_msg),47);
    bufp->fullQData(oldp+3459,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_msg),47);
    bufp->fullQData(oldp+3461,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__msg),47);
    bufp->fullCData(oldp+3463,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3464,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__opaque),8);
    bufp->fullCData(oldp+3465,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__test),2);
    bufp->fullCData(oldp+3466,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__len),2);
    bufp->fullIData(oldp+3467,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__data),32);
    bufp->fullQData(oldp+3468,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__msg),47);
    bufp->fullCData(oldp+3470,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3471,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__opaque),8);
    bufp->fullCData(oldp+3472,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__test),2);
    bufp->fullCData(oldp+3473,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__len),2);
    bufp->fullIData(oldp+3474,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__data),32);
    bufp->fullIData(oldp+3475,(vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__d),32);
    bufp->fullCData(oldp+3476,(vlSymsp->TOP__top__DUT.__PVT__op1_byp_sel_D),2);
    bufp->fullCData(oldp+3477,(vlSymsp->TOP__top__DUT.__PVT__op2_byp_sel_D),2);
    bufp->fullCData(oldp+3478,(vlSymsp->TOP__top__DUT__ctrl.__PVT__op1_byp_sel_D),2);
    bufp->fullCData(oldp+3479,(vlSymsp->TOP__top__DUT__ctrl.__PVT__op2_byp_sel_D),2);
    bufp->fullBit(oldp+3480,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_waddr_M_rs1_D));
    bufp->fullBit(oldp+3481,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_waddr_M_rs2_D));
    bufp->fullBit(oldp+3482,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_hazard_D));
    bufp->fullBit(oldp+3483,(vlSymsp->TOP__top__DUT__ctrl.__PVT__bypass_waddr_M_rs1_D));
    bufp->fullBit(oldp+3484,(vlSymsp->TOP__top__DUT__ctrl.__PVT__bypass_waddr_M_rs2_D));
    bufp->fullCData(oldp+3485,(vlSymsp->TOP__top__DUT__dpath.__PVT__op1_byp_sel_D),2);
    bufp->fullCData(oldp+3486,(vlSymsp->TOP__top__DUT__dpath.__PVT__op2_byp_sel_D),2);
    bufp->fullCData(oldp+3487,(vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__sel),2);
    bufp->fullCData(oldp+3488,(vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__sel),2);
    bufp->fullQData(oldp+3489,(vlSymsp->TOP__top.__PVT__dmem_respstream_msg),47);
    bufp->fullQData(oldp+3491,(vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_msg),47);
    bufp->fullQData(oldp+3493,(vlSymsp->TOP__top__mem.__PVT__memresp1_msg),47);
    bufp->fullIData(oldp+3495,(vlSymsp->TOP__top__DUT__dpath.__PVT__dmem_respstream_msg_data),32);
    bufp->fullIData(oldp+3496,(vlSymsp->TOP__top__DUT__dpath.__PVT__dmem_result_M),32);
    bufp->fullQData(oldp+3497,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_msg),47);
    bufp->fullQData(oldp+3499,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__msg),47);
    bufp->fullCData(oldp+3501,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3502,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__opaque),8);
    bufp->fullCData(oldp+3503,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__test),2);
    bufp->fullCData(oldp+3504,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__len),2);
    bufp->fullIData(oldp+3505,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__data),32);
    bufp->fullQData(oldp+3506,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__msg),47);
    bufp->fullCData(oldp+3508,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3509,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__opaque),8);
    bufp->fullCData(oldp+3510,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__test),2);
    bufp->fullCData(oldp+3511,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__len),2);
    bufp->fullIData(oldp+3512,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__data),32);
    bufp->fullIData(oldp+3513,(vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__in1),32);
    bufp->fullCData(oldp+3514,(vlSymsp->TOP__top__DUT.__PVT__pc_sel_F),2);
    bufp->fullCData(oldp+3515,(vlSymsp->TOP__top__DUT__ctrl.__PVT__pc_sel_F),2);
    bufp->fullCData(oldp+3516,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_sel_F),2);
    bufp->fullCData(oldp+3517,(vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__sel),2);
    bufp->fullIData(oldp+3518,(vlSymsp->TOP__top__DUT__dpath.__PVT__bypass_from_X),32);
    bufp->fullIData(oldp+3519,(vlSymsp->TOP__top__DUT__dpath.__PVT__ex_result_X),32);
    bufp->fullIData(oldp+3520,(vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__d),32);
    bufp->fullIData(oldp+3521,(vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__in1),32);
    bufp->fullIData(oldp+3522,(vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__in1),32);
    bufp->fullIData(oldp+3523,(vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__out),32);
    bufp->fullWData(oldp+3524,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_msg),77);
    bufp->fullWData(oldp+3527,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
    bufp->fullWData(oldp+3530,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),77);
    bufp->fullWData(oldp+3533,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),77);
    bufp->fullBit(oldp+3536,(vlSymsp->TOP__top.__PVT__dmem_respstream_rdy));
    bufp->fullBit(oldp+3537,(vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_rdy));
    bufp->fullBit(oldp+3538,(vlSymsp->TOP__top__DUT.__PVT__reg_en_M));
    bufp->fullBit(oldp+3539,(vlSymsp->TOP__top__mem.__PVT__memresp1_rdy));
    bufp->fullBit(oldp+3540,(vlSymsp->TOP__top__mem.__PVT__mem_memresp1_rdy));
    bufp->fullBit(oldp+3541,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_respstream_rdy));
    bufp->fullBit(oldp+3542,(vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_M));
    bufp->fullBit(oldp+3543,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stall_M));
    bufp->fullBit(oldp+3544,(vlSymsp->TOP__top__DUT__ctrl.__PVT__next_val_M));
    bufp->fullBit(oldp+3545,(vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_M));
    bufp->fullBit(oldp+3546,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_rdy));
    bufp->fullBit(oldp+3547,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_rdy));
    bufp->fullBit(oldp+3548,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_rdy));
    bufp->fullBit(oldp+3549,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_delay_en));
    bufp->fullIData(oldp+3550,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+3551,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+3552,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__state_next));
    bufp->fullBit(oldp+3553,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__rdy));
    bufp->fullBit(oldp+3554,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__rdy));
    bufp->fullBit(oldp+3555,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__rdy));
    bufp->fullBit(oldp+3556,(vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__en));
    bufp->fullIData(oldp+3557,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+3558,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__en));
    bufp->fullBit(oldp+3559,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+3560,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+3561,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+3562,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+3563,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+3564,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullBit(oldp+3565,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullBit(oldp+3566,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullBit(oldp+3567,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    bufp->fullBit(oldp+3568,(vlSymsp->TOP__top.__PVT__dmem_reqstream_val));
    bufp->fullBit(oldp+3569,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_val));
    bufp->fullBit(oldp+3570,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_val));
    bufp->fullBit(oldp+3571,(vlSymsp->TOP__top__DUT.__PVT__reg_en_X));
    bufp->fullBit(oldp+3572,(vlSymsp->TOP__top__DUT.__PVT__imul_resp_rdy_X));
    bufp->fullBit(oldp+3573,(vlSymsp->TOP__top__mem.__PVT__memreq1_val));
    bufp->fullBit(oldp+3574,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_val));
    bufp->fullBit(oldp+3575,(vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_X));
    bufp->fullBit(oldp+3576,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_resp_rdy_X));
    bufp->fullBit(oldp+3577,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stall_X));
    bufp->fullBit(oldp+3578,(vlSymsp->TOP__top__DUT__ctrl.__PVT__next_val_X));
    bufp->fullBit(oldp+3579,(vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_X));
    bufp->fullBit(oldp+3580,(vlSymsp->TOP__top__DUT__dpath.__PVT__imul_resp_rdy_X));
    bufp->fullBit(oldp+3581,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_val));
    bufp->fullBit(oldp+3582,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__val));
    bufp->fullBit(oldp+3583,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__val));
    bufp->fullBit(oldp+3584,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__ostream_rdy));
    bufp->fullBit(oldp+3585,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_val));
    bufp->fullBit(oldp+3586,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_val));
    bufp->fullBit(oldp+3587,(vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__en));
    bufp->fullBit(oldp+3588,(vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__en));
    bufp->fullBit(oldp+3589,(vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__en));
    bufp->fullBit(oldp+3590,(vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__en));
    bufp->fullBit(oldp+3591,(vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__en));
    bufp->fullBit(oldp+3592,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__ostream_rdy));
    bufp->fullBit(oldp+3593,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+3594,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+3595,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullIData(oldp+3596,(vlSymsp->TOP__top__DUT__dpath.__PVT__bypass_from_M),32);
    bufp->fullIData(oldp+3597,(vlSymsp->TOP__top__DUT__dpath.__PVT__wb_result_M),32);
    bufp->fullIData(oldp+3598,(vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__d),32);
    bufp->fullIData(oldp+3599,(vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__in2),32);
    bufp->fullIData(oldp+3600,(vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__in2),32);
    bufp->fullIData(oldp+3601,(vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__out),32);
    bufp->fullWData(oldp+3602,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_enq_msg),77);
    bufp->fullIData(oldp+3605,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_enq_msg_addr),32);
    bufp->fullIData(oldp+3606,(vlSymsp->TOP__top__DUT__dpath.__PVT__imem_reqstream_msg_addr),32);
    bufp->fullIData(oldp+3607,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_next_F),32);
    bufp->fullWData(oldp+3608,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__enq_msg),77);
    bufp->fullIData(oldp+3611,(vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__d),32);
    bufp->fullIData(oldp+3612,(vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__out),32);
    bufp->fullWData(oldp+3613,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
    bufp->fullWData(oldp+3616,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__write_data),77);
    bufp->fullWData(oldp+3619,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),77);
    bufp->fullWData(oldp+3622,(vlSymsp->TOP__top.__PVT__dmem_reqstream_msg),77);
    bufp->fullWData(oldp+3625,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_msg),77);
    bufp->fullWData(oldp+3628,(vlSymsp->TOP__top__mem.__PVT__memreq1_msg),77);
    bufp->fullWData(oldp+3631,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_msg),77);
    bufp->fullWData(oldp+3634,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__msg),77);
    bufp->fullCData(oldp+3637,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3638,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__opaque),8);
    bufp->fullIData(oldp+3639,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__addr),32);
    bufp->fullCData(oldp+3640,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__len),2);
    bufp->fullIData(oldp+3641,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__data),32);
    bufp->fullWData(oldp+3642,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__msg),77);
    bufp->fullCData(oldp+3645,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3646,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__opaque),8);
    bufp->fullIData(oldp+3647,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__addr),32);
    bufp->fullCData(oldp+3648,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__len),2);
    bufp->fullIData(oldp+3649,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__data),32);
    bufp->fullWData(oldp+3650,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_msg),77);
    bufp->fullWData(oldp+3653,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
    bufp->fullWData(oldp+3656,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),77);
    bufp->fullBit(oldp+3659,(vlSymsp->TOP__top.__PVT__dmem_reqstream_rdy));
    bufp->fullBit(oldp+3660,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_rdy));
    bufp->fullBit(oldp+3661,(vlSymsp->TOP__top__mem.__PVT__memreq1_rdy));
    bufp->fullBit(oldp+3662,(vlSymsp->TOP__top__mem.__PVT__mem_memreq1_val));
    bufp->fullBit(oldp+3663,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_rdy));
    bufp->fullBit(oldp+3664,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_val));
    bufp->fullBit(oldp+3665,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_delay_en));
    bufp->fullIData(oldp+3666,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+3667,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__state_next));
    bufp->fullBit(oldp+3668,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_val));
    bufp->fullBit(oldp+3669,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__rdy));
    bufp->fullBit(oldp+3670,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__val));
    bufp->fullBit(oldp+3671,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__rdy));
    bufp->fullBit(oldp+3672,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+3673,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullIData(oldp+3674,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+3675,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__en));
    bufp->fullBit(oldp+3676,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_val));
    bufp->fullBit(oldp+3677,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+3678,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+3679,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+3680,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+3681,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullBit(oldp+3682,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullBit(oldp+3683,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullBit(oldp+3684,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+3685,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+3686,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+3687,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullBit(oldp+3688,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+3689,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullBit(oldp+3690,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    bufp->fullBit(oldp+3691,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    bufp->fullIData(oldp+3692,(vlSymsp->TOP__top__DUT__dpath.__PVT__op1_byp_mux_out),32);
    bufp->fullIData(oldp+3693,(vlSymsp->TOP__top__DUT__dpath.__PVT__op2_byp_mux_out),32);
    bufp->fullIData(oldp+3694,(vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__d),32);
    bufp->fullIData(oldp+3695,(vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__out),32);
    bufp->fullIData(oldp+3696,(vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__out),32);
    bufp->fullIData(oldp+3697,(vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__in0),32);
    bufp->fullIData(oldp+3698,(vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__in0),32);
    bufp->fullWData(oldp+3699,(vlSymsp->TOP__top.__PVT__imem_reqstream_msg),77);
    bufp->fullWData(oldp+3702,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_msg),77);
    bufp->fullWData(oldp+3705,(vlSymsp->TOP__top__mem.__PVT__memreq0_msg),77);
    bufp->fullWData(oldp+3708,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_msg),77);
    bufp->fullWData(oldp+3711,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__msg),77);
    bufp->fullCData(oldp+3714,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3715,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__opaque),8);
    bufp->fullIData(oldp+3716,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__addr),32);
    bufp->fullCData(oldp+3717,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__len),2);
    bufp->fullIData(oldp+3718,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__data),32);
    bufp->fullWData(oldp+3719,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__msg),77);
    bufp->fullCData(oldp+3722,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3723,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__opaque),8);
    bufp->fullIData(oldp+3724,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__addr),32);
    bufp->fullCData(oldp+3725,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__len),2);
    bufp->fullIData(oldp+3726,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__data),32);
    bufp->fullWData(oldp+3727,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__deq_msg),77);
    bufp->fullWData(oldp+3730,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
    bufp->fullWData(oldp+3733,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),77);
    bufp->fullBit(oldp+3736,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_drop));
    bufp->fullBit(oldp+3737,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_respstream_drop));
    bufp->fullBit(oldp+3738,(vlSymsp->TOP__top__DUT__ctrl.__PVT__squash_F));
    bufp->fullBit(oldp+3739,(vlSymsp->TOP__top__DUT__dpath.__PVT__imem_respstream_drop));
    bufp->fullBit(oldp+3740,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__drop));
    bufp->fullWData(oldp+3741,(vlSymsp->TOP__top__mem.__PVT__mem_memreq1_msg),77);
    bufp->fullWData(oldp+3744,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_msg),77);
    bufp->fullWData(oldp+3747,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg),77);
    bufp->fullWData(oldp+3750,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__msg),77);
    bufp->fullCData(oldp+3753,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3754,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__opaque),8);
    bufp->fullIData(oldp+3755,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__addr),32);
    bufp->fullCData(oldp+3756,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__len),2);
    bufp->fullIData(oldp+3757,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__data),32);
    bufp->fullWData(oldp+3758,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_msg),77);
    bufp->fullWData(oldp+3761,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
    bufp->fullWData(oldp+3764,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),77);
    bufp->fullIData(oldp+3767,(vlSymsp->TOP__top__DUT__dpath.__PVT__op1_D),32);
    bufp->fullIData(oldp+3768,(vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__d),32);
    bufp->fullIData(oldp+3769,(vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__out),32);
    bufp->fullBit(oldp+3770,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_drop_val));
    bufp->fullBit(oldp+3771,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_respstream_val));
    bufp->fullBit(oldp+3772,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_F));
    bufp->fullBit(oldp+3773,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__ostream_val));
    bufp->fullBit(oldp+3774,(vlSelf->clk));
    bufp->fullBit(oldp+3775,(vlSelf->linetrace));
    bufp->fullIData(oldp+3776,(vlSymsp->TOP__top.__PVT__mngr2proc_msg),32);
    bufp->fullBit(oldp+3777,(vlSymsp->TOP__top.__PVT__mngr2proc_val));
    bufp->fullIData(oldp+3778,(vlSymsp->TOP__top.__PVT__fp),32);
    bufp->fullIData(oldp+3779,(vlSymsp->TOP__top.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3780,(vlSymsp->TOP__top__DUT.__PVT__mngr2proc_msg),32);
    bufp->fullBit(oldp+3781,(vlSymsp->TOP__top__DUT.__PVT__mngr2proc_val));
    bufp->fullBit(oldp+3782,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_enq_val));
    bufp->fullWData(oldp+3783,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg),77);
    bufp->fullBit(oldp+3786,(vlSymsp->TOP__top__src.__PVT__val));
    bufp->fullIData(oldp+3787,(vlSymsp->TOP__top__src.__PVT__msg),32);
    bufp->fullBit(oldp+3788,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_reqstream_val));
    bufp->fullBit(oldp+3789,(vlSymsp->TOP__top__DUT__ctrl.__PVT__mngr2proc_val));
    bufp->fullBit(oldp+3790,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_D));
    bufp->fullBit(oldp+3791,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_X));
    bufp->fullBit(oldp+3792,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_M));
    bufp->fullBit(oldp+3793,(vlSymsp->TOP__top__DUT__ctrl.__PVT__osquash_X));
    bufp->fullBit(oldp+3794,(vlSymsp->TOP__top__DUT__ctrl.__PVT__squash_D));
    bufp->fullBit(oldp+3795,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_mngr2proc_D));
    bufp->fullIData(oldp+3796,(vlSymsp->TOP__top__DUT__dpath.__PVT__mngr2proc_data),32);
    bufp->fullIData(oldp+3797,(vlSymsp->TOP__top__DUT__dpath.__PVT__op2_D),32);
    bufp->fullIData(oldp+3798,(vlSymsp->TOP__top__DUT__dpath.__PVT__csrr_data_D),32);
    bufp->fullBit(oldp+3799,(vlSymsp->TOP__top__src__src.__PVT__done_next));
    bufp->fullBit(oldp+3800,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_val));
    bufp->fullIData(oldp+3801,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_msg),32);
    bufp->fullIData(oldp+3802,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_num),32);
    bufp->fullIData(oldp+3803,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay),32);
    bufp->fullBit(oldp+3804,(vlSymsp->TOP__top__src__msg_delay.__PVT__state));
    bufp->fullIData(oldp+3805,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_num),32);
    bufp->fullIData(oldp+3806,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay),32);
    bufp->fullBit(oldp+3807,(vlSymsp->TOP__top__sink__msg_delay.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+3808,(vlSymsp->TOP__top__sink__msg_delay.__PVT__state));
    bufp->fullBit(oldp+3809,(vlSymsp->TOP__top__sink__sink.__PVT__reset_reg));
    bufp->fullBit(oldp+3810,(vlSymsp->TOP__top__sink__sink.__PVT__failed));
    bufp->fullBit(oldp+3811,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__state));
    bufp->fullIData(oldp+3812,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_num),32);
    bufp->fullIData(oldp+3813,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_delay),32);
    bufp->fullBit(oldp+3814,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+3815,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__state));
    bufp->fullIData(oldp+3816,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_num),32);
    bufp->fullIData(oldp+3817,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_delay),32);
    bufp->fullBit(oldp+3818,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+3819,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__state));
    bufp->fullIData(oldp+3820,(vlSymsp->TOP__top__mem__mem.__PVT__data_data),32);
    bufp->fullIData(oldp+3821,(vlSymsp->TOP__top__mem__mem.__PVT__wr_i),32);
    bufp->fullBit(oldp+3822,(vlSymsp->TOP__top__mem__mem.__PVT__write_en0_M));
    bufp->fullBit(oldp+3823,(vlSymsp->TOP__top__mem__mem.__PVT__write_en1_M));
    bufp->fullBit(oldp+3824,(vlSymsp->TOP__top__mem__mem.__PVT__amo_en0_M));
    bufp->fullBit(oldp+3825,(vlSymsp->TOP__top__mem__mem.__PVT__amo_en1_M));
    bufp->fullIData(oldp+3826,(vlSymsp->TOP__top__mem__mem.__PVT__wr0_i),32);
    bufp->fullIData(oldp+3827,(vlSymsp->TOP__top__mem__mem.__PVT__wr1_i),32);
    bufp->fullBit(oldp+3828,(vlSymsp->TOP__top__mem__mem.__PVT__memory_cleared));
    bufp->fullIData(oldp+3829,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_num),32);
    bufp->fullIData(oldp+3830,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_delay),32);
    bufp->fullBit(oldp+3831,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+3832,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__state));
    bufp->fullIData(oldp+3833,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_num),32);
    bufp->fullIData(oldp+3834,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_delay),32);
    bufp->fullBit(oldp+3835,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__state));
    bufp->fullCData(oldp+3836,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__state),2);
    bufp->fullCData(oldp+3837,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__new_state),2);
    bufp->fullBit(oldp+3838,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__enq_val));
    bufp->fullIData(oldp+3839,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+3840,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+3841,(vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__d),32);
    bufp->fullIData(oldp+3842,(vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__d),32);
    bufp->fullIData(oldp+3843,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+3844,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+3845,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+3846,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+3847,(vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__in0),32);
    bufp->fullIData(oldp+3848,(vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__out),32);
    bufp->fullIData(oldp+3849,(vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__in2),32);
    bufp->fullIData(oldp+3850,(vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__out),32);
    bufp->fullQData(oldp+3851,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__resp),47);
    bufp->fullQData(oldp+3853,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__resp),47);
    bufp->fullIData(oldp+3855,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3856,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3857,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3858,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3859,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3860,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3861,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3862,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3863,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3864,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3865,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3866,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3867,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3868,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3869,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3870,(vlSymsp->TOP__top__mem__vc_trace.__PVT__cycles),32);
    bufp->fullBit(oldp+3871,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+3872,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullIData(oldp+3873,(vlSymsp->TOP__top.__PVT__core_id),32);
    bufp->fullIData(oldp+3874,(0xaU),32);
    bufp->fullIData(oldp+3875,(0x14U),32);
    bufp->fullIData(oldp+3876,(vlSymsp->TOP__top.__PVT__src_msgs[0]),32);
    bufp->fullIData(oldp+3877,(vlSymsp->TOP__top.__PVT__src_msgs[1]),32);
    bufp->fullIData(oldp+3878,(vlSymsp->TOP__top.__PVT__src_msgs[2]),32);
    bufp->fullIData(oldp+3879,(vlSymsp->TOP__top.__PVT__src_msgs[3]),32);
    bufp->fullIData(oldp+3880,(vlSymsp->TOP__top.__PVT__src_msgs[4]),32);
    bufp->fullIData(oldp+3881,(vlSymsp->TOP__top.__PVT__src_msgs[5]),32);
    bufp->fullIData(oldp+3882,(vlSymsp->TOP__top.__PVT__src_msgs[6]),32);
    bufp->fullIData(oldp+3883,(vlSymsp->TOP__top.__PVT__src_msgs[7]),32);
    bufp->fullIData(oldp+3884,(vlSymsp->TOP__top.__PVT__src_msgs[8]),32);
    bufp->fullIData(oldp+3885,(vlSymsp->TOP__top.__PVT__src_msgs[9]),32);
    bufp->fullIData(oldp+3886,(vlSymsp->TOP__top.__PVT__snk_msgs[0]),32);
    bufp->fullIData(oldp+3887,(vlSymsp->TOP__top.__PVT__snk_msgs[1]),32);
    bufp->fullIData(oldp+3888,(vlSymsp->TOP__top.__PVT__snk_msgs[2]),32);
    bufp->fullIData(oldp+3889,(vlSymsp->TOP__top.__PVT__snk_msgs[3]),32);
    bufp->fullIData(oldp+3890,(vlSymsp->TOP__top.__PVT__snk_msgs[4]),32);
    bufp->fullIData(oldp+3891,(vlSymsp->TOP__top.__PVT__snk_msgs[5]),32);
    bufp->fullIData(oldp+3892,(vlSymsp->TOP__top.__PVT__snk_msgs[6]),32);
    bufp->fullIData(oldp+3893,(vlSymsp->TOP__top.__PVT__snk_msgs[7]),32);
    bufp->fullIData(oldp+3894,(vlSymsp->TOP__top.__PVT__snk_msgs[8]),32);
    bufp->fullIData(oldp+3895,(vlSymsp->TOP__top.__PVT__snk_msgs[9]),32);
    bufp->fullIData(oldp+3896,(1U),32);
    bufp->fullIData(oldp+3897,(0x20U),32);
    bufp->fullIData(oldp+3898,(0x4000U),32);
    bufp->fullIData(oldp+3899,(8U),32);
    bufp->fullIData(oldp+3900,(0x4dU),32);
    bufp->fullIData(oldp+3901,(0x2fU),32);
    bufp->fullIData(oldp+3902,(vlSymsp->TOP__top__mem.__PVT__idx0),32);
    bufp->fullIData(oldp+3903,(vlSymsp->TOP__top__mem.__PVT__idx1),32);
    bufp->fullBit(oldp+3904,(0U));
    bufp->fullBit(oldp+3905,(1U));
    bufp->fullCData(oldp+3906,(0U),5);
    bufp->fullCData(oldp+3907,(0x1fU),5);
    bufp->fullCData(oldp+3908,(0U),3);
    bufp->fullCData(oldp+3909,(1U),3);
    bufp->fullCData(oldp+3910,(2U),3);
    bufp->fullCData(oldp+3911,(3U),3);
    bufp->fullCData(oldp+3912,(4U),3);
    bufp->fullCData(oldp+3913,(5U),3);
    bufp->fullCData(oldp+3914,(6U),3);
    bufp->fullCData(oldp+3915,(0U),2);
    bufp->fullCData(oldp+3916,(1U),2);
    bufp->fullCData(oldp+3917,(2U),2);
    bufp->fullCData(oldp+3918,(0U),4);
    bufp->fullCData(oldp+3919,(1U),4);
    bufp->fullCData(oldp+3920,(2U),4);
    bufp->fullCData(oldp+3921,(3U),4);
    bufp->fullCData(oldp+3922,(4U),4);
    bufp->fullCData(oldp+3923,(5U),4);
    bufp->fullCData(oldp+3924,(6U),4);
    bufp->fullCData(oldp+3925,(7U),4);
    bufp->fullCData(oldp+3926,(8U),4);
    bufp->fullCData(oldp+3927,(9U),4);
    bufp->fullCData(oldp+3928,(0xaU),4);
    bufp->fullCData(oldp+3929,(0xbU),4);
    bufp->fullCData(oldp+3930,(0xcU),4);
    bufp->fullIData(oldp+3931,(0x200U),32);
    bufp->fullIData(oldp+3932,(0U),32);
    bufp->fullIData(oldp+3933,(4U),32);
    bufp->fullIData(oldp+3934,(vlSymsp->TOP__top__src__src.__PVT__m_load[0]),32);
    bufp->fullIData(oldp+3935,(vlSymsp->TOP__top__src__src.__PVT__m_load[1]),32);
    bufp->fullIData(oldp+3936,(vlSymsp->TOP__top__src__src.__PVT__m_load[2]),32);
    bufp->fullIData(oldp+3937,(vlSymsp->TOP__top__src__src.__PVT__m_load[3]),32);
    bufp->fullIData(oldp+3938,(vlSymsp->TOP__top__src__src.__PVT__m_load[4]),32);
    bufp->fullIData(oldp+3939,(vlSymsp->TOP__top__src__src.__PVT__m_load[5]),32);
    bufp->fullIData(oldp+3940,(vlSymsp->TOP__top__src__src.__PVT__m_load[6]),32);
    bufp->fullIData(oldp+3941,(vlSymsp->TOP__top__src__src.__PVT__m_load[7]),32);
    bufp->fullIData(oldp+3942,(vlSymsp->TOP__top__src__src.__PVT__m_load[8]),32);
    bufp->fullIData(oldp+3943,(vlSymsp->TOP__top__src__src.__PVT__m_load[9]),32);
    bufp->fullBit(oldp+3944,(vlSymsp->TOP__top__sink__sink.__PVT__done_next));
    bufp->fullCData(oldp+3945,(vlSymsp->TOP__top__sink__sink.__PVT__verbose),4);
    bufp->fullIData(oldp+3946,(0xeU),32);
    bufp->fullIData(oldp+3947,(0x1000U),32);
    bufp->fullIData(oldp+3948,(0xcU),32);
    bufp->fullIData(oldp+3949,(2U),32);
    bufp->fullIData(oldp+3950,(3U),32);
    bufp->fullIData(oldp+3951,(vlSymsp->TOP__top__mem__mem.__PVT__addr_M),32);
    bufp->fullSData(oldp+3952,(vlSymsp->TOP__top__mem__mem.__PVT__physical_byte_addr),14);
    bufp->fullIData(oldp+3953,(vlSymsp->TOP__top__mem__mem.__PVT__idx0),32);
    bufp->fullIData(oldp+3954,(vlSymsp->TOP__top__mem__mem.__PVT__idx1),32);
    bufp->fullSData(oldp+3955,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+3956,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4084,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4085,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4086,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4087,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4215,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4216,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4217,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4218,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4346,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4347,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4348,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4349,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4477,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4478,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4479,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4480,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4608,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4609,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4610,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4611,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4739,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4740,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4741,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4742,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4870,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4871,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4872,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4873,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__str),4096);
    bufp->fullIData(oldp+5001,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5002,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+5003,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+5004,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__str),4096);
    bufp->fullIData(oldp+5132,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5133,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+5134,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+5135,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__str),4096);
    bufp->fullIData(oldp+5263,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5264,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+5265,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+5266,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__str),4096);
    bufp->fullIData(oldp+5394,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5395,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+5396,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+5397,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__str),4096);
    bufp->fullIData(oldp+5525,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5526,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__idx1),32);
    bufp->fullCData(oldp+5527,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__funct7),7);
    bufp->fullCData(oldp+5528,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__funct7),7);
    bufp->fullWData(oldp+5529,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__str),4096);
    bufp->fullIData(oldp+5657,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__idx0),32);
    bufp->fullIData(oldp+5658,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__idx1),32);
    bufp->fullIData(oldp+5659,(0x1fcU),32);
    bufp->fullIData(oldp+5660,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5661,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5662,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5663,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5664,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5665,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5666,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5667,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5668,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5669,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5670,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5671,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5672,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5673,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5674,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5675,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5676,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5677,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5678,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5679,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5680,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5681,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5682,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5683,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5684,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5685,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5686,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5687,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5688,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5689,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5690,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5691,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5692,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5693,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5694,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5695,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5696,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5697,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5698,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5699,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5700,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5701,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5702,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5703,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5704,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5705,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5706,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5707,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5708,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5709,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5710,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5711,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5712,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5713,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5714,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5715,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5716,(vlSymsp->TOP__top__mem__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+5717,(vlSymsp->TOP__top__mem__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+5718,(vlSymsp->TOP__top__mem__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+5719,(vlSymsp->TOP__top__mem__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+5720,(5U),32);
}
