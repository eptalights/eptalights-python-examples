
;; Function main (main, funcdef_no=0, decl_uid=2332, cgraph_uid=1, symbol_order=0)

main ()
{
  int * p;
  int c;
  int D.2337;
  int _1;
  int _6;

  <bb 2> :
  gimple_assign <integer_cst, c, 5, NULL, NULL>
  gimple_assign <addr_expr, p_4, &c, NULL, NULL>
  gimple_assign <mem_ref, _1, *p_4, NULL, NULL>
  gimple_call <printf, NULL, "%d", _1>
  gimple_assign <integer_cst, _6, 0, NULL, NULL>
  gimple_assign <constructor, c, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <_6>

}


