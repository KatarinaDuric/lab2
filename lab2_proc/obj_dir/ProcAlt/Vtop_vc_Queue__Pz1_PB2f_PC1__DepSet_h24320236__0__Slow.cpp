// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Queue__Pz1_PB2f_PC1.h"

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB2f_PC1___configure_coverage(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8745]), first, "../vc/queues.v", 394, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8746]), first, "../vc/queues.v", 395, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8747]), first, "../vc/queues.v", 397, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8748]), first, "../vc/queues.v", 398, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8749]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8750]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8751]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8752]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8753]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8754]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8755]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8756]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8757]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8758]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8759]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8760]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8761]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8762]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8763]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8764]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8765]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8766]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8767]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8768]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8769]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8770]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8771]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8772]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8773]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8774]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8775]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8776]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8777]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8778]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8779]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8780]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8781]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8782]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8783]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8784]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8785]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8786]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8787]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8788]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8789]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8790]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8791]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8792]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8793]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8794]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8795]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8796]), first, "../vc/queues.v", 401, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8797]), first, "../vc/queues.v", 402, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8798]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8799]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8800]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8801]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8802]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8803]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8804]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8805]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8806]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8807]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8808]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8809]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8810]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8811]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8812]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8813]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8814]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8815]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8816]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8817]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8818]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8819]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8820]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8821]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8822]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8823]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8824]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8825]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8826]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8827]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8828]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8829]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8830]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8831]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8832]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8833]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8834]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8835]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8836]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8837]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8838]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8839]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8840]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8841]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8842]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8843]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8844]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8845]), first, "../vc/queues.v", 405, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "num_free_entries[0]", "");
}
