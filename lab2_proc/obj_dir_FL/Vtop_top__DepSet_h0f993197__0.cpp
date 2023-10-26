// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_INLINE_OPT VlCoroutine Vtop_top___eval_initial__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    // Body
    vlSelf->__PVT__reset = 1U;
    vlSelf->__PVT__mem_clear = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                            nullptr, 
                                            "tb_Proc.v", 
                                            214);
    vlSymsp->TOP.__Vm_traceActivity[0x2cU] = 1U;
    VL_WRITEF("Loading data\n");
    (void)VL_VALUEPLUSARGS_INN(64, std::string{"mem=%s"}, 
                               vlSelf->__PVT__temp);
    vlSelf->__PVT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelf->__PVT__temp)
                                    , std::string{"r"});
    ;
    vlSelf->__Vtask_load__0__filein = vlSelf->__PVT__fp;
    vlSelf->__Vtask_load__1__file_load = vlSelf->__Vtask_load__0__filein;
    VL_WRITEF("c_physical_addr_nbits is          14\n");
    while ((! (vlSelf->__Vtask_load__1__file_load ? feof(VL_CVT_I_FP(vlSelf->__Vtask_load__1__file_load)) : true))) {
        (void)VL_FSCANF_IX(vlSelf->__Vtask_load__1__file_load,"%x:%x\n",
                           32,&(vlSymsp->TOP__top__mem__mem.__PVT__data_address),
                           32,&(vlSymsp->TOP__top__mem__mem.__PVT__data_data)) ;
        __Vtemp_1 = VL_CONCAT_III(32,8,24, (0xffU & 
                                            VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_data, 0U, 8U)), 
                                  VL_CONCAT_III(24,8,16, 
                                                (0xffU 
                                                 & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_data, 8U, 8U)), 
                                                VL_CONCAT_III(16,8,8, 
                                                              (0xffU 
                                                               & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_data, 0x10U, 8U)), 
                                                              (0xffU 
                                                               & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_data, 0x18U, 8U)))));
        vlSymsp->TOP__top__mem__mem.__PVT__data_data 
            = __Vtemp_1;
        vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr 
            = (0xfffU & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_address, 2U, 0xcU));
        vlSymsp->TOP__top__mem__mem.__PVT__block_offset 
            = (3U & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_address, 0U, 2U));
        VL_ASSIGNSEL_II(32,8,(0x1fU & VL_SEL_IIII(32, 
                                                  ((0x1fU 
                                                    >= 3U)
                                                    ? 
                                                   (VL_EXTEND_II(32,2, (IData)(vlSymsp->TOP__top__mem__mem.__PVT__block_offset)) 
                                                    << 3U)
                                                    : 0U), 0U, 5U)), 
                        vlSymsp->TOP__top__mem__mem.__PVT__m_load
                        [vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr], 
                        (0xffU & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_data, 0U, 8U)));
        vlSymsp->__Vcoverage[3977].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->TOP__top__mem__mem.__PVT__wr_i = 1U;
        VL_ASSIGNSEL_II(32,8,(0x1fU & ((IData)(8U) 
                                       + VL_SEL_IIII(32, 
                                                     ((0x1fU 
                                                       >= 3U)
                                                       ? 
                                                      (VL_EXTEND_II(32,2, (IData)(vlSymsp->TOP__top__mem__mem.__PVT__block_offset)) 
                                                       << 3U)
                                                       : 0U), 0U, 5U))), 
                        vlSymsp->TOP__top__mem__mem.__PVT__m_load
                        [vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr], 
                        (0xffU & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_data, 8U, 8U)));
        vlSymsp->__Vcoverage[3977].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->TOP__top__mem__mem.__PVT__wr_i = 2U;
        VL_ASSIGNSEL_II(32,8,(0x1fU & ((IData)(0x10U) 
                                       + VL_SEL_IIII(32, 
                                                     ((0x1fU 
                                                       >= 3U)
                                                       ? 
                                                      (VL_EXTEND_II(32,2, (IData)(vlSymsp->TOP__top__mem__mem.__PVT__block_offset)) 
                                                       << 3U)
                                                       : 0U), 0U, 5U))), 
                        vlSymsp->TOP__top__mem__mem.__PVT__m_load
                        [vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr], 
                        (0xffU & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_data, 0x10U, 8U)));
        vlSymsp->__Vcoverage[3977].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->TOP__top__mem__mem.__PVT__wr_i = 3U;
        VL_ASSIGNSEL_II(32,8,(0x1fU & ((IData)(0x18U) 
                                       + VL_SEL_IIII(32, 
                                                     ((0x1fU 
                                                       >= 3U)
                                                       ? 
                                                      (VL_EXTEND_II(32,2, (IData)(vlSymsp->TOP__top__mem__mem.__PVT__block_offset)) 
                                                       << 3U)
                                                       : 0U), 0U, 5U))), 
                        vlSymsp->TOP__top__mem__mem.__PVT__m_load
                        [vlSymsp->TOP__top__mem__mem.__PVT__physical_block_addr], 
                        (0xffU & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_data, 0x18U, 8U)));
        vlSymsp->__Vcoverage[3977].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->TOP__top__mem__mem.__PVT__wr_i = 4U;
        vlSymsp->__Vcoverage[3978].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[3979].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2086].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("Data loaded\n");
    if (VL_LIKELY(VL_VALUEPLUSARGS_INN(64, std::string{"men=%s"}, 
                                       vlSelf->__PVT__temp))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(
                                                           VL_CONCATN_NNN(vlSelf->__PVT__temp, 
                                                                          std::string{".in"}))
                                        , std::string{"r"});
        ;
        vlSelf->__Vtask_load__2__file_load = vlSelf->__PVT__fp;
        vlSelf->__Vtask_load__3__file_load = vlSelf->__Vtask_load__2__file_load;
        vlSymsp->TOP__top__src__src.__PVT__index_max = 0U;
        {
            while ((! (vlSelf->__Vtask_load__3__file_load ? feof(VL_CVT_I_FP(vlSelf->__Vtask_load__3__file_load)) : true))) {
                vlSymsp->TOP__top__src__src.__PVT__load__Vstatic__unnamedblk1__DOT__count 
                    = VL_FSCANF_IX(vlSelf->__Vtask_load__3__file_load,"%x\n",
                                   32,&(vlSymsp->TOP__top__src__src.__PVT__data_data)) ;
                if ((0U == vlSymsp->TOP__top__src__src.__PVT__load__Vstatic__unnamedblk1__DOT__count)) {
                    goto __Vlabel1;
                } else {
                    vlSymsp->__Vcoverage[2538].fetch_add(1, std::memory_order_relaxed);
                }
                VL_WRITEF("Loading %x\n",32,vlSymsp->TOP__top__src__src.__PVT__data_data);
                vlSymsp->TOP__top__src__src.__Vlvbound_h000547a2__0 
                    = vlSymsp->TOP__top__src__src.__PVT__data_data;
                if (VL_LIKELY((9U >= (IData)(vlSymsp->TOP__top__src__src.__PVT__index_max)))) {
                    vlSymsp->TOP__top__src__src.__PVT__m[vlSymsp->TOP__top__src__src.__PVT__index_max] 
                        = vlSymsp->TOP__top__src__src.__Vlvbound_h000547a2__0;
                }
                __Vtemp_2 = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__top__src__src.__PVT__index_max)));
                vlSymsp->TOP__top__src__src.__PVT__index_max 
                    = __Vtemp_2;
                vlSymsp->__Vcoverage[2539].fetch_add(1, std::memory_order_relaxed);
            }
            __Vlabel1: ;
        }
        vlSymsp->__Vcoverage[2540].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(
                                                           VL_CONCATN_NNN(vlSelf->__PVT__temp, 
                                                                          std::string{".out"}))
                                        , std::string{"r"});
        ;
        vlSelf->__Vtask_load__4__file_load = vlSelf->__PVT__fp;
        vlSelf->__Vtask_load__5__file_load = vlSelf->__Vtask_load__4__file_load;
        vlSymsp->TOP__top__sink__sink.__PVT__index_max = 0U;
        {
            while ((! (vlSelf->__Vtask_load__5__file_load ? feof(VL_CVT_I_FP(vlSelf->__Vtask_load__5__file_load)) : true))) {
                vlSymsp->TOP__top__sink__sink.__PVT__load__Vstatic__unnamedblk1__DOT__count 
                    = VL_FSCANF_IX(vlSelf->__Vtask_load__5__file_load,"%x\n",
                                   32,&(vlSymsp->TOP__top__sink__sink.__PVT__data_data)) ;
                if ((0U == vlSymsp->TOP__top__sink__sink.__PVT__load__Vstatic__unnamedblk1__DOT__count)) {
                    goto __Vlabel2;
                } else {
                    vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
                }
                VL_WRITEF("Loading %x\n",32,vlSymsp->TOP__top__sink__sink.__PVT__data_data);
                vlSymsp->TOP__top__sink__sink.__Vlvbound_h000547a2__0 
                    = vlSymsp->TOP__top__sink__sink.__PVT__data_data;
                if (VL_LIKELY((9U >= (IData)(vlSymsp->TOP__top__sink__sink.__PVT__index_max)))) {
                    vlSymsp->TOP__top__sink__sink.__PVT__m[vlSymsp->TOP__top__sink__sink.__PVT__index_max] 
                        = vlSymsp->TOP__top__sink__sink.__Vlvbound_h000547a2__0;
                }
                __Vtemp_3 = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__top__sink__sink.__PVT__index_max)));
                vlSymsp->TOP__top__sink__sink.__PVT__index_max 
                    = __Vtemp_3;
                vlSymsp->__Vcoverage[2887].fetch_add(1, std::memory_order_relaxed);
            }
            __Vlabel2: ;
        }
        vlSymsp->__Vcoverage[2888].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1538].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                            nullptr, 
                                            "tb_Proc.v", 
                                            229);
    vlSymsp->TOP.__Vm_traceActivity[0x2cU] = 1U;
    vlSelf->__PVT__reset = 1U;
    vlSelf->__PVT__mem_clear = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                            nullptr, 
                                            "tb_Proc.v", 
                                            232);
    vlSymsp->TOP.__Vm_traceActivity[0x2cU] = 1U;
    vlSelf->__PVT__reset = 0U;
    vlSelf->__PVT__mem_clear = 0U;
    vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP.__Vm_traceActivity[0x2cU] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_top___eval_initial__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    IData/*31:0*/ __Vtemp_5;
    // Body
    vlSelf->__PVT__mngr2proc_msg = 0U;
    vlSelf->__PVT__mngr2proc_val = 1U;
    while ((1U & ((~ (IData)(vlSelf->__PVT__src_done)) 
                  | (~ (IData)(vlSelf->__PVT__snk_done))))) {
        co_await vlSymsp->TOP.__VtrigSched_h7c60deff__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_Proc.v", 
                                                                253);
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h7c60deff__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_Proc.v", 
                                                            254);
    co_await vlSymsp->TOP.__VtrigSched_h7c60deff__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_Proc.v", 
                                                            255);
    co_await vlSymsp->TOP.__VtrigSched_h7c60deff__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_Proc.v", 
                                                            256);
    co_await vlSymsp->TOP.__VtrigSched_h7c60deff__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_Proc.v", 
                                                            257);
    co_await vlSymsp->TOP.__VtrigSched_h7c60deff__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_Proc.v", 
                                                            258);
    co_await vlSymsp->TOP.__VtrigSched_h7c60deff__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_Proc.v", 
                                                            259);
    co_await vlSymsp->TOP.__VtrigSched_h7c60deff__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_Proc.v", 
                                                            260);
    VL_WRITEF("Testbench finished.  Dumping memory\n");
    VL_CONST_W_3X(80,__Vtemp_1,0x00006d65,0x6d64756d,0x703d2573);
    (void)VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                               vlSelf->__PVT__temp);
    vlSelf->__PVT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelf->__PVT__temp)
                                    , std::string{"w"});
    ;
    vlSelf->__Vtask_dump__6__filein = vlSelf->__PVT__fp;
    vlSelf->__Vtask_dump__7__file_out = vlSelf->__Vtask_dump__6__filein;
    vlSymsp->TOP__top__mem__mem.__PVT__wr_i = 0U;
    while (VL_GTS_III(32, 0x1000U, vlSymsp->TOP__top__mem__mem.__PVT__wr_i)) {
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top__mem__mem.__PVT__m
                         [(0xfffU & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__wr_i, 0U, 0xcU))]))) {
            vlSymsp->TOP__top__mem__mem.__PVT__data_data 
                = vlSymsp->TOP__top__mem__mem.__PVT__m
                [(0xfffU & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__wr_i, 0U, 0xcU))];
            __Vtemp_2 = VL_CONCAT_III(32,8,24, (0xffU 
                                                & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_data, 0U, 8U)), 
                                      VL_CONCAT_III(24,8,16, 
                                                    (0xffU 
                                                     & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_data, 8U, 8U)), 
                                                    VL_CONCAT_III(16,8,8, 
                                                                  (0xffU 
                                                                   & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_data, 0x10U, 8U)), 
                                                                  (0xffU 
                                                                   & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__data_data, 0x18U, 8U)))));
            vlSymsp->TOP__top__mem__mem.__PVT__data_data 
                = __Vtemp_2;
            vlSymsp->TOP__top__mem__mem.__PVT__dump__Vstatic__unnamedblk1__DOT__ihex 
                = VL_SFORMATF_NX("%x:%x",32,VL_CONCAT_III(32,30,2, 
                                                          (0x3fffffffU 
                                                           & VL_SEL_IIII(32, vlSymsp->TOP__top__mem__mem.__PVT__wr_i, 0U, 0x1eU)), 0U),
                                 32,vlSymsp->TOP__top__mem__mem.__PVT__data_data) ;
            __Vtemp_3 = VL_TOUPPER_NN(vlSymsp->TOP__top__mem__mem.__PVT__dump__Vstatic__unnamedblk1__DOT__ihex);
            VL_WRITEF("%@\n",-1,&(__Vtemp_3));
            __Vtemp_4 = VL_TOUPPER_NN(vlSymsp->TOP__top__mem__mem.__PVT__dump__Vstatic__unnamedblk1__DOT__ihex);
            VL_FWRITEF(vlSelf->__Vtask_dump__7__file_out,"%@\n",
                       -1,&(__Vtemp_4));
            vlSymsp->__Vcoverage[3980].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[3981].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[3982].fetch_add(1, std::memory_order_relaxed);
        __Vtemp_5 = ((IData)(1U) + vlSymsp->TOP__top__mem__mem.__PVT__wr_i);
        vlSymsp->TOP__top__mem__mem.__PVT__wr_i = __Vtemp_5;
    }
    vlSymsp->__Vcoverage[3983].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2087].fetch_add(1, std::memory_order_relaxed);
    VL_FINISH_MT("tb_Proc.v", 266, "");
    vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_top___eval_initial__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top__2\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->__PVT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x2710U, vlSelf->__PVT__unnamedblk1__DOT__i)) {
        co_await vlSymsp->TOP.__VtrigSched_h7c60deff__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_Proc.v", 
                                                                271);
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        __Vtemp_1 = ((IData)(1U) + vlSelf->__PVT__unnamedblk1__DOT__i);
        vlSelf->__PVT__unnamedblk1__DOT__i = __Vtemp_1;
    }
    VL_WRITEF("TIMEOUT: Testbench didn't finish in time\n");
    VL_FINISH_MT("tb_Proc.v", 274, "");
    vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_top___eval_initial__TOP__top__3(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top__3\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    IData/*31:0*/ __Vtemp_4;
    IData/*31:0*/ __Vtemp_5;
    IData/*31:0*/ __Vtemp_6;
    IData/*31:0*/ __Vtemp_7;
    IData/*31:0*/ __Vtemp_8;
    IData/*31:0*/ __Vtemp_9;
    IData/*31:0*/ __Vtemp_10;
    IData/*31:0*/ __Vtemp_11;
    IData/*31:0*/ __Vtemp_12;
    IData/*31:0*/ __Vtemp_13;
    IData/*31:0*/ __Vtemp_14;
    IData/*31:0*/ __Vtemp_15;
    IData/*31:0*/ __Vtemp_16;
    IData/*31:0*/ __Vtemp_17;
    IData/*31:0*/ __Vtemp_18;
    IData/*31:0*/ __Vtemp_19;
    IData/*31:0*/ __Vtemp_20;
    IData/*31:0*/ __Vtemp_21;
    IData/*31:0*/ __Vtemp_22;
    IData/*31:0*/ __Vtemp_23;
    IData/*31:0*/ __Vtemp_24;
    IData/*31:0*/ __Vtemp_25;
    IData/*31:0*/ __Vtemp_26;
    IData/*31:0*/ __Vtemp_27;
    IData/*31:0*/ __Vtemp_28;
    IData/*31:0*/ __Vtemp_29;
    IData/*31:0*/ __Vtemp_30;
    IData/*31:0*/ __Vtemp_31;
    IData/*31:0*/ __Vtemp_32;
    VlWide<128>/*4095:0*/ __Vtemp_33;
    IData/*31:0*/ __Vtemp_34;
    IData/*31:0*/ __Vtemp_35;
    IData/*31:0*/ __Vtemp_36;
    IData/*31:0*/ __Vtemp_37;
    IData/*31:0*/ __Vtemp_38;
    IData/*31:0*/ __Vtemp_39;
    IData/*31:0*/ __Vtemp_40;
    IData/*31:0*/ __Vtemp_41;
    IData/*31:0*/ __Vtemp_42;
    IData/*31:0*/ __Vtemp_43;
    IData/*31:0*/ __Vtemp_44;
    IData/*31:0*/ __Vtemp_45;
    IData/*31:0*/ __Vtemp_46;
    IData/*31:0*/ __Vtemp_47;
    IData/*31:0*/ __Vtemp_48;
    IData/*31:0*/ __Vtemp_49;
    IData/*31:0*/ __Vtemp_50;
    IData/*31:0*/ __Vtemp_51;
    IData/*31:0*/ __Vtemp_52;
    IData/*31:0*/ __Vtemp_53;
    IData/*31:0*/ __Vtemp_54;
    IData/*31:0*/ __Vtemp_55;
    IData/*31:0*/ __Vtemp_56;
    IData/*31:0*/ __Vtemp_57;
    IData/*31:0*/ __Vtemp_58;
    IData/*31:0*/ __Vtemp_59;
    IData/*31:0*/ __Vtemp_60;
    IData/*31:0*/ __Vtemp_61;
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h7c60deff__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_Proc.v", 
                                                                290);
        vlSymsp->TOP.__Vm_traceActivity[0x2dU] = 1U;
        if (vlSelf->linetrace) {
            VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__storage, 0x1ffU);
            if (VL_UNLIKELY((0U < (IData)(vlSymsp->TOP__top__DUT__vc_trace.__PVT__level)))) {
                VL_WRITEF("%4d: ",32,vlSymsp->TOP__top__DUT__vc_trace.__PVT__cycles);
                VL_ASSIGN_W(4096,vlSelf->__Vtask_line_trace__11__trace_str, vlSymsp->TOP__top__DUT__vc_trace.__PVT__storage);
                VL_SFORMAT_X(4096,vlSymsp->TOP__top__DUT.__PVT__temp
                             ,"%x",32,vlSymsp->TOP__top__DUT.__PVT__mngr2proc_msg);
                VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__12__str, vlSymsp->TOP__top__DUT.__PVT__temp);
                vlSelf->__Vtask_append_val_rdy_str__12__rdy 
                    = vlSymsp->TOP__top__DUT.__PVT__mngr2proc_rdy;
                vlSelf->__Vtask_append_val_rdy_str__12__val 
                    = vlSymsp->TOP__top__DUT.__PVT__mngr2proc_val;
                VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__12__trace, vlSelf->__Vtask_line_trace__11__trace_str);
                vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1 = 0U;
                while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_val_rdy_str__12__str, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, 
                                                                  VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1), 0U, 0xcU)), 8U)))) {
                    __Vtemp_1 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1 
                        = __Vtemp_1;
                    vlSymsp->__Vcoverage[5865].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(vlSelf->__Vtask_append_val_rdy_str__12__rdy) 
                                 & (IData)(vlSelf->__Vtask_append_val_rdy_str__12__val)))) {
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__13__str, vlSelf->__Vtask_append_val_rdy_str__12__str);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__13__trace, vlSelf->__Vtask_append_val_rdy_str__12__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__13__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_2 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                            = __Vtemp_2;
                        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__13__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__13__trace, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__13__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__13__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_3 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                     - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_3;
                        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_4 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                     - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_4;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__13__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__12__trace, vlSelf->__Vtask_append_str__13__trace);
                    vlSymsp->__Vcoverage[5870].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(vlSelf->__Vtask_append_val_rdy_str__12__rdy) 
                                        & (~ (IData)(vlSelf->__Vtask_append_val_rdy_str__12__val))))) {
                    vlSelf->__Vtask_append_chars__14__num 
                        = vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1;
                    vlSelf->__Vtask_append_chars__14__char = 0x20U;
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_chars__14__trace, vlSelf->__Vtask_append_val_rdy_str__12__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_chars__14__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__14__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_chars__14__trace, vlSelf->__Vtask_append_chars__14__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__14__char);
                        __Vtemp_5 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                     - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_5;
                        vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_6 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_6;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_chars__14__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__12__trace, vlSelf->__Vtask_append_chars__14__trace);
                    vlSymsp->__Vcoverage[5869].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(vlSelf->__Vtask_append_val_rdy_str__12__rdy)) 
                                        & (IData)(vlSelf->__Vtask_append_val_rdy_str__12__val)))) {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__15__str,0x00000023);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__15__trace, vlSelf->__Vtask_append_val_rdy_str__12__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__15__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_7 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                            = __Vtemp_7;
                        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__15__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__15__trace, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__15__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__15__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_8 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                     - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_8;
                        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_9 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                     - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_9;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__15__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__12__trace, vlSelf->__Vtask_append_str__15__trace);
                    vlSelf->__Vtask_append_chars__16__num 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1 
                           - (IData)(1U));
                    vlSelf->__Vtask_append_chars__16__char = 0x20U;
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_chars__16__trace, vlSelf->__Vtask_append_val_rdy_str__12__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_chars__16__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__16__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_chars__16__trace, vlSelf->__Vtask_append_chars__16__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__16__char);
                        __Vtemp_10 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_10;
                        vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_11 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_11;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_chars__16__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__12__trace, vlSelf->__Vtask_append_chars__16__trace);
                    vlSymsp->__Vcoverage[5868].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(vlSelf->__Vtask_append_val_rdy_str__12__rdy)) 
                                  & (~ (IData)(vlSelf->__Vtask_append_val_rdy_str__12__val))))) {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__17__str,0x0000002e);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__17__trace, vlSelf->__Vtask_append_val_rdy_str__12__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__17__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_12 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                            = __Vtemp_12;
                        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__17__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__17__trace, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__17__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__17__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_13 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_13;
                        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_14 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_14;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__17__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__12__trace, vlSelf->__Vtask_append_str__17__trace);
                    vlSelf->__Vtask_append_chars__18__num 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1 
                           - (IData)(1U));
                    vlSelf->__Vtask_append_chars__18__char = 0x20U;
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_chars__18__trace, vlSelf->__Vtask_append_val_rdy_str__12__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_chars__18__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__18__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_chars__18__trace, vlSelf->__Vtask_append_chars__18__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__18__char);
                        __Vtemp_15 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_15;
                        vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_16 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_16;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_chars__18__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__12__trace, vlSelf->__Vtask_append_chars__18__trace);
                    vlSymsp->__Vcoverage[5866].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__19__str,0x00000078);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__19__trace, vlSelf->__Vtask_append_val_rdy_str__12__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__19__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_17 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                            = __Vtemp_17;
                        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__19__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__19__trace, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__19__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__19__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_18 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_18;
                        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_19 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_19;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__19__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__12__trace, vlSelf->__Vtask_append_str__19__trace);
                    vlSelf->__Vtask_append_chars__20__num 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1 
                           - (IData)(1U));
                    vlSelf->__Vtask_append_chars__20__char = 0x20U;
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_chars__20__trace, vlSelf->__Vtask_append_val_rdy_str__12__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_chars__20__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__20__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_chars__20__trace, vlSelf->__Vtask_append_chars__20__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__20__char);
                        __Vtemp_20 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_20;
                        vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_21 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_21;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_chars__20__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__12__trace, vlSelf->__Vtask_append_chars__20__trace);
                    vlSymsp->__Vcoverage[5867].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[5871].fetch_add(1, std::memory_order_relaxed);
                VL_ASSIGN_W(4096,vlSelf->__Vtask_line_trace__11__trace_str, vlSelf->__Vtask_append_val_rdy_str__12__trace);
                VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__21__str,0x0000003e);
                VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__21__trace, vlSelf->__Vtask_line_trace__11__trace_str);
                vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__21__str, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, 
                                                                  VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                    __Vtemp_22 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                        = __Vtemp_22;
                    vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                    = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__21__trace, 0U, 0x20U);
                vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                    = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_SEL_IIII(32, 
                                                          VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__21__trace, 
                                    (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__21__str, 
                                                         (0xfffU 
                                                          & VL_SEL_IIII(32, 
                                                                        VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                    VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__21__str, 
                                                          (0xfffU 
                                                           & VL_SEL_IIII(32, 
                                                                         VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                    __Vtemp_23 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                  - (IData)(1U));
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = __Vtemp_23;
                    vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                    __Vtemp_24 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                  - (IData)(1U));
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = __Vtemp_24;
                }
                VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__21__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                VL_ASSIGN_W(4096,vlSelf->__Vtask_line_trace__11__trace_str, vlSelf->__Vtask_append_str__21__trace);
                if (vlSymsp->TOP__top__DUT.__PVT__print_trace) {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__22__str,0x0000002e);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__22__trace, vlSelf->__Vtask_line_trace__11__trace_str);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__22__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_25 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                            = __Vtemp_25;
                        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__22__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__22__trace, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__22__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__22__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_26 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_26;
                        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_27 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_27;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__22__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_line_trace__11__trace_str, vlSelf->__Vtask_append_str__22__trace);
                    vlSelf->__Vtask_append_chars__23__num = 0x1fU;
                    vlSelf->__Vtask_append_chars__23__char = 0x20U;
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_chars__23__trace, vlSelf->__Vtask_line_trace__11__trace_str);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_chars__23__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__23__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_chars__23__trace, vlSelf->__Vtask_append_chars__23__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__23__char);
                        __Vtemp_28 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_28;
                        vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_29 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_29;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_chars__23__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_line_trace__11__trace_str, vlSelf->__Vtask_append_chars__23__trace);
                } else {
                    VL_SFORMAT_X(4096,vlSymsp->TOP__top__DUT.__PVT__str
                                 ,"%x-",32,vlSymsp->TOP__top__DUT.__PVT__PC_prev);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__24__str, vlSymsp->TOP__top__DUT.__PVT__str);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__24__trace, vlSelf->__Vtask_line_trace__11__trace_str);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__24__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_30 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                            = __Vtemp_30;
                        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__24__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__24__trace, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__24__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__24__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_31 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_31;
                        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_32 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_32;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__24__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_line_trace__11__trace_str, vlSelf->__Vtask_append_str__24__trace);
                    VL_EXTEND_WW(4096,200, __Vtemp_33, 
                                 ([&]() {
                                vlSelf->__Vfunc_disasm__26__inst 
                                    = vlSymsp->TOP__top__DUT.__PVT__n_inst;
                                vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1 
                                    = (0x1fU & VL_SEL_IIII(32, vlSelf->__Vfunc_disasm__26__inst, 0xfU, 5U));
                                vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2 
                                    = (0x1fU & VL_SEL_IIII(32, vlSelf->__Vfunc_disasm__26__inst, 0x14U, 5U));
                                vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd 
                                    = (0x1fU & VL_SEL_IIII(32, vlSelf->__Vfunc_disasm__26__inst, 7U, 5U));
                                vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr 
                                    = (0xfffU & VL_SEL_IIII(32, vlSelf->__Vfunc_disasm__26__inst, 0x14U, 0xcU));
                                vlSymsp->TOP__top__DUT__tinyrv2.__PVT__funct 
                                    = (0x7fU & VL_SEL_IIII(32, vlSelf->__Vfunc_disasm__26__inst, 0x19U, 7U));
                                if ((9U >= (IData)(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1))) {
                                    VL_SFORMAT_X(24
                                                 ,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str
                                                 ,"x0%0#",
                                                 5,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1);
                                    vlSymsp->__Vcoverage[2288].fetch_add(1, std::memory_order_relaxed);
                                } else {
                                    VL_SFORMAT_X(24
                                                 ,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str
                                                 ,"x%2#",
                                                 5,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1);
                                    vlSymsp->__Vcoverage[2289].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((9U >= (IData)(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2))) {
                                    VL_SFORMAT_X(24
                                                 ,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str
                                                 ,"x0%0#",
                                                 5,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2);
                                    vlSymsp->__Vcoverage[2290].fetch_add(1, std::memory_order_relaxed);
                                } else {
                                    VL_SFORMAT_X(24
                                                 ,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str
                                                 ,"x%2#",
                                                 5,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2);
                                    vlSymsp->__Vcoverage[2291].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((9U >= (IData)(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd))) {
                                    VL_SFORMAT_X(24
                                                 ,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str
                                                 ,"x0%0#",
                                                 5,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd);
                                    vlSymsp->__Vcoverage[2292].fetch_add(1, std::memory_order_relaxed);
                                } else {
                                    VL_SFORMAT_X(24
                                                 ,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str
                                                 ,"x%2#",
                                                 5,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd);
                                    vlSymsp->__Vcoverage[2293].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x7c0U == (IData)(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr))) {
                                    VL_SFORMAT_X(72
                                                 ,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr_str
                                                 ,"proc2mngr");
                                    vlSymsp->__Vcoverage[2299].fetch_add(1, std::memory_order_relaxed);
                                } else if ((0xfc0U 
                                            == (IData)(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr))) {
                                    VL_SFORMAT_X(72
                                                 ,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr_str
                                                 ,"mngr2proc");
                                    vlSymsp->__Vcoverage[2298].fetch_add(1, std::memory_order_relaxed);
                                } else if ((0xf14U 
                                            == (IData)(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr))) {
                                    VL_SFORMAT_X(72
                                                 ,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr_str
                                                 ,"coreid   ");
                                    vlSymsp->__Vcoverage[2297].fetch_add(1, std::memory_order_relaxed);
                                } else if ((0xfc1U 
                                            == (IData)(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr))) {
                                    VL_SFORMAT_X(72
                                                 ,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr_str
                                                 ,"numcores ");
                                    vlSymsp->__Vcoverage[2296].fetch_add(1, std::memory_order_relaxed);
                                } else if ((0x7c1U 
                                            == (IData)(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr))) {
                                    VL_SFORMAT_X(72
                                                 ,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr_str
                                                 ,"stats_en ");
                                    vlSymsp->__Vcoverage[2294].fetch_add(1, std::memory_order_relaxed);
                                } else {
                                    VL_SFORMAT_X(72
                                                 ,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr_str
                                                 ,"    0x%x",
                                                 12,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr);
                                    vlSymsp->__Vcoverage[2295].fetch_add(1, std::memory_order_relaxed);
                                }
                                VL_SFORMAT_X(16,vlSymsp->TOP__top__DUT__tinyrv2.__PVT__funct_str
                                             ,"%x",
                                             2,(3U 
                                                & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__funct), 0U, 2U)));
                                if (((((((((0x2073U 
                                            == (0x707fU 
                                                & vlSelf->__Vfunc_disasm__26__inst)) 
                                           | (0x1073U 
                                              == (0x707fU 
                                                  & vlSelf->__Vfunc_disasm__26__inst))) 
                                          | (0x13U 
                                             == vlSelf->__Vfunc_disasm__26__inst)) 
                                         | (0U == vlSelf->__Vfunc_disasm__26__inst)) 
                                        | (0x33U == 
                                           (0xfe00707fU 
                                            & vlSelf->__Vfunc_disasm__26__inst))) 
                                       | (0x40000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->__Vfunc_disasm__26__inst))) 
                                      | (0x7033U == 
                                         (0xfe00707fU 
                                          & vlSelf->__Vfunc_disasm__26__inst))) 
                                     | (0x6033U == 
                                        (0xfe00707fU 
                                         & vlSelf->__Vfunc_disasm__26__inst)))) {
                                    if ((0x2073U == 
                                         (0x707fU & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"csrr   %s, %s  ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     72,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr_str.data());
                                        vlSymsp->__Vcoverage[2300].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x1073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"csrw   %s, %s  ",
                                                     72,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__csr_str.data(),
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str);
                                        vlSymsp->__Vcoverage[2301].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x13U 
                                                == vlSelf->__Vfunc_disasm__26__inst)) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"nop                    ");
                                        vlSymsp->__Vcoverage[2302].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0U 
                                                == vlSelf->__Vfunc_disasm__26__inst)) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"                       ");
                                        vlSymsp->__Vcoverage[2303].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"add    %s, %s, %s   ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str);
                                        vlSymsp->__Vcoverage[2304].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x40000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"sub    %s, %s, %s   ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str);
                                        vlSymsp->__Vcoverage[2305].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"and    %s, %s, %s   ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str);
                                        vlSymsp->__Vcoverage[2306].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"or     %s, %s, %s   ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str);
                                        vlSymsp->__Vcoverage[2307].fetch_add(1, std::memory_order_relaxed);
                                    }
                                } else if (((((((((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->__Vfunc_disasm__26__inst)) 
                                                  | (0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->__Vfunc_disasm__26__inst))) 
                                                 | (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->__Vfunc_disasm__26__inst))) 
                                                | (0x2000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->__Vfunc_disasm__26__inst))) 
                                               | (0x13U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->__Vfunc_disasm__26__inst))) 
                                              | (0x7013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->__Vfunc_disasm__26__inst))) 
                                             | (0x6013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) 
                                            | (0x4013U 
                                               == (0x707fU 
                                                   & vlSelf->__Vfunc_disasm__26__inst)))) {
                                    if ((0x4033U == 
                                         (0xfe00707fU 
                                          & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"xor    %s, %s, %s   ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str);
                                        vlSymsp->__Vcoverage[2308].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x2033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"slt    %s, %s, %s   ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str);
                                        vlSymsp->__Vcoverage[2309].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x3033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"sltu   %s, %s, %s   ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str);
                                        vlSymsp->__Vcoverage[2310].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"mul    %s, %s, %s   ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str);
                                        vlSymsp->__Vcoverage[2311].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x13U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"addi   %s, %s, 0x%x ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     12,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_i__27__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_i__27__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__27__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__27__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__27__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__27__inst, 0x14U)))));
                                                        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_i__27__Vfuncout)));
                                        vlSymsp->__Vcoverage[2312].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x7013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"andi   %s, %s, 0x%x ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     12,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_i__28__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_i__28__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__28__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__28__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__28__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__28__inst, 0x14U)))));
                                                        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_i__28__Vfuncout)));
                                        vlSymsp->__Vcoverage[2313].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x6013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"ori    %s, %s, 0x%x ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     12,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_i__29__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_i__29__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__29__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__29__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__29__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__29__inst, 0x14U)))));
                                                        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_i__29__Vfuncout)));
                                        vlSymsp->__Vcoverage[2314].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"xori   %s, %s, 0x%x ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     12,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_i__30__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_i__30__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__30__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__30__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__30__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__30__inst, 0x14U)))));
                                                        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_i__30__Vfuncout)));
                                        vlSymsp->__Vcoverage[2315].fetch_add(1, std::memory_order_relaxed);
                                    }
                                } else if (((((((((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->__Vfunc_disasm__26__inst)) 
                                                  | (0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->__Vfunc_disasm__26__inst))) 
                                                 | (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->__Vfunc_disasm__26__inst))) 
                                                | (0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->__Vfunc_disasm__26__inst))) 
                                               | (0x1033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->__Vfunc_disasm__26__inst))) 
                                              | (0x40005013U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->__Vfunc_disasm__26__inst))) 
                                             | (0x5013U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) 
                                            | (0x1013U 
                                               == (0xfe00707fU 
                                                   & vlSelf->__Vfunc_disasm__26__inst)))) {
                                    if ((0x2013U == 
                                         (0x707fU & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"slti   %s, %s, 0x%x ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     12,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_i__31__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_i__31__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__31__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__31__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__31__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__31__inst, 0x14U)))));
                                                        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_i__31__Vfuncout)));
                                        vlSymsp->__Vcoverage[2316].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x3013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"sltiu  %s, %s, 0x%x ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     12,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_i__32__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_i__32__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__32__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__32__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__32__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__32__inst, 0x14U)))));
                                                        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_i__32__Vfuncout)));
                                        vlSymsp->__Vcoverage[2317].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"sra    %s, %s, 0x%x  ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     5,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_shamt__33__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_shamt__33__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(5,4,1, 
                                                                          (0xfU 
                                                                           & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_shamt__33__inst, 0x15U, 4U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_shamt__33__inst, 0x14U)));
                                                        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_shamt__33__Vfuncout)));
                                        vlSymsp->__Vcoverage[2318].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"srl    %s, %s, 0x%x  ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     5,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_shamt__34__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_shamt__34__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(5,4,1, 
                                                                          (0xfU 
                                                                           & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_shamt__34__inst, 0x15U, 4U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_shamt__34__inst, 0x14U)));
                                                        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_shamt__34__Vfuncout)));
                                        vlSymsp->__Vcoverage[2319].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"sll    %s, %s, 0x%x  ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     5,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_shamt__35__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_shamt__35__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(5,4,1, 
                                                                          (0xfU 
                                                                           & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_shamt__35__inst, 0x15U, 4U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_shamt__35__inst, 0x14U)));
                                                        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_shamt__35__Vfuncout)));
                                        vlSymsp->__Vcoverage[2320].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x40005013U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"srai   %s, %s, 0x%x  ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     5,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_shamt__36__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_shamt__36__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(5,4,1, 
                                                                          (0xfU 
                                                                           & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_shamt__36__inst, 0x15U, 4U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_shamt__36__inst, 0x14U)));
                                                        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_shamt__36__Vfuncout)));
                                        vlSymsp->__Vcoverage[2321].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x5013U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"srli   %s, %s, 0x%x  ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     5,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_shamt__37__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_shamt__37__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(5,4,1, 
                                                                          (0xfU 
                                                                           & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_shamt__37__inst, 0x15U, 4U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_shamt__37__inst, 0x14U)));
                                                        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_shamt__37__Vfuncout)));
                                        vlSymsp->__Vcoverage[2322].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"slli   %s, %s, 0x%x  ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     5,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_shamt__38__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_shamt__38__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(5,4,1, 
                                                                          (0xfU 
                                                                           & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_shamt__38__inst, 0x15U, 4U)), 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_shamt__38__inst, 0x14U)));
                                                        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_shamt__38__Vfuncout)));
                                        vlSymsp->__Vcoverage[2323].fetch_add(1, std::memory_order_relaxed);
                                    }
                                } else if (((((((((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->__Vfunc_disasm__26__inst)) 
                                                  | (0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->__Vfunc_disasm__26__inst))) 
                                                 | (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->__Vfunc_disasm__26__inst))) 
                                                | (0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->__Vfunc_disasm__26__inst))) 
                                               | (0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->__Vfunc_disasm__26__inst))) 
                                              | (0x67U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->__Vfunc_disasm__26__inst))) 
                                             | (0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) 
                                            | (0x1063U 
                                               == (0x707fU 
                                                   & vlSelf->__Vfunc_disasm__26__inst)))) {
                                    if ((0x37U == (0x7fU 
                                                   & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"lui    %s, 0x%x    ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     20,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_u_sh12__39__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_u_sh12__39__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(20,1,19, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_u_sh12__39__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(19,11,8, 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_u_sh12__39__inst, 0x14U, 0xbU)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_u_sh12__39__inst, 0xcU, 8U))));
                                                        vlSymsp->__Vcoverage[2092].fetch_add(1, std::memory_order_relaxed);
                                                    }(), vlSelf->__Vfunc_imm_u_sh12__39__Vfuncout));
                                        vlSymsp->__Vcoverage[2324].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"auipc  %s, 0x%x    ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     20,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_u_sh12__40__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_u_sh12__40__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(20,1,19, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_u_sh12__40__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(19,11,8, 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_u_sh12__40__inst, 0x14U, 0xbU)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_u_sh12__40__inst, 0xcU, 8U))));
                                                        vlSymsp->__Vcoverage[2092].fetch_add(1, std::memory_order_relaxed);
                                                    }(), vlSelf->__Vfunc_imm_u_sh12__40__Vfuncout));
                                        vlSymsp->__Vcoverage[2325].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x2003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"lw     %s, 0x%x(%s) ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     12,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_i__41__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_i__41__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__41__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__41__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__41__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__41__inst, 0x14U)))));
                                                        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_i__41__Vfuncout)),
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str);
                                        vlSymsp->__Vcoverage[2326].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x2023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"sw     %s, 0x%x(%s) ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str,
                                                     12,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_s__42__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_s__42__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_s__42__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_s__42__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_s__42__inst, 8U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_s__42__inst, 7U)))));
                                                        vlSymsp->__Vcoverage[2090].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_s__42__Vfuncout)),
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str);
                                        vlSymsp->__Vcoverage[2327].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"jal    %s, 0x%x   ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     21,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_j__43__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_j__43__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(21,1,20, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_j__43__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(20,8,12, 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_j__43__inst, 0xcU, 8U)), 
                                                                                VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_j__43__inst, 0x14U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_j__43__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_j__43__inst, 0x15U, 4U)), 0U)))));
                                                        vlSymsp->__Vcoverage[2093].fetch_add(1, std::memory_order_relaxed);
                                                    }(), vlSelf->__Vfunc_imm_j__43__Vfuncout));
                                        vlSymsp->__Vcoverage[2328].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"jalr   %s, %s, 0x%x ",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     12,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_i__44__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_i__44__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__44__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__44__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__44__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__44__inst, 0x14U)))));
                                                        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_i__44__Vfuncout)));
                                        vlSymsp->__Vcoverage[2329].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__Vfunc_disasm__26__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"beq    %s, %s, 0x%x",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str,
                                                     13,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_b__45__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_b__45__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(13,1,12, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__45__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__45__inst, 7U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__45__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__45__inst, 8U, 4U)), 0U))));
                                                        vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_b__45__Vfuncout)));
                                        vlSymsp->__Vcoverage[2330].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(200
                                                     ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                     ,"bne    %s, %s, 0x%x",
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                     24,
                                                     vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str,
                                                     13,
                                                     ([&]() {
                                                        vlSelf->__Vfunc_imm_b__46__inst 
                                                            = vlSelf->__Vfunc_disasm__26__inst;
                                                        vlSelf->__Vfunc_imm_b__46__Vfuncout 
                                                            = 
                                                            VL_CONCAT_III(13,1,12, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__46__inst, 0x1fU)), 
                                                                          VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__46__inst, 7U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__46__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__46__inst, 8U, 4U)), 0U))));
                                                        vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_imm_b__46__Vfuncout)));
                                        vlSymsp->__Vcoverage[2331].fetch_add(1, std::memory_order_relaxed);
                                    }
                                } else if ((0x4063U 
                                            == (0x707fU 
                                                & vlSelf->__Vfunc_disasm__26__inst))) {
                                    VL_SFORMAT_X(200
                                                 ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                 ,"blt    %s, %s, 0x%x",
                                                 24,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                 24,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str,
                                                 13,
                                                 ([&]() {
                                                    vlSelf->__Vfunc_imm_b__47__inst 
                                                        = vlSelf->__Vfunc_disasm__26__inst;
                                                    vlSelf->__Vfunc_imm_b__47__Vfuncout 
                                                        = 
                                                        VL_CONCAT_III(13,1,12, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__47__inst, 0x1fU)), 
                                                                      VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__47__inst, 7U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__47__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__47__inst, 8U, 4U)), 0U))));
                                                    vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
                                                }(), (IData)(vlSelf->__Vfunc_imm_b__47__Vfuncout)));
                                    vlSymsp->__Vcoverage[2332].fetch_add(1, std::memory_order_relaxed);
                                } else if ((0x5063U 
                                            == (0x707fU 
                                                & vlSelf->__Vfunc_disasm__26__inst))) {
                                    VL_SFORMAT_X(200
                                                 ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                 ,"bge    %s, %s, 0x%x",
                                                 24,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                 24,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str,
                                                 13,
                                                 ([&]() {
                                                    vlSelf->__Vfunc_imm_b__48__inst 
                                                        = vlSelf->__Vfunc_disasm__26__inst;
                                                    vlSelf->__Vfunc_imm_b__48__Vfuncout 
                                                        = 
                                                        VL_CONCAT_III(13,1,12, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__48__inst, 0x1fU)), 
                                                                      VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__48__inst, 7U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__48__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__48__inst, 8U, 4U)), 0U))));
                                                    vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
                                                }(), (IData)(vlSelf->__Vfunc_imm_b__48__Vfuncout)));
                                    vlSymsp->__Vcoverage[2333].fetch_add(1, std::memory_order_relaxed);
                                } else if ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->__Vfunc_disasm__26__inst))) {
                                    VL_SFORMAT_X(200
                                                 ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                 ,"bltu   %s, %s, 0x%x",
                                                 24,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                 24,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str,
                                                 13,
                                                 ([&]() {
                                                    vlSelf->__Vfunc_imm_b__49__inst 
                                                        = vlSelf->__Vfunc_disasm__26__inst;
                                                    vlSelf->__Vfunc_imm_b__49__Vfuncout 
                                                        = 
                                                        VL_CONCAT_III(13,1,12, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__49__inst, 0x1fU)), 
                                                                      VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__49__inst, 7U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__49__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__49__inst, 8U, 4U)), 0U))));
                                                    vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
                                                }(), (IData)(vlSelf->__Vfunc_imm_b__49__Vfuncout)));
                                    vlSymsp->__Vcoverage[2334].fetch_add(1, std::memory_order_relaxed);
                                } else if ((0x7063U 
                                            == (0x707fU 
                                                & vlSelf->__Vfunc_disasm__26__inst))) {
                                    VL_SFORMAT_X(200
                                                 ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                 ,"bgeu   %s, %s, 0x%x",
                                                 24,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                 24,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str,
                                                 13,
                                                 ([&]() {
                                                    vlSelf->__Vfunc_imm_b__50__inst 
                                                        = vlSelf->__Vfunc_disasm__26__inst;
                                                    vlSelf->__Vfunc_imm_b__50__Vfuncout 
                                                        = 
                                                        VL_CONCAT_III(13,1,12, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__50__inst, 0x1fU)), 
                                                                      VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__50__inst, 7U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__50__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__50__inst, 8U, 4U)), 0U))));
                                                    vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
                                                }(), (IData)(vlSelf->__Vfunc_imm_b__50__Vfuncout)));
                                    vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
                                } else if ((0xbU == 
                                            (0x7fU 
                                             & vlSelf->__Vfunc_disasm__26__inst))) {
                                    VL_SFORMAT_X(200
                                                 ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                 ,"cust0 %s, %s, %s, %s",
                                                 24,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rd_str,
                                                 24,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs1_str,
                                                 24,
                                                 vlSymsp->TOP__top__DUT__tinyrv2.__PVT__rs2_str,
                                                 16,
                                                 (IData)(vlSymsp->TOP__top__DUT__tinyrv2.__PVT__funct_str));
                                    vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
                                } else {
                                    VL_SFORMAT_X(200
                                                 ,vlSelf->__Vfunc_disasm__26__Vfuncout
                                                 ,"illegal inst           ");
                                    vlSymsp->__Vcoverage[2337].fetch_add(1, std::memory_order_relaxed);
                                }
                                vlSymsp->__Vcoverage[2338].fetch_add(1, std::memory_order_relaxed);
                            }(), vlSelf->__Vfunc_disasm__26__Vfuncout));
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__25__str, __Vtemp_33);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__25__trace, vlSelf->__Vtask_line_trace__11__trace_str);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__25__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_34 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                            = __Vtemp_34;
                        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__25__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__25__trace, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__25__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__25__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_35 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_35;
                        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_36 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_36;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__25__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_line_trace__11__trace_str, vlSelf->__Vtask_append_str__25__trace);
                }
                VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__51__str,0x0000003e);
                VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__51__trace, vlSelf->__Vtask_line_trace__11__trace_str);
                vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__51__str, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, 
                                                                  VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                    __Vtemp_37 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                        = __Vtemp_37;
                    vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                    = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__51__trace, 0U, 0x20U);
                vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                    = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_SEL_IIII(32, 
                                                          VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__51__trace, 
                                    (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__51__str, 
                                                         (0xfffU 
                                                          & VL_SEL_IIII(32, 
                                                                        VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                    VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__51__str, 
                                                          (0xfffU 
                                                           & VL_SEL_IIII(32, 
                                                                         VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                    __Vtemp_38 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                  - (IData)(1U));
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = __Vtemp_38;
                    vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                    __Vtemp_39 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                  - (IData)(1U));
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = __Vtemp_39;
                }
                VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__51__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                VL_ASSIGN_W(4096,vlSelf->__Vtask_line_trace__11__trace_str, vlSelf->__Vtask_append_str__51__trace);
                VL_SFORMAT_X(4096,vlSymsp->TOP__top__DUT.__PVT__temp
                             ,"%x",32,vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_msg);
                VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__52__str, vlSymsp->TOP__top__DUT.__PVT__temp);
                vlSelf->__Vtask_append_val_rdy_str__52__rdy 
                    = vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_rdy;
                vlSelf->__Vtask_append_val_rdy_str__52__val 
                    = vlSymsp->TOP__top__DUT.__PVT__proc2mngr_enq_val;
                VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__52__trace, vlSelf->__Vtask_line_trace__11__trace_str);
                vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1 = 0U;
                while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_val_rdy_str__52__str, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, 
                                                                  VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1), 0U, 0xcU)), 8U)))) {
                    __Vtemp_40 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1 
                        = __Vtemp_40;
                    vlSymsp->__Vcoverage[5865].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(vlSelf->__Vtask_append_val_rdy_str__52__rdy) 
                                 & (IData)(vlSelf->__Vtask_append_val_rdy_str__52__val)))) {
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__53__str, vlSelf->__Vtask_append_val_rdy_str__52__str);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__53__trace, vlSelf->__Vtask_append_val_rdy_str__52__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__53__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_41 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                            = __Vtemp_41;
                        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__53__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__53__trace, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__53__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__53__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_42 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_42;
                        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_43 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_43;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__53__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__52__trace, vlSelf->__Vtask_append_str__53__trace);
                    vlSymsp->__Vcoverage[5870].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(vlSelf->__Vtask_append_val_rdy_str__52__rdy) 
                                        & (~ (IData)(vlSelf->__Vtask_append_val_rdy_str__52__val))))) {
                    vlSelf->__Vtask_append_chars__54__num 
                        = vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1;
                    vlSelf->__Vtask_append_chars__54__char = 0x20U;
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_chars__54__trace, vlSelf->__Vtask_append_val_rdy_str__52__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_chars__54__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__54__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_chars__54__trace, vlSelf->__Vtask_append_chars__54__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__54__char);
                        __Vtemp_44 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_44;
                        vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_45 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_45;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_chars__54__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__52__trace, vlSelf->__Vtask_append_chars__54__trace);
                    vlSymsp->__Vcoverage[5869].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(vlSelf->__Vtask_append_val_rdy_str__52__rdy)) 
                                        & (IData)(vlSelf->__Vtask_append_val_rdy_str__52__val)))) {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__55__str,0x00000023);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__55__trace, vlSelf->__Vtask_append_val_rdy_str__52__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__55__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_46 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                            = __Vtemp_46;
                        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__55__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__55__trace, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__55__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__55__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_47 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_47;
                        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_48 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_48;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__55__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__52__trace, vlSelf->__Vtask_append_str__55__trace);
                    vlSelf->__Vtask_append_chars__56__num 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1 
                           - (IData)(1U));
                    vlSelf->__Vtask_append_chars__56__char = 0x20U;
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_chars__56__trace, vlSelf->__Vtask_append_val_rdy_str__52__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_chars__56__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__56__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_chars__56__trace, vlSelf->__Vtask_append_chars__56__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__56__char);
                        __Vtemp_49 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_49;
                        vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_50 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_50;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_chars__56__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__52__trace, vlSelf->__Vtask_append_chars__56__trace);
                    vlSymsp->__Vcoverage[5868].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(vlSelf->__Vtask_append_val_rdy_str__52__rdy)) 
                                  & (~ (IData)(vlSelf->__Vtask_append_val_rdy_str__52__val))))) {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__57__str,0x0000002e);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__57__trace, vlSelf->__Vtask_append_val_rdy_str__52__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__57__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_51 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                            = __Vtemp_51;
                        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__57__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__57__trace, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__57__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__57__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_52 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_52;
                        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_53 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_53;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__57__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__52__trace, vlSelf->__Vtask_append_str__57__trace);
                    vlSelf->__Vtask_append_chars__58__num 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1 
                           - (IData)(1U));
                    vlSelf->__Vtask_append_chars__58__char = 0x20U;
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_chars__58__trace, vlSelf->__Vtask_append_val_rdy_str__52__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_chars__58__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__58__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_chars__58__trace, vlSelf->__Vtask_append_chars__58__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__58__char);
                        __Vtemp_54 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_54;
                        vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_55 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_55;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_chars__58__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__52__trace, vlSelf->__Vtask_append_chars__58__trace);
                    vlSymsp->__Vcoverage[5866].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__59__str,0x00000078);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__59__trace, vlSelf->__Vtask_append_val_rdy_str__52__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__59__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_56 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                            = __Vtemp_56;
                        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__59__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_str__59__trace, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__59__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__59__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_57 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_57;
                        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_58 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_58;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_str__59__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__52__trace, vlSelf->__Vtask_append_str__59__trace);
                    vlSelf->__Vtask_append_chars__60__num 
                        = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__len1 
                           - (IData)(1U));
                    vlSelf->__Vtask_append_chars__60__char = 0x20U;
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_chars__60__trace, vlSelf->__Vtask_append_val_rdy_str__52__trace);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSelf->__Vtask_append_chars__60__trace, 0U, 0x20U);
                    vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__60__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSelf->__Vtask_append_chars__60__trace, vlSelf->__Vtask_append_chars__60__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__60__char);
                        __Vtemp_59 = (vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                                      - (IData)(1U));
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                            = __Vtemp_59;
                        vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_60 = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx1 
                            = __Vtemp_60;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__Vtask_append_chars__60__trace, vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__52__trace, vlSelf->__Vtask_append_chars__60__trace);
                    vlSymsp->__Vcoverage[5867].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[5871].fetch_add(1, std::memory_order_relaxed);
                VL_ASSIGN_W(4096,vlSelf->__Vtask_line_trace__11__trace_str, vlSelf->__Vtask_append_val_rdy_str__52__trace);
                VL_ASSIGN_W(4096,vlSymsp->TOP__top__DUT__vc_trace.__PVT__storage, vlSelf->__Vtask_line_trace__11__trace_str);
                vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0 
                    = VL_SEL_IWII(4096, vlSymsp->TOP__top__DUT__vc_trace.__PVT__storage, 0U, 0x20U);
                vlSymsp->TOP__top__DUT.__PVT__idx0 
                    = vlSymsp->TOP__top__DUT__vc_trace.__PVT__idx0;
                vlSymsp->TOP__top__DUT.__PVT__idx1 = 0x1ffU;
                while (VL_GTS_III(32, vlSymsp->TOP__top__DUT.__PVT__idx1, vlSymsp->TOP__top__DUT.__PVT__idx0)) {
                    __Vtemp_61 = (vlSymsp->TOP__top__DUT.__PVT__idx1 
                                  - (IData)(1U));
                    vlSymsp->TOP__top__DUT.__PVT__idx1 
                        = __Vtemp_61;
                }
                VL_WRITEF("\n");
            }
            vlSymsp->TOP__top__DUT__vc_trace.__PVT__cycles_next 
                = ((IData)(1U) + vlSymsp->TOP__top__DUT__vc_trace.__PVT__cycles);
            vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
    }
    VL_STOP_MT("tb_Proc.v", 296, "");
    vlSymsp->TOP.__Vm_traceActivity[0x2dU] = 1U;
}

