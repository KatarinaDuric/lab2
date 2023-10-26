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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8559]), first, "../vc/queues.v", 394, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8560]), first, "../vc/queues.v", 395, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8561]), first, "../vc/queues.v", 397, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8562]), first, "../vc/queues.v", 398, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8563]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8564]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8565]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8566]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8567]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8568]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8569]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8570]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8571]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8572]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8573]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8574]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8575]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8576]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8577]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8578]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8579]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8580]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8581]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8582]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8583]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8584]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8585]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8586]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8587]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8588]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8589]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8590]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8591]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8592]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8593]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8594]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8595]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8596]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8597]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8598]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8599]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8600]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8601]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8602]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8603]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8604]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8605]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8606]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8607]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8608]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8609]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8610]), first, "../vc/queues.v", 401, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8611]), first, "../vc/queues.v", 402, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8612]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8613]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8614]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8615]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8616]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8617]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8618]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8619]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8620]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8621]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8622]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8623]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8624]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8625]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8626]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8627]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8628]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8629]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8630]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8631]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8632]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8633]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8634]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8635]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8636]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8637]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8638]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8639]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8640]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8641]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8642]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8643]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8644]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8645]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8646]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8647]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8648]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8649]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8650]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8651]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8652]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8653]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8654]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8655]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8656]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8657]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8658]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8659]), first, "../vc/queues.v", 405, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "num_free_entries[0]", "");
}
