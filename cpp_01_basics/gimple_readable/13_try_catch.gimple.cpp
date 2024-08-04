
;; Function main (main, funcdef_no=1574, decl_uid=37214, cgraph_uid=456, symbol_order=458)

main ()
{
  struct basic_ostream & D.40917;
  struct basic_ostream & D.40912;
  struct basic_ostream & D.40911;
  int ex;
  int result;
  int denominator;
  int numerator;
  int D.40909;
  register int * D.37227;
  void * D.37221;
  void * _1;
  struct basic_ostream & _2;
  struct basic_ostream & _3;
  struct basic_ostream & _4;
  void * _13;
  int * _17;
  struct basic_ostream & _20;
  struct basic_ostream & _22;
  struct basic_ostream & _28;
  int _30;

  <bb 2> :
  gimple_assign <integer_cst, numerator_8, 5, NULL, NULL>
  gimple_assign <integer_cst, denominator_9, 0, NULL, NULL>
  gimple_cond <eq_expr, denominator_9, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <__cxa_allocate_exception, _13, 4>
  gimple_assign <ssa_name, MEM[(int *)_13], denominator_9, NULL, NULL>
  gimple_call <__cxa_throw, NULL, _13, &_ZTIi, 0B>

  <bb 4> :
  gimple_assign <trunc_div_expr, result_10, numerator_8, denominator_9, NULL>

  <bb 5> :
  # gimple_phi <result_5, result_10(4), result_25(D)(12)>
  gimple_call <operator<<, _28, &cout, "Division Result is: ">
  gimple_assign <ssa_name, _4, _28, NULL, NULL>
  gimple_call <operator<<, NULL, _4, result_5>
  gimple_assign <integer_cst, _30, 0, NULL, NULL>

  <bb 6> :
gimple_label <<L3>>
  gimple_return <_30>

  <bb 7> :
gimple_label <<L4>>
  gimple_eh_dispatch <1>

  <bb 8> :
  gimple_resx <1>

  <bb 9> :
gimple_label <<L5>>
  gimple_call <__builtin_eh_pointer, _1, 1>
  gimple_call <__cxa_begin_catch, _17, _1>
  gimple_assign <mem_ref, ex_18, *_17, NULL, NULL>
  gimple_call <operator<<, _20, &cout, "Exception: Divide by zero not allowed :">

  <bb 10> :
  gimple_assign <ssa_name, _2, _20, NULL, NULL>
  gimple_call <operator<<, _22, _2, ex_18>

  <bb 11> :
  gimple_assign <ssa_name, _3, _22, NULL, NULL>
  gimple_call <operator<<, NULL, _3, endl>

  <bb 12> :
  gimple_call <__cxa_end_catch, NULL>
  goto <bb 5>; [INV]

  <bb 13> :
gimple_label <<L6>>
  gimple_call <__cxa_end_catch, NULL>
  gimple_resx <3>

}



;; Function __static_initialization_and_destruction_0 (_Z41__static_initialization_and_destruction_0ii, funcdef_no=2075, decl_uid=40899, cgraph_uid=957, symbol_order=986)

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



;; Function _GLOBAL__sub_I_main (_GLOBAL__sub_I_main, funcdef_no=2076, decl_uid=40905, cgraph_uid=958, symbol_order=1116)

_GLOBAL__sub_I_main ()
{
  <bb 2> :
  gimple_call <__static_initialization_and_destruction_0, NULL, 1, 65535>
  gimple_return <NULL>

}


