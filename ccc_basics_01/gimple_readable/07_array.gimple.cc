
;; Function main (main, funcdef_no=0, decl_uid=2332, cgraph_uid=1, symbol_order=0)

main ()
{
  int i;
  float arr2[5];
  int arr1[5];
  int arr[5];
  int D.2342;
  float _1;
  double _2;
  double _3;
  float _4;
  int _20;

  <bb 2> :
  gimple_assign <integer_cst, arr[0], 10, NULL, NULL>
  gimple_assign <integer_cst, arr[1], 20, NULL, NULL>
  gimple_assign <integer_cst, arr[2], 30, NULL, NULL>
  gimple_assign <integer_cst, arr[3], 40, NULL, NULL>
  gimple_assign <integer_cst, arr[4], 50, NULL, NULL>
  gimple_assign <integer_cst, arr1[0], 1, NULL, NULL>
  gimple_assign <integer_cst, arr1[1], 2, NULL, NULL>
  gimple_assign <integer_cst, arr1[2], 3, NULL, NULL>
  gimple_assign <integer_cst, arr1[3], 4, NULL, NULL>
  gimple_assign <integer_cst, arr1[4], 5, NULL, NULL>
  gimple_assign <real_cst, arr2[0], 1.0e+0, NULL, NULL>
  gimple_assign <integer_cst, i_19, 0, NULL, NULL>
  goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <float_expr, _1, i_5, NULL, NULL>
  gimple_assign <nop_expr, _2, _1, NULL, NULL>
  gimple_assign <mult_expr, _3, _2, 2.100000000000000088817841970012523233890533447265625e+0, NULL>
  gimple_assign <nop_expr, _4, _3, NULL, NULL>
  gimple_assign <ssa_name, arr2[i_5], _4, NULL, NULL>
  gimple_assign <plus_expr, i_25, i_5, 1, NULL>

  <bb 4> :
  # gimple_phi <i_5, i_19(2), i_25(3)>
  gimple_cond <le_expr, i_5, 4, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 5> :
  gimple_assign <integer_cst, _20, 0, NULL, NULL>
  gimple_assign <constructor, arr, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, arr1, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, arr2, {CLOBBER}, NULL, NULL>

  <bb 6> :
gimple_label <<L4>>
  gimple_return <_20>

}


