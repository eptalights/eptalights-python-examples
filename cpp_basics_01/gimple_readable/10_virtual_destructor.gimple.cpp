
;; Function base::base (_ZN4baseC2Ev, funcdef_no=1575, decl_uid=37223, cgraph_uid=457, symbol_order=459)

base::base (struct base * const this)
{
  <bb 2> :
  gimple_call <operator<<, NULL, &cout, "Constructing base\n">
  gimple_return <NULL>

}



;; Function base::~base (_ZN4baseD2Ev, funcdef_no=1578, decl_uid=37228, cgraph_uid=460, symbol_order=462)

base::~base (struct base * const this)
{
  <bb 2> :
  gimple_call <operator<<, NULL, &cout, "Destructing base\n">
  gimple_return <NULL>

}



;; Function derived::derived (_ZN7derivedC2Ev, funcdef_no=1581, decl_uid=37299, cgraph_uid=463, symbol_order=465)

derived::derived (struct derived * const this)
{
  <bb 2> :
  gimple_call <__ct_base , NULL, this_2(D)>
  gimple_call <operator<<, NULL, &cout, "Constructing derived\n">

  <bb 3> :
  gimple_return <NULL>

  <bb 4> :
gimple_label <<L0>>
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_resx <1>

}



;; Function main (main, funcdef_no=1586, decl_uid=37342, cgraph_uid=468, symbol_order=470)

main ()
{
  void * D.40979;
  struct base * b;
  struct derived * d;
  int D.40977;
  struct base * b.0;
  void * D.37345;
  void * _4;
  void * _5;
  struct base * b.0_9;
  int _13;

  <bb 2> :
  gimple_call <operator new, _4, 1>
  gimple_assign <ssa_name, _5, _4, NULL, NULL>
  gimple_call <__ct_comp , NULL, _5>

  <bb 3> :
  gimple_assign <ssa_name, d_7, _5, NULL, NULL>
  gimple_assign <ssa_name, b_8, d_7, NULL, NULL>
  gimple_assign <ssa_name, b.0_9, b_8, NULL, NULL>
  gimple_cond <ne_expr, b.0_9, 0B, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 4> :
  gimple_call <__dt_comp , NULL, b.0_9>
  gimple_call <operator delete, NULL, b.0_9, 1>

  <bb 5> :
  gimple_call <getchar, NULL>
  gimple_assign <integer_cst, _13, 0, NULL, NULL>

  <bb 6> :
gimple_label <<L3>>
  gimple_return <_13>

  <bb 7> :
gimple_label <<L4>>
  gimple_call <operator delete, NULL, _5, 1>
  gimple_resx <1>

}



;; Function __static_initialization_and_destruction_0 (_Z41__static_initialization_and_destruction_0ii, funcdef_no=2082, decl_uid=40965, cgraph_uid=964, symbol_order=993)

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



;; Function _GLOBAL__sub_I_main (_GLOBAL__sub_I_main, funcdef_no=2083, decl_uid=40971, cgraph_uid=965, symbol_order=1123)

_GLOBAL__sub_I_main ()
{
  <bb 2> :
  gimple_call <__static_initialization_and_destruction_0, NULL, 1, 65535>
  gimple_return <NULL>

}


