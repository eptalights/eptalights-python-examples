
;; Function main (main, funcdef_no=0, decl_uid=2336, cgraph_uid=1, symbol_order=1)

main ()
{
  int D.2339;
  float _1;
  double _2;
  int _3;
  int _9;

  <bb 2> :
  gimple_assign <real_cst, j.salary, 1.230000019073486328125e+1, NULL, NULL>
  gimple_assign <integer_cst, j.workerNo, 100, NULL, NULL>
  gimple_assign <component_ref, _1, j.salary, NULL, NULL>
  gimple_assign <nop_expr, _2, _1, NULL, NULL>
  gimple_call <printf, NULL, "Salary = %.1f\n", _2>
  gimple_assign <component_ref, _3, j.workerNo, NULL, NULL>
  gimple_call <printf, NULL, "Number of workers = %d", _3>
  gimple_assign <integer_cst, _9, 0, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_9>

}


