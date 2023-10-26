// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_tinyrv2_encoding_InstUnpack.h"

VL_ATTR_COLD void Vtop_lab2_proc_tinyrv2_encoding_InstUnpack___stl_sequent__TOP__top__DUT__inst_unpack__0(Vtop_lab2_proc_tinyrv2_encoding_InstUnpack* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_tinyrv2_encoding_InstUnpack___stl_sequent__TOP__top__DUT__inst_unpack__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 0U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 0U)))) {
        vlSymsp->__Vcoverage[2434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 1U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 1U)))) {
        vlSymsp->__Vcoverage[2435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 2U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 2U)))) {
        vlSymsp->__Vcoverage[2436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 3U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 3U)))) {
        vlSymsp->__Vcoverage[2437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 4U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 4U)))) {
        vlSymsp->__Vcoverage[2438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 5U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 5U)))) {
        vlSymsp->__Vcoverage[2439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 6U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__funct7), 6U)))) {
        vlSymsp->__Vcoverage[2440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__funct7, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__funct7), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0U)))) {
        vlSymsp->__Vcoverage[2377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 1U)))) {
        vlSymsp->__Vcoverage[2378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 2U)))) {
        vlSymsp->__Vcoverage[2379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 3U)))) {
        vlSymsp->__Vcoverage[2380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 4U)))) {
        vlSymsp->__Vcoverage[2381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 5U)))) {
        vlSymsp->__Vcoverage[2382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 6U)))) {
        vlSymsp->__Vcoverage[2383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 7U)))) {
        vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 8U)))) {
        vlSymsp->__Vcoverage[2385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 9U)))) {
        vlSymsp->__Vcoverage[2386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xaU)))) {
        vlSymsp->__Vcoverage[2387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xbU)))) {
        vlSymsp->__Vcoverage[2388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xcU)))) {
        vlSymsp->__Vcoverage[2389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xdU)))) {
        vlSymsp->__Vcoverage[2390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xeU)))) {
        vlSymsp->__Vcoverage[2391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xfU)))) {
        vlSymsp->__Vcoverage[2392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x10U)))) {
        vlSymsp->__Vcoverage[2393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x11U)))) {
        vlSymsp->__Vcoverage[2394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x12U)))) {
        vlSymsp->__Vcoverage[2395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x13U)))) {
        vlSymsp->__Vcoverage[2396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x14U)))) {
        vlSymsp->__Vcoverage[2397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x15U)))) {
        vlSymsp->__Vcoverage[2398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x16U)))) {
        vlSymsp->__Vcoverage[2399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x17U)))) {
        vlSymsp->__Vcoverage[2400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x18U)))) {
        vlSymsp->__Vcoverage[2401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x19U)))) {
        vlSymsp->__Vcoverage[2402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1aU)))) {
        vlSymsp->__Vcoverage[2403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1bU)))) {
        vlSymsp->__Vcoverage[2404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1cU)))) {
        vlSymsp->__Vcoverage[2405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1dU)))) {
        vlSymsp->__Vcoverage[2406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1eU)))) {
        vlSymsp->__Vcoverage[2407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1fU)))) {
        vlSymsp->__Vcoverage[2408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1fU)));
    }
    vlSelf->__PVT__funct3 = (7U & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0xcU, 3U));
    vlSelf->__PVT__opcode = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0U, 7U));
    vlSelf->__PVT__rd = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__inst, 7U, 5U));
    vlSelf->__PVT__rs1 = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0xfU, 5U));
    vlSelf->__PVT__rs2 = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0x14U, 5U));
    vlSelf->__PVT__csr = (0xfffU & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0x14U, 0xcU));
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__funct3), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__funct3), 0U)))) {
        vlSymsp->__Vcoverage[2431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__funct3, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__funct3), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__funct3), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__funct3), 1U)))) {
        vlSymsp->__Vcoverage[2432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__funct3, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__funct3), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__funct3), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__funct3), 2U)))) {
        vlSymsp->__Vcoverage[2433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__funct3, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__funct3), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 0U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 0U)))) {
        vlSymsp->__Vcoverage[2409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 1U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 1U)))) {
        vlSymsp->__Vcoverage[2410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 2U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 2U)))) {
        vlSymsp->__Vcoverage[2411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 3U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 3U)))) {
        vlSymsp->__Vcoverage[2412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 4U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 4U)))) {
        vlSymsp->__Vcoverage[2413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 5U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 5U)))) {
        vlSymsp->__Vcoverage[2414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 6U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__opcode), 6U)))) {
        vlSymsp->__Vcoverage[2415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opcode, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd), 0U)))) {
        vlSymsp->__Vcoverage[2416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rd, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd), 1U)))) {
        vlSymsp->__Vcoverage[2417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rd, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd), 2U)))) {
        vlSymsp->__Vcoverage[2418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rd, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd), 3U)))) {
        vlSymsp->__Vcoverage[2419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rd, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd), 4U)))) {
        vlSymsp->__Vcoverage[2420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rd, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs1), 0U)))) {
        vlSymsp->__Vcoverage[2421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rs1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs1), 1U)))) {
        vlSymsp->__Vcoverage[2422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rs1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs1), 2U)))) {
        vlSymsp->__Vcoverage[2423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rs1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs1), 3U)))) {
        vlSymsp->__Vcoverage[2424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rs1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs1), 4U)))) {
        vlSymsp->__Vcoverage[2425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rs1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs1), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs2), 0U)))) {
        vlSymsp->__Vcoverage[2426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rs2, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs2), 1U)))) {
        vlSymsp->__Vcoverage[2427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rs2, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs2), 2U)))) {
        vlSymsp->__Vcoverage[2428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rs2, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs2), 3U)))) {
        vlSymsp->__Vcoverage[2429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rs2, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rs2), 4U)))) {
        vlSymsp->__Vcoverage[2430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rs2, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rs2), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 0U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 0U)))) {
        vlSymsp->__Vcoverage[2441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 1U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 1U)))) {
        vlSymsp->__Vcoverage[2442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 2U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 2U)))) {
        vlSymsp->__Vcoverage[2443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 3U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 3U)))) {
        vlSymsp->__Vcoverage[2444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 4U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 4U)))) {
        vlSymsp->__Vcoverage[2445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 5U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 5U)))) {
        vlSymsp->__Vcoverage[2446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 6U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 6U)))) {
        vlSymsp->__Vcoverage[2447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 7U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 7U)))) {
        vlSymsp->__Vcoverage[2448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 8U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 8U)))) {
        vlSymsp->__Vcoverage[2449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 9U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 9U)))) {
        vlSymsp->__Vcoverage[2450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 0xaU) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 0xaU)))) {
        vlSymsp->__Vcoverage[2451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 0xbU) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__csr), 0xbU)))) {
        vlSymsp->__Vcoverage[2452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__csr, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__csr), 0xbU)));
    }
}

