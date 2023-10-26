// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__top.__PVT__idx),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__top__DUT__dpath.__PVT__core_id),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__top__src__msg_delay.__PVT__max_delay),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__top__sink__msg_delay.__PVT__max_delay),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__top__sink__sink.__PVT__t),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__max_delay),32);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__max_delay),32);
        bufp->chgIData(oldp+7,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__max_delay),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__max_delay),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__in1),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__in2),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__top__mem__vc_trace.__PVT__cycles_next),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+26,(vlSymsp->TOP__top__DUT.__PVT__core_id),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__top__src.__PVT__max_delay),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__top__sink.__PVT__max_delay),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__top__mem.__PVT__max_delay),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__top__DUT__dpath.__PVT__num_cores),32);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__cin));
        bufp->chgCData(oldp+32,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__test),2);
        bufp->chgCData(oldp+33,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__test),2);
        bufp->chgWData(oldp+34,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+162,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__level),4);
        bufp->chgCData(oldp+163,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+164,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+292,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+293,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+421,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+422,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+550,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+551,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+679,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+680,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+808,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+809,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+937,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+938,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1066,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1067,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1195,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1196,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1324,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1325,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1453,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1454,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1582,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1583,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1711,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1712,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1840,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1841,(vlSymsp->TOP__top__mem__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1969,(vlSymsp->TOP__top__mem__vc_trace.__PVT__level),4);
        bufp->chgBit(oldp+1970,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+1971,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+1972,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+1973,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+1974,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+1975,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
        bufp->chgBit(oldp+1976,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x5aU]))) {
        bufp->chgBit(oldp+1977,(vlSymsp->TOP__top.__PVT__reset));
        bufp->chgBit(oldp+1978,(vlSymsp->TOP__top.__PVT__mem_clear));
        bufp->chgIData(oldp+1979,(vlSymsp->TOP__top__src__src.__PVT__m[0]),32);
        bufp->chgIData(oldp+1980,(vlSymsp->TOP__top__src__src.__PVT__m[1]),32);
        bufp->chgIData(oldp+1981,(vlSymsp->TOP__top__src__src.__PVT__m[2]),32);
        bufp->chgIData(oldp+1982,(vlSymsp->TOP__top__src__src.__PVT__m[3]),32);
        bufp->chgIData(oldp+1983,(vlSymsp->TOP__top__src__src.__PVT__m[4]),32);
        bufp->chgIData(oldp+1984,(vlSymsp->TOP__top__src__src.__PVT__m[5]),32);
        bufp->chgIData(oldp+1985,(vlSymsp->TOP__top__src__src.__PVT__m[6]),32);
        bufp->chgIData(oldp+1986,(vlSymsp->TOP__top__src__src.__PVT__m[7]),32);
        bufp->chgIData(oldp+1987,(vlSymsp->TOP__top__src__src.__PVT__m[8]),32);
        bufp->chgIData(oldp+1988,(vlSymsp->TOP__top__src__src.__PVT__m[9]),32);
        bufp->chgCData(oldp+1989,(vlSymsp->TOP__top__src__src.__PVT__index_max),4);
        bufp->chgIData(oldp+1990,(vlSymsp->TOP__top__src__src.__PVT__data_data),32);
        bufp->chgIData(oldp+1991,(vlSymsp->TOP__top__src__src.__PVT__load__Vstatic__unnamedblk1__DOT__count),32);
        bufp->chgIData(oldp+1992,(vlSymsp->TOP__top__sink__sink.__PVT__m[0]),32);
        bufp->chgIData(oldp+1993,(vlSymsp->TOP__top__sink__sink.__PVT__m[1]),32);
        bufp->chgIData(oldp+1994,(vlSymsp->TOP__top__sink__sink.__PVT__m[2]),32);
        bufp->chgIData(oldp+1995,(vlSymsp->TOP__top__sink__sink.__PVT__m[3]),32);
        bufp->chgIData(oldp+1996,(vlSymsp->TOP__top__sink__sink.__PVT__m[4]),32);
        bufp->chgIData(oldp+1997,(vlSymsp->TOP__top__sink__sink.__PVT__m[5]),32);
        bufp->chgIData(oldp+1998,(vlSymsp->TOP__top__sink__sink.__PVT__m[6]),32);
        bufp->chgIData(oldp+1999,(vlSymsp->TOP__top__sink__sink.__PVT__m[7]),32);
        bufp->chgIData(oldp+2000,(vlSymsp->TOP__top__sink__sink.__PVT__m[8]),32);
        bufp->chgIData(oldp+2001,(vlSymsp->TOP__top__sink__sink.__PVT__m[9]),32);
        bufp->chgCData(oldp+2002,(vlSymsp->TOP__top__sink__sink.__PVT__index_max),4);
        bufp->chgIData(oldp+2003,(vlSymsp->TOP__top__sink__sink.__PVT__data_data),32);
        bufp->chgIData(oldp+2004,(vlSymsp->TOP__top__sink__sink.__PVT__load__Vstatic__unnamedblk1__DOT__count),32);
        bufp->chgIData(oldp+2005,(vlSymsp->TOP__top__mem__mem.__PVT__data_address),32);
        bufp->chgSData(oldp+2006,(vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr),12);
        bufp->chgCData(oldp+2007,(vlSymsp->TOP__top__mem__mem.__PVT__block_offset),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x5bU]))) {
        bufp->chgWData(oldp+2008,(vlSymsp->TOP__top__DUT.__PVT__temp),4096);
        bufp->chgWData(oldp+2136,(vlSymsp->TOP__top__DUT.__PVT__str),4096);
        bufp->chgIData(oldp+2264,(vlSymsp->TOP__top__DUT.__PVT__idx0),32);
        bufp->chgIData(oldp+2265,(vlSymsp->TOP__top__DUT.__PVT__idx1),32);
        bufp->chgIData(oldp+2266,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str),24);
        bufp->chgIData(oldp+2267,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str),24);
        bufp->chgIData(oldp+2268,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str),24);
        bufp->chgWData(oldp+2269,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr_str),72);
        bufp->chgSData(oldp+2272,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__funct_str),16);
        bufp->chgCData(oldp+2273,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1),5);
        bufp->chgCData(oldp+2274,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2),5);
        bufp->chgCData(oldp+2275,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd),5);
        bufp->chgSData(oldp+2276,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr),12);
        bufp->chgCData(oldp+2277,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__funct),7);
        bufp->chgIData(oldp+2278,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0),32);
        bufp->chgIData(oldp+2279,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1),32);
        bufp->chgIData(oldp+2280,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0),32);
        bufp->chgIData(oldp+2281,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1),32);
        bufp->chgWData(oldp+2282,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__storage),4096);
        bufp->chgIData(oldp+2410,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__cycles_next),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+2411,(vlSymsp->TOP__top.clk));
        bufp->chgBit(oldp+2412,(vlSymsp->TOP__top.linetrace));
        bufp->chgBit(oldp+2413,(vlSymsp->TOP__top__DUT.__PVT__clk));
        bufp->chgBit(oldp+2414,(vlSymsp->TOP__top__src.__PVT__clk));
        bufp->chgBit(oldp+2415,(vlSymsp->TOP__top__sink.__PVT__clk));
        bufp->chgBit(oldp+2416,(vlSymsp->TOP__top__mem.__PVT__clk));
        bufp->chgBit(oldp+2417,(vlSymsp->TOP__top__DUT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2418,(vlSymsp->TOP__top__DUT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2419,(vlSymsp->TOP__top__src__src.__PVT__clk));
        bufp->chgBit(oldp+2420,(vlSymsp->TOP__top__src__msg_delay.__PVT__clk));
        bufp->chgBit(oldp+2421,(vlSymsp->TOP__top__sink__msg_delay.__PVT__clk));
        bufp->chgBit(oldp+2422,(vlSymsp->TOP__top__sink__sink.__PVT__clk));
        bufp->chgBit(oldp+2423,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__clk));
        bufp->chgBit(oldp+2424,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__clk));
        bufp->chgBit(oldp+2425,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__clk));
        bufp->chgBit(oldp+2426,(vlSymsp->TOP__top__mem__mem.__PVT__clk));
        bufp->chgBit(oldp+2427,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__clk));
        bufp->chgBit(oldp+2428,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__clk));
        bufp->chgBit(oldp+2429,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__clk));
        bufp->chgBit(oldp+2430,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__clk));
        bufp->chgBit(oldp+2431,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__clk));
        bufp->chgBit(oldp+2432,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__clk));
        bufp->chgBit(oldp+2433,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__clk));
        bufp->chgBit(oldp+2434,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__clk));
        bufp->chgBit(oldp+2435,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__clk));
        bufp->chgBit(oldp+2436,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__clk));
        bufp->chgBit(oldp+2437,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__clk));
        bufp->chgBit(oldp+2438,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__clk));
        bufp->chgBit(oldp+2439,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__clk));
        bufp->chgBit(oldp+2440,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__clk));
        bufp->chgBit(oldp+2441,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__clk));
        bufp->chgBit(oldp+2442,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__clk));
        bufp->chgBit(oldp+2443,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__clk));
        bufp->chgBit(oldp+2444,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__clk));
        bufp->chgBit(oldp+2445,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__clk));
        bufp->chgBit(oldp+2446,(vlSymsp->TOP__top__src__src__index_reg.__PVT__clk));
        bufp->chgBit(oldp+2447,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk));
        bufp->chgBit(oldp+2448,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+2449,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+2450,(vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__clk));
        bufp->chgBit(oldp+2451,(vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__clk));
        bufp->chgBit(oldp+2452,(vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__clk));
        bufp->chgBit(oldp+2453,(vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__clk));
        bufp->chgBit(oldp+2454,(vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__clk));
        bufp->chgBit(oldp+2455,(vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__clk));
        bufp->chgBit(oldp+2456,(vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__clk));
        bufp->chgBit(oldp+2457,(vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__clk));
        bufp->chgBit(oldp+2458,(vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__clk));
        bufp->chgBit(oldp+2459,(vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__clk));
        bufp->chgBit(oldp+2460,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+2461,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+2462,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+2463,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+2464,(vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__clk));
        bufp->chgBit(oldp+2465,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__clk));
        bufp->chgBit(oldp+2466,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__clk));
        bufp->chgBit(oldp+2467,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__clk));
        bufp->chgBit(oldp+2468,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__clk));
        bufp->chgBit(oldp+2469,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2470,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2471,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2472,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2473,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2474,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2475,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2476,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2477,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2478,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2479,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2480,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2481,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2482,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2483,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2484,(vlSymsp->TOP__top__mem__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2485,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__clk));
        bufp->chgBit(oldp+2486,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2487,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2488,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2489,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2490,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2491,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2492,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2493,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2494,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__clk));
        bufp->chgBit(oldp+2495,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2496,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2497,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2498,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2499,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2500,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2501,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__clk));
        bufp->chgBit(oldp+2502,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__clk));
        bufp->chgBit(oldp+2503,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__clk));
        bufp->chgBit(oldp+2504,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__clk));
        bufp->chgBit(oldp+2505,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
        bufp->chgBit(oldp+2506,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
        bufp->chgBit(oldp+2507,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
        bufp->chgBit(oldp+2508,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
        bufp->chgBit(oldp+2509,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
        bufp->chgBit(oldp+2510,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+2511,(vlSymsp->TOP__top__DUT.__PVT__reset));
        bufp->chgBit(oldp+2512,(vlSymsp->TOP__top__src.__PVT__reset));
        bufp->chgBit(oldp+2513,(vlSymsp->TOP__top__sink.__PVT__reset));
        bufp->chgBit(oldp+2514,(vlSymsp->TOP__top__mem.__PVT__reset));
        bufp->chgBit(oldp+2515,(vlSymsp->TOP__top__mem.__PVT__mem_clear));
        bufp->chgBit(oldp+2516,(vlSymsp->TOP__top__DUT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2517,(vlSymsp->TOP__top__src__src.__PVT__reset));
        bufp->chgBit(oldp+2518,(vlSymsp->TOP__top__src__msg_delay.__PVT__reset));
        bufp->chgBit(oldp+2519,(vlSymsp->TOP__top__sink__msg_delay.__PVT__reset));
        bufp->chgBit(oldp+2520,(vlSymsp->TOP__top__sink__sink.__PVT__reset));
        bufp->chgBit(oldp+2521,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__reset));
        bufp->chgBit(oldp+2522,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__reset));
        bufp->chgBit(oldp+2523,(vlSymsp->TOP__top__mem__mem.__PVT__reset));
        bufp->chgBit(oldp+2524,(vlSymsp->TOP__top__mem__mem.__PVT__mem_clear));
        bufp->chgBit(oldp+2525,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__reset));
        bufp->chgBit(oldp+2526,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__reset));
        bufp->chgBit(oldp+2527,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__reset));
        bufp->chgBit(oldp+2528,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__reset));
        bufp->chgBit(oldp+2529,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__reset));
        bufp->chgBit(oldp+2530,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__reset));
        bufp->chgBit(oldp+2531,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__reset));
        bufp->chgBit(oldp+2532,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__reset));
        bufp->chgBit(oldp+2533,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__reset));
        bufp->chgBit(oldp+2534,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__reset));
        bufp->chgBit(oldp+2535,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__reset));
        bufp->chgBit(oldp+2536,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__reset));
        bufp->chgBit(oldp+2537,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__reset));
        bufp->chgBit(oldp+2538,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__reset));
        bufp->chgBit(oldp+2539,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__reset));
        bufp->chgBit(oldp+2540,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__reset));
        bufp->chgBit(oldp+2541,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__reset));
        bufp->chgBit(oldp+2542,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__reset));
        bufp->chgBit(oldp+2543,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__reset));
        bufp->chgBit(oldp+2544,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__reset));
        bufp->chgBit(oldp+2545,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__reset));
        bufp->chgBit(oldp+2546,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__reset));
        bufp->chgBit(oldp+2547,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__reset));
        bufp->chgBit(oldp+2548,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__reset));
        bufp->chgBit(oldp+2549,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2550,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2551,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2552,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2553,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__reset));
        bufp->chgBit(oldp+2554,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2555,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2556,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2557,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2558,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__reset));
        bufp->chgBit(oldp+2559,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
        bufp->chgBit(oldp+2560,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
        bufp->chgBit(oldp+2561,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
        bufp->chgBit(oldp+2562,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
        bufp->chgBit(oldp+2563,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
        bufp->chgBit(oldp+2564,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x28U]))) {
        bufp->chgBit(oldp+2565,(vlSymsp->TOP__top__DUT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2566,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__reset));
        bufp->chgBit(oldp+2567,(vlSymsp->TOP__top__src__src__index_reg.__PVT__reset));
        bufp->chgBit(oldp+2568,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset));
        bufp->chgBit(oldp+2569,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+2570,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+2571,(vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__reset));
        bufp->chgBit(oldp+2572,(vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__reset));
        bufp->chgBit(oldp+2573,(vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__reset));
        bufp->chgBit(oldp+2574,(vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__reset));
        bufp->chgBit(oldp+2575,(vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__reset));
        bufp->chgBit(oldp+2576,(vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__reset));
        bufp->chgBit(oldp+2577,(vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__reset));
        bufp->chgBit(oldp+2578,(vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__reset));
        bufp->chgBit(oldp+2579,(vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__reset));
        bufp->chgBit(oldp+2580,(vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__reset));
        bufp->chgBit(oldp+2581,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+2582,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+2583,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+2584,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+2585,(vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__reset));
        bufp->chgBit(oldp+2586,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2587,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2588,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2589,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2590,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2591,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2592,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2593,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2594,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2595,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2596,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2597,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2598,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2599,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2600,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2601,(vlSymsp->TOP__top__mem__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2602,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2603,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2604,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2605,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2606,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2607,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2608,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__reset));
        bufp->chgBit(oldp+2609,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__reset));
        bufp->chgBit(oldp+2610,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__reset));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x29U]))) {
        bufp->chgBit(oldp+2611,(vlSymsp->TOP__top.__PVT__snk_done));
        bufp->chgBit(oldp+2612,(vlSymsp->TOP__top__sink.__PVT__done));
        bufp->chgBit(oldp+2613,(vlSymsp->TOP__top__sink.__PVT__sink_rdy));
        bufp->chgBit(oldp+2614,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_rdy));
        bufp->chgBit(oldp+2615,(vlSymsp->TOP__top__sink__sink.__PVT__rdy));
        bufp->chgBit(oldp+2616,(vlSymsp->TOP__top__sink__sink.__PVT__done));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x3eU]))) {
        bufp->chgBit(oldp+2617,(vlSymsp->TOP__top.__PVT__proc2mngr_rdy));
        bufp->chgBit(oldp+2618,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_rdy));
        bufp->chgBit(oldp+2619,(vlSymsp->TOP__top__sink.__PVT__rdy));
        bufp->chgBit(oldp+2620,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_rdy));
        bufp->chgBit(oldp+2621,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay_en));
        bufp->chgIData(oldp+2622,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+2623,(vlSymsp->TOP__top__sink__msg_delay.__PVT__state_next));
        bufp->chgBit(oldp+2624,(vlSymsp->TOP__top__sink__sink.__PVT__index_en));
        bufp->chgBit(oldp+2625,(vlSymsp->TOP__top__sink__sink.__PVT__go));
        bufp->chgBit(oldp+2626,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+2627,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2628,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__en));
        bufp->chgIData(oldp+2629,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+2630,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__en));
        bufp->chgBit(oldp+2631,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+2632,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+2633,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+2634,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_deq));
        bufp->chgBit(oldp+2635,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
        bufp->chgBit(oldp+2636,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgBit(oldp+2637,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x4bU]))) {
        bufp->chgBit(oldp+2638,(vlSymsp->TOP__top__DUT.__PVT__imul_req_val_D));
        bufp->chgBit(oldp+2639,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_req_val_D));
        bufp->chgBit(oldp+2640,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stall_D));
        bufp->chgBit(oldp+2641,(vlSymsp->TOP__top__DUT__dpath.__PVT__imul_req_val_D));
        bufp->chgBit(oldp+2642,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__istream_val));
        bufp->chgBit(oldp+2643,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__in_val));
        bufp->chgBit(oldp+2644,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__istream_val));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x4eU]))) {
        bufp->chgQData(oldp+2645,(vlSymsp->TOP__top__DUT__dpath.__PVT__istream_msg),64);
        bufp->chgQData(oldp+2647,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__istream_msg),64);
        bufp->chgQData(oldp+2649,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__istream_msg),64);
        bufp->chgIData(oldp+2651,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__req_msg_a),32);
        bufp->chgIData(oldp+2652,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__req_msg_b),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x50U]))) {
        bufp->chgBit(oldp+2653,(vlSymsp->TOP__top.__PVT__mngr2proc_rdy));
        bufp->chgBit(oldp+2654,(vlSymsp->TOP__top__DUT.__PVT__mngr2proc_rdy));
        bufp->chgBit(oldp+2655,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_drop_rdy));
        bufp->chgBit(oldp+2656,(vlSymsp->TOP__top__DUT.__PVT__reg_en_D));
        bufp->chgBit(oldp+2657,(vlSymsp->TOP__top__src.__PVT__rdy));
        bufp->chgBit(oldp+2658,(vlSymsp->TOP__top__src.__PVT__src_rdy));
        bufp->chgBit(oldp+2659,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_respstream_rdy));
        bufp->chgBit(oldp+2660,(vlSymsp->TOP__top__DUT__ctrl.__PVT__mngr2proc_rdy));
        bufp->chgBit(oldp+2661,(vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_D));
        bufp->chgBit(oldp+2662,(vlSymsp->TOP__top__DUT__ctrl.__PVT__next_val_D));
        bufp->chgBit(oldp+2663,(vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_D));
        bufp->chgBit(oldp+2664,(vlSymsp->TOP__top__src__src.__PVT__rdy));
        bufp->chgBit(oldp+2665,(vlSymsp->TOP__top__src__src.__PVT__index_en));
        bufp->chgBit(oldp+2666,(vlSymsp->TOP__top__src__src.__PVT__go));
        bufp->chgBit(oldp+2667,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_rdy));
        bufp->chgBit(oldp+2668,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_rdy));
        bufp->chgBit(oldp+2669,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay_en));
        bufp->chgIData(oldp+2670,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+2671,(vlSymsp->TOP__top__src__msg_delay.__PVT__zero_cycle_delay));
        bufp->chgBit(oldp+2672,(vlSymsp->TOP__top__src__msg_delay.__PVT__state_next));
        bufp->chgBit(oldp+2673,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__ostream_rdy));
        bufp->chgBit(oldp+2674,(vlSymsp->TOP__top__src__src__index_reg.__PVT__en));
        bufp->chgIData(oldp+2675,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+2676,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__en));
        bufp->chgBit(oldp+2677,(vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__en));
        bufp->chgBit(oldp+2678,(vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x52U]))) {
        bufp->chgIData(oldp+2679,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__a_new),32);
        bufp->chgIData(oldp+2680,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__b_new),32);
        bufp->chgIData(oldp+2681,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__msg_new),32);
        bufp->chgIData(oldp+2682,(vlSymsp->TOP__top__DUT__dpath__imul__multi__add_mul_block.__PVT__a),32);
        bufp->chgIData(oldp+2683,(vlSymsp->TOP__top__DUT__dpath__imul__multi__add_mul_block.__PVT__sum),32);
        bufp->chgIData(oldp+2684,(vlSymsp->TOP__top__DUT__dpath__imul__multi__ls_block.__PVT__a),32);
        bufp->chgCData(oldp+2685,(vlSymsp->TOP__top__DUT__dpath__imul__multi__ls_block.__PVT__shamt),4);
        bufp->chgIData(oldp+2686,(vlSymsp->TOP__top__DUT__dpath__imul__multi__ls_block.__PVT__result),32);
        bufp->chgIData(oldp+2687,(vlSymsp->TOP__top__DUT__dpath__imul__multi__rs_block.__PVT__a),32);
        bufp->chgCData(oldp+2688,(vlSymsp->TOP__top__DUT__dpath__imul__multi__rs_block.__PVT__shamt),4);
        bufp->chgIData(oldp+2689,(vlSymsp->TOP__top__DUT__dpath__imul__multi__rs_block.__PVT__result),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x54U]))) {
        bufp->chgBit(oldp+2690,(vlSymsp->TOP__top.__PVT__imem_respstream_rdy));
        bufp->chgBit(oldp+2691,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_rdy));
        bufp->chgBit(oldp+2692,(vlSymsp->TOP__top__mem.__PVT__memresp0_rdy));
        bufp->chgBit(oldp+2693,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__istream_rdy));
        bufp->chgBit(oldp+2694,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_rdy));
        bufp->chgBit(oldp+2695,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__rdy));
        bufp->chgBit(oldp+2696,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__rdy));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x55U]))) {
        bufp->chgBit(oldp+2697,(vlSymsp->TOP__top__DUT.__PVT__reg_en_F));
        bufp->chgBit(oldp+2698,(vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_F));
        bufp->chgBit(oldp+2699,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stall_F));
        bufp->chgBit(oldp+2700,(vlSymsp->TOP__top__DUT__ctrl.__PVT__next_val_F));
        bufp->chgBit(oldp+2701,(vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_F));
        bufp->chgBit(oldp+2702,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__next_state));
        bufp->chgBit(oldp+2703,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__istream_go));
        bufp->chgBit(oldp+2704,(vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x56U]))) {
        bufp->chgBit(oldp+2705,(vlSymsp->TOP__top__mem.__PVT__mem_memresp0_rdy));
        bufp->chgBit(oldp+2706,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_rdy));
        bufp->chgBit(oldp+2707,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_rdy));
        bufp->chgBit(oldp+2708,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_delay_en));
        bufp->chgIData(oldp+2709,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+2710,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__state_next));
        bufp->chgBit(oldp+2711,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__rdy));
        bufp->chgIData(oldp+2712,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+2713,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__en));
        bufp->chgBit(oldp+2714,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+2715,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2716,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+2717,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+2718,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+2719,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_deq));
        bufp->chgBit(oldp+2720,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
        bufp->chgBit(oldp+2721,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgBit(oldp+2722,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x57U]))) {
        bufp->chgBit(oldp+2723,(vlSymsp->TOP__top.__PVT__imem_reqstream_val));
        bufp->chgBit(oldp+2724,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_val));
        bufp->chgBit(oldp+2725,(vlSymsp->TOP__top__mem.__PVT__memreq0_val));
        bufp->chgBit(oldp+2726,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_val));
        bufp->chgBit(oldp+2727,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__val));
        bufp->chgBit(oldp+2728,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__val));
        bufp->chgBit(oldp+2729,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__deq_val));
        bufp->chgBit(oldp+2730,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__deq_val));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x58U]))) {
        bufp->chgBit(oldp+2731,(vlSymsp->TOP__top.__PVT__imem_reqstream_rdy));
        bufp->chgBit(oldp+2732,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_rdy));
        bufp->chgBit(oldp+2733,(vlSymsp->TOP__top__mem.__PVT__memreq0_rdy));
        bufp->chgBit(oldp+2734,(vlSymsp->TOP__top__mem.__PVT__mem_memreq0_val));
        bufp->chgBit(oldp+2735,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_rdy));
        bufp->chgBit(oldp+2736,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_val));
        bufp->chgBit(oldp+2737,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_delay_en));
        bufp->chgIData(oldp+2738,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+2739,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__state_next));
        bufp->chgBit(oldp+2740,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_val));
        bufp->chgBit(oldp+2741,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__rdy));
        bufp->chgBit(oldp+2742,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__val));
        bufp->chgBit(oldp+2743,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__rdy));
        bufp->chgBit(oldp+2744,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+2745,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgIData(oldp+2746,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+2747,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__en));
        bufp->chgBit(oldp+2748,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_val));
        bufp->chgBit(oldp+2749,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2750,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+2751,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+2752,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__enq_ptr_next));
        bufp->chgBit(oldp+2753,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__deq_ptr_next));
        bufp->chgBit(oldp+2754,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+2755,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__do_deq));
        bufp->chgBit(oldp+2756,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
        bufp->chgBit(oldp+2757,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgBit(oldp+2758,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__enq_val));
        bufp->chgBit(oldp+2759,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+2760,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+2761,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_enq));
        bufp->chgBit(oldp+2762,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+2763,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgBit(oldp+2764,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__d));
        bufp->chgBit(oldp+2765,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__d));
        bufp->chgBit(oldp+2766,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__d));
        bufp->chgBit(oldp+2767,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__write_en));
        bufp->chgBit(oldp+2768,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x59U]))) {
        bufp->chgWData(oldp+2769,(vlSymsp->TOP__top__mem.__PVT__mem_memreq0_msg),77);
        bufp->chgWData(oldp+2772,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_msg),77);
        bufp->chgWData(oldp+2775,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg),77);
        bufp->chgWData(oldp+2778,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__msg),77);
        bufp->chgCData(oldp+2781,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__type_),3);
        bufp->chgCData(oldp+2782,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__opaque),8);
        bufp->chgIData(oldp+2783,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__addr),32);
        bufp->chgCData(oldp+2784,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__len),2);
        bufp->chgIData(oldp+2785,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__data),32);
        bufp->chgWData(oldp+2786,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_msg),77);
        bufp->chgWData(oldp+2789,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
        bufp->chgWData(oldp+2792,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+2795,(vlSymsp->TOP__top.__PVT__src_done));
        bufp->chgBit(oldp+2796,(vlSymsp->TOP__top__src.__PVT__done));
        bufp->chgBit(oldp+2797,(vlSymsp->TOP__top__src.__PVT__src_val));
        bufp->chgBit(oldp+2798,(vlSymsp->TOP__top__src__src.__PVT__val));
        bufp->chgBit(oldp+2799,(vlSymsp->TOP__top__src__src.__PVT__done));
        bufp->chgBit(oldp+2800,(vlSymsp->TOP__top__src__src.__PVT__reset_reg));
        bufp->chgBit(oldp+2801,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_val));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+2802,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[0]),32);
        bufp->chgIData(oldp+2803,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[1]),32);
        bufp->chgIData(oldp+2804,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[2]),32);
        bufp->chgIData(oldp+2805,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[3]),32);
        bufp->chgIData(oldp+2806,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[4]),32);
        bufp->chgIData(oldp+2807,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[5]),32);
        bufp->chgIData(oldp+2808,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[6]),32);
        bufp->chgIData(oldp+2809,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[7]),32);
        bufp->chgIData(oldp+2810,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[8]),32);
        bufp->chgIData(oldp+2811,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[9]),32);
        bufp->chgIData(oldp+2812,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[10]),32);
        bufp->chgIData(oldp+2813,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[11]),32);
        bufp->chgIData(oldp+2814,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[12]),32);
        bufp->chgIData(oldp+2815,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[13]),32);
        bufp->chgIData(oldp+2816,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[14]),32);
        bufp->chgIData(oldp+2817,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[15]),32);
        bufp->chgIData(oldp+2818,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[16]),32);
        bufp->chgIData(oldp+2819,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[17]),32);
        bufp->chgIData(oldp+2820,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[18]),32);
        bufp->chgIData(oldp+2821,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[19]),32);
        bufp->chgIData(oldp+2822,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[20]),32);
        bufp->chgIData(oldp+2823,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[21]),32);
        bufp->chgIData(oldp+2824,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[22]),32);
        bufp->chgIData(oldp+2825,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[23]),32);
        bufp->chgIData(oldp+2826,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[24]),32);
        bufp->chgIData(oldp+2827,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[25]),32);
        bufp->chgIData(oldp+2828,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[26]),32);
        bufp->chgIData(oldp+2829,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[27]),32);
        bufp->chgIData(oldp+2830,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[28]),32);
        bufp->chgIData(oldp+2831,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[29]),32);
        bufp->chgIData(oldp+2832,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[30]),32);
        bufp->chgIData(oldp+2833,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__rfile[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+2834,(vlSymsp->TOP__top__DUT__dpath.__PVT__ostream_msg),32);
        bufp->chgIData(oldp+2835,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__ostream_msg),32);
        bufp->chgBit(oldp+2836,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__req_rdy));
        bufp->chgBit(oldp+2837,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__resp_val));
        bufp->chgIData(oldp+2838,(vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__in0),32);
        bufp->chgBit(oldp+2839,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__istream_rdy));
        bufp->chgBit(oldp+2840,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__ostream_val));
        bufp->chgIData(oldp+2841,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__ostream_msg),32);
        bufp->chgCData(oldp+2842,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__counter),6);
        bufp->chgIData(oldp+2843,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__a_reg),32);
        bufp->chgIData(oldp+2844,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__b_reg),32);
        bufp->chgIData(oldp+2845,(vlSymsp->TOP__top__DUT__dpath__imul__multi__add_mul_block.__PVT__b),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgWData(oldp+2846,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__rfile[0]),77);
        bufp->chgWData(oldp+2849,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__rfile[1]),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+2852,(vlSymsp->TOP__top.__PVT__stats_en));
        bufp->chgBit(oldp+2853,(vlSymsp->TOP__top__DUT.__PVT__stats_en));
        bufp->chgBit(oldp+2854,(vlSymsp->TOP__top__DUT__dpath.__PVT__stats_en));
        bufp->chgIData(oldp+2855,(vlSymsp->TOP__top__DUT__dpath.__PVT__stats_en_W),32);
        bufp->chgIData(oldp+2856,(vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__q),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgCData(oldp+2857,(vlSymsp->TOP__top__sink__sink.__PVT__index_next),4);
        bufp->chgCData(oldp+2858,(vlSymsp->TOP__top__sink__sink.__PVT__index),4);
        bufp->chgIData(oldp+2859,(vlSymsp->TOP__top__sink__sink.__PVT__m_curr),32);
        bufp->chgCData(oldp+2860,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__q),4);
        bufp->chgCData(oldp+2861,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__d),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgIData(oldp+2862,(vlSymsp->TOP__top__DUT__dpath.__PVT__ex_result_M),32);
        bufp->chgIData(oldp+2863,(vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__q),32);
        bufp->chgIData(oldp+2864,(vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__in0),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgIData(oldp+2865,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_X),32);
        bufp->chgIData(oldp+2866,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_plus4_X),32);
        bufp->chgIData(oldp+2867,(vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__q),32);
        bufp->chgIData(oldp+2868,(vlSymsp->TOP__top__DUT__dpath__pc_incr_X.__PVT__in),32);
        bufp->chgIData(oldp+2869,(vlSymsp->TOP__top__DUT__dpath__pc_incr_X.__PVT__out),32);
        bufp->chgIData(oldp+2870,(vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__in1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgIData(oldp+2871,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__qstore),32);
        bufp->chgIData(oldp+2872,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),32);
        bufp->chgIData(oldp+2873,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgIData(oldp+2874,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_msg),32);
        bufp->chgIData(oldp+2875,(vlSymsp->TOP__top__DUT__dpath.__PVT__proc2mngr_data),32);
        bufp->chgIData(oldp+2876,(vlSymsp->TOP__top__DUT__dpath.__PVT__rf_wdata_W),32);
        bufp->chgIData(oldp+2877,(vlSymsp->TOP__top__DUT__dpath.__PVT__wb_result_W),32);
        bufp->chgIData(oldp+2878,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__wr_data),32);
        bufp->chgIData(oldp+2879,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_msg),32);
        bufp->chgIData(oldp+2880,(vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__q),32);
        bufp->chgIData(oldp+2881,(vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__d),32);
        bufp->chgIData(oldp+2882,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__enq_msg),32);
        bufp->chgIData(oldp+2883,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__write_data),32);
        bufp->chgIData(oldp+2884,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),32);
        bufp->chgIData(oldp+2885,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
        bufp->chgIData(oldp+2886,(vlSymsp->TOP__top__src.__PVT__src_msg),32);
        bufp->chgIData(oldp+2887,(vlSymsp->TOP__top__src__src.__PVT__msg),32);
        bufp->chgCData(oldp+2888,(vlSymsp->TOP__top__src__src.__PVT__index_next),4);
        bufp->chgCData(oldp+2889,(vlSymsp->TOP__top__src__src.__PVT__index),4);
        bufp->chgIData(oldp+2890,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_msg),32);
        bufp->chgCData(oldp+2891,(vlSymsp->TOP__top__src__src__index_reg.__PVT__q),4);
        bufp->chgCData(oldp+2892,(vlSymsp->TOP__top__src__src__index_reg.__PVT__d),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
        bufp->chgQData(oldp+2893,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__qstore),47);
        bufp->chgQData(oldp+2895,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),47);
        bufp->chgQData(oldp+2897,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),47);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
        bufp->chgQData(oldp+2899,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__qstore),47);
        bufp->chgQData(oldp+2901,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),47);
        bufp->chgQData(oldp+2903,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),47);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgBit(oldp+2905,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_val_M));
        bufp->chgBit(oldp+2906,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__deq_val));
        bufp->chgBit(oldp+2907,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__num_free_entries));
        bufp->chgBit(oldp+2908,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+2909,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__enq_val));
        bufp->chgBit(oldp+2910,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__enq_val));
        bufp->chgBit(oldp+2911,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__deq_val));
        bufp->chgBit(oldp+2912,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2913,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
        bufp->chgBit(oldp+2914,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+2915,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+2916,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x15U])) {
        bufp->chgWData(oldp+2917,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__qstore),77);
        bufp->chgWData(oldp+2920,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),77);
        bufp->chgWData(oldp+2923,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
        bufp->chgBit(oldp+2926,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_rdy_M));
        bufp->chgBit(oldp+2927,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+2928,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+2929,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__num_free_entries));
        bufp->chgBit(oldp+2930,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+2931,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+2932,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2933,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
        bufp->chgBit(oldp+2934,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+2935,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+2936,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+2937,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2938,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x17U])) {
        bufp->chgIData(oldp+2939,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg_data),32);
        bufp->chgIData(oldp+2940,(vlSymsp->TOP__top__DUT__dpath.__PVT__dmem_reqstream_msg_data),32);
        bufp->chgIData(oldp+2941,(vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__q),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x18U])) {
        bufp->chgIData(oldp+2942,(vlSymsp->TOP__top__DUT__dpath.__PVT__br_target_X),32);
        bufp->chgIData(oldp+2943,(vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__q),32);
        bufp->chgIData(oldp+2944,(vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x19U])) {
        bufp->chgIData(oldp+2945,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_F),32);
        bufp->chgIData(oldp+2946,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_plus4_F),32);
        bufp->chgIData(oldp+2947,(vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__q),32);
        bufp->chgIData(oldp+2948,(vlSymsp->TOP__top__DUT__dpath__pc_incr_F.__PVT__in),32);
        bufp->chgIData(oldp+2949,(vlSymsp->TOP__top__DUT__dpath__pc_incr_F.__PVT__out),32);
        bufp->chgIData(oldp+2950,(vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in0),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1aU])) {
        bufp->chgBit(oldp+2951,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__genblk1__DOT__write_addr));
        bufp->chgBit(oldp+2952,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__write_addr));
        bufp->chgBit(oldp+2953,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__enq_ptr));
        bufp->chgBit(oldp+2954,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__enq_ptr_plus1));
        bufp->chgBit(oldp+2955,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__enq_ptr_inc));
        bufp->chgBit(oldp+2956,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__write_addr));
        bufp->chgBit(oldp+2957,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__q));
        bufp->chgBit(oldp+2958,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__write_addr));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1bU])) {
        bufp->chgBit(oldp+2959,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_enq_rdy));
        bufp->chgBit(oldp+2960,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_reqstream_rdy));
        bufp->chgBit(oldp+2961,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+2962,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+2963,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+2964,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__q));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1cU])) {
        bufp->chgIData(oldp+2965,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_D),32);
        bufp->chgIData(oldp+2966,(vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__q),32);
        bufp->chgIData(oldp+2967,(vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__d),32);
        bufp->chgIData(oldp+2968,(vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__in0),32);
        bufp->chgIData(oldp+2969,(vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__in1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1dU])) {
        bufp->chgCData(oldp+2970,(vlSymsp->TOP__top__DUT.__PVT__alu_fn_X),4);
        bufp->chgCData(oldp+2971,(vlSymsp->TOP__top__DUT.__PVT__ex_result_sel_X),2);
        bufp->chgCData(oldp+2972,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_type_X),2);
        bufp->chgBit(oldp+2973,(vlSymsp->TOP__top__DUT.__PVT__wb_result_sel_M));
        bufp->chgCData(oldp+2974,(vlSymsp->TOP__top__DUT.__PVT__rf_waddr_W),5);
        bufp->chgBit(oldp+2975,(vlSymsp->TOP__top__DUT.__PVT__rf_wen_W));
        bufp->chgBit(oldp+2976,(vlSymsp->TOP__top__DUT.__PVT__stats_en_wen_W));
        bufp->chgCData(oldp+2977,(vlSymsp->TOP__top__DUT__ctrl.__PVT__alu_fn_X),4);
        bufp->chgCData(oldp+2978,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ex_result_sel_X),2);
        bufp->chgCData(oldp+2979,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_type_X),2);
        bufp->chgBit(oldp+2980,(vlSymsp->TOP__top__DUT__ctrl.__PVT__wb_result_sel_M));
        bufp->chgCData(oldp+2981,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_waddr_W),5);
        bufp->chgBit(oldp+2982,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_wen_W));
        bufp->chgBit(oldp+2983,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stats_en_wen_W));
        bufp->chgBit(oldp+2984,(vlSymsp->TOP__top__DUT__ctrl.__PVT__val_F));
        bufp->chgBit(oldp+2985,(vlSymsp->TOP__top__DUT__ctrl.__PVT__val_D));
        bufp->chgBit(oldp+2986,(vlSymsp->TOP__top__DUT__ctrl.__PVT__val_X));
        bufp->chgBit(oldp+2987,(vlSymsp->TOP__top__DUT__ctrl.__PVT__val_M));
        bufp->chgBit(oldp+2988,(vlSymsp->TOP__top__DUT__ctrl.__PVT__val_W));
        bufp->chgIData(oldp+2989,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_X),32);
        bufp->chgBit(oldp+2990,(vlSymsp->TOP__top__DUT__ctrl.__PVT__wb_result_sel_X));
        bufp->chgBit(oldp+2991,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_wen_X));
        bufp->chgCData(oldp+2992,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_waddr_X),5);
        bufp->chgBit(oldp+2993,(vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_val_X));
        bufp->chgBit(oldp+2994,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stats_en_wen_X));
        bufp->chgCData(oldp+2995,(vlSymsp->TOP__top__DUT__ctrl.__PVT__br_type_X),3);
        bufp->chgIData(oldp+2996,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_M),32);
        bufp->chgCData(oldp+2997,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_type_M),2);
        bufp->chgBit(oldp+2998,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_wen_M));
        bufp->chgCData(oldp+2999,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_waddr_M),5);
        bufp->chgBit(oldp+3000,(vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_val_M));
        bufp->chgBit(oldp+3001,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stats_en_wen_M));
        bufp->chgIData(oldp+3002,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_W),32);
        bufp->chgBit(oldp+3003,(vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_val_W));
        bufp->chgBit(oldp+3004,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_wen_pending_W));
        bufp->chgBit(oldp+3005,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stats_en_wen_pending_W));
        bufp->chgCData(oldp+3006,(vlSymsp->TOP__top__DUT__dpath.__PVT__alu_fn_X),4);
        bufp->chgCData(oldp+3007,(vlSymsp->TOP__top__DUT__dpath.__PVT__ex_result_sel_X),2);
        bufp->chgBit(oldp+3008,(vlSymsp->TOP__top__DUT__dpath.__PVT__wb_result_sel_M));
        bufp->chgCData(oldp+3009,(vlSymsp->TOP__top__DUT__dpath.__PVT__rf_waddr_W),5);
        bufp->chgBit(oldp+3010,(vlSymsp->TOP__top__DUT__dpath.__PVT__rf_wen_W));
        bufp->chgBit(oldp+3011,(vlSymsp->TOP__top__DUT__dpath.__PVT__stats_en_wen_W));
        bufp->chgBit(oldp+3012,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__wr_en));
        bufp->chgCData(oldp+3013,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__wr_addr),5);
        bufp->chgCData(oldp+3014,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__fn),4);
        bufp->chgBit(oldp+3015,(vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__en));
        bufp->chgCData(oldp+3016,(vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__sel),2);
        bufp->chgBit(oldp+3017,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__write_en));
        bufp->chgCData(oldp+3018,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__write_addr),5);
        bufp->chgBit(oldp+3019,(vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1eU])) {
        bufp->chgBit(oldp+3020,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_queue_num_free_entries));
        bufp->chgBit(oldp+3021,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_rdy));
        bufp->chgBit(oldp+3022,(vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_rdy));
        bufp->chgBit(oldp+3023,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+3024,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__num_free_entries));
        bufp->chgBit(oldp+3025,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+3026,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+3027,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+3028,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
        bufp->chgBit(oldp+3029,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+3030,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+3031,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+3032,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1fU])) {
        bufp->chgBit(oldp+3033,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_val_M));
        bufp->chgBit(oldp+3034,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__deq_val));
        bufp->chgBit(oldp+3035,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__num_free_entries));
        bufp->chgBit(oldp+3036,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+3037,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__enq_val));
        bufp->chgBit(oldp+3038,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__enq_val));
        bufp->chgBit(oldp+3039,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__deq_val));
        bufp->chgBit(oldp+3040,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+3041,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
        bufp->chgBit(oldp+3042,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+3043,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+3044,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x20U])) {
        bufp->chgBit(oldp+3045,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__genblk1__DOT__read_addr));
        bufp->chgBit(oldp+3046,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__read_addr));
        bufp->chgBit(oldp+3047,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__deq_ptr));
        bufp->chgBit(oldp+3048,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__deq_ptr_plus1));
        bufp->chgBit(oldp+3049,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__deq_ptr_inc));
        bufp->chgBit(oldp+3050,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__read_addr));
        bufp->chgBit(oldp+3051,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__q));
        bufp->chgBit(oldp+3052,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__read_addr));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x21U])) {
        bufp->chgBit(oldp+3053,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_rdy_M));
        bufp->chgBit(oldp+3054,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+3055,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+3056,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__num_free_entries));
        bufp->chgBit(oldp+3057,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+3058,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+3059,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+3060,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
        bufp->chgBit(oldp+3061,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+3062,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+3063,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+3064,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+3065,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x22U])) {
        bufp->chgWData(oldp+3066,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_M),77);
        bufp->chgCData(oldp+3069,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_type_M),3);
        bufp->chgCData(oldp+3070,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_opaque_M),8);
        bufp->chgIData(oldp+3071,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_addr_M),32);
        bufp->chgCData(oldp+3072,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_len_M),2);
        bufp->chgIData(oldp+3073,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_data_M),32);
        bufp->chgCData(oldp+3074,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_len_modified_M),3);
        bufp->chgSData(oldp+3075,(vlSymsp->TOP__top__mem__mem.__PVT__physical_byte_addr1_M),14);
        bufp->chgSData(oldp+3076,(vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr1_M),12);
        bufp->chgCData(oldp+3077,(vlSymsp->TOP__top__mem__mem.__PVT__block_offset1_M),2);
        bufp->chgWData(oldp+3078,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__deq_msg),77);
        bufp->chgWData(oldp+3081,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__msg),77);
        bufp->chgCData(oldp+3084,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__type_),3);
        bufp->chgCData(oldp+3085,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__opaque),8);
        bufp->chgIData(oldp+3086,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__addr),32);
        bufp->chgCData(oldp+3087,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__len),2);
        bufp->chgIData(oldp+3088,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__data),32);
        bufp->chgWData(oldp+3089,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__req),77);
        bufp->chgCData(oldp+3092,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__type_),3);
        bufp->chgCData(oldp+3093,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__opaque),8);
        bufp->chgCData(oldp+3094,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__len),2);
        bufp->chgWData(oldp+3095,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
        bufp->chgWData(oldp+3098,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__qstore),77);
        bufp->chgWData(oldp+3101,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x23U])) {
        bufp->chgWData(oldp+3104,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_M),77);
        bufp->chgCData(oldp+3107,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_type_M),3);
        bufp->chgCData(oldp+3108,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_opaque_M),8);
        bufp->chgIData(oldp+3109,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_addr_M),32);
        bufp->chgCData(oldp+3110,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_len_M),2);
        bufp->chgIData(oldp+3111,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_data_M),32);
        bufp->chgCData(oldp+3112,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_len_modified_M),3);
        bufp->chgSData(oldp+3113,(vlSymsp->TOP__top__mem__mem.__PVT__physical_byte_addr0_M),14);
        bufp->chgSData(oldp+3114,(vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr0_M),12);
        bufp->chgCData(oldp+3115,(vlSymsp->TOP__top__mem__mem.__PVT__block_offset0_M),2);
        bufp->chgWData(oldp+3116,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__deq_msg),77);
        bufp->chgWData(oldp+3119,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__msg),77);
        bufp->chgCData(oldp+3122,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__type_),3);
        bufp->chgCData(oldp+3123,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__opaque),8);
        bufp->chgIData(oldp+3124,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__addr),32);
        bufp->chgCData(oldp+3125,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__len),2);
        bufp->chgIData(oldp+3126,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__data),32);
        bufp->chgWData(oldp+3127,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__req),77);
        bufp->chgCData(oldp+3130,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__type_),3);
        bufp->chgCData(oldp+3131,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__opaque),8);
        bufp->chgCData(oldp+3132,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__len),2);
        bufp->chgWData(oldp+3133,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
        bufp->chgWData(oldp+3136,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__qstore),77);
        bufp->chgWData(oldp+3139,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x24U])) {
        bufp->chgBit(oldp+3142,(vlSymsp->TOP__top__DUT.__PVT__dmem_queue_num_free_entries));
        bufp->chgBit(oldp+3143,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_rdy));
        bufp->chgBit(oldp+3144,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_rdy));
        bufp->chgBit(oldp+3145,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+3146,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__num_free_entries));
        bufp->chgBit(oldp+3147,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+3148,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+3149,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+3150,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
        bufp->chgBit(oldp+3151,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+3152,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+3153,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+3154,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x25U])) {
        bufp->chgBit(oldp+3155,(vlSymsp->TOP__top__DUT.__PVT__op1_sel_D));
        bufp->chgCData(oldp+3156,(vlSymsp->TOP__top__DUT.__PVT__op2_sel_D),2);
        bufp->chgCData(oldp+3157,(vlSymsp->TOP__top__DUT.__PVT__csrr_sel_D),2);
        bufp->chgCData(oldp+3158,(vlSymsp->TOP__top__DUT.__PVT__imm_type_D),3);
        bufp->chgIData(oldp+3159,(vlSymsp->TOP__top__DUT.__PVT__inst_D),32);
        bufp->chgBit(oldp+3160,(vlSymsp->TOP__top__DUT__ctrl.__PVT__op1_sel_D));
        bufp->chgCData(oldp+3161,(vlSymsp->TOP__top__DUT__ctrl.__PVT__op2_sel_D),2);
        bufp->chgCData(oldp+3162,(vlSymsp->TOP__top__DUT__ctrl.__PVT__csrr_sel_D),2);
        bufp->chgCData(oldp+3163,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imm_type_D),3);
        bufp->chgIData(oldp+3164,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_D),32);
        bufp->chgBit(oldp+3165,(vlSymsp->TOP__top__DUT__ctrl.__PVT__osquash_D));
        bufp->chgCData(oldp+3166,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_rd_D),5);
        bufp->chgCData(oldp+3167,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_rs1_D),5);
        bufp->chgCData(oldp+3168,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_rs2_D),5);
        bufp->chgSData(oldp+3169,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_csr_D),12);
        bufp->chgBit(oldp+3170,(vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_val_D));
        bufp->chgCData(oldp+3171,(vlSymsp->TOP__top__DUT__ctrl.__PVT__br_type_D),3);
        bufp->chgBit(oldp+3172,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rs1_en_D));
        bufp->chgBit(oldp+3173,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rs2_en_D));
        bufp->chgCData(oldp+3174,(vlSymsp->TOP__top__DUT__ctrl.__PVT__alu_fn_D),4);
        bufp->chgCData(oldp+3175,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_type_D),2);
        bufp->chgBit(oldp+3176,(vlSymsp->TOP__top__DUT__ctrl.__PVT__wb_result_sel_D));
        bufp->chgBit(oldp+3177,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_wen_D));
        bufp->chgBit(oldp+3178,(vlSymsp->TOP__top__DUT__ctrl.__PVT__csrr_D));
        bufp->chgBit(oldp+3179,(vlSymsp->TOP__top__DUT__ctrl.__PVT__csrw_D));
        bufp->chgBit(oldp+3180,(vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_val_D));
        bufp->chgBit(oldp+3181,(vlSymsp->TOP__top__DUT__ctrl.__PVT__mngr2proc_rdy_D));
        bufp->chgBit(oldp+3182,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stats_en_wen_D));
        bufp->chgCData(oldp+3183,(vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_waddr_D),5);
        bufp->chgBit(oldp+3184,(vlSymsp->TOP__top__DUT__dpath.__PVT__op1_sel_D));
        bufp->chgCData(oldp+3185,(vlSymsp->TOP__top__DUT__dpath.__PVT__op2_sel_D),2);
        bufp->chgCData(oldp+3186,(vlSymsp->TOP__top__DUT__dpath.__PVT__csrr_sel_D),2);
        bufp->chgCData(oldp+3187,(vlSymsp->TOP__top__DUT__dpath.__PVT__imm_type_D),3);
        bufp->chgIData(oldp+3188,(vlSymsp->TOP__top__DUT__dpath.__PVT__inst_D),32);
        bufp->chgCData(oldp+3189,(vlSymsp->TOP__top__DUT__dpath.__PVT__inst_rd_D),5);
        bufp->chgCData(oldp+3190,(vlSymsp->TOP__top__DUT__dpath.__PVT__inst_rs1_D),5);
        bufp->chgCData(oldp+3191,(vlSymsp->TOP__top__DUT__dpath.__PVT__inst_rs2_D),5);
        bufp->chgIData(oldp+3192,(vlSymsp->TOP__top__DUT__dpath.__PVT__imm_D),32);
        bufp->chgCData(oldp+3193,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_addr0),5);
        bufp->chgCData(oldp+3194,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_addr1),5);
        bufp->chgIData(oldp+3195,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__inst),32);
        bufp->chgCData(oldp+3196,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__opcode),7);
        bufp->chgCData(oldp+3197,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__rd),5);
        bufp->chgCData(oldp+3198,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__rs1),5);
        bufp->chgCData(oldp+3199,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__rs2),5);
        bufp->chgCData(oldp+3200,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__funct3),3);
        bufp->chgSData(oldp+3201,(vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__csr),12);
        bufp->chgIData(oldp+3202,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__inst),32);
        bufp->chgCData(oldp+3203,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__opcode),7);
        bufp->chgCData(oldp+3204,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__rd),5);
        bufp->chgCData(oldp+3205,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__rs1),5);
        bufp->chgCData(oldp+3206,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__rs2),5);
        bufp->chgCData(oldp+3207,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__funct3),3);
        bufp->chgSData(oldp+3208,(vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__csr),12);
        bufp->chgCData(oldp+3209,(vlSymsp->TOP__top__DUT__dpath__imm_gen_D.__PVT__imm_type),3);
        bufp->chgIData(oldp+3210,(vlSymsp->TOP__top__DUT__dpath__imm_gen_D.__PVT__inst),32);
        bufp->chgIData(oldp+3211,(vlSymsp->TOP__top__DUT__dpath__imm_gen_D.__PVT__imm),32);
        bufp->chgIData(oldp+3212,(vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__q),32);
        bufp->chgCData(oldp+3213,(vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__sel),2);
        bufp->chgIData(oldp+3214,(vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__in1),32);
        bufp->chgCData(oldp+3215,(vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__sel),2);
        bufp->chgIData(oldp+3216,(vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__in1),32);
        bufp->chgCData(oldp+3217,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_addr0),5);
        bufp->chgCData(oldp+3218,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_addr1),5);
        bufp->chgBit(oldp+3219,(vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x26U])) {
        bufp->chgIData(oldp+3220,(vlSymsp->TOP__top__DUT__dpath.__PVT__op1_X),32);
        bufp->chgIData(oldp+3221,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__in0),32);
        bufp->chgIData(oldp+3222,(vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__q),32);
        bufp->chgIData(oldp+3223,(vlSymsp->TOP__top__DUT__dpath__alu__cond_eq_comp.__PVT__in0),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x27U])) {
        bufp->chgIData(oldp+3224,(vlSymsp->TOP__top__DUT__dpath.__PVT__op2_X),32);
        bufp->chgIData(oldp+3225,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__in1),32);
        bufp->chgIData(oldp+3226,(vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__q),32);
        bufp->chgIData(oldp+3227,(vlSymsp->TOP__top__DUT__dpath__alu__cond_eq_comp.__PVT__in1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2aU])) {
        bufp->chgBit(oldp+3228,(vlSymsp->TOP__top__mem.__PVT__mem_memreq0_rdy));
        bufp->chgBit(oldp+3229,(vlSymsp->TOP__top__mem.__PVT__mem_memresp0_val));
        bufp->chgBit(oldp+3230,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_rdy));
        bufp->chgBit(oldp+3231,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_rdy));
        bufp->chgBit(oldp+3232,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_val));
        bufp->chgBit(oldp+3233,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_val));
        bufp->chgBit(oldp+3234,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__rdy));
        bufp->chgBit(oldp+3235,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__val));
        bufp->chgBit(oldp+3236,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+3237,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_val));
        bufp->chgBit(oldp+3238,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__deq_val));
        bufp->chgBit(oldp+3239,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_enq));
        bufp->chgBit(oldp+3240,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+3241,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2bU])) {
        bufp->chgBit(oldp+3242,(vlSymsp->TOP__top.__PVT__proc2mngr_val));
        bufp->chgBit(oldp+3243,(vlSymsp->TOP__top.__PVT__dmem_respstream_rdy));
        bufp->chgBit(oldp+3244,(vlSymsp->TOP__top.__PVT__commit_inst));
        bufp->chgBit(oldp+3245,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_val));
        bufp->chgBit(oldp+3246,(vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_rdy));
        bufp->chgBit(oldp+3247,(vlSymsp->TOP__top__DUT.__PVT__commit_inst));
        bufp->chgBit(oldp+3248,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_val));
        bufp->chgBit(oldp+3249,(vlSymsp->TOP__top__DUT.__PVT__reg_en_W));
        bufp->chgBit(oldp+3250,(vlSymsp->TOP__top__sink.__PVT__val));
        bufp->chgBit(oldp+3251,(vlSymsp->TOP__top__mem.__PVT__memresp1_rdy));
        bufp->chgBit(oldp+3252,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_respstream_rdy));
        bufp->chgBit(oldp+3253,(vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_val));
        bufp->chgBit(oldp+3254,(vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_W));
        bufp->chgBit(oldp+3255,(vlSymsp->TOP__top__DUT__ctrl.__PVT__commit_inst));
        bufp->chgBit(oldp+3256,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_W));
        bufp->chgBit(oldp+3257,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stall_W));
        bufp->chgBit(oldp+3258,(vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_W));
        bufp->chgBit(oldp+3259,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_val));
        bufp->chgBit(oldp+3260,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_rdy));
        bufp->chgBit(oldp+3261,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__rdy));
        bufp->chgBit(oldp+3262,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__rdy));
        bufp->chgBit(oldp+3263,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_val));
        bufp->chgBit(oldp+3264,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_val));
        bufp->chgBit(oldp+3265,(vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__en));
        bufp->chgBit(oldp+3266,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__enq_val));
        bufp->chgBit(oldp+3267,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__deq_val));
        bufp->chgBit(oldp+3268,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2cU])) {
        bufp->chgIData(oldp+3269,(vlSymsp->TOP__top.__PVT__proc2mngr_msg),32);
        bufp->chgIData(oldp+3270,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_msg),32);
        bufp->chgIData(oldp+3271,(vlSymsp->TOP__top__sink.__PVT__msg),32);
        bufp->chgIData(oldp+3272,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_msg),32);
        bufp->chgIData(oldp+3273,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_msg),32);
        bufp->chgIData(oldp+3274,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__deq_msg),32);
        bufp->chgIData(oldp+3275,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2dU])) {
        bufp->chgCData(oldp+3276,(vlSymsp->TOP__top__DUT.__PVT__imem_queue_num_free_entries),2);
        bufp->chgCData(oldp+3277,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__num_free_entries),2);
        bufp->chgBit(oldp+3278,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+3279,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgCData(oldp+3280,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__num_free_entries),2);
        bufp->chgBit(oldp+3281,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+3282,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+3283,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2eU])) {
        bufp->chgWData(oldp+3284,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__read_data),77);
        bufp->chgWData(oldp+3287,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__read_data),77);
        bufp->chgWData(oldp+3290,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2fU])) {
        bufp->chgBit(oldp+3293,(vlSymsp->TOP__top__DUT.__PVT__imul_resp_val_X));
        bufp->chgBit(oldp+3294,(vlSymsp->TOP__top__DUT.__PVT__imul_req_rdy_D));
        bufp->chgBit(oldp+3295,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_req_rdy_D));
        bufp->chgBit(oldp+3296,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_resp_val_X));
        bufp->chgBit(oldp+3297,(vlSymsp->TOP__top__DUT__dpath.__PVT__imul_req_rdy_D));
        bufp->chgBit(oldp+3298,(vlSymsp->TOP__top__DUT__dpath.__PVT__imul_resp_val_X));
        bufp->chgBit(oldp+3299,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__istream_rdy));
        bufp->chgBit(oldp+3300,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__ostream_val));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x30U])) {
        bufp->chgBit(oldp+3301,(vlSymsp->TOP__top__mem.__PVT__mem_memreq1_rdy));
        bufp->chgBit(oldp+3302,(vlSymsp->TOP__top__mem.__PVT__mem_memresp1_val));
        bufp->chgBit(oldp+3303,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_rdy));
        bufp->chgBit(oldp+3304,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_rdy));
        bufp->chgBit(oldp+3305,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_val));
        bufp->chgBit(oldp+3306,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_val));
        bufp->chgBit(oldp+3307,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__rdy));
        bufp->chgBit(oldp+3308,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__val));
        bufp->chgBit(oldp+3309,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+3310,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_val));
        bufp->chgBit(oldp+3311,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__deq_val));
        bufp->chgBit(oldp+3312,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_enq));
        bufp->chgBit(oldp+3313,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+3314,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x31U])) {
        bufp->chgIData(oldp+3315,(vlSymsp->TOP__top__mem__mem.__PVT__read_block1_M),32);
        bufp->chgIData(oldp+3316,(vlSymsp->TOP__top__mem__mem.__PVT__read_data1_M),32);
        bufp->chgQData(oldp+3317,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_msg_M),47);
        bufp->chgQData(oldp+3319,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__msg),47);
        bufp->chgIData(oldp+3321,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__data),32);
        bufp->chgQData(oldp+3322,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__enq_msg),47);
        bufp->chgQData(oldp+3324,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__enq_msg),47);
        bufp->chgQData(oldp+3326,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),47);
        bufp->chgQData(oldp+3328,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),47);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x32U])) {
        bufp->chgIData(oldp+3330,(vlSymsp->TOP__top__mem__mem.__PVT__read_block0_M),32);
        bufp->chgIData(oldp+3331,(vlSymsp->TOP__top__mem__mem.__PVT__read_data0_M),32);
        bufp->chgQData(oldp+3332,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_msg_M),47);
        bufp->chgQData(oldp+3334,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__msg),47);
        bufp->chgIData(oldp+3336,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__data),32);
        bufp->chgQData(oldp+3337,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__enq_msg),47);
        bufp->chgQData(oldp+3339,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__enq_msg),47);
        bufp->chgQData(oldp+3341,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),47);
        bufp->chgQData(oldp+3343,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),47);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x33U])) {
        bufp->chgBit(oldp+3345,(vlSymsp->TOP__top__DUT__ctrl.__PVT__pc_redirect_D));
        bufp->chgCData(oldp+3346,(vlSymsp->TOP__top__DUT__ctrl.__PVT__pc_sel_D),2);
        bufp->chgBit(oldp+3347,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_waddr_X_rs1_D));
        bufp->chgBit(oldp+3348,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_waddr_M_rs1_D));
        bufp->chgBit(oldp+3349,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_waddr_W_rs1_D));
        bufp->chgBit(oldp+3350,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_waddr_X_rs2_D));
        bufp->chgBit(oldp+3351,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_waddr_M_rs2_D));
        bufp->chgBit(oldp+3352,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_waddr_W_rs2_D));
        bufp->chgBit(oldp+3353,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_hazard_D));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x34U])) {
        bufp->chgIData(oldp+3354,(vlSymsp->TOP__top__DUT__dpath.__PVT__rf_rdata0_D),32);
        bufp->chgIData(oldp+3355,(vlSymsp->TOP__top__DUT__dpath.__PVT__rf_rdata1_D),32);
        bufp->chgIData(oldp+3356,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_data0),32);
        bufp->chgIData(oldp+3357,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_data1),32);
        bufp->chgIData(oldp+3358,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rf_read_data0),32);
        bufp->chgIData(oldp+3359,(vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rf_read_data1),32);
        bufp->chgIData(oldp+3360,(vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__d),32);
        bufp->chgIData(oldp+3361,(vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__in0),32);
        bufp->chgIData(oldp+3362,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_data0),32);
        bufp->chgIData(oldp+3363,(vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_data1),32);
        bufp->chgIData(oldp+3364,(vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__in0),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x35U])) {
        bufp->chgIData(oldp+3365,(vlSymsp->TOP__top__DUT__dpath.__PVT__jal_target_D),32);
        bufp->chgIData(oldp+3366,(vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__d),32);
        bufp->chgIData(oldp+3367,(vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in2),32);
        bufp->chgIData(oldp+3368,(vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__out),32);
        bufp->chgBit(oldp+3369,(vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__cout));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x36U])) {
        bufp->chgBit(oldp+3370,(vlSymsp->TOP__top__DUT.__PVT__br_cond_eq_X));
        bufp->chgBit(oldp+3371,(vlSymsp->TOP__top__DUT.__PVT__br_cond_lt_X));
        bufp->chgBit(oldp+3372,(vlSymsp->TOP__top__DUT.__PVT__br_cond_ltu_X));
        bufp->chgBit(oldp+3373,(vlSymsp->TOP__top__DUT__ctrl.__PVT__br_cond_eq_X));
        bufp->chgBit(oldp+3374,(vlSymsp->TOP__top__DUT__ctrl.__PVT__br_cond_lt_X));
        bufp->chgBit(oldp+3375,(vlSymsp->TOP__top__DUT__ctrl.__PVT__br_cond_ltu_X));
        bufp->chgBit(oldp+3376,(vlSymsp->TOP__top__DUT__dpath.__PVT__br_cond_eq_X));
        bufp->chgBit(oldp+3377,(vlSymsp->TOP__top__DUT__dpath.__PVT__br_cond_lt_X));
        bufp->chgBit(oldp+3378,(vlSymsp->TOP__top__DUT__dpath.__PVT__br_cond_ltu_X));
        bufp->chgBit(oldp+3379,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__ops_eq));
        bufp->chgBit(oldp+3380,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__ops_lt));
        bufp->chgBit(oldp+3381,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__ops_ltu));
        bufp->chgBit(oldp+3382,(vlSymsp->TOP__top__DUT__dpath__alu__cond_eq_comp.__PVT__out));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x37U])) {
        bufp->chgBit(oldp+3383,(vlSymsp->TOP__top.__PVT__imem_respstream_val));
        bufp->chgBit(oldp+3384,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_val));
        bufp->chgBit(oldp+3385,(vlSymsp->TOP__top__mem.__PVT__memresp0_val));
        bufp->chgBit(oldp+3386,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__istream_val));
        bufp->chgBit(oldp+3387,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_val));
        bufp->chgBit(oldp+3388,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__val));
        bufp->chgBit(oldp+3389,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__val));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x38U])) {
        bufp->chgBit(oldp+3390,(vlSymsp->TOP__top__sink.__PVT__sink_val));
        bufp->chgBit(oldp+3391,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_val));
        bufp->chgBit(oldp+3392,(vlSymsp->TOP__top__sink__sink.__PVT__val));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x39U])) {
        bufp->chgBit(oldp+3393,(vlSymsp->TOP__top.__PVT__dmem_respstream_val));
        bufp->chgBit(oldp+3394,(vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_val));
        bufp->chgBit(oldp+3395,(vlSymsp->TOP__top__mem.__PVT__memresp1_val));
        bufp->chgBit(oldp+3396,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_respstream_val));
        bufp->chgBit(oldp+3397,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_val));
        bufp->chgBit(oldp+3398,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__val));
        bufp->chgBit(oldp+3399,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__val));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x3aU])) {
        bufp->chgQData(oldp+3400,(vlSymsp->TOP__top__mem.__PVT__mem_memresp1_msg),47);
        bufp->chgQData(oldp+3402,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_msg),47);
        bufp->chgQData(oldp+3404,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_msg),47);
        bufp->chgQData(oldp+3406,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__msg),47);
        bufp->chgCData(oldp+3408,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3409,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__opaque),8);
        bufp->chgCData(oldp+3410,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__test),2);
        bufp->chgCData(oldp+3411,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__len),2);
        bufp->chgIData(oldp+3412,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__data),32);
        bufp->chgQData(oldp+3413,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_msg),47);
        bufp->chgQData(oldp+3415,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__deq_msg),47);
        bufp->chgQData(oldp+3417,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),47);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x3bU])) {
        bufp->chgQData(oldp+3419,(vlSymsp->TOP__top__mem.__PVT__mem_memresp0_msg),47);
        bufp->chgQData(oldp+3421,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_msg),47);
        bufp->chgQData(oldp+3423,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_msg),47);
        bufp->chgQData(oldp+3425,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__msg),47);
        bufp->chgCData(oldp+3427,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3428,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__opaque),8);
        bufp->chgCData(oldp+3429,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__test),2);
        bufp->chgCData(oldp+3430,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__len),2);
        bufp->chgIData(oldp+3431,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__data),32);
        bufp->chgQData(oldp+3432,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_msg),47);
        bufp->chgQData(oldp+3434,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__deq_msg),47);
        bufp->chgQData(oldp+3436,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),47);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x3cU])) {
        bufp->chgIData(oldp+3438,(vlSymsp->TOP__top__DUT__dpath.__PVT__op1_D),32);
        bufp->chgIData(oldp+3439,(vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__d),32);
        bufp->chgIData(oldp+3440,(vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x3dU])) {
        bufp->chgIData(oldp+3441,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg_addr),32);
        bufp->chgBit(oldp+3442,(vlSymsp->TOP__top__DUT__ctrl.__PVT__pc_redirect_X));
        bufp->chgCData(oldp+3443,(vlSymsp->TOP__top__DUT__ctrl.__PVT__pc_sel_X),2);
        bufp->chgIData(oldp+3444,(vlSymsp->TOP__top__DUT__dpath.__PVT__dmem_reqstream_msg_addr),32);
        bufp->chgIData(oldp+3445,(vlSymsp->TOP__top__DUT__dpath.__PVT__jalr_target_X),32);
        bufp->chgIData(oldp+3446,(vlSymsp->TOP__top__DUT__dpath.__PVT__alu_result_X),32);
        bufp->chgIData(oldp+3447,(vlSymsp->TOP__top__DUT__dpath__alu.__PVT__out),32);
        bufp->chgIData(oldp+3448,(vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in3),32);
        bufp->chgIData(oldp+3449,(vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__in2),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x3fU])) {
        bufp->chgIData(oldp+3450,(vlSymsp->TOP__top__sink.__PVT__sink_msg),32);
        bufp->chgIData(oldp+3451,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_msg),32);
        bufp->chgIData(oldp+3452,(vlSymsp->TOP__top__sink__sink.__PVT__msg),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x40U])) {
        bufp->chgBit(oldp+3453,(vlSymsp->TOP__top__mem.__PVT__mem_memresp1_rdy));
        bufp->chgBit(oldp+3454,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_rdy));
        bufp->chgBit(oldp+3455,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_rdy));
        bufp->chgBit(oldp+3456,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_delay_en));
        bufp->chgIData(oldp+3457,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+3458,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__state_next));
        bufp->chgBit(oldp+3459,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__rdy));
        bufp->chgIData(oldp+3460,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+3461,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__en));
        bufp->chgBit(oldp+3462,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+3463,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+3464,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+3465,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+3466,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+3467,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_deq));
        bufp->chgBit(oldp+3468,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
        bufp->chgBit(oldp+3469,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgBit(oldp+3470,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x41U])) {
        bufp->chgQData(oldp+3471,(vlSymsp->TOP__top.__PVT__dmem_respstream_msg),47);
        bufp->chgQData(oldp+3473,(vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_msg),47);
        bufp->chgQData(oldp+3475,(vlSymsp->TOP__top__mem.__PVT__memresp1_msg),47);
        bufp->chgIData(oldp+3477,(vlSymsp->TOP__top__DUT__dpath.__PVT__dmem_respstream_msg_data),32);
        bufp->chgIData(oldp+3478,(vlSymsp->TOP__top__DUT__dpath.__PVT__dmem_result_M),32);
        bufp->chgQData(oldp+3479,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_msg),47);
        bufp->chgQData(oldp+3481,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__msg),47);
        bufp->chgCData(oldp+3483,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3484,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__opaque),8);
        bufp->chgCData(oldp+3485,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__test),2);
        bufp->chgCData(oldp+3486,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__len),2);
        bufp->chgIData(oldp+3487,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__data),32);
        bufp->chgQData(oldp+3488,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__msg),47);
        bufp->chgCData(oldp+3490,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3491,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__opaque),8);
        bufp->chgCData(oldp+3492,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__test),2);
        bufp->chgCData(oldp+3493,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__len),2);
        bufp->chgIData(oldp+3494,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__data),32);
        bufp->chgIData(oldp+3495,(vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__in1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x42U])) {
        bufp->chgQData(oldp+3496,(vlSymsp->TOP__top.__PVT__imem_respstream_msg),47);
        bufp->chgQData(oldp+3498,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_msg),47);
        bufp->chgQData(oldp+3500,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_drop_msg),47);
        bufp->chgQData(oldp+3502,(vlSymsp->TOP__top__mem.__PVT__memresp0_msg),47);
        bufp->chgQData(oldp+3504,(vlSymsp->TOP__top__DUT__dpath.__PVT__imem_respstream_msg),47);
        bufp->chgQData(oldp+3506,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__istream_msg),47);
        bufp->chgQData(oldp+3508,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__ostream_msg),47);
        bufp->chgQData(oldp+3510,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_msg),47);
        bufp->chgQData(oldp+3512,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__msg),47);
        bufp->chgCData(oldp+3514,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3515,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__opaque),8);
        bufp->chgCData(oldp+3516,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__test),2);
        bufp->chgCData(oldp+3517,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__len),2);
        bufp->chgIData(oldp+3518,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__data),32);
        bufp->chgQData(oldp+3519,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__msg),47);
        bufp->chgCData(oldp+3521,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3522,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__opaque),8);
        bufp->chgCData(oldp+3523,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__test),2);
        bufp->chgCData(oldp+3524,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__len),2);
        bufp->chgIData(oldp+3525,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__data),32);
        bufp->chgIData(oldp+3526,(vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__d),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x43U])) {
        bufp->chgCData(oldp+3527,(vlSymsp->TOP__top__DUT.__PVT__pc_sel_F),2);
        bufp->chgCData(oldp+3528,(vlSymsp->TOP__top__DUT__ctrl.__PVT__pc_sel_F),2);
        bufp->chgCData(oldp+3529,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_sel_F),2);
        bufp->chgCData(oldp+3530,(vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__sel),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x44U])) {
        bufp->chgIData(oldp+3531,(vlSymsp->TOP__top__DUT__dpath.__PVT__ex_result_X),32);
        bufp->chgIData(oldp+3532,(vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__d),32);
        bufp->chgIData(oldp+3533,(vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x45U])) {
        bufp->chgWData(oldp+3534,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_msg),77);
        bufp->chgWData(oldp+3537,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
        bufp->chgWData(oldp+3540,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),77);
        bufp->chgWData(oldp+3543,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x46U])) {
        bufp->chgBit(oldp+3546,(vlSymsp->TOP__top__DUT.__PVT__reg_en_M));
        bufp->chgBit(oldp+3547,(vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_M));
        bufp->chgBit(oldp+3548,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stall_M));
        bufp->chgBit(oldp+3549,(vlSymsp->TOP__top__DUT__ctrl.__PVT__next_val_M));
        bufp->chgBit(oldp+3550,(vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_M));
        bufp->chgBit(oldp+3551,(vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x47U])) {
        bufp->chgBit(oldp+3552,(vlSymsp->TOP__top.__PVT__dmem_reqstream_val));
        bufp->chgBit(oldp+3553,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_val));
        bufp->chgBit(oldp+3554,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_val));
        bufp->chgBit(oldp+3555,(vlSymsp->TOP__top__DUT.__PVT__reg_en_X));
        bufp->chgBit(oldp+3556,(vlSymsp->TOP__top__DUT.__PVT__imul_resp_rdy_X));
        bufp->chgBit(oldp+3557,(vlSymsp->TOP__top__mem.__PVT__memreq1_val));
        bufp->chgBit(oldp+3558,(vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_val));
        bufp->chgBit(oldp+3559,(vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_X));
        bufp->chgBit(oldp+3560,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_resp_rdy_X));
        bufp->chgBit(oldp+3561,(vlSymsp->TOP__top__DUT__ctrl.__PVT__stall_X));
        bufp->chgBit(oldp+3562,(vlSymsp->TOP__top__DUT__ctrl.__PVT__next_val_X));
        bufp->chgBit(oldp+3563,(vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_X));
        bufp->chgBit(oldp+3564,(vlSymsp->TOP__top__DUT__dpath.__PVT__imul_resp_rdy_X));
        bufp->chgBit(oldp+3565,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_val));
        bufp->chgBit(oldp+3566,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__val));
        bufp->chgBit(oldp+3567,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__val));
        bufp->chgBit(oldp+3568,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__ostream_rdy));
        bufp->chgBit(oldp+3569,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_val));
        bufp->chgBit(oldp+3570,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_val));
        bufp->chgBit(oldp+3571,(vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__en));
        bufp->chgBit(oldp+3572,(vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__en));
        bufp->chgBit(oldp+3573,(vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__en));
        bufp->chgBit(oldp+3574,(vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__en));
        bufp->chgBit(oldp+3575,(vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__en));
        bufp->chgBit(oldp+3576,(vlSymsp->TOP__top__DUT__dpath__imul__multi.__PVT__ostream_rdy));
        bufp->chgBit(oldp+3577,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__enq_val));
        bufp->chgBit(oldp+3578,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__deq_val));
        bufp->chgBit(oldp+3579,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_enq));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x48U])) {
        bufp->chgIData(oldp+3580,(vlSymsp->TOP__top__DUT__dpath.__PVT__wb_result_M),32);
        bufp->chgIData(oldp+3581,(vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__d),32);
        bufp->chgIData(oldp+3582,(vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x49U])) {
        bufp->chgWData(oldp+3583,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_enq_msg),77);
        bufp->chgIData(oldp+3586,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_enq_msg_addr),32);
        bufp->chgIData(oldp+3587,(vlSymsp->TOP__top__DUT__dpath.__PVT__imem_reqstream_msg_addr),32);
        bufp->chgIData(oldp+3588,(vlSymsp->TOP__top__DUT__dpath.__PVT__pc_next_F),32);
        bufp->chgWData(oldp+3589,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__enq_msg),77);
        bufp->chgIData(oldp+3592,(vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__d),32);
        bufp->chgIData(oldp+3593,(vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__out),32);
        bufp->chgWData(oldp+3594,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
        bufp->chgWData(oldp+3597,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__write_data),77);
        bufp->chgWData(oldp+3600,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x4aU])) {
        bufp->chgWData(oldp+3603,(vlSymsp->TOP__top.__PVT__dmem_reqstream_msg),77);
        bufp->chgWData(oldp+3606,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_msg),77);
        bufp->chgWData(oldp+3609,(vlSymsp->TOP__top__mem.__PVT__memreq1_msg),77);
        bufp->chgWData(oldp+3612,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_msg),77);
        bufp->chgWData(oldp+3615,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__msg),77);
        bufp->chgCData(oldp+3618,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3619,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__opaque),8);
        bufp->chgIData(oldp+3620,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__addr),32);
        bufp->chgCData(oldp+3621,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__len),2);
        bufp->chgIData(oldp+3622,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__data),32);
        bufp->chgWData(oldp+3623,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__msg),77);
        bufp->chgCData(oldp+3626,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3627,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__opaque),8);
        bufp->chgIData(oldp+3628,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__addr),32);
        bufp->chgCData(oldp+3629,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__len),2);
        bufp->chgIData(oldp+3630,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__data),32);
        bufp->chgWData(oldp+3631,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_msg),77);
        bufp->chgWData(oldp+3634,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
        bufp->chgWData(oldp+3637,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x4cU])) {
        bufp->chgBit(oldp+3640,(vlSymsp->TOP__top.__PVT__dmem_reqstream_rdy));
        bufp->chgBit(oldp+3641,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_rdy));
        bufp->chgBit(oldp+3642,(vlSymsp->TOP__top__mem.__PVT__memreq1_rdy));
        bufp->chgBit(oldp+3643,(vlSymsp->TOP__top__mem.__PVT__mem_memreq1_val));
        bufp->chgBit(oldp+3644,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_rdy));
        bufp->chgBit(oldp+3645,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_val));
        bufp->chgBit(oldp+3646,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_delay_en));
        bufp->chgIData(oldp+3647,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+3648,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__state_next));
        bufp->chgBit(oldp+3649,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_val));
        bufp->chgBit(oldp+3650,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__rdy));
        bufp->chgBit(oldp+3651,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__val));
        bufp->chgBit(oldp+3652,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__rdy));
        bufp->chgBit(oldp+3653,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+3654,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgIData(oldp+3655,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+3656,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__en));
        bufp->chgBit(oldp+3657,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_val));
        bufp->chgBit(oldp+3658,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+3659,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+3660,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+3661,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+3662,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_deq));
        bufp->chgBit(oldp+3663,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
        bufp->chgBit(oldp+3664,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgBit(oldp+3665,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__enq_val));
        bufp->chgBit(oldp+3666,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+3667,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+3668,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_enq));
        bufp->chgBit(oldp+3669,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+3670,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgBit(oldp+3671,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
        bufp->chgBit(oldp+3672,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x4dU])) {
        bufp->chgWData(oldp+3673,(vlSymsp->TOP__top.__PVT__imem_reqstream_msg),77);
        bufp->chgWData(oldp+3676,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_msg),77);
        bufp->chgWData(oldp+3679,(vlSymsp->TOP__top__mem.__PVT__memreq0_msg),77);
        bufp->chgWData(oldp+3682,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_msg),77);
        bufp->chgWData(oldp+3685,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__msg),77);
        bufp->chgCData(oldp+3688,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3689,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__opaque),8);
        bufp->chgIData(oldp+3690,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__addr),32);
        bufp->chgCData(oldp+3691,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__len),2);
        bufp->chgIData(oldp+3692,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__data),32);
        bufp->chgWData(oldp+3693,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__msg),77);
        bufp->chgCData(oldp+3696,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3697,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__opaque),8);
        bufp->chgIData(oldp+3698,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__addr),32);
        bufp->chgCData(oldp+3699,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__len),2);
        bufp->chgIData(oldp+3700,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__data),32);
        bufp->chgWData(oldp+3701,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__deq_msg),77);
        bufp->chgWData(oldp+3704,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
        bufp->chgWData(oldp+3707,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x4fU])) {
        bufp->chgBit(oldp+3710,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_drop));
        bufp->chgBit(oldp+3711,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_respstream_drop));
        bufp->chgBit(oldp+3712,(vlSymsp->TOP__top__DUT__ctrl.__PVT__squash_F));
        bufp->chgBit(oldp+3713,(vlSymsp->TOP__top__DUT__dpath.__PVT__imem_respstream_drop));
        bufp->chgBit(oldp+3714,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__drop));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x51U])) {
        bufp->chgWData(oldp+3715,(vlSymsp->TOP__top__mem.__PVT__mem_memreq1_msg),77);
        bufp->chgWData(oldp+3718,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_msg),77);
        bufp->chgWData(oldp+3721,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg),77);
        bufp->chgWData(oldp+3724,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__msg),77);
        bufp->chgCData(oldp+3727,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3728,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__opaque),8);
        bufp->chgIData(oldp+3729,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__addr),32);
        bufp->chgCData(oldp+3730,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__len),2);
        bufp->chgIData(oldp+3731,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__data),32);
        bufp->chgWData(oldp+3732,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_msg),77);
        bufp->chgWData(oldp+3735,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
        bufp->chgWData(oldp+3738,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x53U])) {
        bufp->chgBit(oldp+3741,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_drop_val));
        bufp->chgBit(oldp+3742,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_respstream_val));
        bufp->chgBit(oldp+3743,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_F));
        bufp->chgBit(oldp+3744,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__ostream_val));
    }
    bufp->chgBit(oldp+3745,(vlSelf->clk));
    bufp->chgBit(oldp+3746,(vlSelf->linetrace));
    bufp->chgIData(oldp+3747,(vlSymsp->TOP__top.__PVT__mngr2proc_msg),32);
    bufp->chgBit(oldp+3748,(vlSymsp->TOP__top.__PVT__mngr2proc_val));
    bufp->chgIData(oldp+3749,(vlSymsp->TOP__top.__PVT__fp),32);
    bufp->chgIData(oldp+3750,(vlSymsp->TOP__top.__PVT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+3751,(vlSymsp->TOP__top__DUT.__PVT__mngr2proc_msg),32);
    bufp->chgBit(oldp+3752,(vlSymsp->TOP__top__DUT.__PVT__mngr2proc_val));
    bufp->chgBit(oldp+3753,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_enq_val));
    bufp->chgWData(oldp+3754,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg),77);
    bufp->chgBit(oldp+3757,(vlSymsp->TOP__top__src.__PVT__val));
    bufp->chgIData(oldp+3758,(vlSymsp->TOP__top__src.__PVT__msg),32);
    bufp->chgBit(oldp+3759,(vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_reqstream_val));
    bufp->chgBit(oldp+3760,(vlSymsp->TOP__top__DUT__ctrl.__PVT__mngr2proc_val));
    bufp->chgBit(oldp+3761,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_D));
    bufp->chgBit(oldp+3762,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_X));
    bufp->chgBit(oldp+3763,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_M));
    bufp->chgBit(oldp+3764,(vlSymsp->TOP__top__DUT__ctrl.__PVT__osquash_X));
    bufp->chgBit(oldp+3765,(vlSymsp->TOP__top__DUT__ctrl.__PVT__squash_D));
    bufp->chgBit(oldp+3766,(vlSymsp->TOP__top__DUT__ctrl.__PVT__ostall_mngr2proc_D));
    bufp->chgIData(oldp+3767,(vlSymsp->TOP__top__DUT__dpath.__PVT__mngr2proc_data),32);
    bufp->chgIData(oldp+3768,(vlSymsp->TOP__top__DUT__dpath.__PVT__op2_D),32);
    bufp->chgIData(oldp+3769,(vlSymsp->TOP__top__DUT__dpath.__PVT__csrr_data_D),32);
    bufp->chgBit(oldp+3770,(vlSymsp->TOP__top__src__src.__PVT__done_next));
    bufp->chgBit(oldp+3771,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_val));
    bufp->chgIData(oldp+3772,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_msg),32);
    bufp->chgIData(oldp+3773,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_num),32);
    bufp->chgIData(oldp+3774,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay),32);
    bufp->chgBit(oldp+3775,(vlSymsp->TOP__top__src__msg_delay.__PVT__state));
    bufp->chgIData(oldp+3776,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_num),32);
    bufp->chgIData(oldp+3777,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay),32);
    bufp->chgBit(oldp+3778,(vlSymsp->TOP__top__sink__msg_delay.__PVT__zero_cycle_delay));
    bufp->chgBit(oldp+3779,(vlSymsp->TOP__top__sink__msg_delay.__PVT__state));
    bufp->chgBit(oldp+3780,(vlSymsp->TOP__top__sink__sink.__PVT__reset_reg));
    bufp->chgBit(oldp+3781,(vlSymsp->TOP__top__sink__sink.__PVT__failed));
    bufp->chgBit(oldp+3782,(vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__state));
    bufp->chgIData(oldp+3783,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_num),32);
    bufp->chgIData(oldp+3784,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_delay),32);
    bufp->chgBit(oldp+3785,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__zero_cycle_delay));
    bufp->chgBit(oldp+3786,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__state));
    bufp->chgIData(oldp+3787,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_num),32);
    bufp->chgIData(oldp+3788,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_delay),32);
    bufp->chgBit(oldp+3789,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__zero_cycle_delay));
    bufp->chgBit(oldp+3790,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__state));
    bufp->chgIData(oldp+3791,(vlSymsp->TOP__top__mem__mem.__PVT__data_data),32);
    bufp->chgIData(oldp+3792,(vlSymsp->TOP__top__mem__mem.__PVT__wr_i),32);
    bufp->chgBit(oldp+3793,(vlSymsp->TOP__top__mem__mem.__PVT__write_en0_M));
    bufp->chgBit(oldp+3794,(vlSymsp->TOP__top__mem__mem.__PVT__write_en1_M));
    bufp->chgBit(oldp+3795,(vlSymsp->TOP__top__mem__mem.__PVT__amo_en0_M));
    bufp->chgBit(oldp+3796,(vlSymsp->TOP__top__mem__mem.__PVT__amo_en1_M));
    bufp->chgIData(oldp+3797,(vlSymsp->TOP__top__mem__mem.__PVT__wr0_i),32);
    bufp->chgIData(oldp+3798,(vlSymsp->TOP__top__mem__mem.__PVT__wr1_i),32);
    bufp->chgBit(oldp+3799,(vlSymsp->TOP__top__mem__mem.__PVT__memory_cleared));
    bufp->chgIData(oldp+3800,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_num),32);
    bufp->chgIData(oldp+3801,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_delay),32);
    bufp->chgBit(oldp+3802,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__zero_cycle_delay));
    bufp->chgBit(oldp+3803,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__state));
    bufp->chgIData(oldp+3804,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_num),32);
    bufp->chgIData(oldp+3805,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_delay),32);
    bufp->chgBit(oldp+3806,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__zero_cycle_delay));
    bufp->chgBit(oldp+3807,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__state));
    bufp->chgCData(oldp+3808,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__state),2);
    bufp->chgCData(oldp+3809,(vlSymsp->TOP__top__DUT__dpath__imul.__PVT__new_state),2);
    bufp->chgBit(oldp+3810,(vlSymsp->TOP__top__DUT__imem_queue.__PVT__enq_val));
    bufp->chgIData(oldp+3811,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__q),32);
    bufp->chgIData(oldp+3812,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__q),32);
    bufp->chgIData(oldp+3813,(vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__d),32);
    bufp->chgIData(oldp+3814,(vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__d),32);
    bufp->chgIData(oldp+3815,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__q),32);
    bufp->chgIData(oldp+3816,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__q),32);
    bufp->chgIData(oldp+3817,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__q),32);
    bufp->chgIData(oldp+3818,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__q),32);
    bufp->chgIData(oldp+3819,(vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__in0),32);
    bufp->chgIData(oldp+3820,(vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__out),32);
    bufp->chgIData(oldp+3821,(vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__in2),32);
    bufp->chgIData(oldp+3822,(vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__out),32);
    bufp->chgQData(oldp+3823,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__resp),47);
    bufp->chgQData(oldp+3825,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__resp),47);
    bufp->chgIData(oldp+3827,(vlSymsp->TOP__top__DUT__dpath__imul__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3828,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3829,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3830,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3831,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3832,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3833,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3834,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3835,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3836,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3837,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3838,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3839,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3840,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3841,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3842,(vlSymsp->TOP__top__mem__vc_trace.__PVT__cycles),32);
    bufp->chgBit(oldp+3843,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__enq_val));
    bufp->chgBit(oldp+3844,(vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl.__PVT__do_enq));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x20U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x21U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x22U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x23U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x24U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x25U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x26U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x27U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x28U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x29U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x2aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x2bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x2cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x2dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x2eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x2fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x30U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x31U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x32U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x33U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x34U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x35U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x36U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x37U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x38U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x39U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x3aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x3bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x3cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x3dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x3eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x3fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x40U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x41U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x42U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x43U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x44U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x45U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x46U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x47U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x48U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x49U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x4aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x4bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x4cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x4dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x4eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x4fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x50U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x51U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x52U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x53U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x54U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x55U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x56U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x57U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x58U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x59U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x5aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x5bU] = 0U;
}
