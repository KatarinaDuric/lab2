// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_ProcFLMultiCycle.h"

VL_ATTR_COLD void Vtop_lab2_proc_ProcFLMultiCycle___stl_sequent__TOP__top__DUT__0(Vtop_lab2_proc_ProcFLMultiCycle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcFLMultiCycle___stl_sequent__TOP__top__DUT__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__commit_inst) ^ (IData)(vlSelf->__Vtogcov__commit_inst))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__commit_inst = vlSelf->__PVT__commit_inst;
    }
    if (((IData)(vlSelf->__PVT__stats_en) ^ (IData)(vlSelf->__Vtogcov__stats_en))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stats_en = vlSelf->__PVT__stats_en;
    }
    if (((IData)(vlSelf->__PVT__imem_reqstream_enq_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_enq_val = vlSelf->__PVT__imem_reqstream_enq_val;
    }
    if (((IData)(vlSelf->__PVT__imem_reqstream_enq_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_enq_rdy))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_enq_rdy = vlSelf->__PVT__imem_reqstream_enq_rdy;
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__imem_queue_num_free_entries), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__imem_queue_num_free_entries), 0U)))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imem_queue_num_free_entries, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__imem_queue_num_free_entries), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__imem_queue_num_free_entries), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__imem_queue_num_free_entries), 1U)))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imem_queue_num_free_entries, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__imem_queue_num_free_entries), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 0U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 0U)))) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 1U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 1U)))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 2U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 2U)))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 3U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 3U)))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 4U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 4U)))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 5U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 5U)))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 6U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 6U)))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0U)))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 1U)))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 2U)))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 3U)))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 4U)))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 5U)))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 6U)))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 7U)))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 8U)))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 9U)))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0xaU)))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0xbU)))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0xcU)))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0xdU)))) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0xeU)))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0xfU)))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x10U)))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x11U)))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x12U)))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x13U)))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x14U)))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x15U)))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x16U)))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x17U)))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x18U)))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x19U)))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x1aU)))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x1bU)))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x1cU)))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x1dU)))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x1eU)))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x1fU)))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0U)))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 1U)))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 2U)))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 3U)))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 4U)))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 5U)))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 6U)))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 7U)))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 8U)))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 9U)))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xaU)))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xbU)))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xcU)))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xdU)))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xeU)))) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xfU)))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x10U)))) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x11U)))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x12U)))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x13U)))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x14U)))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x15U)))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x16U)))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x17U)))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x18U)))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x19U)))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1aU)))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1bU)))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1cU)))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1dU)))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1eU)))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1fU)))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0U)))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 1U)))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 2U)))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 3U)))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 4U)))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 5U)))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 6U)))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 7U)))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 8U)))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 9U)))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0xaU)))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0xbU)))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0xcU)))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0xdU)))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0xeU)))) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0xfU)))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x10U)))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x11U)))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x12U)))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x13U)))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x14U)))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x15U)))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x16U)))) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x17U)))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x18U)))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x19U)))) {
        vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x1aU)))) {
        vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x1bU)))) {
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x1cU)))) {
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x1dU)))) {
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x1eU)))) {
        vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC_prev, 0x1fU)))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__PC_prev, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC_prev, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0U)))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 1U)))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 2U)))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 3U)))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 4U)))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 5U)))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 6U)))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 7U)))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 8U)))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 9U)))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xaU)))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xbU)))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xcU)))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xdU)))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xeU)))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xfU)))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x10U)))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x11U)))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x12U)))) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x13U)))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x14U)))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x15U)))) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x16U)))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x17U)))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x18U)))) {
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x19U)))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1aU)))) {
        vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1bU)))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1cU)))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1dU)))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1eU)))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1fU)))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1fU)));
    }
    vlSelf->__PVT__funct7 = vlSymsp->TOP__top__DUT__inst_unpack.__PVT__funct7;
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__inst_unpack.__PVT__inst 
        = vlSelf->__PVT__inst;
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__vc_trace.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dmem_queue.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__reset 
        = vlSelf->__PVT__reset;
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 0U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 0U)))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 1U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 1U)))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 2U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 2U)))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 3U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 3U)))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 4U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 4U)))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 5U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 5U)))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 6U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 6U)))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 6U)));
    }
}

VL_ATTR_COLD void Vtop_lab2_proc_ProcFLMultiCycle___stl_sequent__TOP__top__DUT__1(Vtop_lab2_proc_ProcFLMultiCycle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcFLMultiCycle___stl_sequent__TOP__top__DUT__1\n"); );
    // Body
    vlSelf->__PVT__funct3 = vlSymsp->TOP__top__DUT__inst_unpack.__PVT__funct3;
    vlSelf->__PVT__rd = vlSymsp->TOP__top__DUT__inst_unpack.__PVT__rd;
    vlSelf->__PVT__rs1 = vlSymsp->TOP__top__DUT__inst_unpack.__PVT__rs1;
    vlSelf->__PVT__rs2 = vlSymsp->TOP__top__DUT__inst_unpack.__PVT__rs2;
    vlSelf->__PVT__csr = vlSymsp->TOP__top__DUT__inst_unpack.__PVT__csr;
    vlSelf->__PVT__dmem_queue_num_free_entries = vlSymsp->TOP__top__DUT__dmem_queue.__PVT__num_free_entries;
    vlSelf->__PVT__dmem_reqstream_enq_rdy = vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_rdy;
    vlSelf->__PVT__proc2mngr_queue_num_free_entries 
        = vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__num_free_entries;
    vlSelf->__PVT__proc2mngr_enq_rdy = vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_rdy;
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__vc_trace.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dmem_queue.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__clk 
        = vlSelf->__PVT__clk;
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__funct3), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__funct3), 0U)))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__funct3, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__funct3), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__funct3), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__funct3), 1U)))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__funct3, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__funct3), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__funct3), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__funct3), 2U)))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__funct3, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__funct3), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd), 0U)))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rd, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd), 1U)))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rd, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd), 2U)))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rd, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd), 3U)))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rd, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd), 4U)))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rd, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs1), 0U)))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rs1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs1), 1U)))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rs1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs1), 2U)))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rs1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs1), 3U)))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rs1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs1), 4U)))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rs1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs2), 0U)))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rs2, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs2), 1U)))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rs2, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs2), 2U)))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rs2, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs2), 3U)))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rs2, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs2), 4U)))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rs2, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 0U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 0U)))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 1U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 1U)))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 2U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 2U)))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 3U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 3U)))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 4U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 4U)))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 5U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 5U)))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 6U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 6U)))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 7U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 7U)))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 8U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 8U)))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 9U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 9U)))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 0xaU) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 0xaU)))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 0xbU) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 0xbU)))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 0xbU)));
    }
    if (((IData)(vlSelf->__PVT__dmem_queue_num_free_entries) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_queue_num_free_entries))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_queue_num_free_entries 
            = vlSelf->__PVT__dmem_queue_num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__dmem_reqstream_enq_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_reqstream_enq_rdy))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_reqstream_enq_rdy = vlSelf->__PVT__dmem_reqstream_enq_rdy;
    }
    if (((IData)(vlSelf->__PVT__proc2mngr_queue_num_free_entries) 
         ^ (IData)(vlSelf->__Vtogcov__proc2mngr_queue_num_free_entries))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_queue_num_free_entries 
            = vlSelf->__PVT__proc2mngr_queue_num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__proc2mngr_enq_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__proc2mngr_enq_rdy))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_enq_rdy = vlSelf->__PVT__proc2mngr_enq_rdy;
    }
}