VL_INLINE_OPT void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__0\n"); );
    // Body
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->__Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__linetrace = vlSelf->linetrace;
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->clk;
    }
    vlSymsp->TOP__top__src.__PVT__clk = vlSelf->clk;
    vlSymsp->TOP__top__sink.__PVT__clk = vlSelf->clk;
    vlSymsp->TOP__top__DUT.__PVT__clk = vlSelf->clk;
    vlSymsp->TOP__top__mem.__PVT__clk = vlSelf->clk;
}

VL_INLINE_OPT void Vtop_top___act_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_sequent__TOP__top__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__mem_clear) ^ (IData)(vlSelf->__Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_clear = vlSelf->__PVT__mem_clear;
    }
    vlSymsp->TOP__top__src.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__sink.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem.__PVT__mem_clear = vlSelf->__PVT__mem_clear;
    vlSymsp->TOP__top__mem.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT.__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_top___act_sequent__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_sequent__TOP__top__1\n"); );
    // Body
    vlSelf->__PVT__snk_done = vlSymsp->TOP__top__sink.__PVT__done;
    if (((IData)(vlSelf->__PVT__snk_done) ^ (IData)(vlSelf->__Vtogcov__snk_done))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__snk_done = vlSelf->__PVT__snk_done;
    }
}

VL_INLINE_OPT void Vtop_top___act_sequent__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_sequent__TOP__top__2\n"); );
    // Body
    vlSelf->__PVT__mngr2proc_val = vlSymsp->TOP__top__src.__PVT__val;
}

