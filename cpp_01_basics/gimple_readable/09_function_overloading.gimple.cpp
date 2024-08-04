
;; Function Geeks::func (_ZN5Geeks4funcEi, funcdef_no=8398, decl_uid=162950, cgraph_uid=1856, symbol_order=1905)

Geeks::func (struct Geeks * const this, int x)
{
  struct basic_ostream & D.173425;
  struct basic_ostream & D.173424;
  struct basic_ostream & _1;
  struct basic_ostream & _2;
  struct basic_ostream & _5;
  struct basic_ostream & _8;

  <bb 2> :
  gimple_call <operator<<, _5, &cout, "value of x is ">
  gimple_assign <ssa_name, _1, _5, NULL, NULL>
  gimple_call <operator<<, _8, _1, x_6(D)>
  gimple_assign <ssa_name, _2, _8, NULL, NULL>
  gimple_call <operator<<, NULL, _2, endl>
  gimple_return <NULL>

}



;; Function Geeks::func (_ZN5Geeks4funcEd, funcdef_no=8399, decl_uid=162953, cgraph_uid=1857, symbol_order=1906)

Geeks::func (struct Geeks * const this, double x)
{
  struct __ostream_type & D.173427;
  struct basic_ostream & D.173426;
  struct basic_ostream & _1;
  struct __ostream_type & _2;
  struct basic_ostream & _5;
  struct __ostream_type & _8;

  <bb 2> :
  gimple_call <operator<<, _5, &cout, "value of x is ">
  gimple_assign <ssa_name, _1, _5, NULL, NULL>
  gimple_call <operator<<, _8, _1, x_6(D)>
  gimple_assign <ssa_name, _2, _8, NULL, NULL>
  gimple_call <operator<<, NULL, _2, endl>
  gimple_return <NULL>

}



;; Function Geeks::func (_ZN5Geeks4funcEii, funcdef_no=8400, decl_uid=162957, cgraph_uid=1858, symbol_order=1907)

Geeks::func (struct Geeks * const this, int x, int y)
{
  struct basic_ostream & D.173431;
  struct basic_ostream & D.173430;
  struct basic_ostream & D.173429;
  struct basic_ostream & D.173428;
  struct basic_ostream & _1;
  struct basic_ostream & _2;
  struct basic_ostream & _3;
  struct basic_ostream & _4;
  struct basic_ostream & _7;
  struct basic_ostream & _10;
  struct basic_ostream & _12;
  struct basic_ostream & _15;

  <bb 2> :
  gimple_call <operator<<, _7, &cout, "value of x and y is ">
  gimple_assign <ssa_name, _1, _7, NULL, NULL>
  gimple_call <operator<<, _10, _1, x_8(D)>
  gimple_assign <ssa_name, _2, _10, NULL, NULL>
  gimple_call <operator<<, _12, _2, ", ">
  gimple_assign <ssa_name, _3, _12, NULL, NULL>
  gimple_call <operator<<, _15, _3, y_13(D)>
  gimple_assign <ssa_name, _4, _15, NULL, NULL>
  gimple_call <operator<<, NULL, _4, endl>
  gimple_return <NULL>

}



;; Function main (main, funcdef_no=8401, decl_uid=163184, cgraph_uid=1859, symbol_order=1908)

main ()
{
  struct Geeks obj1;
  int D.173419;
  int _6;

  <bb 2> :
  gimple_call <func, NULL, &obj1, 7>

  <bb 3> :
  gimple_call <func, NULL, &obj1, 9.1319999999999996731503415503539144992828369140625e+0>

  <bb 4> :
  gimple_call <func, NULL, &obj1, 85, 64>

  <bb 5> :
  gimple_assign <integer_cst, _6, 0, NULL, NULL>
  gimple_assign <constructor, obj1, {CLOBBER}, NULL, NULL>

  <bb 6> :
gimple_label <<L1>>
  gimple_return <_6>

  <bb 7> :
gimple_label <<L2>>
  gimple_assign <constructor, obj1, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function __static_initialization_and_destruction_0 (_Z41__static_initialization_and_destruction_0ii, funcdef_no=9756, decl_uid=173165, cgraph_uid=3214, symbol_order=3398)

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



;; Function _GLOBAL__sub_I_main (_GLOBAL__sub_I_main, funcdef_no=9779, decl_uid=173417, cgraph_uid=3237, symbol_order=4167)

_GLOBAL__sub_I_main ()
{
  <bb 2> :
  gimple_call <__static_initialization_and_destruction_0, NULL, 1, 65535>
  gimple_return <NULL>

}