VL_ATTR_COLD void Vtop_lab2_proc_tinyrv2_encoding_InstUnpack___configure_coverage(Vtop_lab2_proc_tinyrv2_encoding_InstUnpack* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_tinyrv2_encoding_InstUnpack___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2377]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2378]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2379]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2380]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2381]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2382]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2383]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2384]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2385]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2386]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2387]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2388]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2389]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2390]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2391]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2392]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2393]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2394]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2395]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2396]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2397]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2398]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2399]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2400]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2401]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2402]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2403]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2404]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2405]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2406]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2407]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2408]), first, "tinyrv2_encoding.v", 370, 26, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "inst[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2409]), first, "tinyrv2_encoding.v", 374, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2410]), first, "tinyrv2_encoding.v", 374, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2411]), first, "tinyrv2_encoding.v", 374, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2412]), first, "tinyrv2_encoding.v", 374, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2413]), first, "tinyrv2_encoding.v", 374, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2414]), first, "tinyrv2_encoding.v", 374, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2415]), first, "tinyrv2_encoding.v", 374, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "opcode[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2416]), first, "tinyrv2_encoding.v", 375, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2417]), first, "tinyrv2_encoding.v", 375, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2418]), first, "tinyrv2_encoding.v", 375, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2419]), first, "tinyrv2_encoding.v", 375, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2420]), first, "tinyrv2_encoding.v", 375, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rd[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2421]), first, "tinyrv2_encoding.v", 376, 21, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2422]), first, "tinyrv2_encoding.v", 376, 21, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2423]), first, "tinyrv2_encoding.v", 376, 21, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2424]), first, "tinyrv2_encoding.v", 376, 21, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2425]), first, "tinyrv2_encoding.v", 376, 21, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2426]), first, "tinyrv2_encoding.v", 377, 21, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2427]), first, "tinyrv2_encoding.v", 377, 21, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2428]), first, "tinyrv2_encoding.v", 377, 21, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2429]), first, "tinyrv2_encoding.v", 377, 21, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2430]), first, "tinyrv2_encoding.v", 377, 21, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "rs2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2431]), first, "tinyrv2_encoding.v", 378, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2432]), first, "tinyrv2_encoding.v", 378, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2433]), first, "tinyrv2_encoding.v", 378, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2434]), first, "tinyrv2_encoding.v", 379, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2435]), first, "tinyrv2_encoding.v", 379, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2436]), first, "tinyrv2_encoding.v", 379, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2437]), first, "tinyrv2_encoding.v", 379, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2438]), first, "tinyrv2_encoding.v", 379, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2439]), first, "tinyrv2_encoding.v", 379, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2440]), first, "tinyrv2_encoding.v", 379, 18, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "funct7[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2441]), first, "tinyrv2_encoding.v", 380, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2442]), first, "tinyrv2_encoding.v", 380, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2443]), first, "tinyrv2_encoding.v", 380, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2444]), first, "tinyrv2_encoding.v", 380, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2445]), first, "tinyrv2_encoding.v", 380, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2446]), first, "tinyrv2_encoding.v", 380, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2447]), first, "tinyrv2_encoding.v", 380, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2448]), first, "tinyrv2_encoding.v", 380, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2449]), first, "tinyrv2_encoding.v", 380, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2450]), first, "tinyrv2_encoding.v", 380, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2451]), first, "tinyrv2_encoding.v", 380, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2452]), first, "tinyrv2_encoding.v", 380, 22, "", "v_toggle/lab2_proc_tinyrv2_encoding_InstUnpack", "csr[11]", "");
}
