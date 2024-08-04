
;; Function main (main, funcdef_no=1574, decl_uid=37214, cgraph_uid=456, symbol_order=458)

main ()
{
  struct basic_ostream & D.40899;
  int number;
  int D.40897;
  struct basic_ostream & _1;
  int number.0_2;
  struct basic_ostream & _8;
  int _10;

  <bb 2> :
  gimple_call <operator<<, NULL, &cout, "Enter an integer: ">

  <bb 3> :
  gimple_call <operator>>, NULL, &cin, &number>

  <bb 4> :
  gimple_call <operator<<, _8, &cout, "You entered ">

  <bb 5> :
  gimple_assign <ssa_name, _1, _8, NULL, NULL>
  gimple_assign <var_decl, number.0_2, number, NULL, NULL>
  gimple_call <operator<<, NULL, _1, number.0_2>

  <bb 6> :
  gimple_assign <integer_cst, _10, 0, NULL, NULL>
  gimple_assign <constructor, number, {CLOBBER}, NULL, NULL>

  <bb 7> :
gimple_label <<L1>>
  gimple_return <_10>

  <bb 8> :
gimple_label <<L2>>
  gimple_assign <constructor, number, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function __static_initialization_and_destruction_0 (_Z41__static_initialization_and_destruction_0ii, funcdef_no=2070, decl_uid=40889, cgraph_uid=952, symbol_order=981)

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



;; Function _GLOBAL__sub_I_main (_GLOBAL__sub_I_main, funcdef_no=2071, decl_uid=40895, cgraph_uid=953, symbol_order=1111)

_GLOBAL__sub_I_main ()
{
  <bb 2> :
  gimple_call <__static_initialization_and_destruction_0, NULL, 1, 65535>
  gimple_return <NULL>

}