VL_INLINE_OPT void Vtop_top___act_sequent__TOP__top__3(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_sequent__TOP__top__3\n"); );
    // Body
    vlSelf->__PVT__mngr2proc_msg = vlSymsp->TOP__top__src.__PVT__msg;
}

VL_INLINE_OPT void Vtop_top___act_sequent__TOP__top__4(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_sequent__TOP__top__4\n"); );
    // Body
    vlSelf->__PVT__imem_respstream_val = vlSymsp->TOP__top__mem.__PVT__memresp0_val;
    if (((IData)(vlSelf->__PVT__imem_respstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_val = vlSelf->__PVT__imem_respstream_val;
    }
    vlSymsp->TOP__top__DUT.__PVT__imem_respstream_val 
        = vlSelf->__PVT__imem_respstream_val;
}

VL_INLINE_OPT void Vtop_top___act_sequent__TOP__top__5(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_sequent__TOP__top__5\n"); );
    // Body
    vlSelf->__Vcellout__mem__memresp0_msg = vlSymsp->TOP__top__mem.__PVT__memresp0_msg;
    vlSelf->__PVT__imem_respstream_msg = vlSelf->__Vcellout__mem__memresp0_msg;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT.__PVT__imem_respstream_msg 
        = vlSelf->__PVT__imem_respstream_msg;
}

VL_INLINE_OPT void Vtop_top___act_sequent__TOP__top__6(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_sequent__TOP__top__6\n"); );
    // Body
    vlSelf->__PVT__dmem_respstream_val = vlSymsp->TOP__top__mem.__PVT__memresp1_val;
    if (((IData)(vlSelf->__PVT__dmem_respstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_respstream_val = vlSelf->__PVT__dmem_respstream_val;
    }
    vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_val 
        = vlSelf->__PVT__dmem_respstream_val;
}

VL_INLINE_OPT void Vtop_top___act_sequent__TOP__top__7(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_sequent__TOP__top__7\n"); );
    // Body
    vlSelf->__Vcellout__mem__memresp1_msg = vlSymsp->TOP__top__mem.__PVT__memresp1_msg;
    vlSelf->__PVT__dmem_respstream_msg = vlSelf->__Vcellout__mem__memresp1_msg;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_msg 
        = vlSelf->__PVT__dmem_respstream_msg;
}

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__mngr2proc_val) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_val = vlSelf->__PVT__mngr2proc_val;
    }
    vlSymsp->TOP__top__DUT.__PVT__mngr2proc_val = vlSelf->__PVT__mngr2proc_val;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0U)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 1U)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 2U)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 3U)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 4U)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 5U)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 6U)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 7U)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 8U)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 9U)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT.__PVT__mngr2proc_msg = vlSelf->__PVT__mngr2proc_msg;
}

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__1\n"); );
    // Body
    vlSelf->__PVT__mngr2proc_rdy = vlSymsp->TOP__top__DUT.__PVT__mngr2proc_rdy;
    vlSelf->__PVT__dmem_respstream_rdy = vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_rdy;
    vlSelf->__PVT__imem_respstream_rdy = vlSymsp->TOP__top__DUT.__PVT__imem_respstream_rdy;
    vlSelf->__PVT__imem_reqstream_val = vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_val;
    VL_ASSIGN_W(77,vlSelf->__PVT__imem_reqstream_msg, vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_msg);
    if (((IData)(vlSelf->__PVT__mngr2proc_rdy) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_rdy = vlSelf->__PVT__mngr2proc_rdy;
    }
    vlSymsp->TOP__top__src.__PVT__rdy = vlSelf->__PVT__mngr2proc_rdy;
    if (((IData)(vlSelf->__PVT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_respstream_rdy = vlSelf->__PVT__dmem_respstream_rdy;
    }
    vlSymsp->TOP__top__mem.__PVT__memresp1_rdy = vlSelf->__PVT__dmem_respstream_rdy;
    if (((IData)(vlSelf->__PVT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_rdy = vlSelf->__PVT__imem_respstream_rdy;
    }
    vlSymsp->TOP__top__mem.__PVT__memresp0_rdy = vlSelf->__PVT__imem_respstream_rdy;
    if (((IData)(vlSelf->__PVT__imem_reqstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_val = vlSelf->__PVT__imem_reqstream_val;
    }
    vlSymsp->TOP__top__mem.__PVT__memreq0_val = vlSelf->__PVT__imem_reqstream_val;
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1fU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__mem__memreq0_msg, vlSelf->__PVT__imem_reqstream_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem.__PVT__memreq0_msg, vlSelf->__Vcellinp__mem__memreq0_msg);
}

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__2\n"); );
    // Body
    vlSelf->__PVT__imem_reqstream_rdy = vlSymsp->TOP__top__mem.__PVT__memreq0_rdy;
    vlSelf->__PVT__proc2mngr_val = vlSymsp->TOP__top__DUT.__PVT__proc2mngr_val;
    vlSelf->__PVT__dmem_reqstream_val = vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_val;
    if (((IData)(vlSelf->__PVT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_rdy = vlSelf->__PVT__imem_reqstream_rdy;
    }
    vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_rdy 
        = vlSelf->__PVT__imem_reqstream_rdy;
    if (((IData)(vlSelf->__PVT__proc2mngr_val) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_val = vlSelf->__PVT__proc2mngr_val;
    }
    vlSymsp->TOP__top__sink.__PVT__val = vlSelf->__PVT__proc2mngr_val;
    if (((IData)(vlSelf->__PVT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_reqstream_val = vlSelf->__PVT__dmem_reqstream_val;
    }
    vlSymsp->TOP__top__mem.__PVT__memreq1_val = vlSelf->__PVT__dmem_reqstream_val;
}

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__3(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__3\n"); );
    // Body
    vlSelf->__PVT__proc2mngr_msg = vlSymsp->TOP__top__DUT.__PVT__proc2mngr_msg;
    VL_ASSIGN_W(77,vlSelf->__PVT__dmem_reqstream_msg, vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_msg);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0U)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 1U)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 2U)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 3U)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 4U)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 5U)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 6U)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 7U)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 8U)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 9U)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__sink.__PVT__msg = vlSelf->__PVT__proc2mngr_msg;
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1fU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__mem__memreq1_msg, vlSelf->__PVT__dmem_reqstream_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem.__PVT__memreq1_msg, vlSelf->__Vcellinp__mem__memreq1_msg);
}

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__4(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__4\n"); );
    // Body
    vlSelf->__PVT__proc2mngr_rdy = vlSymsp->TOP__top__sink.__PVT__rdy;
    vlSelf->__PVT__dmem_reqstream_rdy = vlSymsp->TOP__top__mem.__PVT__memreq1_rdy;
    if (((IData)(vlSelf->__PVT__proc2mngr_rdy) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_rdy = vlSelf->__PVT__proc2mngr_rdy;
    }
    vlSymsp->TOP__top__DUT.__PVT__proc2mngr_rdy = vlSelf->__PVT__proc2mngr_rdy;
    if (((IData)(vlSelf->__PVT__dmem_reqstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_reqstream_rdy = vlSelf->__PVT__dmem_reqstream_rdy;
    }
    vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_rdy 
        = vlSelf->__PVT__dmem_reqstream_rdy;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    // Body
    vlSelf->__PVT__src_done = vlSymsp->TOP__top__src.__PVT__done;
    if (((IData)(vlSelf->__PVT__src_done) ^ (IData)(vlSelf->__Vtogcov__src_done))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__src_done = vlSelf->__PVT__src_done;
    }
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__mem_clear) ^ (IData)(vlSelf->__Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_clear = vlSelf->__PVT__mem_clear;
    }
    vlSymsp->TOP__top__src.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__sink.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem.__PVT__mem_clear = vlSelf->__PVT__mem_clear;
    vlSymsp->TOP__top__mem.__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__mngr2proc_val) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_val = vlSelf->__PVT__mngr2proc_val;
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__0\n"); );
    // Body
    vlSelf->__PVT__snk_done = vlSymsp->TOP__top__sink.__PVT__done;
    if (((IData)(vlSelf->__PVT__snk_done) ^ (IData)(vlSelf->__Vtogcov__snk_done))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__snk_done = vlSelf->__PVT__snk_done;
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__1\n"); );
    // Body
    vlSelf->__PVT__mngr2proc_msg = vlSymsp->TOP__top__src.__PVT__msg;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0U)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 1U)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 2U)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 3U)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 4U)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 5U)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 6U)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 7U)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 8U)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 9U)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT.__PVT__mngr2proc_msg = vlSelf->__PVT__mngr2proc_msg;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__3(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__3\n"); );
    // Body
    vlSelf->__Vcellout__mem__memresp0_msg = vlSymsp->TOP__top__mem.__PVT__memresp0_msg;
    vlSelf->__PVT__imem_respstream_msg = vlSelf->__Vcellout__mem__memresp0_msg;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT.__PVT__imem_respstream_msg 
        = vlSelf->__PVT__imem_respstream_msg;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__4(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__4\n"); );
    // Body
    vlSelf->__Vcellout__mem__memresp1_msg = vlSymsp->TOP__top__mem.__PVT__memresp1_msg;
    vlSelf->__PVT__dmem_respstream_msg = vlSelf->__Vcellout__mem__memresp1_msg;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_msg 
        = vlSelf->__PVT__dmem_respstream_msg;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__5(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__5\n"); );
    // Body
    vlSelf->__PVT__mngr2proc_rdy = vlSymsp->TOP__top__DUT.__PVT__mngr2proc_rdy;
    vlSelf->__PVT__dmem_respstream_rdy = vlSymsp->TOP__top__DUT.__PVT__dmem_respstream_rdy;
    vlSelf->__PVT__imem_respstream_rdy = vlSymsp->TOP__top__DUT.__PVT__imem_respstream_rdy;
    vlSelf->__PVT__imem_reqstream_val = vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_val;
    VL_ASSIGN_W(77,vlSelf->__PVT__imem_reqstream_msg, vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_msg);
    if (((IData)(vlSelf->__PVT__mngr2proc_rdy) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_rdy = vlSelf->__PVT__mngr2proc_rdy;
    }
    vlSymsp->TOP__top__src.__PVT__rdy = vlSelf->__PVT__mngr2proc_rdy;
    if (((IData)(vlSelf->__PVT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_respstream_rdy = vlSelf->__PVT__dmem_respstream_rdy;
    }
    vlSymsp->TOP__top__mem.__PVT__memresp1_rdy = vlSelf->__PVT__dmem_respstream_rdy;
    if (((IData)(vlSelf->__PVT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_rdy = vlSelf->__PVT__imem_respstream_rdy;
    }
    vlSymsp->TOP__top__mem.__PVT__memresp0_rdy = vlSelf->__PVT__imem_respstream_rdy;
    if (((IData)(vlSelf->__PVT__imem_reqstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_val = vlSelf->__PVT__imem_reqstream_val;
    }
    vlSymsp->TOP__top__mem.__PVT__memreq0_val = vlSelf->__PVT__imem_reqstream_val;
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1fU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__mem__memreq0_msg, vlSelf->__PVT__imem_reqstream_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem.__PVT__memreq0_msg, vlSelf->__Vcellinp__mem__memreq0_msg);
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__6(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__6\n"); );
    // Body
    vlSelf->__PVT__proc2mngr_val = vlSymsp->TOP__top__DUT.__PVT__proc2mngr_val;
    vlSelf->__PVT__dmem_reqstream_val = vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_val;
    if (((IData)(vlSelf->__PVT__proc2mngr_val) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_val = vlSelf->__PVT__proc2mngr_val;
    }
    vlSymsp->TOP__top__sink.__PVT__val = vlSelf->__PVT__proc2mngr_val;
    if (((IData)(vlSelf->__PVT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_reqstream_val = vlSelf->__PVT__dmem_reqstream_val;
    }
    vlSymsp->TOP__top__mem.__PVT__memreq1_val = vlSelf->__PVT__dmem_reqstream_val;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__7(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__7\n"); );
    // Body
    vlSelf->__PVT__proc2mngr_msg = vlSymsp->TOP__top__DUT.__PVT__proc2mngr_msg;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0U)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 1U)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 2U)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 3U)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 4U)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 5U)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 6U)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 7U)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 8U)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 9U)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__sink.__PVT__msg = vlSelf->__PVT__proc2mngr_msg;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__8(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__8\n"); );
    // Body
    VL_ASSIGN_W(77,vlSelf->__PVT__dmem_reqstream_msg, vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_msg);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1fU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__mem__memreq1_msg, vlSelf->__PVT__dmem_reqstream_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem.__PVT__memreq1_msg, vlSelf->__Vcellinp__mem__memreq1_msg);
}
