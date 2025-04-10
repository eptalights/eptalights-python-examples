
;; Function main (main, funcdef_no=0, decl_uid=2332, cgraph_uid=1, symbol_order=0)

main ()
{
  int * ptr;
  int x[5];
  int D.2337;
  int _1;
  int * _2;
  int _3;
  int * _4;
  int _5;
  int _16;

  <bb 2> :
  gimple_assign <integer_cst, x[0], 1, NULL, NULL>
  gimple_assign <integer_cst, x[1], 2, NULL, NULL>
  gimple_assign <integer_cst, x[2], 3, NULL, NULL>
  gimple_assign <integer_cst, x[3], 4, NULL, NULL>
  gimple_assign <integer_cst, x[4], 5, NULL, NULL>
  gimple_assign <addr_expr, ptr_12, &x[2], NULL, NULL>
  gimple_assign <mem_ref, _1, *ptr_12, NULL, NULL>
  gimple_call <printf, NULL, "*ptr = %d \n", _1>
  gimple_assign <pointer_plus_expr, _2, ptr_12, 4, NULL>
  gimple_assign <mem_ref, _3, *_2, NULL, NULL>
  gimple_call <printf, NULL, "*(ptr+1) = %d \n", _3>
  gimple_assign <pointer_plus_expr, _4, ptr_12, 18446744073709551612, NULL>
  gimple_assign <mem_ref, _5, *_4, NULL, NULL>
  gimple_call <printf, NULL, "*(ptr-1) = %d", _5>
  gimple_assign <integer_cst, _16, 0, NULL, NULL>
  gimple_assign <constructor, x, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <_16>

}


