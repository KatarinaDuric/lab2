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
        bufp->chgBit(oldp+0,(vlSymsp->TOP__top.__PVT__commit_inst));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__top.__PVT__stats_en));
        bufp->chgIData(oldp+2,(vlSymsp->TOP__top.__PVT__idx),32);
        bufp->chgCData(oldp+3,(vlSymsp->TOP__top__DUT.__PVT__funct7),7);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__top__src__msg_delay.__PVT__max_delay),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__top__sink__msg_delay.__PVT__max_delay),32);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__top__sink__sink.__PVT__t),32);
        bufp->chgIData(oldp+7,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__max_delay),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__max_delay),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__max_delay),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__max_delay),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__cycles_next),32);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__top__mem__vc_trace.__PVT__cycles_next),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+25,(vlSymsp->TOP__top__DUT.__PVT__core_id),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__top__src.__PVT__max_delay),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__top__sink.__PVT__max_delay),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__top__mem.__PVT__max_delay),32);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__test),2);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__test),2);
        bufp->chgCData(oldp+31,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+32,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+160,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+161,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+289,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+290,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+418,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+419,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+547,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+548,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+676,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+677,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+805,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+806,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+934,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+935,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1063,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1064,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1192,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1193,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1321,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1322,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1450,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1451,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1579,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1580,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1708,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__level),4);
        bufp->chgWData(oldp+1709,(vlSymsp->TOP__top__mem__vc_trace.__PVT__storage),4096);
        bufp->chgCData(oldp+1837,(vlSymsp->TOP__top__mem__vc_trace.__PVT__level),4);
        bufp->chgBit(oldp+1838,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+1839,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+1840,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+1841,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+1842,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
        bufp->chgBit(oldp+1843,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x2aU]))) {
        bufp->chgBit(oldp+1844,(vlSymsp->TOP__top.__PVT__reset));
        bufp->chgBit(oldp+1845,(vlSymsp->TOP__top.__PVT__mem_clear));
        bufp->chgIData(oldp+1846,(vlSymsp->TOP__top__src__src.__PVT__m[0]),32);
        bufp->chgIData(oldp+1847,(vlSymsp->TOP__top__src__src.__PVT__m[1]),32);
        bufp->chgIData(oldp+1848,(vlSymsp->TOP__top__src__src.__PVT__m[2]),32);
        bufp->chgIData(oldp+1849,(vlSymsp->TOP__top__src__src.__PVT__m[3]),32);
        bufp->chgIData(oldp+1850,(vlSymsp->TOP__top__src__src.__PVT__m[4]),32);
        bufp->chgIData(oldp+1851,(vlSymsp->TOP__top__src__src.__PVT__m[5]),32);
        bufp->chgIData(oldp+1852,(vlSymsp->TOP__top__src__src.__PVT__m[6]),32);
        bufp->chgIData(oldp+1853,(vlSymsp->TOP__top__src__src.__PVT__m[7]),32);
        bufp->chgIData(oldp+1854,(vlSymsp->TOP__top__src__src.__PVT__m[8]),32);
        bufp->chgIData(oldp+1855,(vlSymsp->TOP__top__src__src.__PVT__m[9]),32);
        bufp->chgCData(oldp+1856,(vlSymsp->TOP__top__src__src.__PVT__index_max),4);
        bufp->chgIData(oldp+1857,(vlSymsp->TOP__top__src__src.__PVT__data_data),32);
        bufp->chgIData(oldp+1858,(vlSymsp->TOP__top__src__src.__PVT__load__Vstatic__unnamedblk1__DOT__count),32);
        bufp->chgIData(oldp+1859,(vlSymsp->TOP__top__sink__sink.__PVT__m[0]),32);
        bufp->chgIData(oldp+1860,(vlSymsp->TOP__top__sink__sink.__PVT__m[1]),32);
        bufp->chgIData(oldp+1861,(vlSymsp->TOP__top__sink__sink.__PVT__m[2]),32);
        bufp->chgIData(oldp+1862,(vlSymsp->TOP__top__sink__sink.__PVT__m[3]),32);
        bufp->chgIData(oldp+1863,(vlSymsp->TOP__top__sink__sink.__PVT__m[4]),32);
        bufp->chgIData(oldp+1864,(vlSymsp->TOP__top__sink__sink.__PVT__m[5]),32);
        bufp->chgIData(oldp+1865,(vlSymsp->TOP__top__sink__sink.__PVT__m[6]),32);
        bufp->chgIData(oldp+1866,(vlSymsp->TOP__top__sink__sink.__PVT__m[7]),32);
        bufp->chgIData(oldp+1867,(vlSymsp->TOP__top__sink__sink.__PVT__m[8]),32);
        bufp->chgIData(oldp+1868,(vlSymsp->TOP__top__sink__sink.__PVT__m[9]),32);
        bufp->chgCData(oldp+1869,(vlSymsp->TOP__top__sink__sink.__PVT__index_max),4);
        bufp->chgIData(oldp+1870,(vlSymsp->TOP__top__sink__sink.__PVT__data_data),32);
        bufp->chgIData(oldp+1871,(vlSymsp->TOP__top__sink__sink.__PVT__load__Vstatic__unnamedblk1__DOT__count),32);
        bufp->chgIData(oldp+1872,(vlSymsp->TOP__top__mem__mem.__PVT__data_address),32);
        bufp->chgSData(oldp+1873,(vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr),12);
        bufp->chgCData(oldp+1874,(vlSymsp->TOP__top__mem__mem.__PVT__block_offset),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x2bU]))) {
        bufp->chgWData(oldp+1875,(vlSymsp->TOP__top__DUT.__PVT__temp),4096);
        bufp->chgWData(oldp+2003,(vlSymsp->TOP__top__DUT.__PVT__str),4096);
        bufp->chgIData(oldp+2131,(vlSymsp->TOP__top__DUT.__PVT__idx0),32);
        bufp->chgIData(oldp+2132,(vlSymsp->TOP__top__DUT.__PVT__idx1),32);
        bufp->chgIData(oldp+2133,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str),24);
        bufp->chgIData(oldp+2134,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str),24);
        bufp->chgIData(oldp+2135,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str),24);
        bufp->chgWData(oldp+2136,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr_str),72);
        bufp->chgSData(oldp+2139,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__funct_str),16);
        bufp->chgCData(oldp+2140,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1),5);
        bufp->chgCData(oldp+2141,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2),5);
        bufp->chgCData(oldp+2142,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd),5);
        bufp->chgSData(oldp+2143,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr),12);
        bufp->chgCData(oldp+2144,(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__funct),7);
        bufp->chgIData(oldp+2145,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0),32);
        bufp->chgIData(oldp+2146,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1),32);
        bufp->chgIData(oldp+2147,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0),32);
        bufp->chgIData(oldp+2148,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1),32);
        bufp->chgWData(oldp+2149,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__storage),4096);
        bufp->chgIData(oldp+2277,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__cycles_next),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+2278,(vlSymsp->TOP__top.clk));
        bufp->chgBit(oldp+2279,(vlSymsp->TOP__top.linetrace));
        bufp->chgBit(oldp+2280,(vlSymsp->TOP__top__DUT.__PVT__clk));
        bufp->chgBit(oldp+2281,(vlSymsp->TOP__top__src.__PVT__clk));
        bufp->chgBit(oldp+2282,(vlSymsp->TOP__top__sink.__PVT__clk));
        bufp->chgBit(oldp+2283,(vlSymsp->TOP__top__mem.__PVT__clk));
        bufp->chgBit(oldp+2284,(vlSymsp->TOP__top__src__src.__PVT__clk));
        bufp->chgBit(oldp+2285,(vlSymsp->TOP__top__src__msg_delay.__PVT__clk));
        bufp->chgBit(oldp+2286,(vlSymsp->TOP__top__sink__msg_delay.__PVT__clk));
        bufp->chgBit(oldp+2287,(vlSymsp->TOP__top__sink__sink.__PVT__clk));
        bufp->chgBit(oldp+2288,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__clk));
        bufp->chgBit(oldp+2289,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__clk));
        bufp->chgBit(oldp+2290,(vlSymsp->TOP__top__mem__mem.__PVT__clk));
        bufp->chgBit(oldp+2291,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__clk));
        bufp->chgBit(oldp+2292,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__clk));
        bufp->chgBit(oldp+2293,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__clk));
        bufp->chgBit(oldp+2294,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__clk));
        bufp->chgBit(oldp+2295,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__clk));
        bufp->chgBit(oldp+2296,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__clk));
        bufp->chgBit(oldp+2297,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__clk));
        bufp->chgBit(oldp+2298,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__clk));
        bufp->chgBit(oldp+2299,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__clk));
        bufp->chgBit(oldp+2300,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__clk));
        bufp->chgBit(oldp+2301,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__clk));
        bufp->chgBit(oldp+2302,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__clk));
        bufp->chgBit(oldp+2303,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__clk));
        bufp->chgBit(oldp+2304,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__clk));
        bufp->chgBit(oldp+2305,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__clk));
        bufp->chgBit(oldp+2306,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__clk));
        bufp->chgBit(oldp+2307,(vlSymsp->TOP__top__src__src__index_reg.__PVT__clk));
        bufp->chgBit(oldp+2308,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk));
        bufp->chgBit(oldp+2309,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+2310,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+2311,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+2312,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+2313,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+2314,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__clk));
        bufp->chgBit(oldp+2315,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__clk));
        bufp->chgBit(oldp+2316,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__clk));
        bufp->chgBit(oldp+2317,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__clk));
        bufp->chgBit(oldp+2318,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__clk));
        bufp->chgBit(oldp+2319,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2320,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2321,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2322,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2323,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2324,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2325,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2326,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2327,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2328,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2329,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2330,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2331,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2332,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2333,(vlSymsp->TOP__top__mem__vc_trace.__PVT__clk));
        bufp->chgBit(oldp+2334,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2335,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2336,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2337,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2338,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2339,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2340,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2341,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__clk));
        bufp->chgBit(oldp+2342,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2343,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2344,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2345,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__clk));
        bufp->chgBit(oldp+2346,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
        bufp->chgBit(oldp+2347,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
        bufp->chgBit(oldp+2348,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
        bufp->chgBit(oldp+2349,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
        bufp->chgBit(oldp+2350,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
        bufp->chgBit(oldp+2351,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+2352,(vlSymsp->TOP__top__DUT.__PVT__reset));
        bufp->chgBit(oldp+2353,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__reset));
        bufp->chgBit(oldp+2354,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__reset));
        bufp->chgBit(oldp+2355,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__reset));
        bufp->chgBit(oldp+2356,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__reset));
        bufp->chgBit(oldp+2357,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__reset));
        bufp->chgBit(oldp+2358,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__reset));
        bufp->chgBit(oldp+2359,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2360,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2361,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2362,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2363,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2364,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2365,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2366,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2367,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2368,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
        bufp->chgBit(oldp+2369,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+2370,(vlSymsp->TOP__top__src.__PVT__reset));
        bufp->chgBit(oldp+2371,(vlSymsp->TOP__top__sink.__PVT__reset));
        bufp->chgBit(oldp+2372,(vlSymsp->TOP__top__mem.__PVT__reset));
        bufp->chgBit(oldp+2373,(vlSymsp->TOP__top__mem.__PVT__mem_clear));
        bufp->chgBit(oldp+2374,(vlSymsp->TOP__top__src__src.__PVT__reset));
        bufp->chgBit(oldp+2375,(vlSymsp->TOP__top__src__msg_delay.__PVT__reset));
        bufp->chgBit(oldp+2376,(vlSymsp->TOP__top__sink__msg_delay.__PVT__reset));
        bufp->chgBit(oldp+2377,(vlSymsp->TOP__top__sink__sink.__PVT__reset));
        bufp->chgBit(oldp+2378,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__reset));
        bufp->chgBit(oldp+2379,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__reset));
        bufp->chgBit(oldp+2380,(vlSymsp->TOP__top__mem__mem.__PVT__reset));
        bufp->chgBit(oldp+2381,(vlSymsp->TOP__top__mem__mem.__PVT__mem_clear));
        bufp->chgBit(oldp+2382,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__reset));
        bufp->chgBit(oldp+2383,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__reset));
        bufp->chgBit(oldp+2384,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__reset));
        bufp->chgBit(oldp+2385,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__reset));
        bufp->chgBit(oldp+2386,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__reset));
        bufp->chgBit(oldp+2387,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__reset));
        bufp->chgBit(oldp+2388,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__reset));
        bufp->chgBit(oldp+2389,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__reset));
        bufp->chgBit(oldp+2390,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__reset));
        bufp->chgBit(oldp+2391,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__reset));
        bufp->chgBit(oldp+2392,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__reset));
        bufp->chgBit(oldp+2393,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__reset));
        bufp->chgBit(oldp+2394,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__reset));
        bufp->chgBit(oldp+2395,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__reset));
        bufp->chgBit(oldp+2396,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2397,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2398,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2399,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__reset));
        bufp->chgBit(oldp+2400,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
        bufp->chgBit(oldp+2401,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
        bufp->chgBit(oldp+2402,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
        bufp->chgBit(oldp+2403,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x17U]))) {
        bufp->chgBit(oldp+2404,(vlSymsp->TOP__top__src__src__index_reg.__PVT__reset));
        bufp->chgBit(oldp+2405,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset));
        bufp->chgBit(oldp+2406,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+2407,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+2408,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+2409,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+2410,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+2411,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__reset));
        bufp->chgBit(oldp+2412,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2413,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2414,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2415,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2416,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2417,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2418,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2419,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2420,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2421,(vlSymsp->TOP__top__mem__vc_trace.__PVT__reset));
        bufp->chgBit(oldp+2422,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2423,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2424,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__reset));
        bufp->chgBit(oldp+2425,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__reset));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x18U]))) {
        bufp->chgBit(oldp+2426,(vlSymsp->TOP__top.__PVT__snk_done));
        bufp->chgBit(oldp+2427,(vlSymsp->TOP__top__sink.__PVT__done));
        bufp->chgBit(oldp+2428,(vlSymsp->TOP__top__sink.__PVT__sink_rdy));
        bufp->chgBit(oldp+2429,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_rdy));
        bufp->chgBit(oldp+2430,(vlSymsp->TOP__top__sink__sink.__PVT__rdy));
        bufp->chgBit(oldp+2431,(vlSymsp->TOP__top__sink__sink.__PVT__done));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x21U]))) {
        bufp->chgBit(oldp+2432,(vlSymsp->TOP__top.__PVT__imem_reqstream_rdy));
        bufp->chgBit(oldp+2433,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_rdy));
        bufp->chgBit(oldp+2434,(vlSymsp->TOP__top__mem.__PVT__memreq0_rdy));
        bufp->chgBit(oldp+2435,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_rdy));
        bufp->chgBit(oldp+2436,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_delay_en));
        bufp->chgIData(oldp+2437,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+2438,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__rdy));
        bufp->chgBit(oldp+2439,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__rdy));
        bufp->chgIData(oldp+2440,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+2441,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x24U]))) {
        bufp->chgBit(oldp+2442,(vlSymsp->TOP__top.__PVT__mngr2proc_rdy));
        bufp->chgBit(oldp+2443,(vlSymsp->TOP__top.__PVT__proc2mngr_val));
        bufp->chgWData(oldp+2444,(vlSymsp->TOP__top.__PVT__imem_reqstream_msg),77);
        bufp->chgBit(oldp+2447,(vlSymsp->TOP__top.__PVT__imem_reqstream_val));
        bufp->chgBit(oldp+2448,(vlSymsp->TOP__top.__PVT__imem_respstream_rdy));
        bufp->chgBit(oldp+2449,(vlSymsp->TOP__top.__PVT__dmem_reqstream_val));
        bufp->chgBit(oldp+2450,(vlSymsp->TOP__top.__PVT__dmem_respstream_rdy));
        bufp->chgBit(oldp+2451,(vlSymsp->TOP__top__DUT.__PVT__mngr2proc_rdy));
        bufp->chgBit(oldp+2452,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_val));
        bufp->chgWData(oldp+2453,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_msg),77);
        bufp->chgBit(oldp+2456,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_val));
        bufp->chgBit(oldp+2457,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_rdy));
        bufp->chgBit(oldp+2458,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_val));
        bufp->chgBit(oldp+2459,(vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_rdy));
        bufp->chgIData(oldp+2460,(vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_msg_addr),32);
        bufp->chgWData(oldp+2461,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg),77);
        bufp->chgBit(oldp+2464,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_val));
        bufp->chgCData(oldp+2465,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg_type),3);
        bufp->chgIData(oldp+2466,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg_addr),32);
        bufp->chgIData(oldp+2467,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_msg_data),32);
        bufp->chgIData(oldp+2468,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_msg),32);
        bufp->chgBit(oldp+2469,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_val));
        bufp->chgIData(oldp+2470,(vlSymsp->TOP__top__DUT.__PVT__n_PC),32);
        bufp->chgIData(oldp+2471,(vlSymsp->TOP__top__DUT.__PVT__n_inst),32);
        bufp->chgBit(oldp+2472,(vlSymsp->TOP__top__DUT.__PVT__print_trace));
        bufp->chgIData(oldp+2473,(vlSymsp->TOP__top__DUT.__PVT__n_rf[0]),32);
        bufp->chgIData(oldp+2474,(vlSymsp->TOP__top__DUT.__PVT__n_rf[1]),32);
        bufp->chgIData(oldp+2475,(vlSymsp->TOP__top__DUT.__PVT__n_rf[2]),32);
        bufp->chgIData(oldp+2476,(vlSymsp->TOP__top__DUT.__PVT__n_rf[3]),32);
        bufp->chgIData(oldp+2477,(vlSymsp->TOP__top__DUT.__PVT__n_rf[4]),32);
        bufp->chgIData(oldp+2478,(vlSymsp->TOP__top__DUT.__PVT__n_rf[5]),32);
        bufp->chgIData(oldp+2479,(vlSymsp->TOP__top__DUT.__PVT__n_rf[6]),32);
        bufp->chgIData(oldp+2480,(vlSymsp->TOP__top__DUT.__PVT__n_rf[7]),32);
        bufp->chgIData(oldp+2481,(vlSymsp->TOP__top__DUT.__PVT__n_rf[8]),32);
        bufp->chgIData(oldp+2482,(vlSymsp->TOP__top__DUT.__PVT__n_rf[9]),32);
        bufp->chgIData(oldp+2483,(vlSymsp->TOP__top__DUT.__PVT__n_rf[10]),32);
        bufp->chgIData(oldp+2484,(vlSymsp->TOP__top__DUT.__PVT__n_rf[11]),32);
        bufp->chgIData(oldp+2485,(vlSymsp->TOP__top__DUT.__PVT__n_rf[12]),32);
        bufp->chgIData(oldp+2486,(vlSymsp->TOP__top__DUT.__PVT__n_rf[13]),32);
        bufp->chgIData(oldp+2487,(vlSymsp->TOP__top__DUT.__PVT__n_rf[14]),32);
        bufp->chgIData(oldp+2488,(vlSymsp->TOP__top__DUT.__PVT__n_rf[15]),32);
        bufp->chgIData(oldp+2489,(vlSymsp->TOP__top__DUT.__PVT__n_rf[16]),32);
        bufp->chgIData(oldp+2490,(vlSymsp->TOP__top__DUT.__PVT__n_rf[17]),32);
        bufp->chgIData(oldp+2491,(vlSymsp->TOP__top__DUT.__PVT__n_rf[18]),32);
        bufp->chgIData(oldp+2492,(vlSymsp->TOP__top__DUT.__PVT__n_rf[19]),32);
        bufp->chgIData(oldp+2493,(vlSymsp->TOP__top__DUT.__PVT__n_rf[20]),32);
        bufp->chgIData(oldp+2494,(vlSymsp->TOP__top__DUT.__PVT__n_rf[21]),32);
        bufp->chgIData(oldp+2495,(vlSymsp->TOP__top__DUT.__PVT__n_rf[22]),32);
        bufp->chgIData(oldp+2496,(vlSymsp->TOP__top__DUT.__PVT__n_rf[23]),32);
        bufp->chgIData(oldp+2497,(vlSymsp->TOP__top__DUT.__PVT__n_rf[24]),32);
        bufp->chgIData(oldp+2498,(vlSymsp->TOP__top__DUT.__PVT__n_rf[25]),32);
        bufp->chgIData(oldp+2499,(vlSymsp->TOP__top__DUT.__PVT__n_rf[26]),32);
        bufp->chgIData(oldp+2500,(vlSymsp->TOP__top__DUT.__PVT__n_rf[27]),32);
        bufp->chgIData(oldp+2501,(vlSymsp->TOP__top__DUT.__PVT__n_rf[28]),32);
        bufp->chgIData(oldp+2502,(vlSymsp->TOP__top__DUT.__PVT__n_rf[29]),32);
        bufp->chgIData(oldp+2503,(vlSymsp->TOP__top__DUT.__PVT__n_rf[30]),32);
        bufp->chgIData(oldp+2504,(vlSymsp->TOP__top__DUT.__PVT__n_rf[31]),32);
        bufp->chgIData(oldp+2505,(vlSymsp->TOP__top__DUT.__PVT__n_state),32);
        bufp->chgBit(oldp+2506,(vlSymsp->TOP__top__src.__PVT__rdy));
        bufp->chgBit(oldp+2507,(vlSymsp->TOP__top__src.__PVT__src_rdy));
        bufp->chgBit(oldp+2508,(vlSymsp->TOP__top__sink.__PVT__val));
        bufp->chgBit(oldp+2509,(vlSymsp->TOP__top__mem.__PVT__memreq0_val));
        bufp->chgWData(oldp+2510,(vlSymsp->TOP__top__mem.__PVT__memreq0_msg),77);
        bufp->chgBit(oldp+2513,(vlSymsp->TOP__top__mem.__PVT__memreq1_val));
        bufp->chgBit(oldp+2514,(vlSymsp->TOP__top__mem.__PVT__memresp0_rdy));
        bufp->chgBit(oldp+2515,(vlSymsp->TOP__top__mem.__PVT__memresp1_rdy));
        bufp->chgBit(oldp+2516,(vlSymsp->TOP__top__mem.__PVT__mem_memreq0_val));
        bufp->chgWData(oldp+2517,(vlSymsp->TOP__top__mem.__PVT__mem_memreq0_msg),77);
        bufp->chgBit(oldp+2520,(vlSymsp->TOP__top__mem.__PVT__mem_memresp0_rdy));
        bufp->chgBit(oldp+2521,(vlSymsp->TOP__top__mem.__PVT__mem_memresp1_rdy));
        bufp->chgBit(oldp+2522,(vlSymsp->TOP__top__src__src.__PVT__rdy));
        bufp->chgBit(oldp+2523,(vlSymsp->TOP__top__src__src.__PVT__index_en));
        bufp->chgBit(oldp+2524,(vlSymsp->TOP__top__src__src.__PVT__go));
        bufp->chgBit(oldp+2525,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_rdy));
        bufp->chgBit(oldp+2526,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_rdy));
        bufp->chgBit(oldp+2527,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay_en));
        bufp->chgIData(oldp+2528,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+2529,(vlSymsp->TOP__top__src__msg_delay.__PVT__zero_cycle_delay));
        bufp->chgBit(oldp+2530,(vlSymsp->TOP__top__src__msg_delay.__PVT__state_next));
        bufp->chgBit(oldp+2531,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_val));
        bufp->chgBit(oldp+2532,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_val));
        bufp->chgWData(oldp+2533,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_msg),77);
        bufp->chgBit(oldp+2536,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_val));
        bufp->chgWData(oldp+2537,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_msg),77);
        bufp->chgBit(oldp+2540,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__state_next));
        bufp->chgBit(oldp+2541,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_val));
        bufp->chgBit(oldp+2542,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_val));
        bufp->chgWData(oldp+2543,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg),77);
        bufp->chgBit(oldp+2546,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_rdy));
        bufp->chgBit(oldp+2547,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_rdy));
        bufp->chgBit(oldp+2548,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_rdy));
        bufp->chgBit(oldp+2549,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_rdy));
        bufp->chgBit(oldp+2550,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_delay_en));
        bufp->chgIData(oldp+2551,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+2552,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__zero_cycle_delay));
        bufp->chgBit(oldp+2553,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__state_next));
        bufp->chgBit(oldp+2554,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_rdy));
        bufp->chgBit(oldp+2555,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_rdy));
        bufp->chgBit(oldp+2556,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_delay_en));
        bufp->chgIData(oldp+2557,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+2558,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__zero_cycle_delay));
        bufp->chgBit(oldp+2559,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__state_next));
        bufp->chgBit(oldp+2560,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__val));
        bufp->chgWData(oldp+2561,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__msg),77);
        bufp->chgCData(oldp+2564,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__type_),3);
        bufp->chgCData(oldp+2565,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__opaque),8);
        bufp->chgIData(oldp+2566,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__addr),32);
        bufp->chgCData(oldp+2567,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__len),2);
        bufp->chgIData(oldp+2568,(vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__data),32);
        bufp->chgBit(oldp+2569,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__val));
        bufp->chgBit(oldp+2570,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__val));
        bufp->chgWData(oldp+2571,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__msg),77);
        bufp->chgCData(oldp+2574,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__type_),3);
        bufp->chgCData(oldp+2575,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__opaque),8);
        bufp->chgIData(oldp+2576,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__addr),32);
        bufp->chgCData(oldp+2577,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__len),2);
        bufp->chgIData(oldp+2578,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__data),32);
        bufp->chgBit(oldp+2579,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__val));
        bufp->chgWData(oldp+2580,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__msg),77);
        bufp->chgCData(oldp+2583,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__type_),3);
        bufp->chgCData(oldp+2584,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__opaque),8);
        bufp->chgIData(oldp+2585,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__addr),32);
        bufp->chgCData(oldp+2586,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__len),2);
        bufp->chgIData(oldp+2587,(vlSymsp->TOP__top__mem__memreq0_trace.__PVT__data),32);
        bufp->chgBit(oldp+2588,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__val));
        bufp->chgBit(oldp+2589,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__rdy));
        bufp->chgBit(oldp+2590,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__rdy));
        bufp->chgBit(oldp+2591,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__rdy));
        bufp->chgBit(oldp+2592,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__rdy));
        bufp->chgBit(oldp+2593,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__rdy));
        bufp->chgBit(oldp+2594,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__rdy));
        bufp->chgBit(oldp+2595,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_val));
        bufp->chgWData(oldp+2596,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_msg),77);
        bufp->chgBit(oldp+2599,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_val));
        bufp->chgBit(oldp+2600,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_val));
        bufp->chgIData(oldp+2601,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_msg),32);
        bufp->chgBit(oldp+2602,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_val));
        bufp->chgBit(oldp+2603,(vlSymsp->TOP__top__src__src__index_reg.__PVT__en));
        bufp->chgIData(oldp+2604,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+2605,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__en));
        bufp->chgIData(oldp+2606,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+2607,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__en));
        bufp->chgIData(oldp+2608,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+2609,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__en));
        bufp->chgBit(oldp+2610,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_val));
        bufp->chgWData(oldp+2611,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_msg),77);
        bufp->chgBit(oldp+2614,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2615,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+2616,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2617,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+2618,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2619,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__enq_val));
        bufp->chgBit(oldp+2620,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__deq_val));
        bufp->chgBit(oldp+2621,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_enq));
        bufp->chgBit(oldp+2622,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__enq_val));
        bufp->chgBit(oldp+2623,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__deq_val));
        bufp->chgBit(oldp+2624,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_enq));
        bufp->chgBit(oldp+2625,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+2626,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+2627,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+2628,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_deq));
        bufp->chgBit(oldp+2629,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
        bufp->chgBit(oldp+2630,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+2631,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+2632,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+2633,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_deq));
        bufp->chgBit(oldp+2634,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
        bufp->chgWData(oldp+2635,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
        bufp->chgIData(oldp+2638,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__enq_msg),32);
        bufp->chgBit(oldp+2639,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__enq_val));
        bufp->chgBit(oldp+2640,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+2641,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+2642,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_enq));
        bufp->chgBit(oldp+2643,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+2644,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgWData(oldp+2645,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
        bufp->chgBit(oldp+2648,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgBit(oldp+2649,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgWData(oldp+2650,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),77);
        bufp->chgWData(oldp+2653,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),77);
        bufp->chgBit(oldp+2656,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
        bufp->chgWData(oldp+2657,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),77);
        bufp->chgIData(oldp+2660,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),32);
        bufp->chgIData(oldp+2661,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),32);
        bufp->chgBit(oldp+2662,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
        bufp->chgBit(oldp+2663,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x25U]))) {
        bufp->chgIData(oldp+2664,(vlSymsp->TOP__top.__PVT__proc2mngr_msg),32);
        bufp->chgIData(oldp+2665,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_msg),32);
        bufp->chgIData(oldp+2666,(vlSymsp->TOP__top__sink.__PVT__msg),32);
        bufp->chgIData(oldp+2667,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_msg),32);
        bufp->chgIData(oldp+2668,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_msg),32);
        bufp->chgIData(oldp+2669,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__deq_msg),32);
        bufp->chgIData(oldp+2670,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x26U]))) {
        bufp->chgWData(oldp+2671,(vlSymsp->TOP__top.__PVT__dmem_reqstream_msg),77);
        bufp->chgWData(oldp+2674,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_msg),77);
        bufp->chgWData(oldp+2677,(vlSymsp->TOP__top__mem.__PVT__memreq1_msg),77);
        bufp->chgWData(oldp+2680,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_msg),77);
        bufp->chgWData(oldp+2683,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__msg),77);
        bufp->chgCData(oldp+2686,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__type_),3);
        bufp->chgCData(oldp+2687,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__opaque),8);
        bufp->chgIData(oldp+2688,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__addr),32);
        bufp->chgCData(oldp+2689,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__len),2);
        bufp->chgIData(oldp+2690,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__data),32);
        bufp->chgWData(oldp+2691,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__msg),77);
        bufp->chgCData(oldp+2694,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__type_),3);
        bufp->chgCData(oldp+2695,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__opaque),8);
        bufp->chgIData(oldp+2696,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__addr),32);
        bufp->chgCData(oldp+2697,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__len),2);
        bufp->chgIData(oldp+2698,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__data),32);
        bufp->chgWData(oldp+2699,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_msg),77);
        bufp->chgWData(oldp+2702,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
        bufp->chgWData(oldp+2705,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),77);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x27U]))) {
        bufp->chgBit(oldp+2708,(vlSymsp->TOP__top.__PVT__dmem_reqstream_rdy));
        bufp->chgBit(oldp+2709,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_rdy));
        bufp->chgBit(oldp+2710,(vlSymsp->TOP__top__mem.__PVT__memreq1_rdy));
        bufp->chgBit(oldp+2711,(vlSymsp->TOP__top__mem.__PVT__mem_memreq1_val));
        bufp->chgBit(oldp+2712,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_rdy));
        bufp->chgBit(oldp+2713,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_val));
        bufp->chgBit(oldp+2714,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_delay_en));
        bufp->chgIData(oldp+2715,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+2716,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__state_next));
        bufp->chgBit(oldp+2717,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_val));
        bufp->chgBit(oldp+2718,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__rdy));
        bufp->chgBit(oldp+2719,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__val));
        bufp->chgBit(oldp+2720,(vlSymsp->TOP__top__mem__memreq1_trace.__PVT__rdy));
        bufp->chgBit(oldp+2721,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+2722,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgIData(oldp+2723,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+2724,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__en));
        bufp->chgBit(oldp+2725,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_val));
        bufp->chgBit(oldp+2726,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2727,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+2728,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+2729,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+2730,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_deq));
        bufp->chgBit(oldp+2731,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
        bufp->chgBit(oldp+2732,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgBit(oldp+2733,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__enq_val));
        bufp->chgBit(oldp+2734,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+2735,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+2736,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_enq));
        bufp->chgBit(oldp+2737,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_pipe));
        bufp->chgBit(oldp+2738,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgBit(oldp+2739,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
        bufp->chgBit(oldp+2740,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x28U]))) {
        bufp->chgBit(oldp+2741,(vlSymsp->TOP__top.__PVT__proc2mngr_rdy));
        bufp->chgBit(oldp+2742,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_rdy));
        bufp->chgBit(oldp+2743,(vlSymsp->TOP__top__sink.__PVT__rdy));
        bufp->chgBit(oldp+2744,(vlSymsp->TOP__top__sink__msg_delay.__PVT__in_rdy));
        bufp->chgBit(oldp+2745,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay_en));
        bufp->chgIData(oldp+2746,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay_next),32);
        bufp->chgBit(oldp+2747,(vlSymsp->TOP__top__sink__msg_delay.__PVT__state_next));
        bufp->chgBit(oldp+2748,(vlSymsp->TOP__top__sink__sink.__PVT__index_en));
        bufp->chgBit(oldp+2749,(vlSymsp->TOP__top__sink__sink.__PVT__go));
        bufp->chgBit(oldp+2750,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+2751,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2752,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__en));
        bufp->chgIData(oldp+2753,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__d),32);
        bufp->chgBit(oldp+2754,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__en));
        bufp->chgBit(oldp+2755,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+2756,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__write_en));
        bufp->chgBit(oldp+2757,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__full_next));
        bufp->chgBit(oldp+2758,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_deq));
        bufp->chgBit(oldp+2759,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__do_bypass));
        bufp->chgBit(oldp+2760,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__write_en));
        bufp->chgBit(oldp+2761,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x29U]))) {
        bufp->chgWData(oldp+2762,(vlSymsp->TOP__top__mem.__PVT__mem_memreq1_msg),77);
        bufp->chgWData(oldp+2765,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_msg),77);
        bufp->chgWData(oldp+2768,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg),77);
        bufp->chgWData(oldp+2771,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__msg),77);
        bufp->chgCData(oldp+2774,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__type_),3);
        bufp->chgCData(oldp+2775,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__opaque),8);
        bufp->chgIData(oldp+2776,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__addr),32);
        bufp->chgCData(oldp+2777,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__len),2);
        bufp->chgIData(oldp+2778,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__data),32);
        bufp->chgWData(oldp+2779,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_msg),77);
        bufp->chgWData(oldp+2782,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__enq_msg),77);
        bufp->chgWData(oldp+2785,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+2788,(vlSymsp->TOP__top.__PVT__src_done));
        bufp->chgBit(oldp+2789,(vlSymsp->TOP__top__src.__PVT__done));
        bufp->chgBit(oldp+2790,(vlSymsp->TOP__top__src.__PVT__src_val));
        bufp->chgBit(oldp+2791,(vlSymsp->TOP__top__src__src.__PVT__val));
        bufp->chgBit(oldp+2792,(vlSymsp->TOP__top__src__src.__PVT__done));
        bufp->chgBit(oldp+2793,(vlSymsp->TOP__top__src__src.__PVT__reset_reg));
        bufp->chgBit(oldp+2794,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_val));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgCData(oldp+2795,(vlSymsp->TOP__top__DUT.__PVT__rd),5);
        bufp->chgCData(oldp+2796,(vlSymsp->TOP__top__DUT.__PVT__rs1),5);
        bufp->chgCData(oldp+2797,(vlSymsp->TOP__top__DUT.__PVT__rs2),5);
        bufp->chgCData(oldp+2798,(vlSymsp->TOP__top__DUT.__PVT__funct3),3);
        bufp->chgSData(oldp+2799,(vlSymsp->TOP__top__DUT.__PVT__csr),12);
        bufp->chgIData(oldp+2800,(vlSymsp->TOP__top__DUT.__PVT__PC),32);
        bufp->chgIData(oldp+2801,(vlSymsp->TOP__top__DUT.__PVT__PC_prev),32);
        bufp->chgIData(oldp+2802,(vlSymsp->TOP__top__DUT.__PVT__inst),32);
        bufp->chgIData(oldp+2803,(vlSymsp->TOP__top__DUT.__PVT__rf[0]),32);
        bufp->chgIData(oldp+2804,(vlSymsp->TOP__top__DUT.__PVT__rf[1]),32);
        bufp->chgIData(oldp+2805,(vlSymsp->TOP__top__DUT.__PVT__rf[2]),32);
        bufp->chgIData(oldp+2806,(vlSymsp->TOP__top__DUT.__PVT__rf[3]),32);
        bufp->chgIData(oldp+2807,(vlSymsp->TOP__top__DUT.__PVT__rf[4]),32);
        bufp->chgIData(oldp+2808,(vlSymsp->TOP__top__DUT.__PVT__rf[5]),32);
        bufp->chgIData(oldp+2809,(vlSymsp->TOP__top__DUT.__PVT__rf[6]),32);
        bufp->chgIData(oldp+2810,(vlSymsp->TOP__top__DUT.__PVT__rf[7]),32);
        bufp->chgIData(oldp+2811,(vlSymsp->TOP__top__DUT.__PVT__rf[8]),32);
        bufp->chgIData(oldp+2812,(vlSymsp->TOP__top__DUT.__PVT__rf[9]),32);
        bufp->chgIData(oldp+2813,(vlSymsp->TOP__top__DUT.__PVT__rf[10]),32);
        bufp->chgIData(oldp+2814,(vlSymsp->TOP__top__DUT.__PVT__rf[11]),32);
        bufp->chgIData(oldp+2815,(vlSymsp->TOP__top__DUT.__PVT__rf[12]),32);
        bufp->chgIData(oldp+2816,(vlSymsp->TOP__top__DUT.__PVT__rf[13]),32);
        bufp->chgIData(oldp+2817,(vlSymsp->TOP__top__DUT.__PVT__rf[14]),32);
        bufp->chgIData(oldp+2818,(vlSymsp->TOP__top__DUT.__PVT__rf[15]),32);
        bufp->chgIData(oldp+2819,(vlSymsp->TOP__top__DUT.__PVT__rf[16]),32);
        bufp->chgIData(oldp+2820,(vlSymsp->TOP__top__DUT.__PVT__rf[17]),32);
        bufp->chgIData(oldp+2821,(vlSymsp->TOP__top__DUT.__PVT__rf[18]),32);
        bufp->chgIData(oldp+2822,(vlSymsp->TOP__top__DUT.__PVT__rf[19]),32);
        bufp->chgIData(oldp+2823,(vlSymsp->TOP__top__DUT.__PVT__rf[20]),32);
        bufp->chgIData(oldp+2824,(vlSymsp->TOP__top__DUT.__PVT__rf[21]),32);
        bufp->chgIData(oldp+2825,(vlSymsp->TOP__top__DUT.__PVT__rf[22]),32);
        bufp->chgIData(oldp+2826,(vlSymsp->TOP__top__DUT.__PVT__rf[23]),32);
        bufp->chgIData(oldp+2827,(vlSymsp->TOP__top__DUT.__PVT__rf[24]),32);
        bufp->chgIData(oldp+2828,(vlSymsp->TOP__top__DUT.__PVT__rf[25]),32);
        bufp->chgIData(oldp+2829,(vlSymsp->TOP__top__DUT.__PVT__rf[26]),32);
        bufp->chgIData(oldp+2830,(vlSymsp->TOP__top__DUT.__PVT__rf[27]),32);
        bufp->chgIData(oldp+2831,(vlSymsp->TOP__top__DUT.__PVT__rf[28]),32);
        bufp->chgIData(oldp+2832,(vlSymsp->TOP__top__DUT.__PVT__rf[29]),32);
        bufp->chgIData(oldp+2833,(vlSymsp->TOP__top__DUT.__PVT__rf[30]),32);
        bufp->chgIData(oldp+2834,(vlSymsp->TOP__top__DUT.__PVT__rf[31]),32);
        bufp->chgIData(oldp+2835,(vlSymsp->TOP__top__DUT.__PVT__state),32);
        bufp->chgIData(oldp+2836,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__inst),32);
        bufp->chgCData(oldp+2837,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__opcode),7);
        bufp->chgCData(oldp+2838,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__rd),5);
        bufp->chgCData(oldp+2839,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__rs1),5);
        bufp->chgCData(oldp+2840,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__rs2),5);
        bufp->chgCData(oldp+2841,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__funct3),3);
        bufp->chgSData(oldp+2842,(vlSymsp->TOP__top__DUT__inst_unpack.__PVT__csr),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgCData(oldp+2843,(vlSymsp->TOP__top__sink__sink.__PVT__index_next),4);
        bufp->chgCData(oldp+2844,(vlSymsp->TOP__top__sink__sink.__PVT__index),4);
        bufp->chgIData(oldp+2845,(vlSymsp->TOP__top__sink__sink.__PVT__m_curr),32);
        bufp->chgCData(oldp+2846,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__q),4);
        bufp->chgCData(oldp+2847,(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__d),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgIData(oldp+2848,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__qstore),32);
        bufp->chgIData(oldp+2849,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),32);
        bufp->chgIData(oldp+2850,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgWData(oldp+2851,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__qstore),77);
        bufp->chgWData(oldp+2854,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),77);
        bufp->chgWData(oldp+2857,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgIData(oldp+2860,(vlSymsp->TOP__top__src.__PVT__src_msg),32);
        bufp->chgIData(oldp+2861,(vlSymsp->TOP__top__src__src.__PVT__msg),32);
        bufp->chgCData(oldp+2862,(vlSymsp->TOP__top__src__src.__PVT__index_next),4);
        bufp->chgCData(oldp+2863,(vlSymsp->TOP__top__src__src.__PVT__index),4);
        bufp->chgIData(oldp+2864,(vlSymsp->TOP__top__src__msg_delay.__PVT__in_msg),32);
        bufp->chgCData(oldp+2865,(vlSymsp->TOP__top__src__src__index_reg.__PVT__q),4);
        bufp->chgCData(oldp+2866,(vlSymsp->TOP__top__src__src__index_reg.__PVT__d),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgBit(oldp+2867,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_queue_num_free_entries));
        bufp->chgBit(oldp+2868,(vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_rdy));
        bufp->chgBit(oldp+2869,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+2870,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__num_free_entries));
        bufp->chgBit(oldp+2871,(vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+2872,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+2873,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2874,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
        bufp->chgBit(oldp+2875,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+2876,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+2877,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2878,(vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgQData(oldp+2879,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__qstore),47);
        bufp->chgQData(oldp+2881,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),47);
        bufp->chgQData(oldp+2883,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),47);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgQData(oldp+2885,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__qstore),47);
        bufp->chgQData(oldp+2887,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),47);
        bufp->chgQData(oldp+2889,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0),47);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgBit(oldp+2891,(vlSymsp->TOP__top__DUT.__PVT__dmem_queue_num_free_entries));
        bufp->chgBit(oldp+2892,(vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_enq_rdy));
        bufp->chgBit(oldp+2893,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+2894,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__num_free_entries));
        bufp->chgBit(oldp+2895,(vlSymsp->TOP__top__DUT__dmem_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+2896,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+2897,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2898,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
        bufp->chgBit(oldp+2899,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+2900,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+2901,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2902,(vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
        bufp->chgBit(oldp+2903,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_val_M));
        bufp->chgBit(oldp+2904,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__deq_val));
        bufp->chgBit(oldp+2905,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__num_free_entries));
        bufp->chgBit(oldp+2906,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+2907,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__enq_val));
        bufp->chgBit(oldp+2908,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__enq_val));
        bufp->chgBit(oldp+2909,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__deq_val));
        bufp->chgBit(oldp+2910,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2911,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
        bufp->chgBit(oldp+2912,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+2913,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+2914,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
        bufp->chgBit(oldp+2915,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_rdy_M));
        bufp->chgBit(oldp+2916,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+2917,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+2918,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__num_free_entries));
        bufp->chgBit(oldp+2919,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+2920,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+2921,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2922,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
        bufp->chgBit(oldp+2923,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+2924,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+2925,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+2926,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2927,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
        bufp->chgBit(oldp+2928,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_val_M));
        bufp->chgBit(oldp+2929,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__deq_val));
        bufp->chgBit(oldp+2930,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__num_free_entries));
        bufp->chgBit(oldp+2931,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+2932,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__enq_val));
        bufp->chgBit(oldp+2933,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__enq_val));
        bufp->chgBit(oldp+2934,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__deq_val));
        bufp->chgBit(oldp+2935,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2936,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
        bufp->chgBit(oldp+2937,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+2938,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+2939,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgBit(oldp+2940,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_rdy_M));
        bufp->chgBit(oldp+2941,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__deq_rdy));
        bufp->chgBit(oldp+2942,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+2943,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__num_free_entries));
        bufp->chgBit(oldp+2944,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+2945,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+2946,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2947,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__num_free_entries));
        bufp->chgBit(oldp+2948,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__full));
        bufp->chgBit(oldp+2949,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__empty));
        bufp->chgBit(oldp+2950,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__deq_rdy));
        bufp->chgBit(oldp+2951,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel));
        bufp->chgBit(oldp+2952,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x15U])) {
        bufp->chgWData(oldp+2953,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_M),77);
        bufp->chgCData(oldp+2956,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_type_M),3);
        bufp->chgCData(oldp+2957,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_opaque_M),8);
        bufp->chgIData(oldp+2958,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_addr_M),32);
        bufp->chgCData(oldp+2959,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_len_M),2);
        bufp->chgIData(oldp+2960,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_data_M),32);
        bufp->chgCData(oldp+2961,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg_len_modified_M),3);
        bufp->chgSData(oldp+2962,(vlSymsp->TOP__top__mem__mem.__PVT__physical_byte_addr0_M),14);
        bufp->chgSData(oldp+2963,(vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr0_M),12);
        bufp->chgCData(oldp+2964,(vlSymsp->TOP__top__mem__mem.__PVT__block_offset0_M),2);
        bufp->chgWData(oldp+2965,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__deq_msg),77);
        bufp->chgWData(oldp+2968,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__msg),77);
        bufp->chgCData(oldp+2971,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__type_),3);
        bufp->chgCData(oldp+2972,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__opaque),8);
        bufp->chgIData(oldp+2973,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__addr),32);
        bufp->chgCData(oldp+2974,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__len),2);
        bufp->chgIData(oldp+2975,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__data),32);
        bufp->chgWData(oldp+2976,(vlSymsp->TOP__top__mem__mem__memreq0_msg_unpack.__PVT__req),77);
        bufp->chgCData(oldp+2979,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__type_),3);
        bufp->chgCData(oldp+2980,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__opaque),8);
        bufp->chgCData(oldp+2981,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__len),2);
        bufp->chgWData(oldp+2982,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
        bufp->chgWData(oldp+2985,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath.__PVT__qstore),77);
        bufp->chgWData(oldp+2988,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
        bufp->chgWData(oldp+2991,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_M),77);
        bufp->chgCData(oldp+2994,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_type_M),3);
        bufp->chgCData(oldp+2995,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_opaque_M),8);
        bufp->chgIData(oldp+2996,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_addr_M),32);
        bufp->chgCData(oldp+2997,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_len_M),2);
        bufp->chgIData(oldp+2998,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_data_M),32);
        bufp->chgCData(oldp+2999,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg_len_modified_M),3);
        bufp->chgSData(oldp+3000,(vlSymsp->TOP__top__mem__mem.__PVT__physical_byte_addr1_M),14);
        bufp->chgSData(oldp+3001,(vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr1_M),12);
        bufp->chgCData(oldp+3002,(vlSymsp->TOP__top__mem__mem.__PVT__block_offset1_M),2);
        bufp->chgWData(oldp+3003,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__deq_msg),77);
        bufp->chgWData(oldp+3006,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__msg),77);
        bufp->chgCData(oldp+3009,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__type_),3);
        bufp->chgCData(oldp+3010,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__opaque),8);
        bufp->chgIData(oldp+3011,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__addr),32);
        bufp->chgCData(oldp+3012,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__len),2);
        bufp->chgIData(oldp+3013,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__data),32);
        bufp->chgWData(oldp+3014,(vlSymsp->TOP__top__mem__mem__memreq1_msg_unpack.__PVT__req),77);
        bufp->chgCData(oldp+3017,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__type_),3);
        bufp->chgCData(oldp+3018,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__opaque),8);
        bufp->chgCData(oldp+3019,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__len),2);
        bufp->chgWData(oldp+3020,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__deq_msg),77);
        bufp->chgWData(oldp+3023,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath.__PVT__qstore),77);
        bufp->chgWData(oldp+3026,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q),77);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x19U])) {
        bufp->chgBit(oldp+3029,(vlSymsp->TOP__top__mem.__PVT__mem_memreq1_rdy));
        bufp->chgBit(oldp+3030,(vlSymsp->TOP__top__mem.__PVT__mem_memresp1_val));
        bufp->chgBit(oldp+3031,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_rdy));
        bufp->chgBit(oldp+3032,(vlSymsp->TOP__top__mem__mem.__PVT__memreq1_rdy));
        bufp->chgBit(oldp+3033,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_val));
        bufp->chgBit(oldp+3034,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_val));
        bufp->chgBit(oldp+3035,(vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__rdy));
        bufp->chgBit(oldp+3036,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__val));
        bufp->chgBit(oldp+3037,(vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+3038,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_val));
        bufp->chgBit(oldp+3039,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__deq_val));
        bufp->chgBit(oldp+3040,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl.__PVT__do_enq));
        bufp->chgBit(oldp+3041,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+3042,(vlSymsp->TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1aU])) {
        bufp->chgBit(oldp+3043,(vlSymsp->TOP__top__mem.__PVT__mem_memreq0_rdy));
        bufp->chgBit(oldp+3044,(vlSymsp->TOP__top__mem.__PVT__mem_memresp0_val));
        bufp->chgBit(oldp+3045,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_rdy));
        bufp->chgBit(oldp+3046,(vlSymsp->TOP__top__mem__mem.__PVT__memreq0_rdy));
        bufp->chgBit(oldp+3047,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_val));
        bufp->chgBit(oldp+3048,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_val));
        bufp->chgBit(oldp+3049,(vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__rdy));
        bufp->chgBit(oldp+3050,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__val));
        bufp->chgBit(oldp+3051,(vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_rdy));
        bufp->chgBit(oldp+3052,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_val));
        bufp->chgBit(oldp+3053,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__deq_val));
        bufp->chgBit(oldp+3054,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl.__PVT__do_enq));
        bufp->chgBit(oldp+3055,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__enq_rdy));
        bufp->chgBit(oldp+3056,(vlSymsp->TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl.__PVT__do_deq));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1bU])) {
        bufp->chgIData(oldp+3057,(vlSymsp->TOP__top__mem__mem.__PVT__read_block0_M),32);
        bufp->chgIData(oldp+3058,(vlSymsp->TOP__top__mem__mem.__PVT__read_data0_M),32);
        bufp->chgQData(oldp+3059,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_msg_M),47);
        bufp->chgQData(oldp+3061,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__msg),47);
        bufp->chgIData(oldp+3063,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__data),32);
        bufp->chgQData(oldp+3064,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__enq_msg),47);
        bufp->chgQData(oldp+3066,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__enq_msg),47);
        bufp->chgQData(oldp+3068,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),47);
        bufp->chgQData(oldp+3070,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),47);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1cU])) {
        bufp->chgIData(oldp+3072,(vlSymsp->TOP__top__mem__mem.__PVT__read_block1_M),32);
        bufp->chgIData(oldp+3073,(vlSymsp->TOP__top__mem__mem.__PVT__read_data1_M),32);
        bufp->chgQData(oldp+3074,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_msg_M),47);
        bufp->chgQData(oldp+3076,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__msg),47);
        bufp->chgIData(oldp+3078,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__data),32);
        bufp->chgQData(oldp+3079,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__enq_msg),47);
        bufp->chgQData(oldp+3081,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__enq_msg),47);
        bufp->chgQData(oldp+3083,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d),47);
        bufp->chgQData(oldp+3085,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1),47);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1dU])) {
        bufp->chgBit(oldp+3087,(vlSymsp->TOP__top.__PVT__dmem_respstream_val));
        bufp->chgBit(oldp+3088,(vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_val));
        bufp->chgBit(oldp+3089,(vlSymsp->TOP__top__mem.__PVT__memresp1_val));
        bufp->chgBit(oldp+3090,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_val));
        bufp->chgBit(oldp+3091,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__val));
        bufp->chgBit(oldp+3092,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__val));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1eU])) {
        bufp->chgBit(oldp+3093,(vlSymsp->TOP__top.__PVT__imem_respstream_val));
        bufp->chgBit(oldp+3094,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_val));
        bufp->chgBit(oldp+3095,(vlSymsp->TOP__top__mem.__PVT__memresp0_val));
        bufp->chgBit(oldp+3096,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_val));
        bufp->chgBit(oldp+3097,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__val));
        bufp->chgBit(oldp+3098,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__val));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1fU])) {
        bufp->chgQData(oldp+3099,(vlSymsp->TOP__top__mem.__PVT__mem_memresp0_msg),47);
        bufp->chgQData(oldp+3101,(vlSymsp->TOP__top__mem__mem.__PVT__memresp0_msg),47);
        bufp->chgQData(oldp+3103,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_msg),47);
        bufp->chgQData(oldp+3105,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__msg),47);
        bufp->chgCData(oldp+3107,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3108,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__opaque),8);
        bufp->chgCData(oldp+3109,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__test),2);
        bufp->chgCData(oldp+3110,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__len),2);
        bufp->chgIData(oldp+3111,(vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__data),32);
        bufp->chgQData(oldp+3112,(vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_msg),47);
        bufp->chgQData(oldp+3114,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath.__PVT__deq_msg),47);
        bufp->chgQData(oldp+3116,(vlSymsp->TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),47);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x20U])) {
        bufp->chgQData(oldp+3118,(vlSymsp->TOP__top__mem.__PVT__mem_memresp1_msg),47);
        bufp->chgQData(oldp+3120,(vlSymsp->TOP__top__mem__mem.__PVT__memresp1_msg),47);
        bufp->chgQData(oldp+3122,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_msg),47);
        bufp->chgQData(oldp+3124,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__msg),47);
        bufp->chgCData(oldp+3126,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3127,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__opaque),8);
        bufp->chgCData(oldp+3128,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__test),2);
        bufp->chgCData(oldp+3129,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__len),2);
        bufp->chgIData(oldp+3130,(vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__data),32);
        bufp->chgQData(oldp+3131,(vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_msg),47);
        bufp->chgQData(oldp+3133,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath.__PVT__deq_msg),47);
        bufp->chgQData(oldp+3135,(vlSymsp->TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out),47);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x22U])) {
        bufp->chgQData(oldp+3137,(vlSymsp->TOP__top.__PVT__imem_respstream_msg),47);
        bufp->chgQData(oldp+3139,(vlSymsp->TOP__top__DUT.__PVT__imem_respstream_msg),47);
        bufp->chgQData(oldp+3141,(vlSymsp->TOP__top__mem.__PVT__memresp0_msg),47);
        bufp->chgQData(oldp+3143,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_msg),47);
        bufp->chgQData(oldp+3145,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__msg),47);
        bufp->chgCData(oldp+3147,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3148,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__opaque),8);
        bufp->chgCData(oldp+3149,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__test),2);
        bufp->chgCData(oldp+3150,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__len),2);
        bufp->chgIData(oldp+3151,(vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__data),32);
        bufp->chgQData(oldp+3152,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__msg),47);
        bufp->chgCData(oldp+3154,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3155,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__opaque),8);
        bufp->chgCData(oldp+3156,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__test),2);
        bufp->chgCData(oldp+3157,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__len),2);
        bufp->chgIData(oldp+3158,(vlSymsp->TOP__top__mem__memresp0_trace.__PVT__data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x23U])) {
        bufp->chgQData(oldp+3159,(vlSymsp->TOP__top.__PVT__dmem_respstream_msg),47);
        bufp->chgQData(oldp+3161,(vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_msg),47);
        bufp->chgQData(oldp+3163,(vlSymsp->TOP__top__mem.__PVT__memresp1_msg),47);
        bufp->chgQData(oldp+3165,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_msg),47);
        bufp->chgQData(oldp+3167,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__msg),47);
        bufp->chgCData(oldp+3169,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3170,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__opaque),8);
        bufp->chgCData(oldp+3171,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__test),2);
        bufp->chgCData(oldp+3172,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__len),2);
        bufp->chgIData(oldp+3173,(vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__data),32);
        bufp->chgQData(oldp+3174,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__msg),47);
        bufp->chgCData(oldp+3176,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__type_),3);
        bufp->chgCData(oldp+3177,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__opaque),8);
        bufp->chgCData(oldp+3178,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__test),2);
        bufp->chgCData(oldp+3179,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__len),2);
        bufp->chgIData(oldp+3180,(vlSymsp->TOP__top__mem__memresp1_trace.__PVT__data),32);
    }
    bufp->chgBit(oldp+3181,(vlSelf->clk));
    bufp->chgBit(oldp+3182,(vlSelf->linetrace));
    bufp->chgIData(oldp+3183,(vlSymsp->TOP__top.__PVT__mngr2proc_msg),32);
    bufp->chgBit(oldp+3184,(vlSymsp->TOP__top.__PVT__mngr2proc_val));
    bufp->chgIData(oldp+3185,(vlSymsp->TOP__top.__PVT__fp),32);
    bufp->chgIData(oldp+3186,(vlSymsp->TOP__top.__PVT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+3187,(vlSymsp->TOP__top__DUT.__PVT__mngr2proc_msg),32);
    bufp->chgBit(oldp+3188,(vlSymsp->TOP__top__DUT.__PVT__mngr2proc_val));
    bufp->chgBit(oldp+3189,(vlSymsp->TOP__top__src.__PVT__val));
    bufp->chgIData(oldp+3190,(vlSymsp->TOP__top__src.__PVT__msg),32);
    bufp->chgBit(oldp+3191,(vlSymsp->TOP__top__sink.__PVT__sink_val));
    bufp->chgIData(oldp+3192,(vlSymsp->TOP__top__sink.__PVT__sink_msg),32);
    bufp->chgBit(oldp+3193,(vlSymsp->TOP__top__src__src.__PVT__done_next));
    bufp->chgBit(oldp+3194,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_val));
    bufp->chgIData(oldp+3195,(vlSymsp->TOP__top__src__msg_delay.__PVT__out_msg),32);
    bufp->chgIData(oldp+3196,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_num),32);
    bufp->chgIData(oldp+3197,(vlSymsp->TOP__top__src__msg_delay.__PVT__rand_delay),32);
    bufp->chgBit(oldp+3198,(vlSymsp->TOP__top__src__msg_delay.__PVT__state));
    bufp->chgBit(oldp+3199,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_val));
    bufp->chgIData(oldp+3200,(vlSymsp->TOP__top__sink__msg_delay.__PVT__out_msg),32);
    bufp->chgIData(oldp+3201,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_num),32);
    bufp->chgIData(oldp+3202,(vlSymsp->TOP__top__sink__msg_delay.__PVT__rand_delay),32);
    bufp->chgBit(oldp+3203,(vlSymsp->TOP__top__sink__msg_delay.__PVT__zero_cycle_delay));
    bufp->chgBit(oldp+3204,(vlSymsp->TOP__top__sink__msg_delay.__PVT__state));
    bufp->chgBit(oldp+3205,(vlSymsp->TOP__top__sink__sink.__PVT__val));
    bufp->chgIData(oldp+3206,(vlSymsp->TOP__top__sink__sink.__PVT__msg),32);
    bufp->chgBit(oldp+3207,(vlSymsp->TOP__top__sink__sink.__PVT__reset_reg));
    bufp->chgBit(oldp+3208,(vlSymsp->TOP__top__sink__sink.__PVT__failed));
    bufp->chgIData(oldp+3209,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_num),32);
    bufp->chgIData(oldp+3210,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__rand_delay),32);
    bufp->chgBit(oldp+3211,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__zero_cycle_delay));
    bufp->chgBit(oldp+3212,(vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__state));
    bufp->chgIData(oldp+3213,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_num),32);
    bufp->chgIData(oldp+3214,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__rand_delay),32);
    bufp->chgBit(oldp+3215,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__zero_cycle_delay));
    bufp->chgBit(oldp+3216,(vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__state));
    bufp->chgIData(oldp+3217,(vlSymsp->TOP__top__mem__mem.__PVT__data_data),32);
    bufp->chgIData(oldp+3218,(vlSymsp->TOP__top__mem__mem.__PVT__wr_i),32);
    bufp->chgBit(oldp+3219,(vlSymsp->TOP__top__mem__mem.__PVT__write_en0_M));
    bufp->chgBit(oldp+3220,(vlSymsp->TOP__top__mem__mem.__PVT__write_en1_M));
    bufp->chgBit(oldp+3221,(vlSymsp->TOP__top__mem__mem.__PVT__amo_en0_M));
    bufp->chgBit(oldp+3222,(vlSymsp->TOP__top__mem__mem.__PVT__amo_en1_M));
    bufp->chgIData(oldp+3223,(vlSymsp->TOP__top__mem__mem.__PVT__wr0_i),32);
    bufp->chgIData(oldp+3224,(vlSymsp->TOP__top__mem__mem.__PVT__wr1_i),32);
    bufp->chgBit(oldp+3225,(vlSymsp->TOP__top__mem__mem.__PVT__memory_cleared));
    bufp->chgIData(oldp+3226,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_num),32);
    bufp->chgIData(oldp+3227,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__rand_delay),32);
    bufp->chgBit(oldp+3228,(vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__state));
    bufp->chgIData(oldp+3229,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_num),32);
    bufp->chgIData(oldp+3230,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__rand_delay),32);
    bufp->chgBit(oldp+3231,(vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__state));
    bufp->chgIData(oldp+3232,(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__q),32);
    bufp->chgIData(oldp+3233,(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__q),32);
    bufp->chgIData(oldp+3234,(vlSymsp->TOP__top__mem__rand_req_delay0__rand_delay_reg.__PVT__q),32);
    bufp->chgIData(oldp+3235,(vlSymsp->TOP__top__mem__rand_req_delay1__rand_delay_reg.__PVT__q),32);
    bufp->chgIData(oldp+3236,(vlSymsp->TOP__top__mem__rand_resp_delay0__rand_delay_reg.__PVT__q),32);
    bufp->chgIData(oldp+3237,(vlSymsp->TOP__top__mem__rand_resp_delay1__rand_delay_reg.__PVT__q),32);
    bufp->chgQData(oldp+3238,(vlSymsp->TOP__top__mem__mem__memresp0_msg_pack.__PVT__resp),47);
    bufp->chgQData(oldp+3240,(vlSymsp->TOP__top__mem__mem__memresp1_msg_pack.__PVT__resp),47);
    bufp->chgIData(oldp+3242,(vlSymsp->TOP__top__DUT__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3243,(vlSymsp->TOP__top__DUT__imem_reqstream_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3244,(vlSymsp->TOP__top__DUT__dmem_reqstream_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3245,(vlSymsp->TOP__top__DUT__imem_respstream_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3246,(vlSymsp->TOP__top__DUT__dmem_respstream_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3247,(vlSymsp->TOP__top__mem__mem__memreq0_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3248,(vlSymsp->TOP__top__mem__mem__memreq1_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3249,(vlSymsp->TOP__top__mem__mem__memresp0_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3250,(vlSymsp->TOP__top__mem__mem__memresp1_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3251,(vlSymsp->TOP__top__mem__mem__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3252,(vlSymsp->TOP__top__mem__memreq0_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3253,(vlSymsp->TOP__top__mem__memreq1_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3254,(vlSymsp->TOP__top__mem__memresp0_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3255,(vlSymsp->TOP__top__mem__memresp1_trace__vc_trace.__PVT__cycles),32);
    bufp->chgIData(oldp+3256,(vlSymsp->TOP__top__mem__vc_trace.__PVT__cycles),32);
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
}
