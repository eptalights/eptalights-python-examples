
;; Function main (main, funcdef_no=0, decl_uid=2337, cgraph_uid=1, symbol_order=1)

main ()
{
  int i;
  int D.2347;
  int _1;
  int _2;
  char[50] * _3;
  float * _4;
  int _5;
  char[50] * _6;
  float _7;
  double _8;
  int _18;

  <bb 2> :
  gimple_call <__builtin_puts, NULL, &"Enter information of students:"[0]>
  gimple_assign <integer_cst, i_15, 0, NULL, NULL>
  goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <plus_expr, _1, i_9, 1, NULL>
  gimple_assign <ssa_name, s[i_9].roll, _1, NULL, NULL>
  gimple_assign <component_ref, _2, s[i_9].roll, NULL, NULL>
  gimple_call <printf, NULL, "\nFor roll number%d,\n", _2>
  gimple_call <printf, NULL, "Enter first name: ">
  gimple_assign <addr_expr, _3, &s[i_9].firstName, NULL, NULL>
  gimple_call <scanf, NULL, "%s", _3>
  gimple_call <printf, NULL, "Enter marks: ">
  gimple_assign <addr_expr, _4, &s[i_9].marks, NULL, NULL>
  gimple_call <scanf, NULL, "%f", _4>
  gimple_assign <plus_expr, i_31, i_9, 1, NULL>

  <bb 4> :
  # gimple_phi <i_9, i_15(2), i_31(3)>
  gimple_cond <le_expr, i_9, 4, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 5> :
  gimple_call <__builtin_puts, NULL, &"Displaying Information:\n"[0]>
  gimple_assign <integer_cst, i_17, 0, NULL, NULL>
  goto <bb 7>; [INV]

  <bb 6> :
  gimple_assign <plus_expr, _5, i_10, 1, NULL>
  gimple_call <printf, NULL, "\nRoll number: %d\n", _5>
  gimple_call <printf, NULL, "First name: ">
  gimple_assign <addr_expr, _6, &s[i_10].firstName, NULL, NULL>
  gimple_call <puts, NULL, _6>
  gimple_assign <component_ref, _7, s[i_10].marks, NULL, NULL>
  gimple_assign <nop_expr, _8, _7, NULL, NULL>
  gimple_call <printf, NULL, "Marks: %.1f", _8>
  gimple_call <__builtin_putchar, NULL, 10>
  gimple_assign <plus_expr, i_24, i_10, 1, NULL>

  <bb 7> :
  # gimple_phi <i_10, i_17(5), i_24(6)>
  gimple_cond <le_expr, i_10, 4, NULL, NULL>
    goto <bb 6>; [INV]
  else
    goto <bb 8>; [INV]

  <bb 8> :
  gimple_assign <integer_cst, _18, 0, NULL, NULL>

  <bb 9> :
gimple_label <<L6>>
  gimple_return <_18>

}


