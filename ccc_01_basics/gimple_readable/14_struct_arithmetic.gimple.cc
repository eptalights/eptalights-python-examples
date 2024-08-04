
;; Function addNumbers (addNumbers, funcdef_no=1, decl_uid=2339, cgraph_uid=2, symbol_order=1)

addNumbers (struct complex c1, struct complex c2, struct complex * result)
{
  float _1;
  float _2;
  float _3;
  float _4;
  float _5;
  float _6;

  <bb 2> :
  gimple_assign <component_ref, _1, c1.real, NULL, NULL>
  gimple_assign <component_ref, _2, c2.real, NULL, NULL>
  gimple_assign <plus_expr, _3, _1, _2, NULL>
  gimple_assign <ssa_name, result_8(D)->real, _3, NULL, NULL>
  gimple_assign <component_ref, _4, c1.imag, NULL, NULL>
  gimple_assign <component_ref, _5, c2.imag, NULL, NULL>
  gimple_assign <plus_expr, _6, _4, _5, NULL>
  gimple_assign <ssa_name, result_8(D)->imag, _6, NULL, NULL>
  gimple_return <NULL>

}



;; Function main (main, funcdef_no=0, decl_uid=2340, cgraph_uid=1, symbol_order=0)

main ()
{
  struct complex result;
  struct complex c2;
  struct complex c1;
  int D.2351;
  float _1;
  double _2;
  float _3;
  double _4;
  int _19;

  <bb 2> :
  gimple_call <__builtin_puts, NULL, &"For first number,"[0]>
  gimple_call <printf, NULL, "Enter real part: ">
  gimple_call <scanf, NULL, "%f", &c1.real>
  gimple_call <printf, NULL, "Enter imaginary part: ">
  gimple_call <scanf, NULL, "%f", &c1.imag>
  gimple_call <__builtin_puts, NULL, &"For second number, "[0]>
  gimple_call <printf, NULL, "Enter real part: ">
  gimple_call <scanf, NULL, "%f", &c2.real>
  gimple_call <printf, NULL, "Enter imaginary part: ">
  gimple_call <scanf, NULL, "%f", &c2.imag>
  gimple_call <addNumbers, NULL, c1, c2, &result>
  gimple_assign <component_ref, _1, result.real, NULL, NULL>
  gimple_assign <nop_expr, _2, _1, NULL, NULL>
  gimple_call <printf, NULL, "\nresult.real = %.1f\n", _2>
  gimple_assign <component_ref, _3, result.imag, NULL, NULL>
  gimple_assign <nop_expr, _4, _3, NULL, NULL>
  gimple_call <printf, NULL, "result.imag = %.1f", _4>
  gimple_assign <integer_cst, _19, 0, NULL, NULL>
  gimple_assign <constructor, c1, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, c2, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, result, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <_19>

}


