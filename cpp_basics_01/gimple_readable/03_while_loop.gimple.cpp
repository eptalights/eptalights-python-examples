
;; Function main (main, funcdef_no=1574, decl_uid=37214, cgraph_uid=456, symbol_order=458)

main ()
{
  struct basic_ostream & D.40897;
  int remainder;
  int reversed_number;
  int n;
  int D.40895;
  int n.0_1;
  int n.1_2;
  int _3;
  int n.2_4;
  int _5;
  struct basic_ostream & _6;
  struct basic_ostream & _18;
  int _20;

  <bb 2> :
  gimple_assign <integer_cst, reversed_number_10, 0, NULL, NULL>
  gimple_call <operator<<, NULL, &cout, "Enter an integer: ">

  <bb 3> :
  gimple_call <operator>>, NULL, &cin, &n>

  <bb 4> :
  # gimple_phi <reversed_number_7, reversed_number_10(3), reversed_number_15(5)>
  gimple_assign <var_decl, n.0_1, n, NULL, NULL>
  gimple_cond <eq_expr, n.0_1, 0, NULL, NULL>
    goto <bb 6>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 5> :
  gimple_assign <var_decl, n.1_2, n, NULL, NULL>
  gimple_assign <trunc_mod_expr, remainder_14, n.1_2, 10, NULL>
  gimple_assign <mult_expr, _3, reversed_number_7, 10, NULL>
  gimple_assign <plus_expr, reversed_number_15, remainder_14, _3, NULL>
  gimple_assign <var_decl, n.2_4, n, NULL, NULL>
  gimple_assign <trunc_div_expr, _5, n.2_4, 10, NULL>
  gimple_assign <ssa_name, n, _5, NULL, NULL>
  goto <bb 4>; [INV]

  <bb 6> :
  gimple_call <operator<<, _18, &cout, "Reversed Number = ">

  <bb 7> :
  gimple_assign <ssa_name, _6, _18, NULL, NULL>
  gimple_call <operator<<, NULL, _6, reversed_number_7>

  <bb 8> :
  gimple_assign <integer_cst, _20, 0, NULL, NULL>
  gimple_assign <constructor, n, {CLOBBER}, NULL, NULL>

  <bb 9> :
gimple_label <<L4>>
  gimple_return <_20>

  <bb 10> :
gimple_label <<L5>>
  gimple_assign <constructor, n, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function __static_initialization_and_destruction_0 (_Z41__static_initialization_and_destruction_0ii, funcdef_no=2070, decl_uid=40885, cgraph_uid=952, symbol_order=981)

__static_initialization_and_destruction_0 (int __initialize_p, int __priority)
{
  <bb 2> :
  gimple_cond <eq_expr, __initialize_p_2(D), 1, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 3> :
  gimple_cond <eq_expr, __priority_4(D), 65535, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 4> :
  gimple_call <__ct_comp , NULL, &__ioinit>
  gimple_call <__cxa_atexit, NULL, __dt_comp , &__ioinit, &__dso_handle>

  <bb 5> :
  gimple_return <NULL>

}



;; Function _GLOBAL__sub_I_main (_GLOBAL__sub_I_main, funcdef_no=2071, decl_uid=40891, cgraph_uid=953, symbol_order=1111)

_GLOBAL__sub_I_main ()
{
  <bb 2> :
  gimple_call <__static_initialization_and_destruction_0, NULL, 1, 65535>
  gimple_return <NULL>

}


