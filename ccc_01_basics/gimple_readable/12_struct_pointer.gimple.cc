
;; Function main (main, funcdef_no=0, decl_uid=2335, cgraph_uid=1, symbol_order=0)

main ()
{
  struct person person1;
  struct person * personPtr;
  int D.2340;
  int * _1;
  float * _2;
  int _3;
  float _4;
  double _5;
  int _15;

  <bb 2> :
  gimple_assign <addr_expr, personPtr_6, &person1, NULL, NULL>
  gimple_call <printf, NULL, "Enter age: ">
  gimple_assign <addr_expr, _1, &personPtr_6->age, NULL, NULL>
  gimple_call <scanf, NULL, "%d", _1>
  gimple_call <printf, NULL, "Enter weight: ">
  gimple_assign <addr_expr, _2, &personPtr_6->weight, NULL, NULL>
  gimple_call <scanf, NULL, "%f", _2>
  gimple_call <__builtin_puts, NULL, &"Displaying:"[0]>
  gimple_assign <component_ref, _3, personPtr_6->age, NULL, NULL>
  gimple_call <printf, NULL, "Age: %d\n", _3>
  gimple_assign <component_ref, _4, personPtr_6->weight, NULL, NULL>
  gimple_assign <nop_expr, _5, _4, NULL, NULL>
  gimple_call <printf, NULL, "weight: %f", _5>
  gimple_assign <integer_cst, _15, 0, NULL, NULL>
  gimple_assign <constructor, person1, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <_15>

}


