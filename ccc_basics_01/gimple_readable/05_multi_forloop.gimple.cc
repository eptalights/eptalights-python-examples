
;; Function main (main, funcdef_no=0, decl_uid=2332, cgraph_uid=1, symbol_order=0)

main ()
{
  int k;
  int j;
  int i;
  int k;
  int j;
  int i;
  int test[2][3][2];
  int D.2360;
  int * _1;
  int _2;
  int _20;

  <bb 2> :
  gimple_call <__builtin_puts, NULL, &"Enter 12 values: "[0]>
  gimple_assign <integer_cst, i_17, 0, NULL, NULL>
  goto <bb 10>; [INV]

  <bb 3> :
  gimple_assign <integer_cst, j_28, 0, NULL, NULL>
  goto <bb 8>; [INV]

  <bb 4> :
  gimple_assign <integer_cst, k_30, 0, NULL, NULL>
  goto <bb 6>; [INV]

  <bb 5> :
  gimple_assign <addr_expr, _1, &test[i_3][j_4][k_5], NULL, NULL>
  gimple_call <scanf, NULL, "%d", _1>
  gimple_assign <plus_expr, k_33, k_5, 1, NULL>

  <bb 6> :
  # gimple_phi <k_5, k_30(4), k_33(5)>
  gimple_cond <le_expr, k_5, 1, NULL, NULL>
    goto <bb 5>; [INV]
  else
    goto <bb 7>; [INV]

  <bb 7> :
  gimple_assign <plus_expr, j_31, j_4, 1, NULL>

  <bb 8> :
  # gimple_phi <j_4, j_28(3), j_31(7)>
  gimple_cond <le_expr, j_4, 2, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 9>; [INV]

  <bb 9> :
  gimple_assign <plus_expr, i_29, i_3, 1, NULL>

  <bb 10> :
  # gimple_phi <i_3, i_17(2), i_29(9)>
  gimple_cond <le_expr, i_3, 1, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 11>; [INV]

  <bb 11> :
  gimple_call <__builtin_puts, NULL, &"\nDisplaying values:"[0]>
  gimple_assign <integer_cst, i_19, 0, NULL, NULL>
  goto <bb 19>; [INV]

  <bb 12> :
  gimple_assign <integer_cst, j_22, 0, NULL, NULL>
  goto <bb 17>; [INV]

  <bb 13> :
  gimple_assign <integer_cst, k_24, 0, NULL, NULL>
  goto <bb 15>; [INV]

  <bb 14> :
  gimple_assign <array_ref, _2, test[i_6][j_7][k_8], NULL, NULL>
  gimple_call <printf, NULL, "test[%d][%d][%d] = %d\n", i_6, j_7, k_8, _2>
  gimple_assign <plus_expr, k_27, k_8, 1, NULL>

  <bb 15> :
  # gimple_phi <k_8, k_24(13), k_27(14)>
  gimple_cond <le_expr, k_8, 1, NULL, NULL>
    goto <bb 14>; [INV]
  else
    goto <bb 16>; [INV]

  <bb 16> :
  gimple_assign <plus_expr, j_25, j_7, 1, NULL>

  <bb 17> :
  # gimple_phi <j_7, j_22(12), j_25(16)>
  gimple_cond <le_expr, j_7, 2, NULL, NULL>
    goto <bb 13>; [INV]
  else
    goto <bb 18>; [INV]

  <bb 18> :
  gimple_assign <plus_expr, i_23, i_6, 1, NULL>

  <bb 19> :
  # gimple_phi <i_6, i_19(11), i_23(18)>
  gimple_cond <le_expr, i_6, 1, NULL, NULL>
    goto <bb 12>; [INV]
  else
    goto <bb 20>; [INV]

  <bb 20> :
  gimple_assign <integer_cst, _20, 0, NULL, NULL>
  gimple_assign <constructor, test, {CLOBBER}, NULL, NULL>

  <bb 21> :
gimple_label <<L19>>
  gimple_return <_20>

}


