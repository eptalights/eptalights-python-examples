
;; Function main (main, funcdef_no=6, decl_uid=2853, cgraph_uid=7, symbol_order=6)

main ()
{
  int i;
  struct person * ptr;
  int D.2864;
  long unsigned int _1;
  long unsigned int _2;
  struct person * _3;
  int * _4;
  long unsigned int _5;
  long unsigned int _6;
  struct person * _7;
  char[30] * _8;
  long unsigned int _9;
  long unsigned int _10;
  struct person * _11;
  int _12;
  long unsigned int _13;
  long unsigned int _14;
  struct person * _15;
  char[30] * _16;
  int _27;

  <bb 2> :
  gimple_call <malloc, ptr_23, 120>
  gimple_assign <integer_cst, i_24, 0, NULL, NULL>
  goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <printf, NULL, "Enter first name and age respectively: ">
  gimple_assign <nop_expr, _1, i_17, NULL, NULL>
  gimple_assign <mult_expr, _2, _1, 40, NULL>
  gimple_assign <pointer_plus_expr, _3, ptr_23, _2, NULL>
  gimple_assign <addr_expr, _4, &_3->age, NULL, NULL>
  gimple_assign <nop_expr, _5, i_17, NULL, NULL>
  gimple_assign <mult_expr, _6, _5, 40, NULL>
  gimple_assign <pointer_plus_expr, _7, ptr_23, _6, NULL>
  gimple_assign <addr_expr, _8, &_7->name, NULL, NULL>
  gimple_call <scanf, NULL, "%s %d", _8, _4>
  gimple_assign <plus_expr, i_32, i_17, 1, NULL>

  <bb 4> :
  # gimple_phi <i_17, i_24(2), i_32(3)>
  gimple_cond <le_expr, i_17, 2, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 5> :
  gimple_call <__builtin_puts, NULL, &"Displaying Information:"[0]>
  gimple_assign <integer_cst, i_26, 0, NULL, NULL>
  goto <bb 7>; [INV]

  <bb 6> :
  gimple_assign <nop_expr, _9, i_18, NULL, NULL>
  gimple_assign <mult_expr, _10, _9, 40, NULL>
  gimple_assign <pointer_plus_expr, _11, ptr_23, _10, NULL>
  gimple_assign <component_ref, _12, _11->age, NULL, NULL>
  gimple_assign <nop_expr, _13, i_18, NULL, NULL>
  gimple_assign <mult_expr, _14, _13, 40, NULL>
  gimple_assign <pointer_plus_expr, _15, ptr_23, _14, NULL>
  gimple_assign <addr_expr, _16, &_15->name, NULL, NULL>
  gimple_call <printf, NULL, "Name: %s\tAge: %d\n", _16, _12>
  gimple_assign <plus_expr, i_29, i_18, 1, NULL>

  <bb 7> :
  # gimple_phi <i_18, i_26(5), i_29(6)>
  gimple_cond <le_expr, i_18, 2, NULL, NULL>
    goto <bb 6>; [INV]
  else
    goto <bb 8>; [INV]

  <bb 8> :
  gimple_assign <integer_cst, _27, 0, NULL, NULL>

  <bb 9> :
gimple_label <<L6>>
  gimple_return <_27>

}