VL_ATTR_COLD void Vtop_lab2_proc_ProcFLMultiCycle___stl_sequent__TOP__top__DUT__2(Vtop_lab2_proc_ProcFLMultiCycle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcFLMultiCycle___stl_sequent__TOP__top__DUT__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__mngr2proc_val) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_val = vlSelf->__PVT__mngr2proc_val;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0U)))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 1U)))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 2U)))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 3U)))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 4U)))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 5U)))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 6U)))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 7U)))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 8U)))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 9U)))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_lab2_proc_ProcFLMultiCycle___stl_sequent__TOP__top__DUT__3(Vtop_lab2_proc_ProcFLMultiCycle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcFLMultiCycle___stl_sequent__TOP__top__DUT__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__imem_respstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_val = vlSelf->__PVT__imem_respstream_val;
    }
    vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__val 
        = vlSelf->__PVT__imem_respstream_val;
    if (((IData)(vlSelf->__PVT__dmem_respstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_respstream_val = vlSelf->__PVT__dmem_respstream_val;
    }
    vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__val 
        = vlSelf->__PVT__dmem_respstream_val;
}

VL_ATTR_COLD void Vtop_lab2_proc_ProcFLMultiCycle___stl_sequent__TOP__top__DUT__4(Vtop_lab2_proc_ProcFLMultiCycle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcFLMultiCycle___stl_sequent__TOP__top__DUT__4\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__msg 
        = vlSelf->__PVT__imem_respstream_msg;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__msg 
        = vlSelf->__PVT__dmem_respstream_msg;
}

VL_ATTR_COLD void Vtop_lab2_proc_ProcFLMultiCycle___stl_comb__TOP__top__DUT__0(Vtop_lab2_proc_ProcFLMultiCycle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcFLMultiCycle___stl_comb__TOP__top__DUT__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    if (((IData)(vlSelf->__PVT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_rdy = vlSelf->__PVT__imem_reqstream_rdy;
    }
    vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__rdy 
        = vlSelf->__PVT__imem_reqstream_rdy;
    vlSelf->__PVT__n_state = vlSelf->__PVT__state;
    vlSelf->__PVT__n_PC = vlSelf->__PVT__PC;
    vlSelf->__PVT__n_inst = vlSelf->__PVT__inst;
    vlSelf->__PVT__print_trace = 1U;
    vlSelf->__PVT__n_rf[0x1fU] = vlSelf->__PVT__rf[0x1fU];
    vlSelf->__PVT__n_rf[0x1eU] = vlSelf->__PVT__rf[0x1eU];
    vlSelf->__PVT__n_rf[0x1dU] = vlSelf->__PVT__rf[0x1dU];
    vlSelf->__PVT__n_rf[0x1cU] = vlSelf->__PVT__rf[0x1cU];
    vlSelf->__PVT__n_rf[0x1bU] = vlSelf->__PVT__rf[0x1bU];
    vlSelf->__PVT__n_rf[0x1aU] = vlSelf->__PVT__rf[0x1aU];
    vlSelf->__PVT__n_rf[0x19U] = vlSelf->__PVT__rf[0x19U];
    vlSelf->__PVT__n_rf[0x18U] = vlSelf->__PVT__rf[0x18U];
    vlSelf->__PVT__n_rf[0x17U] = vlSelf->__PVT__rf[0x17U];
    vlSelf->__PVT__n_rf[0x16U] = vlSelf->__PVT__rf[0x16U];
    vlSelf->__PVT__n_rf[0x15U] = vlSelf->__PVT__rf[0x15U];
    vlSelf->__PVT__n_rf[0x14U] = vlSelf->__PVT__rf[0x14U];
    vlSelf->__PVT__n_rf[0x13U] = vlSelf->__PVT__rf[0x13U];
    vlSelf->__PVT__n_rf[0x12U] = vlSelf->__PVT__rf[0x12U];
    vlSelf->__PVT__n_rf[0x11U] = vlSelf->__PVT__rf[0x11U];
    vlSelf->__PVT__n_rf[0x10U] = vlSelf->__PVT__rf[0x10U];
    vlSelf->__PVT__n_rf[0xfU] = vlSelf->__PVT__rf[0xfU];
    vlSelf->__PVT__n_rf[0xeU] = vlSelf->__PVT__rf[0xeU];
    vlSelf->__PVT__n_rf[0xdU] = vlSelf->__PVT__rf[0xdU];
    vlSelf->__PVT__n_rf[0xcU] = vlSelf->__PVT__rf[0xcU];
    vlSelf->__PVT__n_rf[0xbU] = vlSelf->__PVT__rf[0xbU];
    vlSelf->__PVT__n_rf[0xaU] = vlSelf->__PVT__rf[0xaU];
    vlSelf->__PVT__n_rf[9U] = vlSelf->__PVT__rf[9U];
    vlSelf->__PVT__n_rf[8U] = vlSelf->__PVT__rf[8U];
    vlSelf->__PVT__n_rf[7U] = vlSelf->__PVT__rf[7U];
    vlSelf->__PVT__n_rf[6U] = vlSelf->__PVT__rf[6U];
    vlSelf->__PVT__n_rf[5U] = vlSelf->__PVT__rf[5U];
    vlSelf->__PVT__n_rf[4U] = vlSelf->__PVT__rf[4U];
    vlSelf->__PVT__n_rf[3U] = vlSelf->__PVT__rf[3U];
    vlSelf->__PVT__n_rf[2U] = vlSelf->__PVT__rf[2U];
    vlSelf->__PVT__n_rf[1U] = vlSelf->__PVT__rf[1U];
    vlSelf->__PVT__n_rf[0U] = vlSelf->__PVT__rf[0U];
    vlSelf->__PVT__imem_reqstream_val = 0U;
    vlSelf->__PVT__dmem_reqstream_enq_msg_addr = 0U;
    vlSelf->__PVT__dmem_reqstream_enq_msg_data = 0U;
    vlSelf->__PVT__dmem_reqstream_enq_msg_type = 0U;
    vlSelf->__PVT__dmem_reqstream_enq_val = 0U;
    vlSelf->__PVT__dmem_respstream_rdy = 0U;
    vlSelf->__PVT__proc2mngr_enq_val = 0U;
    vlSelf->__PVT__proc2mngr_enq_msg = 0U;
    vlSelf->__PVT__mngr2proc_rdy = 0U;
    vlSelf->__PVT__imem_respstream_rdy = 0U;
    if (vlSelf->__PVT__reset) {
        vlSelf->__PVT__n_state = 0U;
        vlSelf->__PVT__n_rf[0x1fU] = 0U;
        vlSelf->__PVT__n_rf[0x1eU] = 0U;
        vlSelf->__PVT__n_rf[0x1dU] = 0U;
        vlSelf->__PVT__n_rf[0x1cU] = 0U;
        vlSelf->__PVT__n_rf[0x1bU] = 0U;
        vlSelf->__PVT__n_rf[0x1aU] = 0U;
        vlSelf->__PVT__n_rf[0x19U] = 0U;
        vlSelf->__PVT__n_rf[0x18U] = 0U;
        vlSelf->__PVT__n_rf[0x17U] = 0U;
        vlSelf->__PVT__n_rf[0x16U] = 0U;
        vlSelf->__PVT__n_rf[0x15U] = 0U;
        vlSelf->__PVT__n_rf[0x14U] = 0U;
        vlSelf->__PVT__n_rf[0x13U] = 0U;
        vlSelf->__PVT__n_rf[0x12U] = 0U;
        vlSelf->__PVT__n_rf[0x11U] = 0U;
        vlSelf->__PVT__n_rf[0x10U] = 0U;
        vlSelf->__PVT__n_rf[0xfU] = 0U;
        vlSelf->__PVT__n_rf[0xeU] = 0U;
        vlSelf->__PVT__n_rf[0xdU] = 0U;
        vlSelf->__PVT__n_rf[0xcU] = 0U;
        vlSelf->__PVT__n_rf[0xbU] = 0U;
        vlSelf->__PVT__n_rf[0xaU] = 0U;
        vlSelf->__PVT__n_rf[9U] = 0U;
        vlSelf->__PVT__n_rf[8U] = 0U;
        vlSelf->__PVT__n_rf[7U] = 0U;
        vlSelf->__PVT__n_rf[6U] = 0U;
        vlSelf->__PVT__n_rf[5U] = 0U;
        vlSelf->__PVT__n_rf[4U] = 0U;
        vlSelf->__PVT__n_rf[3U] = 0U;
        vlSelf->__PVT__n_rf[2U] = 0U;
        vlSelf->__PVT__n_rf[1U] = 0U;
        vlSelf->__PVT__n_rf[0U] = 0U;
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
    } else {
        if ((0U == vlSelf->__PVT__state)) {
            vlSelf->__PVT__n_state = 1U;
            vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        } else if ((1U == vlSelf->__PVT__state)) {
            vlSelf->__PVT__imem_reqstream_val = 1U;
            vlSelf->__PVT__imem_reqstream_msg_addr 
                = vlSelf->__PVT__PC;
            if (((IData)(vlSelf->__PVT__imem_reqstream_rdy) 
                 & (IData)(vlSelf->__PVT__imem_reqstream_val))) {
                vlSelf->__PVT__n_state = 2U;
                vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSelf->__PVT__n_state = 1U;
                vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        } else if ((2U == vlSelf->__PVT__state)) {
            vlSelf->__PVT__imem_respstream_rdy = 1U;
            if (((IData)(vlSelf->__PVT__imem_respstream_rdy) 
                 & (IData)(vlSelf->__PVT__imem_respstream_val))) {
                vlSelf->__PVT__n_state = 3U;
                vlSelf->__PVT__n_inst = VL_SEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0U, 0x20U);
                vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSelf->__PVT__n_state = 2U;
                vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        } else if ((3U == vlSelf->__PVT__state)) {
            vlSelf->__PVT__n_state = 0U;
            vlSelf->__PVT__n_PC = ((IData)(4U) + vlSelf->__PVT__PC);
            if (((((((((0x2073U == (0x707fU & vlSelf->__PVT__inst)) 
                       | (0x1073U == (0x707fU & vlSelf->__PVT__inst))) 
                      | (0x33U == (0xfe00707fU & vlSelf->__PVT__inst))) 
                     | (0x40000033U == (0xfe00707fU 
                                        & vlSelf->__PVT__inst))) 
                    | (0x7033U == (0xfe00707fU & vlSelf->__PVT__inst))) 
                   | (0x6033U == (0xfe00707fU & vlSelf->__PVT__inst))) 
                  | (0x4033U == (0xfe00707fU & vlSelf->__PVT__inst))) 
                 | (0x2033U == (0xfe00707fU & vlSelf->__PVT__inst)))) {
                if ((0x2073U == (0x707fU & vlSelf->__PVT__inst))) {
                    if ((0xfc0U == (IData)(vlSelf->__PVT__csr))) {
                        vlSelf->__PVT__mngr2proc_rdy = 1U;
                        if (vlSelf->__PVT__mngr2proc_val) {
                            vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                                = vlSelf->__PVT__mngr2proc_msg;
                            vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
                        } else {
                            vlSelf->__PVT__n_state = 3U;
                            vlSelf->__PVT__n_PC = vlSelf->__PVT__PC;
                            vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
                    } else if ((0xfc1U == (IData)(vlSelf->__PVT__csr))) {
                        vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] = 1U;
                        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
                    } else if ((0xf14U == (IData)(vlSelf->__PVT__csr))) {
                        vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] = 0U;
                        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x1073U == (0x707fU & vlSelf->__PVT__inst))) {
                    if ((0x7c0U == (IData)(vlSelf->__PVT__csr))) {
                        vlSelf->__PVT__proc2mngr_enq_val = 1U;
                        vlSelf->__PVT__proc2mngr_enq_msg 
                            = vlSelf->__PVT__rf[vlSelf->__PVT__rs1];
                        if (vlSelf->__PVT__proc2mngr_enq_rdy) {
                            vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
                        } else {
                            vlSelf->__PVT__n_state = 3U;
                            vlSelf->__PVT__n_PC = vlSelf->__PVT__PC;
                            vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x33U == (0xfe00707fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           + vlSelf->__PVT__rf[vlSelf->__PVT__rs2]);
                    vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x40000033U == (0xfe00707fU 
                                            & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           - vlSelf->__PVT__rf[vlSelf->__PVT__rs2]);
                    vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x7033U == (0xfe00707fU 
                                        & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           & vlSelf->__PVT__rf[vlSelf->__PVT__rs2]);
                    vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x6033U == (0xfe00707fU 
                                        & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           | vlSelf->__PVT__rf[vlSelf->__PVT__rs2]);
                    vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x4033U == (0xfe00707fU 
                                        & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           ^ vlSelf->__PVT__rf[vlSelf->__PVT__rs2]);
                    vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
                } else {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = VL_EXTEND_II(32,1, VL_LTS_III(32, 
                                                        vlSelf->__PVT__rf
                                                        [vlSelf->__PVT__rs1], 
                                                        vlSelf->__PVT__rf
                                                        [vlSelf->__PVT__rs2]));
                    vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
                }
            } else if (((((((((0x3033U == (0xfe00707fU 
                                           & vlSelf->__PVT__inst)) 
                              | (0x2000033U == (0xfe00707fU 
                                                & vlSelf->__PVT__inst))) 
                             | (0x13U == (0x707fU & vlSelf->__PVT__inst))) 
                            | (0x7013U == (0x707fU 
                                           & vlSelf->__PVT__inst))) 
                           | (0x6013U == (0x707fU & vlSelf->__PVT__inst))) 
                          | (0x4013U == (0x707fU & vlSelf->__PVT__inst))) 
                         | (0x2013U == (0x707fU & vlSelf->__PVT__inst))) 
                        | (0x3013U == (0x707fU & vlSelf->__PVT__inst)))) {
                if ((0x3033U == (0xfe00707fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = VL_EXTEND_II(32,1, (vlSelf->__PVT__rf
                                              [vlSelf->__PVT__rs1] 
                                              < vlSelf->__PVT__rf
                                              [vlSelf->__PVT__rs2]));
                    vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x2000033U == (0xfe00707fU 
                                           & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           * vlSelf->__PVT__rf[vlSelf->__PVT__rs2]);
                    vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x13U == (0x707fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           + (IData)(VL_EXTENDS_II(32,12, 
                                                   ([&]() {
                                        vlSelf->__Vfunc_imm_i__0__inst 
                                            = vlSelf->__PVT__inst;
                                        vlSelf->__Vfunc_imm_i__0__Vfuncout 
                                            = VL_CONCAT_III(12,1,11, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__0__inst, 0x1fU)), 
                                                            VL_CONCAT_III(11,6,5, 
                                                                          (0x3fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__0__inst, 0x19U, 6U)), 
                                                                          VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__0__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__0__inst, 0x14U)))));
                                        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
                                    }(), (IData)(vlSelf->__Vfunc_imm_i__0__Vfuncout)))));
                    vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x7013U == (0x707fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           & VL_EXTENDS_II(32,12, ([&]() {
                                    vlSelf->__Vfunc_imm_i__1__inst 
                                        = vlSelf->__PVT__inst;
                                    vlSelf->__Vfunc_imm_i__1__Vfuncout 
                                        = VL_CONCAT_III(12,1,11, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__1__inst, 0x1fU)), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__1__inst, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__1__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__1__inst, 0x14U)))));
                                    vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
                                }(), (IData)(vlSelf->__Vfunc_imm_i__1__Vfuncout))));
                    vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x6013U == (0x707fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           | VL_EXTENDS_II(32,12, ([&]() {
                                    vlSelf->__Vfunc_imm_i__2__inst 
                                        = vlSelf->__PVT__inst;
                                    vlSelf->__Vfunc_imm_i__2__Vfuncout 
                                        = VL_CONCAT_III(12,1,11, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__2__inst, 0x1fU)), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__2__inst, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__2__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__2__inst, 0x14U)))));
                                    vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
                                }(), (IData)(vlSelf->__Vfunc_imm_i__2__Vfuncout))));
                    vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x4013U == (0x707fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           ^ VL_EXTENDS_II(32,12, ([&]() {
                                    vlSelf->__Vfunc_imm_i__3__inst 
                                        = vlSelf->__PVT__inst;
                                    vlSelf->__Vfunc_imm_i__3__Vfuncout 
                                        = VL_CONCAT_III(12,1,11, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__3__inst, 0x1fU)), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__3__inst, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__3__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__3__inst, 0x14U)))));
                                    vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
                                }(), (IData)(vlSelf->__Vfunc_imm_i__3__Vfuncout))));
                    vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x2013U == (0x707fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = VL_EXTEND_II(32,1, VL_LTS_III(32, 
                                                        vlSelf->__PVT__rf
                                                        [vlSelf->__PVT__rs1], 
                                                        VL_EXTENDS_II(32,12, 
                                                                      ([&]() {
                                        vlSelf->__Vfunc_imm_i__4__inst 
                                            = vlSelf->__PVT__inst;
                                        vlSelf->__Vfunc_imm_i__4__Vfuncout 
                                            = VL_CONCAT_III(12,1,11, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__4__inst, 0x1fU)), 
                                                            VL_CONCAT_III(11,6,5, 
                                                                          (0x3fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__4__inst, 0x19U, 6U)), 
                                                                          VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__4__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__4__inst, 0x14U)))));
                                        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
                                    }(), (IData)(vlSelf->__Vfunc_imm_i__4__Vfuncout)))));
                    vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
                } else {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = VL_EXTEND_II(32,1, (vlSelf->__PVT__rf
                                              [vlSelf->__PVT__rs1] 
                                              < VL_CONCAT_III(32,20,12, 
                                                              (0xfffffU 
                                                               & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1fU)), 0x14U)), 
                                                              ([&]() {
                                        vlSelf->__Vfunc_imm_i__5__inst 
                                            = vlSelf->__PVT__inst;
                                        vlSelf->__Vfunc_imm_i__5__Vfuncout 
                                            = VL_CONCAT_III(12,1,11, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__5__inst, 0x1fU)), 
                                                            VL_CONCAT_III(11,6,5, 
                                                                          (0x3fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__5__inst, 0x19U, 6U)), 
                                                                          VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__5__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__5__inst, 0x14U)))));
                                        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
                                    }(), (IData)(vlSelf->__Vfunc_imm_i__5__Vfuncout)))));
                    vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
                }
            } else if (((((((((0x40005033U == (0xfe00707fU 
                                               & vlSelf->__PVT__inst)) 
                              | (0x5033U == (0xfe00707fU 
                                             & vlSelf->__PVT__inst))) 
                             | (0x1033U == (0xfe00707fU 
                                            & vlSelf->__PVT__inst))) 
                            | (0x40005013U == (0xfe00707fU 
                                               & vlSelf->__PVT__inst))) 
                           | (0x5013U == (0xfe00707fU 
                                          & vlSelf->__PVT__inst))) 
                          | (0x1013U == (0xfe00707fU 
                                         & vlSelf->__PVT__inst))) 
                         | (0x37U == (0x7fU & vlSelf->__PVT__inst))) 
                        | (0x17U == (0x7fU & vlSelf->__PVT__inst)))) {
                if ((0x40005033U == (0xfe00707fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__rf
                                         [vlSelf->__PVT__rs1], 
                                         (0x1fU & VL_SEL_IIII(32, 
                                                              vlSelf->__PVT__rf
                                                              [vlSelf->__PVT__rs2], 0U, 5U)));
                    vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x5033U == (0xfe00707fU 
                                        & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           >> (0x1fU & VL_SEL_IIII(32, 
                                                   vlSelf->__PVT__rf
                                                   [vlSelf->__PVT__rs2], 0U, 5U)));
                    vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x1033U == (0xfe00707fU 
                                        & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           << (0x1fU & VL_SEL_IIII(32, 
                                                   vlSelf->__PVT__rf
                                                   [vlSelf->__PVT__rs2], 0U, 5U)));
                    vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__rf
                                         [vlSelf->__PVT__rs1], 
                                         ([&]() {
                                vlSelf->__Vfunc_imm_shamt__6__inst 
                                    = vlSelf->__PVT__inst;
                                vlSelf->__Vfunc_imm_shamt__6__Vfuncout 
                                    = VL_CONCAT_III(5,4,1, 
                                                    (0xfU 
                                                     & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_shamt__6__inst, 0x15U, 4U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_shamt__6__inst, 0x14U)));
                                vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
                            }(), (IData)(vlSelf->__Vfunc_imm_shamt__6__Vfuncout)));
                    vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           >> ([&]() {
                                vlSelf->__Vfunc_imm_shamt__7__inst 
                                    = vlSelf->__PVT__inst;
                                vlSelf->__Vfunc_imm_shamt__7__Vfuncout 
                                    = VL_CONCAT_III(5,4,1, 
                                                    (0xfU 
                                                     & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_shamt__7__inst, 0x15U, 4U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_shamt__7__inst, 0x14U)));
                                vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
                            }(), (IData)(vlSelf->__Vfunc_imm_shamt__7__Vfuncout)));
                    vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           << ([&]() {
                                vlSelf->__Vfunc_imm_shamt__8__inst 
                                    = vlSelf->__PVT__inst;
                                vlSelf->__Vfunc_imm_shamt__8__Vfuncout 
                                    = VL_CONCAT_III(5,4,1, 
                                                    (0xfU 
                                                     & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_shamt__8__inst, 0x15U, 4U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_shamt__8__inst, 0x14U)));
                                vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
                            }(), (IData)(vlSelf->__Vfunc_imm_shamt__8__Vfuncout)));
                    vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x37U == (0x7fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = ((0x1fU >= 0xcU) ? ((IData)(
                                                      VL_EXTEND_II(32,20, 
                                                                   ([&]() {
                                            vlSelf->__Vfunc_imm_u_sh12__9__inst 
                                                = vlSelf->__PVT__inst;
                                            vlSelf->__Vfunc_imm_u_sh12__9__Vfuncout 
                                                = VL_CONCAT_III(20,1,19, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_u_sh12__9__inst, 0x1fU)), 
                                                                VL_CONCAT_III(19,11,8, 
                                                                              (0x7ffU 
                                                                               & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_u_sh12__9__inst, 0x14U, 0xbU)), 
                                                                              (0xffU 
                                                                               & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_u_sh12__9__inst, 0xcU, 8U))));
                                            vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
                                        }(), vlSelf->__Vfunc_imm_u_sh12__9__Vfuncout))) 
                                              << 0xcU)
                            : 0U);
                    vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
                } else {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = (vlSelf->__PVT__PC + (IData)(
                                                       ((0x1fU 
                                                         >= 0xcU)
                                                         ? 
                                                        ((IData)(
                                                                 VL_EXTEND_II(32,20, 
                                                                              ([&]() {
                                                    vlSelf->__Vfunc_imm_u_sh12__10__inst 
                                                        = vlSelf->__PVT__inst;
                                                    vlSelf->__Vfunc_imm_u_sh12__10__Vfuncout 
                                                        = 
                                                        VL_CONCAT_III(20,1,19, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_u_sh12__10__inst, 0x1fU)), 
                                                                      VL_CONCAT_III(19,11,8, 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_u_sh12__10__inst, 0x14U, 0xbU)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_u_sh12__10__inst, 0xcU, 8U))));
                                                    vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
                                                }(), vlSelf->__Vfunc_imm_u_sh12__10__Vfuncout))) 
                                                         << 0xcU)
                                                         : 0U)));
                    vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
                }
            } else if (((((((((0x2003U == (0x707fU 
                                           & vlSelf->__PVT__inst)) 
                              | (0x2023U == (0x707fU 
                                             & vlSelf->__PVT__inst))) 
                             | (0x6fU == (0x7fU & vlSelf->__PVT__inst))) 
                            | (0x67U == (0x707fU & vlSelf->__PVT__inst))) 
                           | (0x63U == (0x707fU & vlSelf->__PVT__inst))) 
                          | (0x1063U == (0x707fU & vlSelf->__PVT__inst))) 
                         | (0x4063U == (0x707fU & vlSelf->__PVT__inst))) 
                        | (0x5063U == (0x707fU & vlSelf->__PVT__inst)))) {
                if ((0x2003U == (0x707fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__dmem_reqstream_enq_msg_addr 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           + (IData)(VL_EXTENDS_II(32,12, 
                                                   ([&]() {
                                        vlSelf->__Vfunc_imm_i__11__inst 
                                            = vlSelf->__PVT__inst;
                                        vlSelf->__Vfunc_imm_i__11__Vfuncout 
                                            = VL_CONCAT_III(12,1,11, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__11__inst, 0x1fU)), 
                                                            VL_CONCAT_III(11,6,5, 
                                                                          (0x3fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__11__inst, 0x19U, 6U)), 
                                                                          VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__11__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__11__inst, 0x14U)))));
                                        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
                                    }(), (IData)(vlSelf->__Vfunc_imm_i__11__Vfuncout)))));
                    vlSelf->__PVT__dmem_reqstream_enq_msg_data = 0U;
                    vlSelf->__PVT__dmem_reqstream_enq_msg_type = 0U;
                    vlSelf->__PVT__dmem_reqstream_enq_val = 1U;
                    if (((IData)(vlSelf->__PVT__dmem_reqstream_enq_rdy) 
                         & (IData)(vlSelf->__PVT__dmem_reqstream_enq_val))) {
                        vlSelf->__PVT__n_state = 4U;
                        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        vlSelf->__PVT__n_state = 3U;
                        vlSelf->__PVT__n_PC = vlSelf->__PVT__PC;
                        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x2023U == (0x707fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__dmem_reqstream_enq_msg_addr 
                        = (vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                           + (IData)(VL_EXTENDS_II(32,12, 
                                                   ([&]() {
                                        vlSelf->__Vfunc_imm_s__12__inst 
                                            = vlSelf->__PVT__inst;
                                        vlSelf->__Vfunc_imm_s__12__Vfuncout 
                                            = VL_CONCAT_III(12,1,11, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_s__12__inst, 0x1fU)), 
                                                            VL_CONCAT_III(11,6,5, 
                                                                          (0x3fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_s__12__inst, 0x19U, 6U)), 
                                                                          VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_s__12__inst, 8U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_s__12__inst, 7U)))));
                                        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
                                    }(), (IData)(vlSelf->__Vfunc_imm_s__12__Vfuncout)))));
                    vlSelf->__PVT__dmem_reqstream_enq_msg_data 
                        = vlSelf->__PVT__rf[vlSelf->__PVT__rs2];
                    vlSelf->__PVT__dmem_reqstream_enq_msg_type = 1U;
                    vlSelf->__PVT__dmem_reqstream_enq_val = 1U;
                    if (((IData)(vlSelf->__PVT__dmem_reqstream_enq_val) 
                         & (IData)(vlSelf->__PVT__dmem_reqstream_enq_rdy))) {
                        vlSelf->__PVT__n_state = 4U;
                        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        vlSelf->__PVT__n_state = 3U;
                        vlSelf->__PVT__n_PC = vlSelf->__PVT__PC;
                        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x6fU == (0x7fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = ((IData)(4U) + vlSelf->__PVT__PC);
                    vlSelf->__PVT__n_PC = (vlSelf->__PVT__PC 
                                           + (IData)(
                                                     VL_EXTENDS_II(32,21, 
                                                                   ([&]() {
                                        vlSelf->__Vfunc_imm_j__13__inst 
                                            = vlSelf->__PVT__inst;
                                        vlSelf->__Vfunc_imm_j__13__Vfuncout 
                                            = VL_CONCAT_III(21,1,20, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_j__13__inst, 0x1fU)), 
                                                            VL_CONCAT_III(20,8,12, 
                                                                          (0xffU 
                                                                           & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_j__13__inst, 0xcU, 8U)), 
                                                                          VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_j__13__inst, 0x14U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_j__13__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_j__13__inst, 0x15U, 4U)), 0U)))));
                                        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
                                    }(), vlSelf->__Vfunc_imm_j__13__Vfuncout))));
                    vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x67U == (0x707fU & vlSelf->__PVT__inst))) {
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = ((IData)(4U) + vlSelf->__PVT__PC);
                    vlSelf->__PVT__n_PC = (0xfffffffeU 
                                           & (vlSelf->__PVT__rf
                                              [vlSelf->__PVT__rs1] 
                                              + (IData)(
                                                        VL_EXTENDS_II(32,12, 
                                                                      ([&]() {
                                            vlSelf->__Vfunc_imm_i__14__inst 
                                                = vlSelf->__PVT__inst;
                                            vlSelf->__Vfunc_imm_i__14__Vfuncout 
                                                = VL_CONCAT_III(12,1,11, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__14__inst, 0x1fU)), 
                                                                VL_CONCAT_III(11,6,5, 
                                                                              (0x3fU 
                                                                               & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__14__inst, 0x19U, 6U)), 
                                                                              VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_i__14__inst, 0x15U, 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_i__14__inst, 0x14U)))));
                                            vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
                                        }(), (IData)(vlSelf->__Vfunc_imm_i__14__Vfuncout))))));
                    vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x63U == (0x707fU & vlSelf->__PVT__inst))) {
                    if ((vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                         == vlSelf->__PVT__rf[vlSelf->__PVT__rs2])) {
                        vlSelf->__PVT__n_PC = (vlSelf->__PVT__PC 
                                               + (IData)(
                                                         VL_EXTENDS_II(32,13, 
                                                                       ([&]() {
                                            vlSelf->__Vfunc_imm_b__15__inst 
                                                = vlSelf->__PVT__inst;
                                            vlSelf->__Vfunc_imm_b__15__Vfuncout 
                                                = VL_CONCAT_III(13,1,12, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__15__inst, 0x1fU)), 
                                                                VL_CONCAT_III(12,1,11, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__15__inst, 7U)), 
                                                                              VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__15__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__15__inst, 8U, 4U)), 0U))));
                                            vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
                                        }(), (IData)(vlSelf->__Vfunc_imm_b__15__Vfuncout)))));
                        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x1063U == (0x707fU & vlSelf->__PVT__inst))) {
                    if ((vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                         != vlSelf->__PVT__rf[vlSelf->__PVT__rs2])) {
                        vlSelf->__PVT__n_PC = (vlSelf->__PVT__PC 
                                               + (IData)(
                                                         VL_EXTENDS_II(32,13, 
                                                                       ([&]() {
                                            vlSelf->__Vfunc_imm_b__16__inst 
                                                = vlSelf->__PVT__inst;
                                            vlSelf->__Vfunc_imm_b__16__Vfuncout 
                                                = VL_CONCAT_III(13,1,12, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__16__inst, 0x1fU)), 
                                                                VL_CONCAT_III(12,1,11, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__16__inst, 7U)), 
                                                                              VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__16__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__16__inst, 8U, 4U)), 0U))));
                                            vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
                                        }(), (IData)(vlSelf->__Vfunc_imm_b__16__Vfuncout)))));
                        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
                } else if ((0x4063U == (0x707fU & vlSelf->__PVT__inst))) {
                    if (VL_LTS_III(32, vlSelf->__PVT__rf
                                   [vlSelf->__PVT__rs1], 
                                   vlSelf->__PVT__rf
                                   [vlSelf->__PVT__rs2])) {
                        vlSelf->__PVT__n_PC = (vlSelf->__PVT__PC 
                                               + (IData)(
                                                         VL_EXTENDS_II(32,13, 
                                                                       ([&]() {
                                            vlSelf->__Vfunc_imm_b__17__inst 
                                                = vlSelf->__PVT__inst;
                                            vlSelf->__Vfunc_imm_b__17__Vfuncout 
                                                = VL_CONCAT_III(13,1,12, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__17__inst, 0x1fU)), 
                                                                VL_CONCAT_III(12,1,11, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__17__inst, 7U)), 
                                                                              VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__17__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__17__inst, 8U, 4U)), 0U))));
                                            vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
                                        }(), (IData)(vlSelf->__Vfunc_imm_b__17__Vfuncout)))));
                        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
                } else {
                    if (VL_GTES_III(32, vlSelf->__PVT__rf
                                    [vlSelf->__PVT__rs1], 
                                    vlSelf->__PVT__rf
                                    [vlSelf->__PVT__rs2])) {
                        vlSelf->__PVT__n_PC = (vlSelf->__PVT__PC 
                                               + (IData)(
                                                         VL_EXTENDS_II(32,13, 
                                                                       ([&]() {
                                            vlSelf->__Vfunc_imm_b__18__inst 
                                                = vlSelf->__PVT__inst;
                                            vlSelf->__Vfunc_imm_b__18__Vfuncout 
                                                = VL_CONCAT_III(13,1,12, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__18__inst, 0x1fU)), 
                                                                VL_CONCAT_III(12,1,11, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__18__inst, 7U)), 
                                                                              VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__18__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__18__inst, 8U, 4U)), 0U))));
                                            vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
                                        }(), (IData)(vlSelf->__Vfunc_imm_b__18__Vfuncout)))));
                        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
                }
            } else if ((0x6063U == (0x707fU & vlSelf->__PVT__inst))) {
                if ((vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                     < vlSelf->__PVT__rf[vlSelf->__PVT__rs2])) {
                    vlSelf->__PVT__n_PC = (vlSelf->__PVT__PC 
                                           + (IData)(
                                                     VL_EXTENDS_II(32,13, 
                                                                   ([&]() {
                                        vlSelf->__Vfunc_imm_b__19__inst 
                                            = vlSelf->__PVT__inst;
                                        vlSelf->__Vfunc_imm_b__19__Vfuncout 
                                            = VL_CONCAT_III(13,1,12, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__19__inst, 0x1fU)), 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__19__inst, 7U)), 
                                                                          VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__19__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__19__inst, 8U, 4U)), 0U))));
                                        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
                                    }(), (IData)(vlSelf->__Vfunc_imm_b__19__Vfuncout)))));
                    vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
                } else {
                    vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
            } else if ((0x7063U == (0x707fU & vlSelf->__PVT__inst))) {
                if ((vlSelf->__PVT__rf[vlSelf->__PVT__rs1] 
                     >= vlSelf->__PVT__rf[vlSelf->__PVT__rs2])) {
                    vlSelf->__PVT__n_PC = (vlSelf->__PVT__PC 
                                           + (IData)(
                                                     VL_EXTENDS_II(32,13, 
                                                                   ([&]() {
                                        vlSelf->__Vfunc_imm_b__20__inst 
                                            = vlSelf->__PVT__inst;
                                        vlSelf->__Vfunc_imm_b__20__Vfuncout 
                                            = VL_CONCAT_III(13,1,12, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__20__inst, 0x1fU)), 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__Vfunc_imm_b__20__inst, 7U)), 
                                                                          VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__20__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__Vfunc_imm_b__20__inst, 8U, 4U)), 0U))));
                                        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
                                    }(), (IData)(vlSelf->__Vfunc_imm_b__20__Vfuncout)))));
                    vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
                } else {
                    vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        } else if ((4U == vlSelf->__PVT__state)) {
            vlSelf->__PVT__n_state = 0U;
            if ((0x2003U == (0x707fU & vlSelf->__PVT__inst))) {
                vlSelf->__PVT__dmem_respstream_rdy = 1U;
                if (((IData)(vlSelf->__PVT__dmem_respstream_rdy) 
                     & (IData)(vlSelf->__PVT__dmem_respstream_val))) {
                    vlSelf->__PVT__n_state = 0U;
                    vlSelf->__PVT__n_rf[vlSelf->__PVT__rd] 
                        = VL_SEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0U, 0x20U);
                    vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
                } else {
                    vlSelf->__PVT__n_state = 4U;
                    vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
            } else if ((0x2023U == (0x707fU & vlSelf->__PVT__inst))) {
                vlSelf->__PVT__dmem_respstream_rdy = 1U;
                if (((IData)(vlSelf->__PVT__dmem_respstream_rdy) 
                     & (IData)(vlSelf->__PVT__dmem_respstream_val))) {
                    vlSelf->__PVT__n_state = 0U;
                    vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
                } else {
                    vlSelf->__PVT__n_state = 4U;
                    vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        }
        if ((vlSelf->__PVT__PC != vlSelf->__PVT__n_PC)) {
            vlSelf->__PVT__print_trace = 0U;
            vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__print_trace) ^ (IData)(vlSelf->__Vtogcov__print_trace))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__print_trace = vlSelf->__PVT__print_trace;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0U)))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 1U)))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 2U)))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 3U)))) {
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 4U)))) {
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 5U)))) {
        vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 6U)))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 7U)))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 8U)))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 9U)))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0xaU)))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0xbU)))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0xcU)))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0xdU)))) {
        vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0xeU)))) {
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0xfU)))) {
        vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x10U)))) {
        vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x11U)))) {
        vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x12U)))) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x13U)))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x14U)))) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x15U)))) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x16U)))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x17U)))) {
        vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x18U)))) {
        vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x19U)))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x1aU)))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x1bU)))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x1cU)))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x1dU)))) {
        vlSymsp->__Vcoverage[1170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x1eU)))) {
        vlSymsp->__Vcoverage[1171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_PC, 0x1fU)))) {
        vlSymsp->__Vcoverage[1172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__n_PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_PC, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0U)))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 1U)))) {
        vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 2U)))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 3U)))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 4U)))) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 5U)))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 6U)))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 7U)))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 8U)))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 9U)))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0xaU)))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0xbU)))) {
        vlSymsp->__Vcoverage[1216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0xcU)))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0xdU)))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0xeU)))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0xfU)))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x10U)))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x11U)))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x12U)))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x13U)))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x14U)))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x15U)))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x16U)))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x17U)))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x18U)))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x19U)))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x1aU)))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x1bU)))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x1cU)))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x1dU)))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x1eU)))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__n_inst, 0x1fU)))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__n_inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__n_inst, 0x1fU)));
    }
    if (((IData)(vlSelf->__PVT__mngr2proc_rdy) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_rdy = vlSelf->__PVT__mngr2proc_rdy;
    }
    if (((IData)(vlSelf->__PVT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_respstream_rdy = vlSelf->__PVT__dmem_respstream_rdy;
    }
    vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__rdy 
        = vlSelf->__PVT__dmem_respstream_rdy;
    if (((IData)(vlSelf->__PVT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_rdy = vlSelf->__PVT__imem_respstream_rdy;
    }
    vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__rdy 
        = vlSelf->__PVT__imem_respstream_rdy;
    if (((IData)(vlSelf->__PVT__proc2mngr_enq_val) 
         ^ (IData)(vlSelf->__Vtogcov__proc2mngr_enq_val))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_enq_val = vlSelf->__PVT__proc2mngr_enq_val;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_val 
        = vlSelf->__PVT__proc2mngr_enq_val;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_msg 
        = vlSelf->__PVT__proc2mngr_enq_msg;
    if (((IData)(vlSelf->__PVT__imem_reqstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_val = vlSelf->__PVT__imem_reqstream_val;
    }
    vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__val 
        = vlSelf->__PVT__imem_reqstream_val;
    if (((IData)(vlSelf->__PVT__dmem_reqstream_enq_val) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_reqstream_enq_val = vlSelf->__PVT__dmem_reqstream_enq_val;
    }
    vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_val 
        = vlSelf->__PVT__dmem_reqstream_enq_val;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1fU)));
    }
    VL_CONCAT_WQQ(77,43,34, __Vtemp_1, VL_EXTEND_QI(43,32, vlSelf->__PVT__imem_reqstream_msg_addr), 0ULL);
    VL_ASSIGN_W(77,vlSelf->__PVT__imem_reqstream_msg, __Vtemp_1);
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__dmem_reqstream_enq_msg_type), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__dmem_reqstream_enq_msg_type), 0U)))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_type, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__dmem_reqstream_enq_msg_type), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__dmem_reqstream_enq_msg_type), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__dmem_reqstream_enq_msg_type), 1U)))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_type, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__dmem_reqstream_enq_msg_type), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__dmem_reqstream_enq_msg_type), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__dmem_reqstream_enq_msg_type), 2U)))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_type, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__dmem_reqstream_enq_msg_type), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1fU)));
    }
    VL_ASSIGNSEL_WI(77,32,0U, vlSelf->__PVT__dmem_reqstream_enq_msg, vlSelf->__PVT__dmem_reqstream_enq_msg_data);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1fU)));
    }
    VL_ASSIGNSEL_WQ(77,45,0x20U, vlSelf->__PVT__dmem_reqstream_enq_msg, 
                    VL_CONCAT_QIQ(45,3,42, (IData)(vlSelf->__PVT__dmem_reqstream_enq_msg_type), 
                                  VL_CONCAT_QQI(42,40,2, 
                                                VL_EXTEND_QI(40,32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr), 0U)));
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1fU)));
    }
    VL_ASSIGN_W(77,vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__msg, vlSelf->__PVT__imem_reqstream_msg);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1fU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__dmem_queue__enq_msg, vlSelf->__PVT__dmem_reqstream_enq_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_msg, vlSelf->__Vcellinp__dmem_queue__enq_msg);
}
