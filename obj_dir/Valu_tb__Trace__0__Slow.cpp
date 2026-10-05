// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_tb__Syms.h"


VL_ATTR_COLD void Valu_tb___024root__trace_init_sub__TOP__0(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("alu_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Valu_tb___024root__trace_init_top(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Valu_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Valu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu_tb___024root__trace_register(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Valu_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Valu_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Valu_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Valu_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_const_0\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Valu_tb___024root__trace_full_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_full_0\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_tb___024root__trace_full_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.alu_tb__DOT__a),32);
    bufp->fullIData(oldp+2,(vlSelfRef.alu_tb__DOT__b),32);
    bufp->fullCData(oldp+3,(vlSelfRef.alu_tb__DOT__alu_op),4);
    bufp->fullIData(oldp+4,(((8U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                              ? 0U : ((4U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                       ? ((2U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                           ? ((1U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                               ? (VL_LTS_III(32, vlSelfRef.alu_tb__DOT__a, vlSelfRef.alu_tb__DOT__b)
                                                   ? 1U
                                                   : 0U)
                                               : (vlSelfRef.alu_tb__DOT__a 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelfRef.alu_tb__DOT__b)))
                                           : ((1U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                               ? (vlSelfRef.alu_tb__DOT__a 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelfRef.alu_tb__DOT__b))
                                               : (vlSelfRef.alu_tb__DOT__a 
                                                  ^ vlSelfRef.alu_tb__DOT__b)))
                                       : ((2U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                           ? ((1U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                               ? (vlSelfRef.alu_tb__DOT__a 
                                                  | vlSelfRef.alu_tb__DOT__b)
                                               : (vlSelfRef.alu_tb__DOT__a 
                                                  & vlSelfRef.alu_tb__DOT__b))
                                           : ((1U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                               ? (vlSelfRef.alu_tb__DOT__a 
                                                  - vlSelfRef.alu_tb__DOT__b)
                                               : (vlSelfRef.alu_tb__DOT__a 
                                                  + vlSelfRef.alu_tb__DOT__b)))))),32);
}
