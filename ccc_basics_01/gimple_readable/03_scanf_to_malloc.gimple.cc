
;; Function main (main, funcdef_no=6, decl_uid=2849, cgraph_uid=7, symbol_order=6)

main ()
{
  int sum;
  int * ptr;
  int i;
  int n;
  int D.2861;
  int n.0_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  int * _6;
  long unsigned int _7;
  long unsigned int _8;
  int * _9;
  int _10;
  int n.1_11;
  int _25;

  <bb 2> :
  gimple_assign <integer_cst, sum_15, 0, NULL, NULL>
  gimple_call <printf, NULL, "Enter number of elements: ">
  gimple_call <scanf, NULL, "%d", &n>
  gimple_assign <var_decl, n.0_1, n, NULL, NULL>
  gimple_assign <nop_expr, _2, n.0_1, NULL, NULL>
  gimple_assign <mult_expr, _3, _2, 4, NULL>
  gimple_call <malloc, ptr_20, _3>
  gimple_cond <eq_expr, ptr_20, 0B, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <printf, NULL, "Error! memory not allocated.">
  gimple_call <exit, NULL, 0>

  <bb 4> :
  gimple_call <printf, NULL, "Enter elements: ">
  gimple_assign <integer_cst, i_22, 0, NULL, NULL>
  goto <bb 6>; [INV]

  <bb 5> :
  gimple_assign <nop_expr, _4, i_12, NULL, NULL>
  gimple_assign <mult_expr, _5, _4, 4, NULL>
  gimple_assign <pointer_plus_expr, _6, ptr_20, _5, NULL>
  gimple_call <scanf, NULL, "%d", _6>
  gimple_assign <nop_expr, _7, i_12, NULL, NULL>
  gimple_assign <mult_expr, _8, _7, 4, NULL>
  gimple_assign <pointer_plus_expr, _9, ptr_20, _8, NULL>
  gimple_assign <mem_ref, _10, *_9, NULL, NULL>
  gimple_assign <plus_expr, sum_28, sum_13, _10, NULL>
  gimple_assign <plus_expr, i_29, i_12, 1, NULL>

  <bb 6> :
  # gimple_phi <i_12, i_22(4), i_29(5)>
  # gimple_phi <sum_13, sum_15(4), sum_28(5)>
  gimple_assign <var_decl, n.1_11, n, NULL, NULL>
  gimple_cond <lt_expr, i_12, n.1_11, NULL, NULL>
    goto <bb 5>; [INV]
  else
    goto <bb 7>; [INV]

  <bb 7> :
  gimple_call <printf, NULL, "Sum = %d", sum_13>
  gimple_call <free, NULL, ptr_20>
  gimple_assign <integer_cst, _25, 0, NULL, NULL>
  gimple_assign <constructor, n, {CLOBBER}, NULL, NULL>

  <bb 8> :
gimple_label <<L6>>
  gimple_return <_25>

}


