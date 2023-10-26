// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_tinyrv2_encoding_InstUnpack.h"

VL_ATTR_COLD void Vtop_lab2_proc_tinyrv2_encoding_InstUnpack___ctor_var_reset(Vtop_lab2_proc_tinyrv2_encoding_InstUnpack* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_lab2_proc_tinyrv2_encoding_InstUnpack___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode = VL_RAND_RESET_I(7);
    vlSelf->__PVT__rd = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__csr = VL_RAND_RESET_I(12);
    vlSelf->__Vtogcov__inst = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__opcode = VL_RAND_RESET_I(7);
    vlSelf->__Vtogcov__rd = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__rs1 = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__rs2 = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__funct3 = VL_RAND_RESET_I(3);
    vlSelf->__Vtogcov__funct7 = VL_RAND_RESET_I(7);
    vlSelf->__Vtogcov__csr = VL_RAND_RESET_I(12);
}
