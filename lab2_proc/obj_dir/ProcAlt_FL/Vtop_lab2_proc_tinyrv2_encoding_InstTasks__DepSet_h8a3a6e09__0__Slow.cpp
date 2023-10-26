// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_tinyrv2_encoding_InstTasks.h"

VL_ATTR_COLD void Vtop_lab2_proc_tinyrv2_encoding_InstTasks___ctor_var_reset(Vtop_lab2_proc_tinyrv2_encoding_InstTasks* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_tinyrv2_encoding_InstTasks___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rs1_str = VL_RAND_RESET_I(24);
    vlSelf->__PVT__rs2_str = VL_RAND_RESET_I(24);
    vlSelf->__PVT__rd_str = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->__PVT__csr_str);
    vlSelf->__PVT__funct_str = VL_RAND_RESET_I(16);
    vlSelf->__PVT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd = VL_RAND_RESET_I(5);
    vlSelf->__PVT__csr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__funct = VL_RAND_RESET_I(7);
    vlSelf->__Vtogcov__rs1_str = VL_RAND_RESET_I(24);
    vlSelf->__Vtogcov__rs2_str = VL_RAND_RESET_I(24);
    vlSelf->__Vtogcov__rd_str = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->__Vtogcov__csr_str);
    vlSelf->__Vtogcov__funct_str = VL_RAND_RESET_I(16);
    vlSelf->__Vtogcov__rs1 = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__rs2 = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__rd = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__csr = VL_RAND_RESET_I(12);
    vlSelf->__Vtogcov__funct = VL_RAND_RESET_I(7);
}
