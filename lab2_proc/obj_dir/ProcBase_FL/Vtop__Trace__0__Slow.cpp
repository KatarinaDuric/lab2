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
    tracep->declBit(c+3182,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3183,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2279,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2280,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1845,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3184,"mngr2proc_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3185,"mngr2proc_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2443,"mngr2proc_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2665,"proc2mngr_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2444,"proc2mngr_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2742,"proc2mngr_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+2445,"imem_reqstream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+2448,"imem_reqstream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2433,"imem_reqstream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+3138,"imem_respstream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declBit(c+3094,"imem_respstream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2449,"imem_respstream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+2672,"dmem_reqstream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+2450,"dmem_reqstream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2709,"dmem_reqstream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+3160,"dmem_respstream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declBit(c+3088,"dmem_respstream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2451,"dmem_respstream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3258,"core_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,"commit_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"stats_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2789,"src_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2427,"snk_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1846,"mem_clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3259,"SINK_SOURCE_MAX",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3260,"MAX_DELAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+3261+i*1,"src_msgs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+3271+i*1,"snk_msgs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+3,"idx",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3186,"fp",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+3187,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3281,"p_num_cores",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2281,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2353,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3188,"mngr2proc_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3189,"mngr2proc_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2452,"mngr2proc_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2666,"proc2mngr_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2453,"proc2mngr_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2743,"proc2mngr_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2454,"imem_reqstream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2457,"imem_reqstream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2434,"imem_reqstream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3140,"imem_respstream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3095,"imem_respstream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2458,"imem_respstream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2675,"dmem_reqstream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2459,"dmem_reqstream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2710,"dmem_reqstream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3162,"dmem_respstream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3089,"dmem_respstream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2460,"dmem_respstream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+26,"core_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3282,"commit_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3283,"stats_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3284,"imem_queue_num_free_entries",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declArray(c+3285,"imem_reqstream_enq_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+3288,"imem_reqstream_enq_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3289,"imem_reqstream_enq_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2461,"imem_reqstream_msg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2892,"dmem_queue_num_free_entries",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+2462,"dmem_reqstream_enq_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+2465,"dmem_reqstream_enq_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2893,"dmem_reqstream_enq_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2466,"dmem_reqstream_enq_msg_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2467,"dmem_reqstream_enq_msg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2468,"dmem_reqstream_enq_msg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2868,"proc2mngr_queue_num_free_entries",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2469,"proc2mngr_enq_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2470,"proc2mngr_enq_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2869,"proc2mngr_enq_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3290,"opcode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2796,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+2797,"rs1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+2798,"rs2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+2799,"funct3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,"funct7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2800,"csr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+2801,"PC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2802,"PC_prev",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2471,"n_PC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2803,"inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2472,"n_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2473,"print_trace",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2804+i*1,"rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2474+i*1,"n_rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "IReq", "IWait", "E", "EWait"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(1, "lab2_proc_ProcFLMultiCycle.pstate", 5, 32, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+2836,"state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2506,"n_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declArray(c+1876,"temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declArray(c+2004,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+2132,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+2133,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3259,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2282,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2371,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3190,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2507,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3191,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2790,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2791,"src_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2508,"src_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2861,"src_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3259,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2283,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2372,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2509,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2744,"rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2667,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2428,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3192,"sink_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2429,"sink_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3193,"sink_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3292,"p_mem_nbytes",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3293,"p_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"p_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3281,"p_reset_to_x",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3293,"o",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"a",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"d",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3294,"c_req_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3295,"c_resp_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2284,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2373,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2374,"mem_clear",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2510,"memreq0_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2435,"memreq0_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2511,"memreq0_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2514,"memreq1_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2711,"memreq1_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2678,"memreq1_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3096,"memresp0_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2515,"memresp0_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3142,"memresp0_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3090,"memresp1_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2516,"memresp1_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3164,"memresp1_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+2517,"mem_memreq0_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3044,"mem_memreq0_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+2518,"mem_memreq0_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+2712,"mem_memreq1_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3030,"mem_memreq1_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+2763,"mem_memreq1_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+3045,"mem_memresp0_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2521,"mem_memresp0_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+3100,"mem_memresp0_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declBit(c+3031,"mem_memresp1_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2522,"mem_memresp1_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+3119,"mem_memresp1_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declBus(c+3296,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3297,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__tinyrv2__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__tinyrv2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2134,"rs1_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+2135,"rs2_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+2136,"rd_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declArray(c+2137,"csr_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 71,0);
    tracep->declBus(c+2140,"funct_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+2141,"rs1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+2142,"rs2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+2143,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+2144,"csr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+2145,"funct",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__inst_unpack__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__inst_unpack__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2837,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2838,"opcode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+2839,"rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+2840,"rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+2841,"rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+2842,"funct3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+3298,"funct7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+2843,"csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__src__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__src__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3259,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2285,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2375,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2792,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2523,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2862,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2793,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3299,"c_index_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1847+i*1,"m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+3300+i*1,"m_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+2524,"index_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2863,"index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+2864,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1857,"index_max",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+2794,"reset_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1858,"data_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3194,"done_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2525,"go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("load__Vstatic__unnamedblk1 ");
    tracep->declBus(c+1859,"count",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2286,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2376,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2795,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2526,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2865,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3195,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2527,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3196,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3197,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2528,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2529,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3198,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2530,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3281,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3310,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3311,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+2531,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3199,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2287,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2377,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2532,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2745,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2668,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3200,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2430,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3201,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3202,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2746,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2747,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3203,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3204,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3281,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3310,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3311,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+2748,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3205,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__sink__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__sink__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3259,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"p_sim_mode",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2288,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2378,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3206,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2431,"rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3207,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2432,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3299,"c_index_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1860+i*1,"m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+2749,"index_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2844,"index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+2845,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1870,"index_max",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+3208,"reset_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1871,"data_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3313,"done_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2750,"go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3209,"failed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3314,"verbose",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+2846,"m_curr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,"t",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("load__Vstatic__unnamedblk1 ");
    tracep->declBus(c+1872,"count",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay0__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3294,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2289,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2379,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2533,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2436,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2534,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2537,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3046,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2538,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3210,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2437,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2438,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3211,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3212,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3281,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3310,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3311,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+2541,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3213,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay1__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3294,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2290,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2380,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2542,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2713,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2681,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2714,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3032,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2766,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3214,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2715,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2716,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3215,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3216,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3281,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3310,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3311,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+2717,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3217,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3292,"p_mem_nbytes",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3293,"p_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"p_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3293,"o",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"a",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"d",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3294,"c_req_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3295,"c_resp_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2291,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2381,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2382,"mem_clear",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2543,"memreq0_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3047,"memreq0_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2544,"memreq0_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2718,"memreq1_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3033,"memreq1_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2769,"memreq1_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+3048,"memresp0_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2547,"memresp0_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3102,"memresp0_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3034,"memresp1_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2548,"memresp1_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3121,"memresp1_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3315,"c_physical_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3299,"c_data_byte_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"c_num_blocks",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3317,"c_physical_block_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3318,"c_block_offset_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3322,"c_amo_add",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3323,"c_amo_and",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3324,"c_amo_or",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3325,"c_req_type_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3293,"c_req_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"c_req_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3318,"c_req_len_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"c_req_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3325,"c_resp_type_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3293,"c_resp_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3318,"c_resp_len_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"c_resp_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2929,"memreq0_val_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2941,"memreq0_rdy_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+2954,"memreq0_msg_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBit(c+2904,"memreq1_val_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2916,"memreq1_rdy_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+2992,"memreq1_msg_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
    tracep->declBus(c+2957,"memreq0_msg_type_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2958,"memreq0_msg_opaque_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+2959,"memreq0_msg_addr_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2960,"memreq0_msg_len_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+2961,"memreq0_msg_data_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2995,"memreq1_msg_type_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2996,"memreq1_msg_opaque_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+2997,"memreq1_msg_addr_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2998,"memreq1_msg_len_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+2999,"memreq1_msg_data_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3218,"data_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1873,"data_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3326,"addr_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1874,"physical_block_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+3327,"physical_byte_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
    tracep->declBus(c+1875,"block_offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3219,"wr_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+2962,"memreq0_msg_len_modified_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3000,"memreq1_msg_len_modified_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2963,"physical_byte_addr0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
    tracep->declBus(c+3001,"physical_byte_addr1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
    tracep->declBus(c+2964,"physical_block_addr0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+2965,"block_offset0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3002,"physical_block_addr1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+3003,"block_offset1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3058,"read_block0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3059,"read_data0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3073,"read_block1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3074,"read_data1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3220,"write_en0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3221,"write_en1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3222,"amo_en0_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3223,"amo_en1_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3224,"wr0_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3225,"wr1_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBit(c+3226,"memory_cleared",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+3060,"memresp0_msg_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declQuad(c+3075,"memresp1_msg_M",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
    tracep->declBus(c+3328,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3329,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
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
    tracep->declBus(c+3295,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2292,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2383,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3049,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2549,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3104,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3097,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2550,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3144,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3227,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2551,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2552,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3228,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2553,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3281,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3310,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3311,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+2554,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3229,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay1__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3295,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2293,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2384,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+11,"max_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3035,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2555,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3123,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3091,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2556,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3166,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3230,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2557,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2558,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3231,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2559,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3281,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3310,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3311,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+2560,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+3232,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_reqstream_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_reqstream_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2294,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2354,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2561,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2439,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2562,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+2565,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2566,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+2567,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2568,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+2569,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3294,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3330,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+3331,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+3459,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3460,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_reqstream_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_reqstream_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2295,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2355,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2570,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2719,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2684,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+2687,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2688,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+2689,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2690,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+2691,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3294,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3461,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+3462,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+3590,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3591,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2296,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2385,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2571,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3050,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2572,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+2575,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2576,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+2577,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2578,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+2579,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3294,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3592,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+3593,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+3721,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3722,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2297,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2386,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2720,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3036,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2772,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+2775,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2776,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+2777,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2778,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+2779,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3294,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3723,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+3724,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+3852,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3853,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memreq0_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memreq0_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2298,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2387,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2580,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2440,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2581,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+2584,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2585,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+2586,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2587,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+2588,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3294,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3854,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+3855,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+3983,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3984,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memreq1_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memreq1_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2299,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2388,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2589,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2721,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2692,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+2695,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2696,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+2697,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2698,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+2699,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3294,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3985,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+3986,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4114,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4115,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2300,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2356,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3098,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2590,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3146,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3148,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3149,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3150,"test",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3151,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3152,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3295,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4116,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4117,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4245,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4246,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_respstream_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_respstream_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2301,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2357,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3092,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2591,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3168,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3170,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3171,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3172,"test",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3173,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3174,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3295,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4247,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4248,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4376,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4377,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2302,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2389,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3051,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2592,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3106,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3108,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3109,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3110,"test",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3111,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3112,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3295,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4378,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4379,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4507,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4508,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2303,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2390,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3037,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2593,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3125,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3127,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3128,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3129,"test",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3130,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3131,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3295,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4509,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4510,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4638,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4639,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memresp0_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memresp0_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2304,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2391,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3099,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2594,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3153,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3155,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3156,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3157,"test",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3158,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3159,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3295,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4640,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4641,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4769,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4770,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memresp1_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memresp1_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2305,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2392,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3093,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2595,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3175,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3177,"type_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3178,"opaque",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3179,"test",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3180,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+3181,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3295,"c_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3319,"c_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3320,"c_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+3321,"c_write_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+4771,"type_str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declArray(c+4772,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+4900,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4901,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4902,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3294,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3281,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2306,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2358,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2596,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2894,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2597,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2600,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2722,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2700,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+2895,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+2723,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2896,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4902,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3291,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3281,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2307,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2359,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2601,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2870,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2602,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2603,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2751,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2669,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2871,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+2752,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2872,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__src__index_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__src__index_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3299,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+4903,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2308,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2405,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2866,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2867,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+2604,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__sink__index_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__sink__index_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3299,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+4903,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2309,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2406,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2847,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2848,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+2753,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__src__msg_delay__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2310,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2407,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3233,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2605,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2606,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__sink__msg_delay__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2311,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2408,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3234,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2754,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2755,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay0__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay0__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2312,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2409,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3235,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2441,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2442,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay1__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_req_delay1__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2313,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2410,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3236,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2724,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2725,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay0__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay0__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2314,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2411,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3237,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2607,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2608,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay1__rand_delay_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__rand_resp_delay1__rand_delay_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2412,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3238,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2609,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2610,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4904,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3294,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3281,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2316,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2393,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2611,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3052,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2612,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2930,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2942,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2966,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+2931,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+2615,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2932,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4904,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3294,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3281,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2317,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2394,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2726,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3038,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2780,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2905,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2917,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3004,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+2906,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+2727,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2907,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_msg_unpack__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_msg_unpack__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3293,"p_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"p_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3294,"c_req_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3325,"c_req_type_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3293,"c_req_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"c_req_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3318,"c_req_len_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"c_req_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+2969,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+2972,"type_",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+2973,"opaque",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+2974,"addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2975,"len",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+2976,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+2977,"req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_msg_unpack__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_msg_unpack__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3293,"p_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"p_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3294,"c_req_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3325,"c_req_type_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3293,"c_req_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"c_req_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3318,"c_req_len_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"c_req_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+3007,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBus(c+3010,"type_",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+3011,"opaque",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+3012,"addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3013,"len",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3014,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+3015,"req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_msg_pack__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_msg_pack__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3293,"p_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"p_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3295,"c_resp_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3325,"c_resp_type_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3293,"c_resp_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"c_resp_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3318,"c_resp_len_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"c_resp_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+3062,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+2980,"type_",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+2981,"opaque",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+2982,"len",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3064,"data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+30,"test",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declQuad(c+3239,"resp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_msg_pack__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_msg_pack__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3293,"p_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"p_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"p_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3295,"c_resp_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3325,"c_resp_type_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3293,"c_resp_opaque_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"c_resp_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3318,"c_resp_len_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3291,"c_resp_data_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+3077,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+3018,"type_",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+3019,"opaque",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+3020,"len",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+3079,"data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"test",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declQuad(c+3241,"resp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4902,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3295,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3281,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2318,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2395,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2933,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2943,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3065,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3053,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2616,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3113,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+2944,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+2617,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2945,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4902,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3295,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3281,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3312,"c_addr_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2319,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2396,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2908,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2918,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3080,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+3039,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2618,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3132,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBus(c+2919,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBit(c+2619,"write_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2920,"bypass_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2320,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2360,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2146,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+2147,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+2148,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+2149,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+2150,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+2278,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3243,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+32,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_reqstream_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_reqstream_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2321,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2361,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4906,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4907,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4908,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4909,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+33,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+12,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3244,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+161,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2322,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2362,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4910,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4911,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4912,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4913,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+162,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+13,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3245,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+290,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2323,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2363,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4914,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4915,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4916,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4917,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+291,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+14,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3246,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+419,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_respstream_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_respstream_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2324,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2364,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4918,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4919,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4920,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4921,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+420,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+15,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3247,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+548,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2325,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2413,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4922,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4923,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4924,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4925,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+549,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+16,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3248,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+677,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2326,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2414,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4926,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4927,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4928,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4929,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+678,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+17,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3249,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+806,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2327,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2415,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4930,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4931,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4932,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4933,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+807,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+18,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3250,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+935,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2328,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2416,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4934,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4935,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4936,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4937,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+936,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+19,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3251,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1064,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2329,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2417,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4938,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4939,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4940,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4941,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1065,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+20,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3252,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1193,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memreq0_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memreq0_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2330,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2418,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4942,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4943,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4944,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4945,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1194,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+21,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3253,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1322,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memreq1_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memreq1_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2419,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4946,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4947,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4948,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4949,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1323,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+22,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3254,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1451,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memresp0_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memresp0_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2332,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2420,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4950,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4951,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4952,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4953,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1452,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+23,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3255,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1580,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__memresp1_trace__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__memresp1_trace__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2333,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2421,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4954,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4955,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4956,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4957,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1581,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+24,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3256,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1709,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__vc_trace__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__vc_trace__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2334,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2422,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4958,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4959,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4960,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4961,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+4905,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3316,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+1710,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+25,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+3257,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1838,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4902,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2335,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2365,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2620,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2897,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2621,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2728,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2729,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2898,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2899,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2900,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2730,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3310,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3311,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+2622,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2731,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2901,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1839,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2732,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4902,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2336,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2366,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2623,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2873,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2624,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2756,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2757,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2874,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2875,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2876,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2758,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3310,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3311,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+2625,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2759,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2877,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1840,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2760,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4902,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2337,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2423,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2934,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2946,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3054,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2626,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2627,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2947,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2948,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2949,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2628,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3310,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3311,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+3055,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2629,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2950,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1841,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2630,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4902,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2338,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2424,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2909,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2921,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3040,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2631,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2632,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2922,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2923,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2924,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2633,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3310,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3311,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+3041,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2634,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2925,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1842,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2635,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4902,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3294,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2339,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2367,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2733,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2902,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2636,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+2703,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+2852,"qstore",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4902,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3291,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2340,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2368,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2761,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2878,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2639,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2670,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2849,"qstore",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4904,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2341,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2425,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2640,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3056,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2935,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2951,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2641,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2936,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2937,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2938,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2642,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3311,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3310,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+2643,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3057,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2939,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2644,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1843,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4904,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+2342,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2426,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2734,"enq_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3042,"enq_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2910,"deq_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2926,"deq_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2735,"write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2911,"bypass_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2912,"num_free_entries",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2913,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2736,"full_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3311,"c_pipe_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+3310,"c_bypass_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+2737,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3043,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2914,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2738,"do_pipe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1844,"do_bypass",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4904,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3294,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2343,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2397,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2645,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2940,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2646,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+2983,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+2986,"qstore",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4904,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3294,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2344,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2398,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2739,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2915,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2783,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3021,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+3024,"qstore",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4902,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3295,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2345,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2399,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2649,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2952,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3067,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+3115,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+2880,"qstore",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4902,"p_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+3295,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2346,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2400,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2650,"write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2927,"bypass_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3082,"enq_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+3134,"deq_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+2886,"qstore",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 46,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3294,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2347,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2369,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2855,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+2651,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2740,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3294,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2348,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2401,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2989,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+2654,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2657,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3294,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2349,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2402,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+3027,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+2786,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2741,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3294,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+2858,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declArray(c+2658,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
    tracep->declBit(c+2903,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+2706,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 76,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2350,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2370,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2850,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2661,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2762,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3291,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2851,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2662,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2879,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2671,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3295,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2351,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2403,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+2882,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+3069,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+2663,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3295,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+2352,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2404,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+2888,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+3084,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+2664,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3295,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+2884,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+3071,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+2953,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3117,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3295,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+2890,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declQuad(c+3086,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
    tracep->declBit(c+2928,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+3136,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 46,0);
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
    tracep->pushNamePrefix("imem_reqstream_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_reqstream_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_reqstream_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imem_respstream_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_trace__0(vlSelf, tracep);
    tracep->pushNamePrefix("vc_trace ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__imem_respstream_trace__vc_trace__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_unpack ");
    Vtop___024root__trace_init_sub__TOP__top__DUT__inst_unpack__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
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
    bufp->fullBit(oldp+1,(vlSymsp->TOP__top.__PVT__commit_inst));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__top.__PVT__stats_en));
    bufp->fullIData(oldp+3,(vlSymsp->TOP__top.__PVT__idx),32);
    bufp->fullCData(oldp+4,(vlSymsp->TOP__top__DUT.__PVT__funct7),7);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__top__src__msg_delay.__PVT__max_delay),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__top__sink__msg_delay.__PVT__max_delay),32);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__top__sink__sink.__PVT__t),32);
    bufp->fullIData(oldp+8,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__max_delay),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__max_delay),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__max_delay),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__max_delay),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+20,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+23,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__top__mem__vc_trace.__PVT__cycles_next),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__top__DUT.__PVT__core_id),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__top__src.__PVT__max_delay),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__top__sink.__PVT__max_delay),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__top__mem.__PVT__max_delay),32);
    bufp->fullCData(oldp+30,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__test),2);
    bufp->fullCData(oldp+31,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__test),2);
    bufp->fullCData(oldp+32,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+33,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+161,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+162,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+290,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+291,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+419,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+420,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+548,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+549,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+677,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+678,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+806,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+807,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+935,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+936,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1064,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1065,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1193,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1194,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1322,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1323,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1451,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1452,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1580,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1581,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1709,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__level),4);
    bufp->fullWData(oldp+1710,(vlSymsp->TOP__top__mem__vc_trace.__PVT__storage),4096);
    bufp->fullCData(oldp+1838,(vlSymsp->TOP__top__mem__vc_trace.__PVT__level),4);
    bufp->fullBit(oldp+1839,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+1840,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+1841,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+1842,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+1843,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullBit(oldp+1844,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullBit(oldp+1845,(vlSymsp->TOP__top.__PVT__reset));
    bufp->fullBit(oldp+1846,(vlSymsp->TOP__top.__PVT__mem_clear));
    bufp->fullIData(oldp+1847,(vlSymsp->TOP__top__src__src.__PVT__m[0]),32);
    bufp->fullIData(oldp+1848,(vlSymsp->TOP__top__src__src.__PVT__m[1]),32);
    bufp->fullIData(oldp+1849,(vlSymsp->TOP__top__src__src.__PVT__m[2]),32);
    bufp->fullIData(oldp+1850,(vlSymsp->TOP__top__src__src.__PVT__m[3]),32);
    bufp->fullIData(oldp+1851,(vlSymsp->TOP__top__src__src.__PVT__m[4]),32);
    bufp->fullIData(oldp+1852,(vlSymsp->TOP__top__src__src.__PVT__m[5]),32);
    bufp->fullIData(oldp+1853,(vlSymsp->TOP__top__src__src.__PVT__m[6]),32);
    bufp->fullIData(oldp+1854,(vlSymsp->TOP__top__src__src.__PVT__m[7]),32);
    bufp->fullIData(oldp+1855,(vlSymsp->TOP__top__src__src.__PVT__m[8]),32);
    bufp->fullIData(oldp+1856,(vlSymsp->TOP__top__src__src.__PVT__m[9]),32);
    bufp->fullCData(oldp+1857,(vlSymsp->TOP__top__src__src.__PVT__index_max),4);
    bufp->fullIData(oldp+1858,(vlSymsp->TOP__top__src__src.__PVT__data_data),32);
    bufp->fullIData(oldp+1859,(vlSymsp->TOP__top__src__src.__PVT__load__Vstatic__unnamedblk1__DOT__count),32);
    bufp->fullIData(oldp+1860,(vlSymsp->TOP__top__sink__sink.__PVT__m[0]),32);
    bufp->fullIData(oldp+1861,(vlSymsp->TOP__top__sink__sink.__PVT__m[1]),32);
    bufp->fullIData(oldp+1862,(vlSymsp->TOP__top__sink__sink.__PVT__m[2]),32);
    bufp->fullIData(oldp+1863,(vlSymsp->TOP__top__sink__sink.__PVT__m[3]),32);
    bufp->fullIData(oldp+1864,(vlSymsp->TOP__top__sink__sink.__PVT__m[4]),32);
    bufp->fullIData(oldp+1865,(vlSymsp->TOP__top__sink__sink.__PVT__m[5]),32);
    bufp->fullIData(oldp+1866,(vlSymsp->TOP__top__sink__sink.__PVT__m[6]),32);
    bufp->fullIData(oldp+1867,(vlSymsp->TOP__top__sink__sink.__PVT__m[7]),32);
    bufp->fullIData(oldp+1868,(vlSymsp->TOP__top__sink__sink.__PVT__m[8]),32);
    bufp->fullIData(oldp+1869,(vlSymsp->TOP__top__sink__sink.__PVT__m[9]),32);
    bufp->fullCData(oldp+1870,(vlSymsp->TOP__top__sink__sink.__PVT__index_max),4);
    bufp->fullIData(oldp+1871,(vlSymsp->TOP__top__sink__sink.__PVT__data_data),32);
    bufp->fullIData(oldp+1872,(vlSymsp->TOP__top__sink__sink.__PVT__load__Vstatic__unnamedblk1__DOT__count),32);
    bufp->fullIData(oldp+1873,(vlSymsp->TOP__top__mem__mem.__PVT__data_address),32);
    bufp->fullSData(oldp+1874,(vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr),12);
    bufp->fullCData(oldp+1875,(vlSymsp->TOP__top__mem__mem.__PVT__block_offset),2);
    bufp->fullWData(oldp+1876,(vlSymsp->TOP__top__DUT.__PVT__temp),4096);
    bufp->fullWData(oldp+2004,(vlSymsp->TOP__top__DUT.__PVT__str),4096);
    bufp->fullIData(oldp+2132,(vlSymsp->TOP__top__DUT.__PVT__idx0),32);
    bufp->fullIData(oldp+2133,(vlSymsp->TOP__top__DUT.__PVT__idx1),32);
    bufp->fullIData(oldp+2134,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str),24);
    bufp->fullIData(oldp+2135,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str),24);
    bufp->fullIData(oldp+2136,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str),24);
    bufp->fullWData(oldp+2137,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr_str),72);
    bufp->fullSData(oldp+2140,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__funct_str),16);
    bufp->fullCData(oldp+2141,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1),5);
    bufp->fullCData(oldp+2142,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2),5);
    bufp->fullCData(oldp+2143,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd),5);
    bufp->fullSData(oldp+2144,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr),12);
    bufp->fullCData(oldp+2145,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__funct),7);
    bufp->fullIData(oldp+2146,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+2147,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+2148,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+2149,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1),32);
    bufp->fullWData(oldp+2150,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__storage),4096);
    bufp->fullIData(oldp+2278,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__cycles_next),32);
    bufp->fullBit(oldp+2279,(vlSymsp->TOP__top.clk));
    bufp->fullBit(oldp+2280,(vlSymsp->TOP__top.linetrace));
    bufp->fullBit(oldp+2281,(vlSymsp->TOP__top__DUT.__PVT__clk));
    bufp->fullBit(oldp+2282,(vlSymsp->TOP__top__src.__PVT__clk));
    bufp->fullBit(oldp+2283,(vlSymsp->TOP__top__sink.__PVT__clk));
    bufp->fullBit(oldp+2284,(vlSymsp->TOP__top__mem.__PVT__clk));
    bufp->fullBit(oldp+2285,(vlSymsp->TOP__top__src__src.__PVT__clk));
    bufp->fullBit(oldp+2286,(vlSymsp->TOP__top__src__msg_delay.__PVT__clk));
    bufp->fullBit(oldp+2287,(vlSymsp->TOP__top__sink__msg_delay.__PVT__clk));
    bufp->fullBit(oldp+2288,(vlSymsp->TOP__top__sink__sink.__PVT__clk));
    bufp->fullBit(oldp+2289,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__clk));
    bufp->fullBit(oldp+2290,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__clk));
    bufp->fullBit(oldp+2291,(vlSymsp->TOP__top__mem__mem.__PVT__clk));
    bufp->fullBit(oldp+2292,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__clk));
    bufp->fullBit(oldp+2293,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__clk));
    bufp->fullBit(oldp+2294,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__clk));
    bufp->fullBit(oldp+2295,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__clk));
    bufp->fullBit(oldp+2296,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__clk));
    bufp->fullBit(oldp+2297,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__clk));
    bufp->fullBit(oldp+2298,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__clk));
    bufp->fullBit(oldp+2299,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__clk));
    bufp->fullBit(oldp+2300,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__clk));
    bufp->fullBit(oldp+2301,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__clk));
    bufp->fullBit(oldp+2302,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__clk));
    bufp->fullBit(oldp+2303,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__clk));
    bufp->fullBit(oldp+2304,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__clk));
    bufp->fullBit(oldp+2305,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__clk));
    bufp->fullBit(oldp+2306,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__clk));
    bufp->fullBit(oldp+2307,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__clk));
    bufp->fullBit(oldp+2308,(vlSymsp->TOP__top__src__src__index_reg.__PVT__clk));
    bufp->fullBit(oldp+2309,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk));
    bufp->fullBit(oldp+2310,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+2311,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+2312,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+2313,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+2314,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+2315,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__clk));
    bufp->fullBit(oldp+2316,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__clk));
    bufp->fullBit(oldp+2317,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__clk));
    bufp->fullBit(oldp+2318,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__clk));
    bufp->fullBit(oldp+2319,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__clk));
    bufp->fullBit(oldp+2320,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2321,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2322,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2323,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2324,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2325,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2326,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2327,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2328,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2329,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2330,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2331,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2332,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2333,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2334,(vlSymsp->TOP__top__mem__vc_trace.__PVT__clk));
    bufp->fullBit(oldp+2335,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2336,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2337,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2338,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2339,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2340,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2341,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2342,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__clk));
    bufp->fullBit(oldp+2343,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2344,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2345,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2346,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__clk));
    bufp->fullBit(oldp+2347,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    bufp->fullBit(oldp+2348,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    bufp->fullBit(oldp+2349,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    bufp->fullBit(oldp+2350,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    bufp->fullBit(oldp+2351,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    bufp->fullBit(oldp+2352,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    bufp->fullBit(oldp+2353,(vlSymsp->TOP__top__DUT.__PVT__reset));
    bufp->fullBit(oldp+2354,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__reset));
    bufp->fullBit(oldp+2355,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__reset));
    bufp->fullBit(oldp+2356,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__reset));
    bufp->fullBit(oldp+2357,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__reset));
    bufp->fullBit(oldp+2358,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__reset));
    bufp->fullBit(oldp+2359,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__reset));
    bufp->fullBit(oldp+2360,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2361,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2362,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2363,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2364,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2365,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2366,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2367,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2368,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2369,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    bufp->fullBit(oldp+2370,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    bufp->fullBit(oldp+2371,(vlSymsp->TOP__top__src.__PVT__reset));
    bufp->fullBit(oldp+2372,(vlSymsp->TOP__top__sink.__PVT__reset));
    bufp->fullBit(oldp+2373,(vlSymsp->TOP__top__mem.__PVT__reset));
    bufp->fullBit(oldp+2374,(vlSymsp->TOP__top__mem.__PVT__mem_clear));
    bufp->fullBit(oldp+2375,(vlSymsp->TOP__top__src__src.__PVT__reset));
    bufp->fullBit(oldp+2376,(vlSymsp->TOP__top__src__msg_delay.__PVT__reset));
    bufp->fullBit(oldp+2377,(vlSymsp->TOP__top__sink__msg_delay.__PVT__reset));
    bufp->fullBit(oldp+2378,(vlSymsp->TOP__top__sink__sink.__PVT__reset));
    bufp->fullBit(oldp+2379,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__reset));
    bufp->fullBit(oldp+2380,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__reset));
    bufp->fullBit(oldp+2381,(vlSymsp->TOP__top__mem__mem.__PVT__reset));
    bufp->fullBit(oldp+2382,(vlSymsp->TOP__top__mem__mem.__PVT__mem_clear));
    bufp->fullBit(oldp+2383,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__reset));
    bufp->fullBit(oldp+2384,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__reset));
    bufp->fullBit(oldp+2385,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__reset));
    bufp->fullBit(oldp+2386,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__reset));
    bufp->fullBit(oldp+2387,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__reset));
    bufp->fullBit(oldp+2388,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__reset));
    bufp->fullBit(oldp+2389,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__reset));
    bufp->fullBit(oldp+2390,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__reset));
    bufp->fullBit(oldp+2391,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__reset));
    bufp->fullBit(oldp+2392,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__reset));
    bufp->fullBit(oldp+2393,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__reset));
    bufp->fullBit(oldp+2394,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__reset));
    bufp->fullBit(oldp+2395,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__reset));
    bufp->fullBit(oldp+2396,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__reset));
    bufp->fullBit(oldp+2397,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2398,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2399,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2400,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__reset));
    bufp->fullBit(oldp+2401,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    bufp->fullBit(oldp+2402,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    bufp->fullBit(oldp+2403,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    bufp->fullBit(oldp+2404,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    bufp->fullBit(oldp+2405,(vlSymsp->TOP__top__src__src__index_reg.__PVT__reset));
    bufp->fullBit(oldp+2406,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset));
    bufp->fullBit(oldp+2407,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+2408,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+2409,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+2410,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+2411,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+2412,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__reset));
    bufp->fullBit(oldp+2413,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2414,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2415,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2416,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2417,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2418,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2419,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2420,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2421,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2422,(vlSymsp->TOP__top__mem__vc_trace.__PVT__reset));
    bufp->fullBit(oldp+2423,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2424,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2425,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2426,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__reset));
    bufp->fullBit(oldp+2427,(vlSymsp->TOP__top.__PVT__snk_done));
    bufp->fullBit(oldp+2428,(vlSymsp->TOP__top__sink.__PVT__done));
    bufp->fullBit(oldp+2429,(vlSymsp->TOP__top__sink.__PVT__sink_rdy));
    bufp->fullBit(oldp+2430,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_rdy));
    bufp->fullBit(oldp+2431,(vlSymsp->TOP__top__sink__sink.__PVT__rdy));
    bufp->fullBit(oldp+2432,(vlSymsp->TOP__top__sink__sink.__PVT__done));
    bufp->fullBit(oldp+2433,(vlSymsp->TOP__top.__PVT__imem_reqstream_rdy));
    bufp->fullBit(oldp+2434,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_rdy));
    bufp->fullBit(oldp+2435,(vlSymsp->TOP__top__mem.__PVT__memreq0_rdy));
    bufp->fullBit(oldp+2436,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_rdy));
    bufp->fullBit(oldp+2437,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_delay_en));
    bufp->fullIData(oldp+2438,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+2439,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__rdy));
    bufp->fullBit(oldp+2440,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__rdy));
    bufp->fullIData(oldp+2441,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+2442,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__en));
    bufp->fullBit(oldp+2443,(vlSymsp->TOP__top.__PVT__mngr2proc_rdy));
    bufp->fullBit(oldp+2444,(vlSymsp->TOP__top.__PVT__proc2mngr_val));
    bufp->fullWData(oldp+2445,(vlSymsp->TOP__top.__PVT__imem_reqstream_msg),77);
    bufp->fullBit(oldp+2448,(vlSymsp->TOP__top.__PVT__imem_reqstream_val));
    bufp->fullBit(oldp+2449,(vlSymsp->TOP__top.__PVT__imem_respstream_rdy));
    bufp->fullBit(oldp+2450,(vlSymsp->TOP__top.__PVT__dmem_reqstream_val));
    bufp->fullBit(oldp+2451,(vlSymsp->TOP__top.__PVT__dmem_respstream_rdy));
    bufp->fullBit(oldp+2452,(vlSymsp->TOP__top__DUT.__PVT__mngr2proc_rdy));
    bufp->fullBit(oldp+2453,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_val));
    bufp->fullWData(oldp+2454,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_msg),77);
    bufp->fullBit(oldp+2457,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_val));
    bufp->fullBit(oldp+2458,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_rdy));
    bufp->fullBit(oldp+2459,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_val));
    bufp->fullBit(oldp+2460,(vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_rdy));
    bufp->fullIData(oldp+2461,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_msg_addr),32);
    bufp->fullWData(oldp+2462,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg),77);
    bufp->fullBit(oldp+2465,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_val));
    bufp->fullCData(oldp+2466,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg_type),3);
    bufp->fullIData(oldp+2467,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg_addr),32);
    bufp->fullIData(oldp+2468,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg_data),32);
    bufp->fullIData(oldp+2469,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_msg),32);
    bufp->fullBit(oldp+2470,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_val));
    bufp->fullIData(oldp+2471,(vlSymsp->TOP__top__DUT.__PVT__n_PC),32);
    bufp->fullIData(oldp+2472,(vlSymsp->TOP__top__DUT.__PVT__n_inst),32);
    bufp->fullBit(oldp+2473,(vlSymsp->TOP__top__DUT.__PVT__print_trace));
    bufp->fullIData(oldp+2474,(vlSymsp->TOP__top__DUT.__PVT__n_rf[0]),32);
    bufp->fullIData(oldp+2475,(vlSymsp->TOP__top__DUT.__PVT__n_rf[1]),32);
    bufp->fullIData(oldp+2476,(vlSymsp->TOP__top__DUT.__PVT__n_rf[2]),32);
    bufp->fullIData(oldp+2477,(vlSymsp->TOP__top__DUT.__PVT__n_rf[3]),32);
    bufp->fullIData(oldp+2478,(vlSymsp->TOP__top__DUT.__PVT__n_rf[4]),32);
    bufp->fullIData(oldp+2479,(vlSymsp->TOP__top__DUT.__PVT__n_rf[5]),32);
    bufp->fullIData(oldp+2480,(vlSymsp->TOP__top__DUT.__PVT__n_rf[6]),32);
    bufp->fullIData(oldp+2481,(vlSymsp->TOP__top__DUT.__PVT__n_rf[7]),32);
    bufp->fullIData(oldp+2482,(vlSymsp->TOP__top__DUT.__PVT__n_rf[8]),32);
    bufp->fullIData(oldp+2483,(vlSymsp->TOP__top__DUT.__PVT__n_rf[9]),32);
    bufp->fullIData(oldp+2484,(vlSymsp->TOP__top__DUT.__PVT__n_rf[10]),32);
    bufp->fullIData(oldp+2485,(vlSymsp->TOP__top__DUT.__PVT__n_rf[11]),32);
    bufp->fullIData(oldp+2486,(vlSymsp->TOP__top__DUT.__PVT__n_rf[12]),32);
    bufp->fullIData(oldp+2487,(vlSymsp->TOP__top__DUT.__PVT__n_rf[13]),32);
    bufp->fullIData(oldp+2488,(vlSymsp->TOP__top__DUT.__PVT__n_rf[14]),32);
    bufp->fullIData(oldp+2489,(vlSymsp->TOP__top__DUT.__PVT__n_rf[15]),32);
    bufp->fullIData(oldp+2490,(vlSymsp->TOP__top__DUT.__PVT__n_rf[16]),32);
    bufp->fullIData(oldp+2491,(vlSymsp->TOP__top__DUT.__PVT__n_rf[17]),32);
    bufp->fullIData(oldp+2492,(vlSymsp->TOP__top__DUT.__PVT__n_rf[18]),32);
    bufp->fullIData(oldp+2493,(vlSymsp->TOP__top__DUT.__PVT__n_rf[19]),32);
    bufp->fullIData(oldp+2494,(vlSymsp->TOP__top__DUT.__PVT__n_rf[20]),32);
    bufp->fullIData(oldp+2495,(vlSymsp->TOP__top__DUT.__PVT__n_rf[21]),32);
    bufp->fullIData(oldp+2496,(vlSymsp->TOP__top__DUT.__PVT__n_rf[22]),32);
    bufp->fullIData(oldp+2497,(vlSymsp->TOP__top__DUT.__PVT__n_rf[23]),32);
    bufp->fullIData(oldp+2498,(vlSymsp->TOP__top__DUT.__PVT__n_rf[24]),32);
    bufp->fullIData(oldp+2499,(vlSymsp->TOP__top__DUT.__PVT__n_rf[25]),32);
    bufp->fullIData(oldp+2500,(vlSymsp->TOP__top__DUT.__PVT__n_rf[26]),32);
    bufp->fullIData(oldp+2501,(vlSymsp->TOP__top__DUT.__PVT__n_rf[27]),32);
    bufp->fullIData(oldp+2502,(vlSymsp->TOP__top__DUT.__PVT__n_rf[28]),32);
    bufp->fullIData(oldp+2503,(vlSymsp->TOP__top__DUT.__PVT__n_rf[29]),32);
    bufp->fullIData(oldp+2504,(vlSymsp->TOP__top__DUT.__PVT__n_rf[30]),32);
    bufp->fullIData(oldp+2505,(vlSymsp->TOP__top__DUT.__PVT__n_rf[31]),32);
    bufp->fullIData(oldp+2506,(vlSymsp->TOP__top__DUT.__PVT__n_state),32);
    bufp->fullBit(oldp+2507,(vlSymsp->TOP__top__src.__PVT__rdy));
    bufp->fullBit(oldp+2508,(vlSymsp->TOP__top__src.__PVT__src_rdy));
    bufp->fullBit(oldp+2509,(vlSymsp->TOP__top__sink.__PVT__val));
    bufp->fullBit(oldp+2510,(vlSymsp->TOP__top__mem.__PVT__memreq0_val));
    bufp->fullWData(oldp+2511,(vlSymsp->TOP__top__mem.__PVT__memreq0_msg),77);
    bufp->fullBit(oldp+2514,(vlSymsp->TOP__top__mem.__PVT__memreq1_val));
    bufp->fullBit(oldp+2515,(vlSymsp->TOP__top__mem.__PVT__memresp0_rdy));
    bufp->fullBit(oldp+2516,(vlSymsp->TOP__top__mem.__PVT__memresp1_rdy));
    bufp->fullBit(oldp+2517,(vlSymsp->TOP__top__mem.__PVT__mem_memreq0_val));
    bufp->fullWData(oldp+2518,(vlSymsp->TOP__top__mem.__PVT__mem_memreq0_msg),77);
    bufp->fullBit(oldp+2521,(vlSymsp->TOP__top__mem.__PVT__mem_memresp0_rdy));
    bufp->fullBit(oldp+2522,(vlSymsp->TOP__top__mem.__PVT__mem_memresp1_rdy));
    bufp->fullBit(oldp+2523,(vlSymsp->TOP__top__src__src.__PVT__rdy));
    bufp->fullBit(oldp+2524,(vlSymsp->TOP__top__src__src.__PVT__index_en));
    bufp->fullBit(oldp+2525,(vlSymsp->TOP__top__src__src.__PVT__go));
    bufp->fullBit(oldp+2526,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_rdy));
    bufp->fullBit(oldp+2527,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_rdy));
    bufp->fullBit(oldp+2528,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay_en));
    bufp->fullIData(oldp+2529,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+2530,(vlSymsp->TOP__top__src__msg_delay.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+2531,(vlSymsp->TOP__top__src__msg_delay.__PVT__state_next));
    bufp->fullBit(oldp+2532,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_val));
    bufp->fullBit(oldp+2533,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_val));
    bufp->fullWData(oldp+2534,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_msg),77);
    bufp->fullBit(oldp+2537,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_val));
    bufp->fullWData(oldp+2538,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_msg),77);
    bufp->fullBit(oldp+2541,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__state_next));
    bufp->fullBit(oldp+2542,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_val));
    bufp->fullBit(oldp+2543,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_val));
    bufp->fullWData(oldp+2544,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg),77);
    bufp->fullBit(oldp+2547,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_rdy));
    bufp->fullBit(oldp+2548,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_rdy));
    bufp->fullBit(oldp+2549,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_rdy));
    bufp->fullBit(oldp+2550,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_rdy));
    bufp->fullBit(oldp+2551,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_delay_en));
    bufp->fullIData(oldp+2552,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+2553,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+2554,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__state_next));
    bufp->fullBit(oldp+2555,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_rdy));
    bufp->fullBit(oldp+2556,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_rdy));
    bufp->fullBit(oldp+2557,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_delay_en));
    bufp->fullIData(oldp+2558,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+2559,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+2560,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__state_next));
    bufp->fullBit(oldp+2561,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__val));
    bufp->fullWData(oldp+2562,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__msg),77);
    bufp->fullCData(oldp+2565,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__type_),3);
    bufp->fullCData(oldp+2566,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__opaque),8);
    bufp->fullIData(oldp+2567,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__addr),32);
    bufp->fullCData(oldp+2568,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__len),2);
    bufp->fullIData(oldp+2569,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__data),32);
    bufp->fullBit(oldp+2570,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__val));
    bufp->fullBit(oldp+2571,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__val));
    bufp->fullWData(oldp+2572,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__msg),77);
    bufp->fullCData(oldp+2575,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__type_),3);
    bufp->fullCData(oldp+2576,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__opaque),8);
    bufp->fullIData(oldp+2577,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__addr),32);
    bufp->fullCData(oldp+2578,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__len),2);
    bufp->fullIData(oldp+2579,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__data),32);
    bufp->fullBit(oldp+2580,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__val));
    bufp->fullWData(oldp+2581,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__msg),77);
    bufp->fullCData(oldp+2584,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__type_),3);
    bufp->fullCData(oldp+2585,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__opaque),8);
    bufp->fullIData(oldp+2586,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__addr),32);
    bufp->fullCData(oldp+2587,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__len),2);
    bufp->fullIData(oldp+2588,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__data),32);
    bufp->fullBit(oldp+2589,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__val));
    bufp->fullBit(oldp+2590,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__rdy));
    bufp->fullBit(oldp+2591,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__rdy));
    bufp->fullBit(oldp+2592,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__rdy));
    bufp->fullBit(oldp+2593,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__rdy));
    bufp->fullBit(oldp+2594,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__rdy));
    bufp->fullBit(oldp+2595,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__rdy));
    bufp->fullBit(oldp+2596,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_val));
    bufp->fullWData(oldp+2597,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_msg),77);
    bufp->fullBit(oldp+2600,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_val));
    bufp->fullBit(oldp+2601,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_val));
    bufp->fullIData(oldp+2602,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_msg),32);
    bufp->fullBit(oldp+2603,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_val));
    bufp->fullBit(oldp+2604,(vlSymsp->TOP__top__src__src__index_reg.__PVT__en));
    bufp->fullIData(oldp+2605,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+2606,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__en));
    bufp->fullIData(oldp+2607,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+2608,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__en));
    bufp->fullIData(oldp+2609,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+2610,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__en));
    bufp->fullBit(oldp+2611,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_val));
    bufp->fullWData(oldp+2612,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_msg),77);
    bufp->fullBit(oldp+2615,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+2616,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+2617,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+2618,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+2619,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+2620,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+2621,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+2622,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullBit(oldp+2623,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+2624,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+2625,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullBit(oldp+2626,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+2627,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+2628,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+2629,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullBit(oldp+2630,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullBit(oldp+2631,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+2632,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+2633,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+2634,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullBit(oldp+2635,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullWData(oldp+2636,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
    bufp->fullIData(oldp+2639,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__enq_msg),32);
    bufp->fullBit(oldp+2640,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+2641,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+2642,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+2643,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullBit(oldp+2644,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+2645,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullWData(oldp+2646,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
    bufp->fullBit(oldp+2649,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullBit(oldp+2650,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullWData(oldp+2651,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),77);
    bufp->fullWData(oldp+2654,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),77);
    bufp->fullBit(oldp+2657,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    bufp->fullWData(oldp+2658,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),77);
    bufp->fullIData(oldp+2661,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),32);
    bufp->fullIData(oldp+2662,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),32);
    bufp->fullBit(oldp+2663,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    bufp->fullBit(oldp+2664,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    bufp->fullIData(oldp+2665,(vlSymsp->TOP__top.__PVT__proc2mngr_msg),32);
    bufp->fullIData(oldp+2666,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_msg),32);
    bufp->fullIData(oldp+2667,(vlSymsp->TOP__top__sink.__PVT__msg),32);
    bufp->fullIData(oldp+2668,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_msg),32);
    bufp->fullIData(oldp+2669,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_msg),32);
    bufp->fullIData(oldp+2670,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__deq_msg),32);
    bufp->fullIData(oldp+2671,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),32);
    bufp->fullWData(oldp+2672,(vlSymsp->TOP__top.__PVT__dmem_reqstream_msg),77);
    bufp->fullWData(oldp+2675,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_msg),77);
    bufp->fullWData(oldp+2678,(vlSymsp->TOP__top__mem.__PVT__memreq1_msg),77);
    bufp->fullWData(oldp+2681,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_msg),77);
    bufp->fullWData(oldp+2684,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__msg),77);
    bufp->fullCData(oldp+2687,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__type_),3);
    bufp->fullCData(oldp+2688,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__opaque),8);
    bufp->fullIData(oldp+2689,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__addr),32);
    bufp->fullCData(oldp+2690,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__len),2);
    bufp->fullIData(oldp+2691,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__data),32);
    bufp->fullWData(oldp+2692,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__msg),77);
    bufp->fullCData(oldp+2695,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__type_),3);
    bufp->fullCData(oldp+2696,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__opaque),8);
    bufp->fullIData(oldp+2697,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__addr),32);
    bufp->fullCData(oldp+2698,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__len),2);
    bufp->fullIData(oldp+2699,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__data),32);
    bufp->fullWData(oldp+2700,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_msg),77);
    bufp->fullWData(oldp+2703,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
    bufp->fullWData(oldp+2706,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),77);
    bufp->fullBit(oldp+2709,(vlSymsp->TOP__top.__PVT__dmem_reqstream_rdy));
    bufp->fullBit(oldp+2710,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_rdy));
    bufp->fullBit(oldp+2711,(vlSymsp->TOP__top__mem.__PVT__memreq1_rdy));
    bufp->fullBit(oldp+2712,(vlSymsp->TOP__top__mem.__PVT__mem_memreq1_val));
    bufp->fullBit(oldp+2713,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_rdy));
    bufp->fullBit(oldp+2714,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_val));
    bufp->fullBit(oldp+2715,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_delay_en));
    bufp->fullIData(oldp+2716,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+2717,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__state_next));
    bufp->fullBit(oldp+2718,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_val));
    bufp->fullBit(oldp+2719,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__rdy));
    bufp->fullBit(oldp+2720,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__val));
    bufp->fullBit(oldp+2721,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__rdy));
    bufp->fullBit(oldp+2722,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+2723,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullIData(oldp+2724,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+2725,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__en));
    bufp->fullBit(oldp+2726,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_val));
    bufp->fullBit(oldp+2727,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+2728,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+2729,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+2730,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+2731,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullBit(oldp+2732,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullBit(oldp+2733,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullBit(oldp+2734,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+2735,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+2736,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+2737,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullBit(oldp+2738,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
    bufp->fullBit(oldp+2739,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullBit(oldp+2740,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    bufp->fullBit(oldp+2741,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    bufp->fullBit(oldp+2742,(vlSymsp->TOP__top.__PVT__proc2mngr_rdy));
    bufp->fullBit(oldp+2743,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_rdy));
    bufp->fullBit(oldp+2744,(vlSymsp->TOP__top__sink.__PVT__rdy));
    bufp->fullBit(oldp+2745,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_rdy));
    bufp->fullBit(oldp+2746,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay_en));
    bufp->fullIData(oldp+2747,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay_next),32);
    bufp->fullBit(oldp+2748,(vlSymsp->TOP__top__sink__msg_delay.__PVT__state_next));
    bufp->fullBit(oldp+2749,(vlSymsp->TOP__top__sink__sink.__PVT__index_en));
    bufp->fullBit(oldp+2750,(vlSymsp->TOP__top__sink__sink.__PVT__go));
    bufp->fullBit(oldp+2751,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+2752,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+2753,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__en));
    bufp->fullIData(oldp+2754,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__d),32);
    bufp->fullBit(oldp+2755,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__en));
    bufp->fullBit(oldp+2756,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+2757,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__write_en));
    bufp->fullBit(oldp+2758,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__full_next));
    bufp->fullBit(oldp+2759,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullBit(oldp+2760,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    bufp->fullBit(oldp+2761,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__write_en));
    bufp->fullBit(oldp+2762,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    bufp->fullWData(oldp+2763,(vlSymsp->TOP__top__mem.__PVT__mem_memreq1_msg),77);
    bufp->fullWData(oldp+2766,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_msg),77);
    bufp->fullWData(oldp+2769,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg),77);
    bufp->fullWData(oldp+2772,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__msg),77);
    bufp->fullCData(oldp+2775,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__type_),3);
    bufp->fullCData(oldp+2776,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__opaque),8);
    bufp->fullIData(oldp+2777,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__addr),32);
    bufp->fullCData(oldp+2778,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__len),2);
    bufp->fullIData(oldp+2779,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__data),32);
    bufp->fullWData(oldp+2780,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_msg),77);
    bufp->fullWData(oldp+2783,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
    bufp->fullWData(oldp+2786,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),77);
    bufp->fullBit(oldp+2789,(vlSymsp->TOP__top.__PVT__src_done));
    bufp->fullBit(oldp+2790,(vlSymsp->TOP__top__src.__PVT__done));
    bufp->fullBit(oldp+2791,(vlSymsp->TOP__top__src.__PVT__src_val));
    bufp->fullBit(oldp+2792,(vlSymsp->TOP__top__src__src.__PVT__val));
    bufp->fullBit(oldp+2793,(vlSymsp->TOP__top__src__src.__PVT__done));
    bufp->fullBit(oldp+2794,(vlSymsp->TOP__top__src__src.__PVT__reset_reg));
    bufp->fullBit(oldp+2795,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_val));
    bufp->fullCData(oldp+2796,(vlSymsp->TOP__top__DUT.__PVT__rd),5);
    bufp->fullCData(oldp+2797,(vlSymsp->TOP__top__DUT.__PVT__rs1),5);
    bufp->fullCData(oldp+2798,(vlSymsp->TOP__top__DUT.__PVT__rs2),5);
    bufp->fullCData(oldp+2799,(vlSymsp->TOP__top__DUT.__PVT__funct3),3);
    bufp->fullSData(oldp+2800,(vlSymsp->TOP__top__DUT.__PVT__csr),12);
    bufp->fullIData(oldp+2801,(vlSymsp->TOP__top__DUT.__PVT__PC),32);
    bufp->fullIData(oldp+2802,(vlSymsp->TOP__top__DUT.__PVT__PC_prev),32);
    bufp->fullIData(oldp+2803,(vlSymsp->TOP__top__DUT.__PVT__inst),32);
    bufp->fullIData(oldp+2804,(vlSymsp->TOP__top__DUT.__PVT__rf[0]),32);
    bufp->fullIData(oldp+2805,(vlSymsp->TOP__top__DUT.__PVT__rf[1]),32);
    bufp->fullIData(oldp+2806,(vlSymsp->TOP__top__DUT.__PVT__rf[2]),32);
    bufp->fullIData(oldp+2807,(vlSymsp->TOP__top__DUT.__PVT__rf[3]),32);
    bufp->fullIData(oldp+2808,(vlSymsp->TOP__top__DUT.__PVT__rf[4]),32);
    bufp->fullIData(oldp+2809,(vlSymsp->TOP__top__DUT.__PVT__rf[5]),32);
    bufp->fullIData(oldp+2810,(vlSymsp->TOP__top__DUT.__PVT__rf[6]),32);
    bufp->fullIData(oldp+2811,(vlSymsp->TOP__top__DUT.__PVT__rf[7]),32);
    bufp->fullIData(oldp+2812,(vlSymsp->TOP__top__DUT.__PVT__rf[8]),32);
    bufp->fullIData(oldp+2813,(vlSymsp->TOP__top__DUT.__PVT__rf[9]),32);
    bufp->fullIData(oldp+2814,(vlSymsp->TOP__top__DUT.__PVT__rf[10]),32);
    bufp->fullIData(oldp+2815,(vlSymsp->TOP__top__DUT.__PVT__rf[11]),32);
    bufp->fullIData(oldp+2816,(vlSymsp->TOP__top__DUT.__PVT__rf[12]),32);
    bufp->fullIData(oldp+2817,(vlSymsp->TOP__top__DUT.__PVT__rf[13]),32);
    bufp->fullIData(oldp+2818,(vlSymsp->TOP__top__DUT.__PVT__rf[14]),32);
    bufp->fullIData(oldp+2819,(vlSymsp->TOP__top__DUT.__PVT__rf[15]),32);
    bufp->fullIData(oldp+2820,(vlSymsp->TOP__top__DUT.__PVT__rf[16]),32);
    bufp->fullIData(oldp+2821,(vlSymsp->TOP__top__DUT.__PVT__rf[17]),32);
    bufp->fullIData(oldp+2822,(vlSymsp->TOP__top__DUT.__PVT__rf[18]),32);
    bufp->fullIData(oldp+2823,(vlSymsp->TOP__top__DUT.__PVT__rf[19]),32);
    bufp->fullIData(oldp+2824,(vlSymsp->TOP__top__DUT.__PVT__rf[20]),32);
    bufp->fullIData(oldp+2825,(vlSymsp->TOP__top__DUT.__PVT__rf[21]),32);
    bufp->fullIData(oldp+2826,(vlSymsp->TOP__top__DUT.__PVT__rf[22]),32);
    bufp->fullIData(oldp+2827,(vlSymsp->TOP__top__DUT.__PVT__rf[23]),32);
    bufp->fullIData(oldp+2828,(vlSymsp->TOP__top__DUT.__PVT__rf[24]),32);
    bufp->fullIData(oldp+2829,(vlSymsp->TOP__top__DUT.__PVT__rf[25]),32);
    bufp->fullIData(oldp+2830,(vlSymsp->TOP__top__DUT.__PVT__rf[26]),32);
    bufp->fullIData(oldp+2831,(vlSymsp->TOP__top__DUT.__PVT__rf[27]),32);
    bufp->fullIData(oldp+2832,(vlSymsp->TOP__top__DUT.__PVT__rf[28]),32);
    bufp->fullIData(oldp+2833,(vlSymsp->TOP__top__DUT.__PVT__rf[29]),32);
    bufp->fullIData(oldp+2834,(vlSymsp->TOP__top__DUT.__PVT__rf[30]),32);
    bufp->fullIData(oldp+2835,(vlSymsp->TOP__top__DUT.__PVT__rf[31]),32);
    bufp->fullIData(oldp+2836,(vlSymsp->TOP__top__DUT.__PVT__state),32);
    bufp->fullIData(oldp+2837,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__inst),32);
    bufp->fullCData(oldp+2838,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__opcode),7);
    bufp->fullCData(oldp+2839,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__rd),5);
    bufp->fullCData(oldp+2840,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__rs1),5);
    bufp->fullCData(oldp+2841,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__rs2),5);
    bufp->fullCData(oldp+2842,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__funct3),3);
    bufp->fullSData(oldp+2843,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__csr),12);
    bufp->fullCData(oldp+2844,(vlSymsp->TOP__top__sink__sink.__PVT__index_next),4);
    bufp->fullCData(oldp+2845,(vlSymsp->TOP__top__sink__sink.__PVT__index),4);
    bufp->fullIData(oldp+2846,(vlSymsp->TOP__top__sink__sink.__PVT__m_curr),32);
    bufp->fullCData(oldp+2847,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__q),4);
    bufp->fullCData(oldp+2848,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__d),4);
    bufp->fullIData(oldp+2849,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__qstore),32);
    bufp->fullIData(oldp+2850,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),32);
    bufp->fullIData(oldp+2851,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),32);
    bufp->fullWData(oldp+2852,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__qstore),77);
    bufp->fullWData(oldp+2855,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),77);
    bufp->fullWData(oldp+2858,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),77);
    bufp->fullIData(oldp+2861,(vlSymsp->TOP__top__src.__PVT__src_msg),32);
    bufp->fullIData(oldp+2862,(vlSymsp->TOP__top__src__src.__PVT__msg),32);
    bufp->fullCData(oldp+2863,(vlSymsp->TOP__top__src__src.__PVT__index_next),4);
    bufp->fullCData(oldp+2864,(vlSymsp->TOP__top__src__src.__PVT__index),4);
    bufp->fullIData(oldp+2865,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_msg),32);
    bufp->fullCData(oldp+2866,(vlSymsp->TOP__top__src__src__index_reg.__PVT__q),4);
    bufp->fullCData(oldp+2867,(vlSymsp->TOP__top__src__src__index_reg.__PVT__d),4);
    bufp->fullBit(oldp+2868,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_queue_num_free_entries));
    bufp->fullBit(oldp+2869,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_rdy));
    bufp->fullBit(oldp+2870,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+2871,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__num_free_entries));
    bufp->fullBit(oldp+2872,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+2873,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+2874,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2875,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
    bufp->fullBit(oldp+2876,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+2877,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+2878,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2879,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    bufp->fullQData(oldp+2880,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__qstore),47);
    bufp->fullQData(oldp+2882,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),47);
    bufp->fullQData(oldp+2884,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),47);
    bufp->fullQData(oldp+2886,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__qstore),47);
    bufp->fullQData(oldp+2888,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),47);
    bufp->fullQData(oldp+2890,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),47);
    bufp->fullBit(oldp+2892,(vlSymsp->TOP__top__DUT.__PVT__dmem_queue_num_free_entries));
    bufp->fullBit(oldp+2893,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_rdy));
    bufp->fullBit(oldp+2894,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+2895,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__num_free_entries));
    bufp->fullBit(oldp+2896,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+2897,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+2898,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2899,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
    bufp->fullBit(oldp+2900,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+2901,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+2902,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2903,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    bufp->fullBit(oldp+2904,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_val_M));
    bufp->fullBit(oldp+2905,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__deq_val));
    bufp->fullBit(oldp+2906,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__num_free_entries));
    bufp->fullBit(oldp+2907,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+2908,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__enq_val));
    bufp->fullBit(oldp+2909,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+2910,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+2911,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2912,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
    bufp->fullBit(oldp+2913,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+2914,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+2915,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2916,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_rdy_M));
    bufp->fullBit(oldp+2917,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+2918,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+2919,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__num_free_entries));
    bufp->fullBit(oldp+2920,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+2921,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+2922,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2923,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
    bufp->fullBit(oldp+2924,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+2925,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+2926,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+2927,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2928,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    bufp->fullBit(oldp+2929,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_val_M));
    bufp->fullBit(oldp+2930,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__deq_val));
    bufp->fullBit(oldp+2931,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__num_free_entries));
    bufp->fullBit(oldp+2932,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+2933,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__enq_val));
    bufp->fullBit(oldp+2934,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->fullBit(oldp+2935,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+2936,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2937,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
    bufp->fullBit(oldp+2938,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+2939,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+2940,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2941,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_rdy_M));
    bufp->fullBit(oldp+2942,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__deq_rdy));
    bufp->fullBit(oldp+2943,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+2944,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__num_free_entries));
    bufp->fullBit(oldp+2945,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+2946,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+2947,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2948,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
    bufp->fullBit(oldp+2949,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__full));
    bufp->fullBit(oldp+2950,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__empty));
    bufp->fullBit(oldp+2951,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
    bufp->fullBit(oldp+2952,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    bufp->fullBit(oldp+2953,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    bufp->fullWData(oldp+2954,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_M),77);
    bufp->fullCData(oldp+2957,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_type_M),3);
    bufp->fullCData(oldp+2958,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_opaque_M),8);
    bufp->fullIData(oldp+2959,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_addr_M),32);
    bufp->fullCData(oldp+2960,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_len_M),2);
    bufp->fullIData(oldp+2961,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_data_M),32);
    bufp->fullCData(oldp+2962,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_len_modified_M),3);
    bufp->fullSData(oldp+2963,(vlSymsp->TOP__top__mem__mem.__PVT__physical_byte_addr0_M),14);
    bufp->fullSData(oldp+2964,(vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr0_M),12);
    bufp->fullCData(oldp+2965,(vlSymsp->TOP__top__mem__mem.__PVT__block_offset0_M),2);
    bufp->fullWData(oldp+2966,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__deq_msg),77);
    bufp->fullWData(oldp+2969,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__msg),77);
    bufp->fullCData(oldp+2972,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__type_),3);
    bufp->fullCData(oldp+2973,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__opaque),8);
    bufp->fullIData(oldp+2974,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__addr),32);
    bufp->fullCData(oldp+2975,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__len),2);
    bufp->fullIData(oldp+2976,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__data),32);
    bufp->fullWData(oldp+2977,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__req),77);
    bufp->fullCData(oldp+2980,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__type_),3);
    bufp->fullCData(oldp+2981,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__opaque),8);
    bufp->fullCData(oldp+2982,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__len),2);
    bufp->fullWData(oldp+2983,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
    bufp->fullWData(oldp+2986,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__qstore),77);
    bufp->fullWData(oldp+2989,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),77);
    bufp->fullWData(oldp+2992,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_M),77);
    bufp->fullCData(oldp+2995,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_type_M),3);
    bufp->fullCData(oldp+2996,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_opaque_M),8);
    bufp->fullIData(oldp+2997,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_addr_M),32);
    bufp->fullCData(oldp+2998,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_len_M),2);
    bufp->fullIData(oldp+2999,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_data_M),32);
    bufp->fullCData(oldp+3000,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_len_modified_M),3);
    bufp->fullSData(oldp+3001,(vlSymsp->TOP__top__mem__mem.__PVT__physical_byte_addr1_M),14);
    bufp->fullSData(oldp+3002,(vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr1_M),12);
    bufp->fullCData(oldp+3003,(vlSymsp->TOP__top__mem__mem.__PVT__block_offset1_M),2);
    bufp->fullWData(oldp+3004,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__deq_msg),77);
    bufp->fullWData(oldp+3007,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__msg),77);
    bufp->fullCData(oldp+3010,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__type_),3);
    bufp->fullCData(oldp+3011,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__opaque),8);
    bufp->fullIData(oldp+3012,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__addr),32);
    bufp->fullCData(oldp+3013,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__len),2);
    bufp->fullIData(oldp+3014,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__data),32);
    bufp->fullWData(oldp+3015,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__req),77);
    bufp->fullCData(oldp+3018,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__type_),3);
    bufp->fullCData(oldp+3019,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__opaque),8);
    bufp->fullCData(oldp+3020,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__len),2);
    bufp->fullWData(oldp+3021,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
    bufp->fullWData(oldp+3024,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__qstore),77);
    bufp->fullWData(oldp+3027,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),77);
    bufp->fullBit(oldp+3030,(vlSymsp->TOP__top__mem.__PVT__mem_memreq1_rdy));
    bufp->fullBit(oldp+3031,(vlSymsp->TOP__top__mem.__PVT__mem_memresp1_val));
    bufp->fullBit(oldp+3032,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_rdy));
    bufp->fullBit(oldp+3033,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_rdy));
    bufp->fullBit(oldp+3034,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_val));
    bufp->fullBit(oldp+3035,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_val));
    bufp->fullBit(oldp+3036,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__rdy));
    bufp->fullBit(oldp+3037,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__val));
    bufp->fullBit(oldp+3038,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+3039,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_val));
    bufp->fullBit(oldp+3040,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+3041,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullBit(oldp+3042,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+3043,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullBit(oldp+3044,(vlSymsp->TOP__top__mem.__PVT__mem_memreq0_rdy));
    bufp->fullBit(oldp+3045,(vlSymsp->TOP__top__mem.__PVT__mem_memresp0_val));
    bufp->fullBit(oldp+3046,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_rdy));
    bufp->fullBit(oldp+3047,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_rdy));
    bufp->fullBit(oldp+3048,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_val));
    bufp->fullBit(oldp+3049,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_val));
    bufp->fullBit(oldp+3050,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__rdy));
    bufp->fullBit(oldp+3051,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__val));
    bufp->fullBit(oldp+3052,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_rdy));
    bufp->fullBit(oldp+3053,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_val));
    bufp->fullBit(oldp+3054,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    bufp->fullBit(oldp+3055,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    bufp->fullBit(oldp+3056,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
    bufp->fullBit(oldp+3057,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    bufp->fullIData(oldp+3058,(vlSymsp->TOP__top__mem__mem.__PVT__read_block0_M),32);
    bufp->fullIData(oldp+3059,(vlSymsp->TOP__top__mem__mem.__PVT__read_data0_M),32);
    bufp->fullQData(oldp+3060,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_msg_M),47);
    bufp->fullQData(oldp+3062,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__msg),47);
    bufp->fullIData(oldp+3064,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__data),32);
    bufp->fullQData(oldp+3065,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__enq_msg),47);
    bufp->fullQData(oldp+3067,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__enq_msg),47);
    bufp->fullQData(oldp+3069,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),47);
    bufp->fullQData(oldp+3071,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),47);
    bufp->fullIData(oldp+3073,(vlSymsp->TOP__top__mem__mem.__PVT__read_block1_M),32);
    bufp->fullIData(oldp+3074,(vlSymsp->TOP__top__mem__mem.__PVT__read_data1_M),32);
    bufp->fullQData(oldp+3075,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_msg_M),47);
    bufp->fullQData(oldp+3077,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__msg),47);
    bufp->fullIData(oldp+3079,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__data),32);
    bufp->fullQData(oldp+3080,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__enq_msg),47);
    bufp->fullQData(oldp+3082,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__enq_msg),47);
    bufp->fullQData(oldp+3084,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),47);
    bufp->fullQData(oldp+3086,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),47);
    bufp->fullBit(oldp+3088,(vlSymsp->TOP__top.__PVT__dmem_respstream_val));
    bufp->fullBit(oldp+3089,(vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_val));
    bufp->fullBit(oldp+3090,(vlSymsp->TOP__top__mem.__PVT__memresp1_val));
    bufp->fullBit(oldp+3091,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_val));
    bufp->fullBit(oldp+3092,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__val));
    bufp->fullBit(oldp+3093,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__val));
    bufp->fullBit(oldp+3094,(vlSymsp->TOP__top.__PVT__imem_respstream_val));
    bufp->fullBit(oldp+3095,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_val));
    bufp->fullBit(oldp+3096,(vlSymsp->TOP__top__mem.__PVT__memresp0_val));
    bufp->fullBit(oldp+3097,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_val));
    bufp->fullBit(oldp+3098,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__val));
    bufp->fullBit(oldp+3099,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__val));
    bufp->fullQData(oldp+3100,(vlSymsp->TOP__top__mem.__PVT__mem_memresp0_msg),47);
    bufp->fullQData(oldp+3102,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_msg),47);
    bufp->fullQData(oldp+3104,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_msg),47);
    bufp->fullQData(oldp+3106,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__msg),47);
    bufp->fullCData(oldp+3108,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3109,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__opaque),8);
    bufp->fullCData(oldp+3110,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__test),2);
    bufp->fullCData(oldp+3111,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__len),2);
    bufp->fullIData(oldp+3112,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__data),32);
    bufp->fullQData(oldp+3113,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_msg),47);
    bufp->fullQData(oldp+3115,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__deq_msg),47);
    bufp->fullQData(oldp+3117,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),47);
    bufp->fullQData(oldp+3119,(vlSymsp->TOP__top__mem.__PVT__mem_memresp1_msg),47);
    bufp->fullQData(oldp+3121,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_msg),47);
    bufp->fullQData(oldp+3123,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_msg),47);
    bufp->fullQData(oldp+3125,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__msg),47);
    bufp->fullCData(oldp+3127,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3128,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__opaque),8);
    bufp->fullCData(oldp+3129,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__test),2);
    bufp->fullCData(oldp+3130,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__len),2);
    bufp->fullIData(oldp+3131,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__data),32);
    bufp->fullQData(oldp+3132,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_msg),47);
    bufp->fullQData(oldp+3134,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__deq_msg),47);
    bufp->fullQData(oldp+3136,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),47);
    bufp->fullQData(oldp+3138,(vlSymsp->TOP__top.__PVT__imem_respstream_msg),47);
    bufp->fullQData(oldp+3140,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_msg),47);
    bufp->fullQData(oldp+3142,(vlSymsp->TOP__top__mem.__PVT__memresp0_msg),47);
    bufp->fullQData(oldp+3144,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_msg),47);
    bufp->fullQData(oldp+3146,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__msg),47);
    bufp->fullCData(oldp+3148,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3149,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__opaque),8);
    bufp->fullCData(oldp+3150,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__test),2);
    bufp->fullCData(oldp+3151,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__len),2);
    bufp->fullIData(oldp+3152,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__data),32);
    bufp->fullQData(oldp+3153,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__msg),47);
    bufp->fullCData(oldp+3155,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3156,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__opaque),8);
    bufp->fullCData(oldp+3157,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__test),2);
    bufp->fullCData(oldp+3158,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__len),2);
    bufp->fullIData(oldp+3159,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__data),32);
    bufp->fullQData(oldp+3160,(vlSymsp->TOP__top.__PVT__dmem_respstream_msg),47);
    bufp->fullQData(oldp+3162,(vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_msg),47);
    bufp->fullQData(oldp+3164,(vlSymsp->TOP__top__mem.__PVT__memresp1_msg),47);
    bufp->fullQData(oldp+3166,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_msg),47);
    bufp->fullQData(oldp+3168,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__msg),47);
    bufp->fullCData(oldp+3170,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3171,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__opaque),8);
    bufp->fullCData(oldp+3172,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__test),2);
    bufp->fullCData(oldp+3173,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__len),2);
    bufp->fullIData(oldp+3174,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__data),32);
    bufp->fullQData(oldp+3175,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__msg),47);
    bufp->fullCData(oldp+3177,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__type_),3);
    bufp->fullCData(oldp+3178,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__opaque),8);
    bufp->fullCData(oldp+3179,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__test),2);
    bufp->fullCData(oldp+3180,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__len),2);
    bufp->fullIData(oldp+3181,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__data),32);
    bufp->fullBit(oldp+3182,(vlSelf->clk));
    bufp->fullBit(oldp+3183,(vlSelf->linetrace));
    bufp->fullIData(oldp+3184,(vlSymsp->TOP__top.__PVT__mngr2proc_msg),32);
    bufp->fullBit(oldp+3185,(vlSymsp->TOP__top.__PVT__mngr2proc_val));
    bufp->fullIData(oldp+3186,(vlSymsp->TOP__top.__PVT__fp),32);
    bufp->fullIData(oldp+3187,(vlSymsp->TOP__top.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3188,(vlSymsp->TOP__top__DUT.__PVT__mngr2proc_msg),32);
    bufp->fullBit(oldp+3189,(vlSymsp->TOP__top__DUT.__PVT__mngr2proc_val));
    bufp->fullBit(oldp+3190,(vlSymsp->TOP__top__src.__PVT__val));
    bufp->fullIData(oldp+3191,(vlSymsp->TOP__top__src.__PVT__msg),32);
    bufp->fullBit(oldp+3192,(vlSymsp->TOP__top__sink.__PVT__sink_val));
    bufp->fullIData(oldp+3193,(vlSymsp->TOP__top__sink.__PVT__sink_msg),32);
    bufp->fullBit(oldp+3194,(vlSymsp->TOP__top__src__src.__PVT__done_next));
    bufp->fullBit(oldp+3195,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_val));
    bufp->fullIData(oldp+3196,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_msg),32);
    bufp->fullIData(oldp+3197,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_num),32);
    bufp->fullIData(oldp+3198,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay),32);
    bufp->fullBit(oldp+3199,(vlSymsp->TOP__top__src__msg_delay.__PVT__state));
    bufp->fullBit(oldp+3200,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_val));
    bufp->fullIData(oldp+3201,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_msg),32);
    bufp->fullIData(oldp+3202,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_num),32);
    bufp->fullIData(oldp+3203,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay),32);
    bufp->fullBit(oldp+3204,(vlSymsp->TOP__top__sink__msg_delay.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+3205,(vlSymsp->TOP__top__sink__msg_delay.__PVT__state));
    bufp->fullBit(oldp+3206,(vlSymsp->TOP__top__sink__sink.__PVT__val));
    bufp->fullIData(oldp+3207,(vlSymsp->TOP__top__sink__sink.__PVT__msg),32);
    bufp->fullBit(oldp+3208,(vlSymsp->TOP__top__sink__sink.__PVT__reset_reg));
    bufp->fullBit(oldp+3209,(vlSymsp->TOP__top__sink__sink.__PVT__failed));
    bufp->fullIData(oldp+3210,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_num),32);
    bufp->fullIData(oldp+3211,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_delay),32);
    bufp->fullBit(oldp+3212,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+3213,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__state));
    bufp->fullIData(oldp+3214,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_num),32);
    bufp->fullIData(oldp+3215,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_delay),32);
    bufp->fullBit(oldp+3216,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__zero_cycle_delay));
    bufp->fullBit(oldp+3217,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__state));
    bufp->fullIData(oldp+3218,(vlSymsp->TOP__top__mem__mem.__PVT__data_data),32);
    bufp->fullIData(oldp+3219,(vlSymsp->TOP__top__mem__mem.__PVT__wr_i),32);
    bufp->fullBit(oldp+3220,(vlSymsp->TOP__top__mem__mem.__PVT__write_en0_M));
    bufp->fullBit(oldp+3221,(vlSymsp->TOP__top__mem__mem.__PVT__write_en1_M));
    bufp->fullBit(oldp+3222,(vlSymsp->TOP__top__mem__mem.__PVT__amo_en0_M));
    bufp->fullBit(oldp+3223,(vlSymsp->TOP__top__mem__mem.__PVT__amo_en1_M));
    bufp->fullIData(oldp+3224,(vlSymsp->TOP__top__mem__mem.__PVT__wr0_i),32);
    bufp->fullIData(oldp+3225,(vlSymsp->TOP__top__mem__mem.__PVT__wr1_i),32);
    bufp->fullBit(oldp+3226,(vlSymsp->TOP__top__mem__mem.__PVT__memory_cleared));
    bufp->fullIData(oldp+3227,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_num),32);
    bufp->fullIData(oldp+3228,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_delay),32);
    bufp->fullBit(oldp+3229,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__state));
    bufp->fullIData(oldp+3230,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_num),32);
    bufp->fullIData(oldp+3231,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_delay),32);
    bufp->fullBit(oldp+3232,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__state));
    bufp->fullIData(oldp+3233,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+3234,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+3235,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+3236,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+3237,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__q),32);
    bufp->fullIData(oldp+3238,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__q),32);
    bufp->fullQData(oldp+3239,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__resp),47);
    bufp->fullQData(oldp+3241,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__resp),47);
    bufp->fullIData(oldp+3243,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3244,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3245,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3246,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3247,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3248,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3249,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3250,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3251,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3252,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3253,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3254,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3255,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3256,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3257,(vlSymsp->TOP__top__mem__vc_trace.__PVT__cycles),32);
    bufp->fullIData(oldp+3258,(vlSymsp->TOP__top.__PVT__core_id),32);
    bufp->fullIData(oldp+3259,(0xaU),32);
    bufp->fullIData(oldp+3260,(0x14U),32);
    bufp->fullIData(oldp+3261,(vlSymsp->TOP__top.__PVT__src_msgs[0]),32);
    bufp->fullIData(oldp+3262,(vlSymsp->TOP__top.__PVT__src_msgs[1]),32);
    bufp->fullIData(oldp+3263,(vlSymsp->TOP__top.__PVT__src_msgs[2]),32);
    bufp->fullIData(oldp+3264,(vlSymsp->TOP__top.__PVT__src_msgs[3]),32);
    bufp->fullIData(oldp+3265,(vlSymsp->TOP__top.__PVT__src_msgs[4]),32);
    bufp->fullIData(oldp+3266,(vlSymsp->TOP__top.__PVT__src_msgs[5]),32);
    bufp->fullIData(oldp+3267,(vlSymsp->TOP__top.__PVT__src_msgs[6]),32);
    bufp->fullIData(oldp+3268,(vlSymsp->TOP__top.__PVT__src_msgs[7]),32);
    bufp->fullIData(oldp+3269,(vlSymsp->TOP__top.__PVT__src_msgs[8]),32);
    bufp->fullIData(oldp+3270,(vlSymsp->TOP__top.__PVT__src_msgs[9]),32);
    bufp->fullIData(oldp+3271,(vlSymsp->TOP__top.__PVT__snk_msgs[0]),32);
    bufp->fullIData(oldp+3272,(vlSymsp->TOP__top.__PVT__snk_msgs[1]),32);
    bufp->fullIData(oldp+3273,(vlSymsp->TOP__top.__PVT__snk_msgs[2]),32);
    bufp->fullIData(oldp+3274,(vlSymsp->TOP__top.__PVT__snk_msgs[3]),32);
    bufp->fullIData(oldp+3275,(vlSymsp->TOP__top.__PVT__snk_msgs[4]),32);
    bufp->fullIData(oldp+3276,(vlSymsp->TOP__top.__PVT__snk_msgs[5]),32);
    bufp->fullIData(oldp+3277,(vlSymsp->TOP__top.__PVT__snk_msgs[6]),32);
    bufp->fullIData(oldp+3278,(vlSymsp->TOP__top.__PVT__snk_msgs[7]),32);
    bufp->fullIData(oldp+3279,(vlSymsp->TOP__top.__PVT__snk_msgs[8]),32);
    bufp->fullIData(oldp+3280,(vlSymsp->TOP__top.__PVT__snk_msgs[9]),32);
    bufp->fullIData(oldp+3281,(1U),32);
    bufp->fullBit(oldp+3282,(vlSymsp->TOP__top__DUT.__PVT__commit_inst));
    bufp->fullBit(oldp+3283,(vlSymsp->TOP__top__DUT.__PVT__stats_en));
    bufp->fullCData(oldp+3284,(vlSymsp->TOP__top__DUT.__PVT__imem_queue_num_free_entries),2);
    bufp->fullWData(oldp+3285,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_enq_msg),77);
    bufp->fullBit(oldp+3288,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_enq_val));
    bufp->fullBit(oldp+3289,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_enq_rdy));
    bufp->fullCData(oldp+3290,(vlSymsp->TOP__top__DUT.__PVT__opcode),7);
    bufp->fullIData(oldp+3291,(0x20U),32);
    bufp->fullIData(oldp+3292,(0x4000U),32);
    bufp->fullIData(oldp+3293,(8U),32);
    bufp->fullIData(oldp+3294,(0x4dU),32);
    bufp->fullIData(oldp+3295,(0x2fU),32);
    bufp->fullIData(oldp+3296,(vlSymsp->TOP__top__mem.__PVT__idx0),32);
    bufp->fullIData(oldp+3297,(vlSymsp->TOP__top__mem.__PVT__idx1),32);
    bufp->fullCData(oldp+3298,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__funct7),7);
    bufp->fullIData(oldp+3299,(4U),32);
    bufp->fullIData(oldp+3300,(vlSymsp->TOP__top__src__src.__PVT__m_load[0]),32);
    bufp->fullIData(oldp+3301,(vlSymsp->TOP__top__src__src.__PVT__m_load[1]),32);
    bufp->fullIData(oldp+3302,(vlSymsp->TOP__top__src__src.__PVT__m_load[2]),32);
    bufp->fullIData(oldp+3303,(vlSymsp->TOP__top__src__src.__PVT__m_load[3]),32);
    bufp->fullIData(oldp+3304,(vlSymsp->TOP__top__src__src.__PVT__m_load[4]),32);
    bufp->fullIData(oldp+3305,(vlSymsp->TOP__top__src__src.__PVT__m_load[5]),32);
    bufp->fullIData(oldp+3306,(vlSymsp->TOP__top__src__src.__PVT__m_load[6]),32);
    bufp->fullIData(oldp+3307,(vlSymsp->TOP__top__src__src.__PVT__m_load[7]),32);
    bufp->fullIData(oldp+3308,(vlSymsp->TOP__top__src__src.__PVT__m_load[8]),32);
    bufp->fullIData(oldp+3309,(vlSymsp->TOP__top__src__src.__PVT__m_load[9]),32);
    bufp->fullBit(oldp+3310,(0U));
    bufp->fullBit(oldp+3311,(1U));
    bufp->fullIData(oldp+3312,(0U),32);
    bufp->fullBit(oldp+3313,(vlSymsp->TOP__top__sink__sink.__PVT__done_next));
    bufp->fullCData(oldp+3314,(vlSymsp->TOP__top__sink__sink.__PVT__verbose),4);
    bufp->fullIData(oldp+3315,(0xeU),32);
    bufp->fullIData(oldp+3316,(0x1000U),32);
    bufp->fullIData(oldp+3317,(0xcU),32);
    bufp->fullIData(oldp+3318,(2U),32);
    bufp->fullCData(oldp+3319,(0U),3);
    bufp->fullCData(oldp+3320,(1U),3);
    bufp->fullCData(oldp+3321,(2U),3);
    bufp->fullCData(oldp+3322,(3U),3);
    bufp->fullCData(oldp+3323,(4U),3);
    bufp->fullCData(oldp+3324,(5U),3);
    bufp->fullIData(oldp+3325,(3U),32);
    bufp->fullIData(oldp+3326,(vlSymsp->TOP__top__mem__mem.__PVT__addr_M),32);
    bufp->fullSData(oldp+3327,(vlSymsp->TOP__top__mem__mem.__PVT__physical_byte_addr),14);
    bufp->fullIData(oldp+3328,(vlSymsp->TOP__top__mem__mem.__PVT__idx0),32);
    bufp->fullIData(oldp+3329,(vlSymsp->TOP__top__mem__mem.__PVT__idx1),32);
    bufp->fullSData(oldp+3330,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+3331,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__str),4096);
    bufp->fullIData(oldp+3459,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+3460,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+3461,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+3462,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__str),4096);
    bufp->fullIData(oldp+3590,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+3591,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+3592,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+3593,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__str),4096);
    bufp->fullIData(oldp+3721,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+3722,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+3723,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+3724,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__str),4096);
    bufp->fullIData(oldp+3852,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+3853,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+3854,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+3855,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__str),4096);
    bufp->fullIData(oldp+3983,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+3984,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+3985,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+3986,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4114,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4115,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4116,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4117,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4245,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4246,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4247,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4248,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4376,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4377,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4378,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4379,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4507,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4508,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4509,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4510,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4638,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4639,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4640,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4641,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4769,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4770,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__idx1),32);
    bufp->fullSData(oldp+4771,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__type_str),16);
    bufp->fullWData(oldp+4772,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__str),4096);
    bufp->fullIData(oldp+4900,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4901,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__idx1),32);
    bufp->fullCData(oldp+4902,(2U),4);
    bufp->fullCData(oldp+4903,(0U),4);
    bufp->fullCData(oldp+4904,(1U),4);
    bufp->fullIData(oldp+4905,(0x200U),32);
    bufp->fullIData(oldp+4906,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4907,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4908,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4909,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4910,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4911,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4912,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4913,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4914,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4915,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4916,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4917,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4918,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4919,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4920,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4921,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4922,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4923,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4924,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4925,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4926,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4927,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4928,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4929,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4930,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4931,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4932,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4933,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4934,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4935,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4936,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4937,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4938,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4939,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4940,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4941,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4942,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4943,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4944,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4945,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4946,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4947,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4948,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4949,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4950,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4951,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4952,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4953,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4954,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4955,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4956,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4957,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__idx1),32);
    bufp->fullIData(oldp+4958,(vlSymsp->TOP__top__mem__vc_trace.__PVT__len0),32);
    bufp->fullIData(oldp+4959,(vlSymsp->TOP__top__mem__vc_trace.__PVT__len1),32);
    bufp->fullIData(oldp+4960,(vlSymsp->TOP__top__mem__vc_trace.__PVT__idx0),32);
    bufp->fullIData(oldp+4961,(vlSymsp->TOP__top__mem__vc_trace.__PVT__idx1),32);
}
