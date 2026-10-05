// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb__Syms.h"
#include "Valu_tb___024root.h"

VL_INLINE_OPT VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__0__expected;
    __Vtask_alu_tb__DOT__run_test__0__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__1__test_a;
    __Vtask_alu_tb__DOT__run_test__1__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__1__test_b;
    __Vtask_alu_tb__DOT__run_test__1__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__1__test_operation;
    __Vtask_alu_tb__DOT__run_test__1__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__1__expected;
    __Vtask_alu_tb__DOT__run_test__1__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__2__test_a;
    __Vtask_alu_tb__DOT__run_test__2__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__2__test_b;
    __Vtask_alu_tb__DOT__run_test__2__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__2__test_operation;
    __Vtask_alu_tb__DOT__run_test__2__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__2__expected;
    __Vtask_alu_tb__DOT__run_test__2__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__3__test_a;
    __Vtask_alu_tb__DOT__run_test__3__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__3__test_b;
    __Vtask_alu_tb__DOT__run_test__3__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__3__test_operation;
    __Vtask_alu_tb__DOT__run_test__3__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__3__expected;
    __Vtask_alu_tb__DOT__run_test__3__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__4__test_a;
    __Vtask_alu_tb__DOT__run_test__4__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__4__test_b;
    __Vtask_alu_tb__DOT__run_test__4__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__4__test_operation;
    __Vtask_alu_tb__DOT__run_test__4__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__4__expected;
    __Vtask_alu_tb__DOT__run_test__4__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__5__test_a;
    __Vtask_alu_tb__DOT__run_test__5__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__5__test_b;
    __Vtask_alu_tb__DOT__run_test__5__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__5__test_operation;
    __Vtask_alu_tb__DOT__run_test__5__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__5__expected;
    __Vtask_alu_tb__DOT__run_test__5__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__6__test_a;
    __Vtask_alu_tb__DOT__run_test__6__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__6__test_b;
    __Vtask_alu_tb__DOT__run_test__6__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__6__test_operation;
    __Vtask_alu_tb__DOT__run_test__6__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__6__expected;
    __Vtask_alu_tb__DOT__run_test__6__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__7__test_a;
    __Vtask_alu_tb__DOT__run_test__7__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__7__test_b;
    __Vtask_alu_tb__DOT__run_test__7__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__7__test_operation;
    __Vtask_alu_tb__DOT__run_test__7__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__7__expected;
    __Vtask_alu_tb__DOT__run_test__7__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__8__test_a;
    __Vtask_alu_tb__DOT__run_test__8__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__8__test_b;
    __Vtask_alu_tb__DOT__run_test__8__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__8__test_operation;
    __Vtask_alu_tb__DOT__run_test__8__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__8__expected;
    __Vtask_alu_tb__DOT__run_test__8__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__9__test_a;
    __Vtask_alu_tb__DOT__run_test__9__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__9__test_b;
    __Vtask_alu_tb__DOT__run_test__9__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__9__test_operation;
    __Vtask_alu_tb__DOT__run_test__9__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__9__expected;
    __Vtask_alu_tb__DOT__run_test__9__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__10__test_a;
    __Vtask_alu_tb__DOT__run_test__10__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__10__test_b;
    __Vtask_alu_tb__DOT__run_test__10__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__10__test_operation;
    __Vtask_alu_tb__DOT__run_test__10__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__10__expected;
    __Vtask_alu_tb__DOT__run_test__10__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__11__test_a;
    __Vtask_alu_tb__DOT__run_test__11__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__11__test_b;
    __Vtask_alu_tb__DOT__run_test__11__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__11__test_operation;
    __Vtask_alu_tb__DOT__run_test__11__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__11__expected;
    __Vtask_alu_tb__DOT__run_test__11__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__12__test_a;
    __Vtask_alu_tb__DOT__run_test__12__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__12__test_b;
    __Vtask_alu_tb__DOT__run_test__12__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__12__test_operation;
    __Vtask_alu_tb__DOT__run_test__12__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__12__expected;
    __Vtask_alu_tb__DOT__run_test__12__expected = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__13__test_a;
    __Vtask_alu_tb__DOT__run_test__13__test_a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__13__test_b;
    __Vtask_alu_tb__DOT__run_test__13__test_b = 0;
    CData/*3:0*/ __Vtask_alu_tb__DOT__run_test__13__test_operation;
    __Vtask_alu_tb__DOT__run_test__13__test_operation = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__run_test__13__expected;
    __Vtask_alu_tb__DOT__run_test__13__expected = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"alu.vcd"});
    vlSymsp->_traceDumpOpen();
    __Vtask_alu_tb__DOT__run_test__0__expected = 0x11U;
    vlSelfRef.alu_tb__DOT__a = 0xaU;
    vlSelfRef.alu_tb__DOT__b = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__0__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__0__expected);
    }
    __Vtask_alu_tb__DOT__run_test__1__expected = 3U;
    __Vtask_alu_tb__DOT__run_test__1__test_operation = 1U;
    __Vtask_alu_tb__DOT__run_test__1__test_b = 7U;
    __Vtask_alu_tb__DOT__run_test__1__test_a = 0xaU;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__1__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__1__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__1__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__1__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__1__expected);
    }
    __Vtask_alu_tb__DOT__run_test__2__expected = 0xfU;
    __Vtask_alu_tb__DOT__run_test__2__test_operation = 2U;
    __Vtask_alu_tb__DOT__run_test__2__test_b = 0xfU;
    __Vtask_alu_tb__DOT__run_test__2__test_a = 0xffU;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__2__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__2__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__2__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__2__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__2__expected);
    }
    __Vtask_alu_tb__DOT__run_test__3__expected = 0xffU;
    __Vtask_alu_tb__DOT__run_test__3__test_operation = 3U;
    __Vtask_alu_tb__DOT__run_test__3__test_b = 0xfU;
    __Vtask_alu_tb__DOT__run_test__3__test_a = 0xf0U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__3__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__3__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__3__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__3__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__3__expected);
    }
    __Vtask_alu_tb__DOT__run_test__4__expected = 0xf0U;
    __Vtask_alu_tb__DOT__run_test__4__test_operation = 4U;
    __Vtask_alu_tb__DOT__run_test__4__test_b = 0xfU;
    __Vtask_alu_tb__DOT__run_test__4__test_a = 0xffU;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__4__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__4__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__4__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__4__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__4__expected);
    }
    __Vtask_alu_tb__DOT__run_test__5__expected = 0x10U;
    __Vtask_alu_tb__DOT__run_test__5__test_operation = 5U;
    __Vtask_alu_tb__DOT__run_test__5__test_b = 2U;
    __Vtask_alu_tb__DOT__run_test__5__test_a = 4U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__5__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__5__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__5__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__5__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__5__expected);
    }
    __Vtask_alu_tb__DOT__run_test__6__expected = 4U;
    __Vtask_alu_tb__DOT__run_test__6__test_operation = 6U;
    __Vtask_alu_tb__DOT__run_test__6__test_b = 2U;
    __Vtask_alu_tb__DOT__run_test__6__test_a = 0x10U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__6__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__6__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__6__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__6__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__6__expected);
    }
    __Vtask_alu_tb__DOT__run_test__7__expected = 1U;
    __Vtask_alu_tb__DOT__run_test__7__test_operation = 7U;
    __Vtask_alu_tb__DOT__run_test__7__test_b = 3U;
    __Vtask_alu_tb__DOT__run_test__7__test_a = 0xfffffffbU;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__7__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__7__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__7__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__7__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__7__expected);
    }
    __Vtask_alu_tb__DOT__run_test__8__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__8__test_operation = 0U;
    __Vtask_alu_tb__DOT__run_test__8__test_b = 0U;
    __Vtask_alu_tb__DOT__run_test__8__test_a = 0U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__8__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__8__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__8__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__8__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__8__expected);
    }
    __Vtask_alu_tb__DOT__run_test__9__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__9__test_operation = 0U;
    __Vtask_alu_tb__DOT__run_test__9__test_b = 1U;
    __Vtask_alu_tb__DOT__run_test__9__test_a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__9__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__9__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__9__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__9__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__9__expected);
    }
    __Vtask_alu_tb__DOT__run_test__10__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__10__test_operation = 7U;
    __Vtask_alu_tb__DOT__run_test__10__test_b = 5U;
    __Vtask_alu_tb__DOT__run_test__10__test_a = 5U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__10__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__10__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__10__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__10__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__10__expected);
    }
    __Vtask_alu_tb__DOT__run_test__11__expected = 0U;
    __Vtask_alu_tb__DOT__run_test__11__test_operation = 7U;
    __Vtask_alu_tb__DOT__run_test__11__test_b = 0xfffffffbU;
    __Vtask_alu_tb__DOT__run_test__11__test_a = 3U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__11__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__11__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__11__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__11__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__11__expected);
    }
    __Vtask_alu_tb__DOT__run_test__12__expected = 0xfU;
    __Vtask_alu_tb__DOT__run_test__12__test_operation = 5U;
    __Vtask_alu_tb__DOT__run_test__12__test_b = 0U;
    __Vtask_alu_tb__DOT__run_test__12__test_a = 0xfU;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__12__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__12__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__12__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__12__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__12__expected);
    }
    __Vtask_alu_tb__DOT__run_test__13__expected = 0x80000000U;
    __Vtask_alu_tb__DOT__run_test__13__test_operation = 5U;
    __Vtask_alu_tb__DOT__run_test__13__test_b = 0x1fU;
    __Vtask_alu_tb__DOT__run_test__13__test_a = 1U;
    vlSelfRef.alu_tb__DOT__a = __Vtask_alu_tb__DOT__run_test__13__test_a;
    vlSelfRef.alu_tb__DOT__b = __Vtask_alu_tb__DOT__run_test__13__test_b;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__run_test__13__test_operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         26);
    if ((vlSelfRef.alu_tb__DOT__result == __Vtask_alu_tb__DOT__run_test__13__expected)) {
        VL_WRITEF_NX("PASS: a=%x b=%x op=%b result=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result);
    } else {
        VL_WRITEF_NX("FAIL: a=%x b=%x op=%b result=%x expected=%x\n",0,
                     32,vlSelfRef.alu_tb__DOT__a,32,
                     vlSelfRef.alu_tb__DOT__b,4,(IData)(vlSelfRef.alu_tb__DOT__alu_op),
                     32,vlSelfRef.alu_tb__DOT__result,
                     32,__Vtask_alu_tb__DOT__run_test__13__expected);
    }
    VL_FINISH_MT("tb/alu_tb.sv", 95, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_tb___024root___eval_triggers__act(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
