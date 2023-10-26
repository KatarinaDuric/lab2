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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5754]), first, "../vc/queues.v", 394, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5755]), first, "../vc/queues.v", 395, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5756]), first, "../vc/queues.v", 397, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5757]), first, "../vc/queues.v", 398, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5758]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5759]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5760]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5761]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5762]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5763]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5764]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5765]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5766]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5767]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5768]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5769]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5770]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5771]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5772]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5773]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5774]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5775]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5776]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5777]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5778]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5779]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5780]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5781]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5782]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5783]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5784]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5785]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5786]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5787]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5788]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5789]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5790]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5791]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5792]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5793]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5794]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5795]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5796]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5797]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5798]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5799]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5800]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5801]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5802]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5803]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5804]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "enq_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5805]), first, "../vc/queues.v", 401, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5806]), first, "../vc/queues.v", 402, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5807]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5808]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5809]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5810]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5811]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5812]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5813]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5814]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5815]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5816]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5817]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5818]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5819]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5820]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5821]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5822]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5823]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5824]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5825]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5826]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5827]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5828]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5829]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5830]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5831]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5832]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5833]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5834]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5835]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5836]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5837]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5838]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5839]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5840]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5841]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5842]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5843]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5844]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5845]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5846]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5847]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5848]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5849]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5850]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5851]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5852]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5853]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "deq_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5854]), first, "../vc/queues.v", 405, 34, "", "v_toggle/vc_Queue__Pz1_PB2f_PC1", "num_free_entries[0]", "");
}
