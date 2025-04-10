
;; Function printNumbers (printNumbers, funcdef_no=0, decl_uid=2332, cgraph_uid=1, symbol_order=0)

printNumbers ()
{
  int n;

  <bb 2> :
  gimple_assign <integer_cst, n_3, 1, NULL, NULL>

  <bb 3> :
  # gimple_phi <n_1, n_3(2), n_6(4)>
gimple_label <label>
  gimple_call <printf, NULL, "%d ", n_1>
  gimple_assign <plus_expr, n_6, n_1, 1, NULL>
  gimple_cond <le_expr, n_6, 10, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 4> :
  // predicted unlikely by goto predictor.
  goto <bb 3>; [INV]

  <bb 5> :
  gimple_return <NULL>

}



;; Function main (main, funcdef_no=1, decl_uid=2336, cgraph_uid=2, symbol_order=1)

main ()
{
  int D.2341;
  int _3;

  <bb 2> :
  gimple_call <printNumbers, NULL>
  gimple_assign <integer_cst, _3, 0, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}


