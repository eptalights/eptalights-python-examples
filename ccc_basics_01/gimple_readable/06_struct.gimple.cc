
;; Function main (main, funcdef_no=0, decl_uid=2516, cgraph_uid=1, symbol_order=0)

main ()
{
  int week;
  int i;
  int attendence;
  int week;
  int i;
  struct Employee emp[5];
  int D.2537;
  char[20] * _1;
  char[20] * _2;
  int _3;
  int _4;
  int _17;

  <bb 2> :
  gimple_assign <integer_cst, i_13, 0, NULL, NULL>
  goto <bb 7>; [INV]

  <bb 3> :
  gimple_assign <ssa_name, emp[i_5].employeeID, i_5, NULL, NULL>
  gimple_assign <addr_expr, _1, &emp[i_5].Name, NULL, NULL>
  gimple_call <__builtin_memcpy, NULL, _1, "Amit", 5>
  gimple_assign <integer_cst, week_28, 0, NULL, NULL>
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <ssa_name, emp[i_5].WeekAttendence[week_6], week_6, NULL, NULL>
  gimple_assign <plus_expr, week_31, week_6, 1, NULL>

  <bb 5> :
  # gimple_phi <week_6, week_28(3), week_31(4)>
  gimple_cond <le_expr, week_6, 6, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 6>; [INV]

  <bb 6> :
  gimple_assign <plus_expr, i_29, i_5, 1, NULL>

  <bb 7> :
  # gimple_phi <i_5, i_13(2), i_29(6)>
  gimple_cond <le_expr, i_5, 4, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 8>; [INV]

  <bb 8> :
  gimple_call <__builtin_putchar, NULL, 10>
  gimple_assign <integer_cst, i_16, 0, NULL, NULL>
  goto <bb 13>; [INV]

  <bb 9> :
  gimple_assign <addr_expr, _2, &emp[i_7].Name, NULL, NULL>
  gimple_assign <component_ref, _3, emp[i_7].employeeID, NULL, NULL>
  gimple_call <printf, NULL, "Emplyee ID: %d - Employee Name: %s\n", _3, _2>
  gimple_call <__builtin_puts, NULL, &"Attendence"[0]>
  gimple_assign <integer_cst, week_21, 0, NULL, NULL>
  goto <bb 11>; [INV]

  <bb 10> :
  gimple_assign <array_ref, _4, emp[i_7].WeekAttendence[week_8], NULL, NULL>
  gimple_call <printf, NULL, "%d ", _4>
  gimple_assign <plus_expr, week_25, week_8, 1, NULL>

  <bb 11> :
  # gimple_phi <week_8, week_21(9), week_25(10)>
  gimple_cond <le_expr, week_8, 6, NULL, NULL>
    goto <bb 10>; [INV]
  else
    goto <bb 12>; [INV]

  <bb 12> :
  gimple_call <__builtin_putchar, NULL, 10>
  gimple_assign <plus_expr, i_23, i_7, 1, NULL>

  <bb 13> :
  # gimple_phi <i_7, i_16(8), i_23(12)>
  gimple_cond <le_expr, i_7, 4, NULL, NULL>
    goto <bb 9>; [INV]
  else
    goto <bb 14>; [INV]

  <bb 14> :
  gimple_assign <integer_cst, _17, 0, NULL, NULL>
  gimple_assign <constructor, emp, {CLOBBER}, NULL, NULL>

  <bb 15> :
gimple_label <<L13>>
  gimple_return <_17>

}


