
;; Function std::__cxx11::basic_string<char>::_Alloc_hider::_Alloc_hider (_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_, funcdef_no=1839, decl_uid=19687, cgraph_uid=721, symbol_order=726)

std::__cxx11::basic_string<char>::_Alloc_hider::_Alloc_hider (struct _Alloc_hider * const this, char * __dat, const struct allocator & __a)
{
  <bb 2> :
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_call <__ct_base , NULL, this_2(D), __a_4(D)>
  gimple_assign <ssa_name, this_2(D)->_M_p, __dat_6(D), NULL, NULL>
  gimple_return <NULL>

}



;; Function std::char_traits<char>::length (_ZNSt11char_traitsIcE6lengthEPKc, funcdef_no=427, decl_uid=11765, cgraph_uid=83, symbol_order=83)

std::char_traits<char>::length (const char_type * __s)
{
  size_t D.41004;
  size_t _3;

  <bb 2> :
  gimple_call <__builtin_strlen, _3, __s_2(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function __gnu_cxx::new_allocator<char>::new_allocator (_ZN9__gnu_cxx13new_allocatorIcEC2Ev, funcdef_no=1832, decl_uid=13860, cgraph_uid=714, symbol_order=719)

__gnu_cxx::new_allocator<char>::new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<char>::allocator (_ZNSaIcEC2Ev, funcdef_no=1656, decl_uid=13932, cgraph_uid=538, symbol_order=540)

std::allocator<char>::allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__ct_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<char>::~new_allocator (_ZN9__gnu_cxx13new_allocatorIcED2Ev, funcdef_no=1835, decl_uid=13865, cgraph_uid=717, symbol_order=722)

__gnu_cxx::new_allocator<char>::~new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<char>::~allocator (_ZNSaIcED2Ev, funcdef_no=1659, decl_uid=13937, cgraph_uid=541, symbol_order=543)

std::allocator<char>::~allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function std::__cxx11::basic_string<char>::_Alloc_hider::~_Alloc_hider (_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev, funcdef_no=1663, decl_uid=20685, cgraph_uid=544, symbol_order=546)

std::__cxx11::basic_string<char>::_Alloc_hider::~_Alloc_hider (struct _Alloc_hider * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::__cxx11::basic_string<char>::~basic_string (_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev, funcdef_no=1668, decl_uid=20530, cgraph_uid=550, symbol_order=552)

std::__cxx11::basic_string<char>::~basic_string (struct basic_string * const this)
{
  struct _Alloc_hider * _1;

  <bb 2> :
  gimple_call <_M_dispose, NULL, this_3(D)>
  gimple_assign <addr_expr, _1, &this_3(D)->_M_dataplus, NULL, NULL>
  gimple_call <__dt_comp , NULL, _1>
  gimple_assign <constructor, *this_3(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function main (main, funcdef_no=1575, decl_uid=37234, cgraph_uid=463, symbol_order=465)

main ()
{
  struct GFG * ptr;
  struct child childObj;
  int D.40983;
  struct string D.37315;
  int (*) () * _1;
  int (*) () * _2;
  int (*) () _3;
  int _12;

  <bb 2> :
  gimple_assign <pointer_plus_expr, _1, &_ZTV5child, 16, NULL>
  gimple_assign <ssa_name, childObj.D.37226._vptr.GFG, _1, NULL, NULL>
  gimple_assign <addr_expr, ptr_7, &childObj.D.37226, NULL, NULL>
  gimple_assign <component_ref, _2, ptr_7->_vptr.GFG, NULL, NULL>
  gimple_assign <mem_ref, _3, *_2, NULL, NULL>
  gimple_call <OBJ_TYPE_REF(_3;(struct GFG)ptr_7->0), D.37315, ptr_7> [return slot optimization]

  <bb 3> :
  gimple_call <operator<<, NULL, &cout, &D.37315>

  <bb 4> :
  gimple_call <__dt_comp , NULL, &D.37315>
  gimple_assign <constructor, D.37315, {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, _12, 0, NULL, NULL>
  gimple_assign <constructor, childObj, {CLOBBER}, NULL, NULL>

  <bb 5> :
gimple_label <<L1>>
  gimple_return <_12>

  <bb 6> :
gimple_label <<L2>>
  gimple_call <__dt_comp , NULL, &D.37315>
  gimple_resx <3>

  <bb 7> :
gimple_label <<L3>>
  gimple_assign <constructor, D.37315, {CLOBBER}, NULL, NULL>
  gimple_resx <2>

  <bb 8> :
gimple_label <<L4>>
  gimple_assign <constructor, childObj, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function __gnu_cxx::__is_null_pointer<const char> (_ZN9__gnu_cxx17__is_null_pointerIKcEEbPT_, funcdef_no=1974, decl_uid=39654, cgraph_uid=856, symbol_order=861)

__gnu_cxx::__is_null_pointer<const char> (const char * __ptr)
{
  bool D.41024;
  bool _2;

  <bb 2> :
  gimple_assign <eq_expr, _2, __ptr_1(D), 0B, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::__iterator_category<const char*> (_ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_, funcdef_no=2010, decl_uid=40022, cgraph_uid=892, symbol_order=897)

std::__iterator_category<const char*> (const char * const & D.40023)
{
  <bb 2> :

  <bb 3> :
gimple_label <<L0>>
  gimple_return <<retval>>

}



;; Function std::__distance<const char*> (_ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag, funcdef_no=2011, decl_uid=40025, cgraph_uid=893, symbol_order=898)

std::__distance<const char*> (const char * __first, const char * __last, struct random_access_iterator_tag D.40028)
{
  difference_type D.41030;
  difference_type _3;

  <bb 2> :
  gimple_assign <pointer_diff_expr, _3, __last_1(D), __first_2(D), NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::distance<const char*> (_ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_, funcdef_no=1975, decl_uid=39657, cgraph_uid=857, symbol_order=862)

std::distance<const char*> (const char * __first, const char * __last)
{
  struct random_access_iterator_tag D.41027;
  difference_type D.41026;
  const char * __first.6_1;
  difference_type _6;

  <bb 2> :
  gimple_call <__iterator_category, NULL, &__first>
  gimple_assign <parm_decl, __first.6_1, __first, NULL, NULL>
  gimple_call <__distance, _6, __first.6_1, __last_4(D), D.41027>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::__cxx11::basic_string<char>::_M_construct<const char*> (_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag, funcdef_no=1939, decl_uid=39294, cgraph_uid=821, symbol_order=826)

std::__cxx11::basic_string<char>::_M_construct<const char*> (struct basic_string * const this, const char * __beg, const char * __end, struct forward_iterator_tag D.39298)
{
  char * D.41019;
  char * D.41018;
  long int D.41017;
  size_type __dnew;
  bool iftmp.2;
  bool retval.1;
  bool _1;
  long int _2;
  long unsigned int _3;
  long unsigned int __dnew.3_4;
  char * _5;
  long unsigned int __dnew.4_6;
  char * _7;
  void * _8;
  long unsigned int __dnew.5_9;
  bool iftmp.2_10;
  bool iftmp.2_18;
  bool iftmp.2_19;
  bool retval.1_20;
  long int _22;
  char * _26;
  char * _30;

  <bb 2> :
  gimple_call <__is_null_pointer, _1, __beg_15(D)>
  gimple_cond <ne_expr, _1, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 3> :
  gimple_cond <ne_expr, __beg_15(D), __end_17(D), NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <integer_cst, iftmp.2_18, 1, NULL, NULL>
  goto <bb 6>; [INV]

  <bb 5> :
  gimple_assign <integer_cst, iftmp.2_19, 0, NULL, NULL>

  <bb 6> :
  # gimple_phi <iftmp.2_10, iftmp.2_18(4), iftmp.2_19(5)>
  gimple_assign <ssa_name, retval.1_20, iftmp.2_10, NULL, NULL>
  gimple_cond <ne_expr, retval.1_20, 0, NULL, NULL>
    goto <bb 7>; [INV]
  else
    goto <bb 8>; [INV]

  <bb 7> :
  gimple_call <__throw_logic_error, NULL, "basic_string::_M_construct null not valid">

  <bb 8> :
  gimple_call <distance, _22, __beg_15(D), __end_17(D)>

  <bb 9> :
  gimple_assign <ssa_name, _2, _22, NULL, NULL>
  gimple_assign <nop_expr, _3, _2, NULL, NULL>
  gimple_assign <ssa_name, __dnew, _3, NULL, NULL>
  gimple_assign <var_decl, __dnew.3_4, __dnew, NULL, NULL>
  gimple_cond <gt_expr, __dnew.3_4, 15, NULL, NULL>
    goto <bb 10>; [INV]
  else
    goto <bb 13>; [INV]

  <bb 10> :
  gimple_call <_M_create, _26, this_24(D), &__dnew, 0>

  <bb 11> :
  gimple_assign <ssa_name, _5, _26, NULL, NULL>
  gimple_call <_M_data, NULL, this_24(D), _5>

  <bb 12> :
  gimple_assign <var_decl, __dnew.4_6, __dnew, NULL, NULL>
  gimple_call <_M_capacity, NULL, this_24(D), __dnew.4_6>

  <bb 13> :
  gimple_call <_M_data, _30, this_24(D)>

  <bb 14> :
  gimple_assign <ssa_name, _7, _30, NULL, NULL>
  gimple_call <_S_copy_chars, NULL, _7, __beg_15(D), __end_17(D)>
  gimple_assign <var_decl, __dnew.5_9, __dnew, NULL, NULL>
  gimple_call <_M_set_length, NULL, this_24(D), __dnew.5_9>

  <bb 15> :
  gimple_assign <constructor, __dnew, {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

  <bb 16> :
gimple_label <<L9>>
  gimple_eh_dispatch <2>

  <bb 17> :
gimple_label <<L10>>
  gimple_call <__builtin_eh_pointer, _8, 2>
  gimple_call <__cxa_begin_catch, NULL, _8>
  gimple_call <_M_dispose, NULL, this_24(D)>

  <bb 18> :
  gimple_call <__cxa_rethrow, NULL>

  <bb 19> :
gimple_label <<L11>>
  gimple_call <__cxa_end_catch, NULL>
  gimple_resx <3>

  <bb 20> :
gimple_label <<L12>>
  gimple_assign <constructor, __dnew, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function std::__cxx11::basic_string<char>::basic_string (_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EPKcRKS3_, funcdef_no=1827, decl_uid=20465, cgraph_uid=709, symbol_order=714)

std::__cxx11::basic_string<char>::basic_string (struct basic_string * const this, const char * __s, const struct allocator & __a)
{
  char * D.41001;
  const char * __end;
  struct forward_iterator_tag D.41000;
  struct random_access_iterator_tag D.39307;
  const char * iftmp.0;
  struct _Alloc_hider * _1;
  char * _2;
  long unsigned int _3;
  struct random_access_iterator_tag * _4;
  struct _Alloc_hider * _5;
  const char * iftmp.0_6;
  char * _12;
  const char * iftmp.0_16;
  const char * iftmp.0_18;

  <bb 2> :
  gimple_assign <constructor, *this_9(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_9(D)->_M_dataplus, NULL, NULL>
  gimple_call <_M_local_data, _12, this_9(D)>
  gimple_assign <ssa_name, _2, _12, NULL, NULL>
  gimple_call <__ct_comp , NULL, _1, _2, __a_13(D)>
  gimple_cond <ne_expr, __s_15(D), 0B, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <length, _3, __s_15(D)>
  gimple_assign <pointer_plus_expr, iftmp.0_18, __s_15(D), _3, NULL>
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <integer_cst, iftmp.0_16, 1B, NULL, NULL>

  <bb 5> :
  # gimple_phi <iftmp.0_6, iftmp.0_18(3), iftmp.0_16(4)>
  gimple_assign <ssa_name, __end_19, iftmp.0_6, NULL, NULL>
  gimple_assign <addr_expr, _4, &D.39307, NULL, NULL>
  gimple_call <_M_construct, NULL, this_9(D), __s_15(D), __end_19, D.41000>

  <bb 6> :
  gimple_assign <constructor, D.39307, {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

  <bb 7> :
gimple_label <<L3>>
  gimple_assign <constructor, D.39307, {CLOBBER}, NULL, NULL>
  gimple_resx <2>

  <bb 8> :
gimple_label <<L4>>
  gimple_assign <addr_expr, _5, &this_9(D)->_M_dataplus, NULL, NULL>
  gimple_call <__dt_comp , NULL, _5>
  gimple_resx <1>

}



;; Function child::returnString (_ZN5child12returnStringB5cxx11Ev, funcdef_no=1574, decl_uid=37224, cgraph_uid=456, symbol_order=458)

__attribute__((abi_tag ("cxx11")))
child::returnString (struct child * const this)
{
  struct allocator D.37232;

  <bb 2> :
  gimple_call <__ct_comp , NULL, &D.37232>
  gimple_call <__ct_comp , NULL, _3(D), "GeeksforGeeks", &D.37232>

  <bb 3> :
  gimple_call <__dt_comp , NULL, &D.37232>
  gimple_assign <constructor, D.37232, {CLOBBER}, NULL, NULL>

  <bb 4> :
gimple_label <<L2>>
  gimple_return <_3(D)>

  <bb 5> :
gimple_label <<L3>>
  gimple_call <__dt_comp , NULL, &D.37232>
  gimple_resx <2>

  <bb 6> :
gimple_label <<L4>>
  gimple_assign <constructor, D.37232, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function __static_initialization_and_destruction_0 (_Z41__static_initialization_and_destruction_0ii, funcdef_no=2078, decl_uid=40975, cgraph_uid=960, symbol_order=995)

__static_initialization_and_destruction_0 (int __initialize_p, int __priority)
{
  <bb 2> :
  gimple_cond <eq_expr, __initialize_p_2(D), 1, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 3> :
  gimple_cond <eq_expr, __priority_4(D), 65535, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 4> :
  gimple_call <__ct_comp , NULL, &__ioinit>
  gimple_call <__cxa_atexit, NULL, __dt_comp , &__ioinit, &__dso_handle>

  <bb 5> :
  gimple_return <NULL>

}



;; Function _GLOBAL__sub_I_main (_GLOBAL__sub_I_main, funcdef_no=2079, decl_uid=40981, cgraph_uid=961, symbol_order=1125)

_GLOBAL__sub_I_main ()
{
  <bb 2> :
  gimple_call <__static_initialization_and_destruction_0, NULL, 1, 65535>
  gimple_return <NULL>

}


