
;; Function base::~base (_ZN4baseD2Ev, funcdef_no=1578, decl_uid=37231, cgraph_uid=460, symbol_order=462)

base::~base (struct base * const this)
{
  int (*) () * _1;

  <bb 2> :
  gimple_assign <pointer_plus_expr, _1, &_ZTV4base, 16, NULL>
  gimple_assign <ssa_name, this_3(D)->_vptr.base, _1, NULL, NULL>
  gimple_call <operator<<, NULL, &cout, "Destructing base\n">
  gimple_assign <constructor, *this_3(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function derived::~derived (_ZN7derivedD2Ev, funcdef_no=1585, decl_uid=37315, cgraph_uid=467, symbol_order=469)

derived::~derived (struct derived * const this)
{
  int (*) () * _1;
  struct base * _2;

  <bb 2> :
  gimple_assign <pointer_plus_expr, _1, &_ZTV7derived, 16, NULL>
  gimple_assign <ssa_name, this_4(D)->D.37318._vptr.base, _1, NULL, NULL>
  gimple_call <operator<<, NULL, &cout, "Destructing derived\n">
  gimple_assign <addr_expr, _2, &this_4(D)->D.37318, NULL, NULL>
  gimple_call <__dt_base , NULL, _2>
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function derived::~derived (_ZN7derivedD0Ev, funcdef_no=1587, decl_uid=37309, cgraph_uid=469, symbol_order=471)

derived::~derived (struct derived * const this)
{
  <bb 2> :
  gimple_call <__dt_comp , NULL, this_2(D)>
  gimple_call <operator delete, NULL, this_2(D), 8>
  gimple_return <NULL>

}



;; Function base::~base (_ZN4baseD0Ev, funcdef_no=1580, decl_uid=37225, cgraph_uid=462, symbol_order=464)

base::~base (struct base * const this)
{
  <bb 2> :
  gimple_call <__dt_comp , NULL, this_2(D)>
  gimple_call <operator delete, NULL, this_2(D), 8>
  gimple_return <NULL>

}



;; Function base::base (_ZN4baseC2Ev, funcdef_no=1575, decl_uid=37223, cgraph_uid=457, symbol_order=459)

base::base (struct base * const this)
{
  int (*) () * _1;

  <bb 2> :
  gimple_assign <constructor, *this_3(D), {CLOBBER}, NULL, NULL>
  gimple_assign <pointer_plus_expr, _1, &_ZTV4base, 16, NULL>
  gimple_assign <ssa_name, this_3(D)->_vptr.base, _1, NULL, NULL>
  gimple_call <operator<<, NULL, &cout, "Constructing base\n">
  gimple_return <NULL>

}



;; Function derived::derived (_ZN7derivedC2Ev, funcdef_no=1582, decl_uid=37307, cgraph_uid=464, symbol_order=466)

derived::derived (struct derived * const this)
{
  struct base * _1;
  int (*) () * _2;
  struct base * _3;

  <bb 2> :
  gimple_assign <constructor, *this_5(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_5(D)->D.37318, NULL, NULL>
  gimple_call <__ct_base , NULL, _1>
  gimple_assign <pointer_plus_expr, _2, &_ZTV7derived, 16, NULL>
  gimple_assign <ssa_name, this_5(D)->D.37318._vptr.base, _2, NULL, NULL>
  gimple_call <operator<<, NULL, &cout, "Constructing derived\n">

  <bb 3> :
  gimple_return <NULL>

  <bb 4> :
gimple_label <<L0>>
  gimple_assign <addr_expr, _3, &this_5(D)->D.37318, NULL, NULL>
  gimple_call <__dt_base , NULL, _3>
  gimple_resx <1>

}



;; Function main (main, funcdef_no=1588, decl_uid=37359, cgraph_uid=470, symbol_order=472)

main ()
{
  void * D.41001;
  struct base * b;
  struct derived * d;
  int D.40999;
  struct base * b.0;
  void * D.37362;
  int (*) () * _1;
  int (*) () * _2;
  int (*) () _3;
  void * _7;
  void * _8;
  struct base * b.0_12;
  int _15;

  <bb 2> :
  gimple_call <operator new, _7, 8>
  gimple_assign <ssa_name, _8, _7, NULL, NULL>
  gimple_call <__ct_comp , NULL, _8>

  <bb 3> :
  gimple_assign <ssa_name, d_10, _8, NULL, NULL>
  gimple_assign <ssa_name, b_11, d_10, NULL, NULL>
  gimple_assign <ssa_name, b.0_12, b_11, NULL, NULL>
  gimple_cond <ne_expr, b.0_12, 0B, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <component_ref, _1, b.0_12->_vptr.base, NULL, NULL>
  gimple_assign <pointer_plus_expr, _2, _1, 8, NULL>
  gimple_assign <mem_ref, _3, *_2, NULL, NULL>
  gimple_call <OBJ_TYPE_REF(_3;(struct base)b.0_12->1), NULL, b.0_12>

  <bb 5> :
  gimple_call <getchar, NULL>
  gimple_assign <integer_cst, _15, 0, NULL, NULL>

  <bb 6> :
gimple_label <<L3>>
  gimple_return <_15>

  <bb 7> :
gimple_label <<L4>>
  gimple_call <operator delete, NULL, _8, 8>
  gimple_resx <1>

}



;; Function __static_initialization_and_destruction_0 (_Z41__static_initialization_and_destruction_0ii, funcdef_no=2084, decl_uid=40987, cgraph_uid=966, symbol_order=1001)

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



;; Function _GLOBAL__sub_I_main (_GLOBAL__sub_I_main, funcdef_no=2085, decl_uid=40993, cgraph_uid=967, symbol_order=1131)

_GLOBAL__sub_I_main ()
{
  <bb 2> :
  gimple_call <__static_initialization_and_destruction_0, NULL, 1, 65535>
  gimple_return <NULL>

}


