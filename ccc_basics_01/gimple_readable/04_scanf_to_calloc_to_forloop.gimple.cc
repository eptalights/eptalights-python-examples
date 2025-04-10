
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
  int * _5;
  long unsigned int _6;
  long unsigned int _7;
  int * _8;
  int _9;
  int n.1_10;
  int _24;

  <bb 2> :
  gimple_assign <integer_cst, sum_14, 0, NULL, NULL>
  gimple_call <printf, NULL, "Enter number of elements: ">
  gimple_call <scanf, NULL, "%d", &n>
  gimple_assign <var_decl, n.0_1, n, NULL, NULL>
  gimple_assign <nop_expr, _2, n.0_1, NULL, NULL>
  gimple_call <calloc, ptr_19, _2, 4>
  gimple_cond <eq_expr, ptr_19, 0B, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <printf, NULL, "Error! memory not allocated.">
  gimple_call <exit, NULL, 0>

  <bb 4> :
  gimple_call <printf, NULL, "Enter elements: ">
  gimple_assign <integer_cst, i_21, 0, NULL, NULL>
  goto <bb 6>; [INV]

  <bb 5> :
  gimple_assign <nop_expr, _3, i_11, NULL, NULL>
  gimple_assign <mult_expr, _4, _3, 4, NULL>
  gimple_assign <pointer_plus_expr, _5, ptr_19, _4, NULL>
  gimple_call <scanf, NULL, "%d", _5>
  gimple_assign <nop_expr, _6, i_11, NULL, NULL>
  gimple_assign <mult_expr, _7, _6, 4, NULL>
  gimple_assign <pointer_plus_expr, _8, ptr_19, _7, NULL>
  gimple_assign <mem_ref, _9, *_8, NULL, NULL>
  gimple_assign <plus_expr, sum_27, sum_12, _9, NULL>
  gimple_assign <plus_expr, i_28, i_11, 1, NULL>

  <bb 6> :
  # gimple_phi <i_11, i_21(4), i_28(5)>
  # gimple_phi <sum_12, sum_14(4), sum_27(5)>
  gimple_assign <var_decl, n.1_10, n, NULL, NULL>
  gimple_cond <lt_expr, i_11, n.1_10, NULL, NULL>
    goto <bb 5>; [INV]
  else
    goto <bb 7>; [INV]

  <bb 7> :
  gimple_call <printf, NULL, "Sum = %d", sum_12>
  gimple_call <free, NULL, ptr_19>
  gimple_assign <integer_cst, _24, 0, NULL, NULL>
  gimple_assign <constructor, n, {CLOBBER}, NULL, NULL>

  <bb 8> :
gimple_label <<L6>>
  gimple_return <_24>

}


