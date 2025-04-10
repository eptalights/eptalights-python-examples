
;; Function Check::Check (_ZN5CheckC2Ev, funcdef_no=1575, decl_uid=37225, cgraph_uid=457, symbol_order=459)

Check::Check (struct Check * const this)
{
  <bb 2> :
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, this_2(D)->i, 0, NULL, NULL>
  gimple_return <NULL>

}



;; Function Check::operator++ (_ZN5CheckppEv, funcdef_no=1577, decl_uid=37219, cgraph_uid=459, symbol_order=461)

Check::operator++ (struct Check * const this)
{
  int _1;
  int _2;

  <bb 2> :
  gimple_assign <component_ref, _1, this_4(D)->i, NULL, NULL>
  gimple_assign <plus_expr, _2, _1, 1, NULL>
  gimple_assign <ssa_name, this_4(D)->i, _2, NULL, NULL>
  gimple_return <NULL>

}



;; Function Check::Display (_ZN5Check7DisplayEv, funcdef_no=1578, decl_uid=37221, cgraph_uid=460, symbol_order=462)

Check::Display (struct Check * const this)
{
  struct basic_ostream & D.40940;
  struct basic_ostream & D.40939;
  struct basic_ostream & _1;
  int _2;
  struct basic_ostream & _3;
  struct basic_ostream & _6;
  struct basic_ostream & _9;

  <bb 2> :
  gimple_call <operator<<, _6, &cout, "i=">
  gimple_assign <ssa_name, _1, _6, NULL, NULL>
  gimple_assign <component_ref, _2, this_7(D)->i, NULL, NULL>
  gimple_call <operator<<, _9, _1, _2>
  gimple_assign <ssa_name, _3, _9, NULL, NULL>
  gimple_call <operator<<, NULL, _3, endl>
  gimple_return <NULL>

}



;; Function main (main, funcdef_no=1579, decl_uid=37281, cgraph_uid=461, symbol_order=463)

main ()
{
  struct Check obj;
  int D.40934;
  int _7;

  <bb 2> :
  gimple_call <__ct_comp , NULL, &obj>
  gimple_call <Display, NULL, &obj>

  <bb 3> :
  gimple_call <operator++, NULL, &obj>
  gimple_call <Display, NULL, &obj>

  <bb 4> :
  gimple_assign <integer_cst, _7, 0, NULL, NULL>
  gimple_assign <constructor, obj, {CLOBBER}, NULL, NULL>

  <bb 5> :
gimple_label <<L1>>
  gimple_return <_7>

  <bb 6> :
gimple_label <<L2>>
  gimple_assign <constructor, obj, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function __static_initialization_and_destruction_0 (_Z41__static_initialization_and_destruction_0ii, funcdef_no=2080, decl_uid=40926, cgraph_uid=962, symbol_order=991)

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



;; Function _GLOBAL__sub_I_main (_GLOBAL__sub_I_main, funcdef_no=2081, decl_uid=40932, cgraph_uid=963, symbol_order=1121)

_GLOBAL__sub_I_main ()
{
  <bb 2> :
  gimple_call <__static_initialization_and_destruction_0, NULL, 1, 65535>
  gimple_return <NULL>

}


