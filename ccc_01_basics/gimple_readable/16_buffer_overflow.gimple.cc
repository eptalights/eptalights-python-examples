
;; Function check_authentication (check_authentication, funcdef_no=6, decl_uid=3030, cgraph_uid=7, symbol_order=6)

check_authentication (char * password)
{
  char password_buffer[16];
  int auth_flag;
  int D.3043;
  int _1;
  int _2;
  int _11;

  <bb 2> :
  gimple_assign <integer_cst, auth_flag_5, 0, NULL, NULL>
  gimple_call <strcpy, NULL, &password_buffer, password_7(D)>
  gimple_call <strcmp, _1, &password_buffer, "brillig">
  gimple_cond <eq_expr, _1, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <integer_cst, auth_flag_9, 1, NULL, NULL>

  <bb 4> :
  # gimple_phi <auth_flag_3, auth_flag_5(2), auth_flag_9(3)>
  gimple_call <strcmp, _2, &password_buffer, "outgrabe">
  gimple_cond <eq_expr, _2, 0, NULL, NULL>
    goto <bb 5>; [INV]
  else
    goto <bb 6>; [INV]

  <bb 5> :
  gimple_assign <integer_cst, auth_flag_10, 1, NULL, NULL>

  <bb 6> :
  # gimple_phi <auth_flag_4, auth_flag_3(4), auth_flag_10(5)>
  gimple_assign <ssa_name, _11, auth_flag_4, NULL, NULL>
  gimple_assign <constructor, password_buffer, {CLOBBER}, NULL, NULL>

  <bb 7> :
gimple_label <<L5>>
  gimple_return <_11>

}



;; Function main (main, funcdef_no=7, decl_uid=3036, cgraph_uid=8, symbol_order=7)

main (int argc, char * * argv)
{
  int D.3051;
  char * _1;
  char * * _2;
  char * _3;
  int _4;
  int _14;

  <bb 2> :
  gimple_cond <le_expr, argc_6(D), 1, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <mem_ref, _1, *argv_7(D), NULL, NULL>
  gimple_call <printf, NULL, "Usage: %s <password>\n", _1>
  gimple_call <exit, NULL, 0>

  <bb 4> :
  gimple_assign <pointer_plus_expr, _2, argv_7(D), 8, NULL>
  gimple_assign <mem_ref, _3, *_2, NULL, NULL>
  gimple_call <check_authentication, _4, _3>
  gimple_cond <ne_expr, _4, 0, NULL, NULL>
    goto <bb 5>; [INV]
  else
    goto <bb 6>; [INV]

  <bb 5> :
  gimple_call <__builtin_puts, NULL, &"\n-=-=-=-=-=-=-=-=-=-=-=-=-=-"[0]>
  gimple_call <__builtin_puts, NULL, &"      Access Granted."[0]>
  gimple_call <__builtin_puts, NULL, &"-=-=-=-=-=-=-=-=-=-=-=-=-=-"[0]>
  goto <bb 7>; [INV]

  <bb 6> :
  gimple_call <__builtin_puts, NULL, &"\nAccess Denied."[0]>

  <bb 7> :
  gimple_assign <integer_cst, _14, 0, NULL, NULL>

  <bb 8> :
gimple_label <<L5>>
  gimple_return <_14>

}


