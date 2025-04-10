
;; Function main (main, funcdef_no=0, decl_uid=2332, cgraph_uid=1, symbol_order=0)

main ()
{
  double n2;
  double n1;
  char operation;
  int D.2344;
  char operation.0_1;
  int _2;
  double n1.1_3;
  double n2.2_4;
  double _5;
  double n2.3_6;
  double n1.4_7;
  double n1.5_8;
  double n2.6_9;
  double _10;
  double n2.7_11;
  double n1.8_12;
  double n1.9_13;
  double n2.10_14;
  double _15;
  double n2.11_16;
  double n1.12_17;
  double n1.13_18;
  double n2.14_19;
  double _20;
  double n2.15_21;
  double n1.16_22;
  int _34;

  <bb 2> :
  gimple_call <printf, NULL, "Enter an operator (+, -, *, /): ">
  gimple_call <scanf, NULL, "%c", &operation>
  gimple_call <printf, NULL, "Enter two operands: ">
  gimple_call <scanf, NULL, "%lf %lf", &n1, &n2>
  gimple_assign <var_decl, operation.0_1, operation, NULL, NULL>
  gimple_assign <nop_expr, _2, operation.0_1, NULL, NULL>
  gimple_switch <_2, default: <L4> [INV], case 42: <L2> [INV], case 43: <L0> [INV], case 45: <L1> [INV], case 47: <L3> [INV]>

  <bb 3> :
gimple_label <<L0>>
  gimple_assign <var_decl, n1.1_3, n1, NULL, NULL>
  gimple_assign <var_decl, n2.2_4, n2, NULL, NULL>
  gimple_assign <plus_expr, _5, n1.1_3, n2.2_4, NULL>
  gimple_assign <var_decl, n2.3_6, n2, NULL, NULL>
  gimple_assign <var_decl, n1.4_7, n1, NULL, NULL>
  gimple_call <printf, NULL, "%.1lf + %.1lf = %.1lf", n1.4_7, n2.3_6, _5>
  goto <bb 8>; [INV]

  <bb 4> :
gimple_label <<L1>>
  gimple_assign <var_decl, n1.5_8, n1, NULL, NULL>
  gimple_assign <var_decl, n2.6_9, n2, NULL, NULL>
  gimple_assign <minus_expr, _10, n1.5_8, n2.6_9, NULL>
  gimple_assign <var_decl, n2.7_11, n2, NULL, NULL>
  gimple_assign <var_decl, n1.8_12, n1, NULL, NULL>
  gimple_call <printf, NULL, "%.1lf - %.1lf = %.1lf", n1.8_12, n2.7_11, _10>
  goto <bb 8>; [INV]

  <bb 5> :
gimple_label <<L2>>
  gimple_assign <var_decl, n1.9_13, n1, NULL, NULL>
  gimple_assign <var_decl, n2.10_14, n2, NULL, NULL>
  gimple_assign <mult_expr, _15, n1.9_13, n2.10_14, NULL>
  gimple_assign <var_decl, n2.11_16, n2, NULL, NULL>
  gimple_assign <var_decl, n1.12_17, n1, NULL, NULL>
  gimple_call <printf, NULL, "%.1lf * %.1lf = %.1lf", n1.12_17, n2.11_16, _15>
  goto <bb 8>; [INV]

  <bb 6> :
gimple_label <<L3>>
  gimple_assign <var_decl, n1.13_18, n1, NULL, NULL>
  gimple_assign <var_decl, n2.14_19, n2, NULL, NULL>
  gimple_assign <rdiv_expr, _20, n1.13_18, n2.14_19, NULL>
  gimple_assign <var_decl, n2.15_21, n2, NULL, NULL>
  gimple_assign <var_decl, n1.16_22, n1, NULL, NULL>
  gimple_call <printf, NULL, "%.1lf / %.1lf = %.1lf", n1.16_22, n2.15_21, _20>
  goto <bb 8>; [INV]

  <bb 7> :
gimple_label <<L4>>
  gimple_call <printf, NULL, "Error! operator is not correct">

  <bb 8> :
  gimple_assign <integer_cst, _34, 0, NULL, NULL>
  gimple_assign <constructor, operation, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, n1, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, n2, {CLOBBER}, NULL, NULL>

  <bb 9> :
gimple_label <<L7>>
  gimple_return <_34>

}


