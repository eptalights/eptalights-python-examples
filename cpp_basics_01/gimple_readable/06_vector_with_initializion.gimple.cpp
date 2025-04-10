
;; Function std::__size_to_integer (_ZSt17__size_to_integerm, funcdef_no=354, decl_uid=10940, cgraph_uid=64, symbol_order=64)

std::__size_to_integer (long unsigned int __n)
{
  long unsigned int D.45978;
  long unsigned int _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __n_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function __gnu_cxx::__normal_iterator<int*, std::vector<int> >::operator++ (_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv, funcdef_no=2181, decl_uid=41698, cgraph_uid=785, symbol_order=790)

__gnu_cxx::__normal_iterator<int*, std::vector<int> >::operator++ (struct __normal_iterator * const this)
{
  struct __normal_iterator & D.46001;
  int * _1;
  int * _2;
  struct __normal_iterator & _6;

  <bb 2> :
  gimple_assign <component_ref, _1, this_4(D)->_M_current, NULL, NULL>
  gimple_assign <pointer_plus_expr, _2, _1, 4, NULL>
  gimple_assign <ssa_name, this_4(D)->_M_current, _2, NULL, NULL>
  gimple_assign <ssa_name, _6, this_4(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function __gnu_cxx::__normal_iterator<int*, std::vector<int> >::operator* (_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv, funcdef_no=2182, decl_uid=41694, cgraph_uid=786, symbol_order=791)

__gnu_cxx::__normal_iterator<int*, std::vector<int> >::operator* (const struct __normal_iterator * const this)
{
  int & D.45999;
  int & _3;

  <bb 2> :
  gimple_assign <component_ref, _3, this_2(D)->_M_current, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function __gnu_cxx::new_allocator<int>::new_allocator (_ZN9__gnu_cxx13new_allocatorIiEC2Ev, funcdef_no=2294, decl_uid=40616, cgraph_uid=898, symbol_order=903)

__gnu_cxx::new_allocator<int>::new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<int>::allocator (_ZNSaIiEC2Ev, funcdef_no=2167, decl_uid=40686, cgraph_uid=771, symbol_order=776)

std::allocator<int>::allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__ct_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<int>::~new_allocator (_ZN9__gnu_cxx13new_allocatorIiED2Ev, funcdef_no=2297, decl_uid=40621, cgraph_uid=901, symbol_order=906)

__gnu_cxx::new_allocator<int>::~new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<int>::~allocator (_ZNSaIiED2Ev, funcdef_no=2170, decl_uid=40691, cgraph_uid=774, symbol_order=779)

std::allocator<int>::~allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl (_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev, funcdef_no=2302, decl_uid=40955, cgraph_uid=905, symbol_order=910)

std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl (struct _Vector_impl * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator (_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv, funcdef_no=2310, decl_uid=40791, cgraph_uid=914, symbol_order=919)

std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator (struct _Vector_base * const this)
{
  struct _Tp_alloc_type & D.45962;
  struct _Tp_alloc_type & _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_impl, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function __gnu_cxx::__normal_iterator<int*, std::vector<int> >::__normal_iterator (_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_, funcdef_no=2313, decl_uid=41736, cgraph_uid=917, symbol_order=922)

__gnu_cxx::__normal_iterator<int*, std::vector<int> >::__normal_iterator (struct __normal_iterator * const this, int * const & __i)
{
  int * _1;

  <bb 2> :
  gimple_assign <constructor, *this_3(D), {CLOBBER}, NULL, NULL>
  gimple_assign <mem_ref, _1, *__i_5(D), NULL, NULL>
  gimple_assign <ssa_name, this_3(D)->_M_current, _1, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::vector<int>::begin (_ZNSt6vectorIiSaIiEE5beginEv, funcdef_no=2178, decl_uid=41171, cgraph_uid=782, symbol_order=787)

std::vector<int>::begin (struct vector * const this)
{
  struct iterator D.43716;
  struct iterator D.45989;
  int * * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->D.41590._M_impl.D.40901._M_start, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.43716, _1>
  gimple_assign <var_decl, D.45989, D.43716, NULL, NULL>
  gimple_assign <constructor, D.43716, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <D.45989>

}



;; Function std::vector<int>::end (_ZNSt6vectorIiSaIiEE3endEv, funcdef_no=2179, decl_uid=41175, cgraph_uid=783, symbol_order=788)

std::vector<int>::end (struct vector * const this)
{
  struct iterator D.43718;
  struct iterator D.45992;
  int * * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->D.41590._M_impl.D.40901._M_finish, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.43718, _1>
  gimple_assign <var_decl, D.45992, D.43718, NULL, NULL>
  gimple_assign <constructor, D.43718, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <D.45992>

}



;; Function __gnu_cxx::__normal_iterator<int*, std::vector<int> >::base (_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv, funcdef_no=2315, decl_uid=41723, cgraph_uid=919, symbol_order=924)

__gnu_cxx::__normal_iterator<int*, std::vector<int> >::base (const struct __normal_iterator * const this)
{
  int * const & D.45997;
  int * const & _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_current, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function __gnu_cxx::operator!=<int*, std::vector<int> > (_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_, funcdef_no=2180, decl_uid=41794, cgraph_uid=784, symbol_order=789)

__gnu_cxx::operator!=<int*, std::vector<int> > (const struct __normal_iterator & __lhs, const struct __normal_iterator & __rhs)
{
  bool D.45995;
  int * const & _1;
  int * _2;
  int * const & _3;
  int * _4;
  bool _10;

  <bb 2> :
  gimple_call <base, _1, __lhs_6(D)>
  gimple_assign <mem_ref, _2, *_1, NULL, NULL>
  gimple_call <base, _3, __rhs_8(D)>
  gimple_assign <mem_ref, _4, *_3, NULL, NULL>
  gimple_assign <ne_expr, _10, _2, _4, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_10>

}



;; Function std::min<long unsigned int> (_ZSt3minImERKT_S2_S2_, funcdef_no=2399, decl_uid=11279, cgraph_uid=1003, symbol_order=1008)

std::min<long unsigned int> (const long unsigned int & __a, const long unsigned int & __b)
{
  const long unsigned int & D.45941;
  long unsigned int _1;
  long unsigned int _2;
  const long unsigned int & _3;
  const long unsigned int & _7;
  const long unsigned int & _8;

  <bb 2> :
  gimple_assign <mem_ref, _1, *__b_5(D), NULL, NULL>
  gimple_assign <mem_ref, _2, *__a_6(D), NULL, NULL>
  gimple_cond <lt_expr, _1, _2, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <ssa_name, _8, __b_5(D), NULL, NULL>
  // predicted unlikely by early return (on trees) predictor.
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <ssa_name, _7, __a_6(D), NULL, NULL>

  <bb 5> :
  # gimple_phi <_3, _8(3), _7(4)>
gimple_label <<L2>>
  gimple_return <_3>

}



;; Function __gnu_cxx::new_allocator<int>::new_allocator (_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_, funcdef_no=2401, decl_uid=40611, cgraph_uid=1005, symbol_order=1010)

__gnu_cxx::new_allocator<int>::new_allocator (struct new_allocator * const this, const struct new_allocator & D.40613)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<int>::allocator (_ZNSaIiEC2ERKS_, funcdef_no=2353, decl_uid=40681, cgraph_uid=957, symbol_order=962)

std::allocator<int>::allocator (struct allocator * const this, const struct allocator & __a)
{
  <bb 2> :
  gimple_call <__ct_base , NULL, this_2(D), __a_3(D)>
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_Vector_impl_data::_Vector_impl_data (_ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev, funcdef_no=2404, decl_uid=40850, cgraph_uid=1008, symbol_order=1013)

std::_Vector_base<int, std::allocator<int> >::_Vector_impl_data::_Vector_impl_data (struct _Vector_impl_data * const this)
{
  <bb 2> :
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, this_2(D)->_M_start, 0B, NULL, NULL>
  gimple_assign <integer_cst, this_2(D)->_M_finish, 0B, NULL, NULL>
  gimple_assign <integer_cst, this_2(D)->_M_end_of_storage, 0B, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl (_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_, funcdef_no=2356, decl_uid=40894, cgraph_uid=960, symbol_order=965)

std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl (struct _Vector_impl * const this, const struct _Tp_alloc_type & __a)
{
  struct _Vector_impl_data * _1;

  <bb 2> :
  gimple_assign <constructor, *this_3(D), {CLOBBER}, NULL, NULL>
  gimple_call <__ct_base , NULL, this_3(D), __a_5(D)>
  gimple_assign <addr_expr, _1, &this_3(D)->D.40901, NULL, NULL>
  gimple_call <__ct_base , NULL, _1>
  gimple_return <NULL>

}



;; Function std::_Destroy_aux<true>::__destroy<int*> (_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_, funcdef_no=2409, decl_uid=44658, cgraph_uid=1013, symbol_order=1018)

std::_Destroy_aux<true>::__destroy<int*> (int * D.44659, int * D.44660)
{
  <bb 2> :
  GIMPLE_NOP
  gimple_return <NULL>

}



;; Function std::_Destroy<int*> (_ZSt8_DestroyIPiEvT_S1_, funcdef_no=2361, decl_uid=44106, cgraph_uid=966, symbol_order=971)

std::_Destroy<int*> (int * __first, int * __last)
{
  <bb 2> :
  gimple_call <__destroy, NULL, __first_2(D), __last_3(D)>
  gimple_return <NULL>

}



;; Function std::_Destroy<int*, int> (_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E, funcdef_no=2311, decl_uid=43702, cgraph_uid=915, symbol_order=920)

std::_Destroy<int*, int> (int * __first, int * __last, struct allocator & D.43705)
{
  <bb 2> :
  gimple_call <_Destroy, NULL, __first_2(D), __last_3(D)>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<int>::deallocate (_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim, funcdef_no=2441, decl_uid=40575, cgraph_uid=1045, symbol_order=1050)

__gnu_cxx::new_allocator<int>::deallocate (struct new_allocator * const this, int * __p, size_type __t)
{
  long unsigned int _1;

  <bb 2> :
  gimple_assign <mult_expr, _1, __t_2(D), 4, NULL>
  gimple_call <operator delete, NULL, __p_4(D), _1>
  gimple_return <NULL>

}



;; Function std::allocator_traits<std::allocator<int> >::deallocate (_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim, funcdef_no=2407, decl_uid=40720, cgraph_uid=1011, symbol_order=1016)

std::allocator_traits<std::allocator<int> >::deallocate (struct allocator_type & __a, int * __p, size_type __n)
{
  <bb 2> :
  gimple_call <deallocate, NULL, __a_2(D), __p_3(D), __n_4(D)>
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_M_deallocate (_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim, funcdef_no=2359, decl_uid=40906, cgraph_uid=963, symbol_order=968)

std::_Vector_base<int, std::allocator<int> >::_M_deallocate (struct _Vector_base * const this, int * __p, size_t __n)
{
  struct _Vector_impl * _1;

  <bb 2> :
  gimple_cond <ne_expr, __p_3(D), 0B, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <addr_expr, _1, &this_5(D)->_M_impl, NULL, NULL>
  gimple_call <deallocate, NULL, _1, __p_3(D), __n_6(D)>

  <bb 4> :
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::~_Vector_base (_ZNSt12_Vector_baseIiSaIiEED2Ev, funcdef_no=2307, decl_uid=41018, cgraph_uid=911, symbol_order=916)

std::_Vector_base<int, std::allocator<int> >::~_Vector_base (struct _Vector_base * const this)
{
  int * _1;
  int * _2;
  long int _3;
  long int _4;
  long unsigned int _5;
  int * _6;
  struct _Vector_impl * _7;

  <bb 2> :
  gimple_assign <component_ref, _1, this_9(D)->_M_impl.D.40901._M_end_of_storage, NULL, NULL>
  gimple_assign <component_ref, _2, this_9(D)->_M_impl.D.40901._M_start, NULL, NULL>
  gimple_assign <pointer_diff_expr, _3, _1, _2, NULL>
  gimple_assign <exact_div_expr, _4, _3, 4, NULL>
  gimple_assign <nop_expr, _5, _4, NULL, NULL>
  gimple_assign <component_ref, _6, this_9(D)->_M_impl.D.40901._M_start, NULL, NULL>
  gimple_call <_M_deallocate, NULL, this_9(D), _6, _5>
  gimple_assign <addr_expr, _7, &this_9(D)->_M_impl, NULL, NULL>
  gimple_call <__dt_comp , NULL, _7>
  gimple_assign <constructor, *this_9(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::vector<int>::~vector (_ZNSt6vectorIiSaIiEED2Ev, funcdef_no=2176, decl_uid=41587, cgraph_uid=780, symbol_order=785)

std::vector<int>::~vector (struct vector * const this)
{
  struct _Vector_base * _1;
  struct _Tp_alloc_type & _2;
  int * _3;
  int * _4;
  struct _Vector_base * _5;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_6(D)->D.41590, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _2, _1>
  gimple_assign <component_ref, _3, this_6(D)->D.41590._M_impl.D.40901._M_finish, NULL, NULL>
  gimple_assign <component_ref, _4, this_6(D)->D.41590._M_impl.D.40901._M_start, NULL, NULL>
  gimple_call <_Destroy, NULL, _4, _3, _2>
  gimple_assign <addr_expr, _5, &this_6(D)->D.41590, NULL, NULL>
  gimple_call <__dt_base , NULL, _5>
  gimple_assign <constructor, *this_6(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<int>::_M_max_size (_ZNK9__gnu_cxx13new_allocatorIiE11_M_max_sizeEv, funcdef_no=2470, decl_uid=40598, cgraph_uid=1074, symbol_order=1079)

__gnu_cxx::new_allocator<int>::_M_max_size (const struct new_allocator * const this)
{
  size_type D.45937;
  size_type _1;

  <bb 2> :
  gimple_assign <integer_cst, _1, 2305843009213693951, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_1>

}



;; Function __gnu_cxx::new_allocator<int>::max_size (_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv, funcdef_no=2439, decl_uid=40579, cgraph_uid=1043, symbol_order=1048)

__gnu_cxx::new_allocator<int>::max_size (const struct new_allocator * const this)
{
  size_type D.45935;
  size_type _4;

  <bb 2> :
  gimple_call <_M_max_size, _4, this_2(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4>

}



;; Function std::allocator_traits<std::allocator<int> >::max_size (_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_, funcdef_no=2398, decl_uid=40733, cgraph_uid=1002, symbol_order=1007)

std::allocator_traits<std::allocator<int> >::max_size (const struct allocator_type & __a)
{
  size_type D.45933;
  size_type _4;

  <bb 2> :
  gimple_call <max_size, _4, __a_2(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4>

}



;; Function std::vector<int>::_S_max_size (_ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_, funcdef_no=2351, decl_uid=41444, cgraph_uid=955, symbol_order=960)

std::vector<int>::_S_max_size (const struct _Tp_alloc_type & __a)
{
  const size_t __allocmax;
  const size_t __diffmax;
  size_type D.45930;
  long unsigned int _1;
  const long unsigned int & _2;
  size_type _9;

  <bb 2> :
  gimple_assign <integer_cst, __diffmax, 2305843009213693951, NULL, NULL>
  gimple_call <max_size, _1, __a_5(D)>
  gimple_assign <ssa_name, __allocmax, _1, NULL, NULL>
  gimple_call <min, _2, &__diffmax, &__allocmax>
  gimple_assign <mem_ref, _9, *_2, NULL, NULL>
  gimple_assign <constructor, __diffmax, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, __allocmax, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <_9>

}



;; Function std::vector<int>::_S_check_init_len (_ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_, funcdef_no=2299, decl_uid=41441, cgraph_uid=903, symbol_order=908)

std::vector<int>::_S_check_init_len (size_type __n, const struct allocator_type & __a)
{
  size_type D.45928;
  struct _Tp_alloc_type D.44075;
  bool retval.1;
  long unsigned int _1;
  bool retval.1_7;
  size_type _10;

  <bb 2> :
  gimple_call <__ct_comp , NULL, &D.44075, __a_3(D)>
  gimple_call <_S_max_size, _1, &D.44075>
  gimple_assign <gt_expr, retval.1_7, __n_6(D), _1, NULL>
  gimple_call <__dt_comp , NULL, &D.44075>
  gimple_assign <constructor, D.44075, {CLOBBER}, NULL, NULL>
  gimple_cond <ne_expr, retval.1_7, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <__throw_length_error, NULL, "cannot create std::vector larger than max_size()">

  <bb 4> :
  gimple_assign <ssa_name, _10, __n_6(D), NULL, NULL>

  <bb 5> :
gimple_label <<L2>>
  gimple_return <_10>

}



;; Function __gnu_cxx::new_allocator<int>::allocate (_ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv, funcdef_no=2471, decl_uid=40571, cgraph_uid=1075, symbol_order=1080)

__gnu_cxx::new_allocator<int>::allocate (struct new_allocator * const this, size_type __n, const void * D.40574)
{
  int * D.45960;
  int * D.45958;
  bool retval.3;
  long unsigned int _1;
  long unsigned int _2;
  bool retval.3_7;
  int * _9;
  int * _10;

  <bb 2> :
  gimple_call <_M_max_size, _1, this_4(D)>
  gimple_assign <gt_expr, retval.3_7, __n_6(D), _1, NULL>
  gimple_cond <ne_expr, retval.3_7, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <__throw_bad_alloc, NULL>

  <bb 4> :
  gimple_assign <mult_expr, _2, __n_6(D), 4, NULL>
  gimple_call <operator new, _9, _2>
  gimple_assign <ssa_name, _10, _9, NULL, NULL>

  <bb 5> :
gimple_label <<L2>>
  gimple_return <_10>

}



;; Function std::allocator_traits<std::allocator<int> >::allocate (_ZNSt16allocator_traitsISaIiEE8allocateERS0_m, funcdef_no=2440, decl_uid=40713, cgraph_uid=1044, symbol_order=1049)

std::allocator_traits<std::allocator<int> >::allocate (struct allocator_type & __a, size_type __n)
{
  int * D.45954;
  int * D.45952;
  int * _5;
  int * _6;

  <bb 2> :
  gimple_call <allocate, _5, __a_2(D), __n_3(D), 0B>
  gimple_assign <ssa_name, _6, _5, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_M_allocate (_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm, funcdef_no=2406, decl_uid=40903, cgraph_uid=1010, symbol_order=1015)

std::_Vector_base<int, std::allocator<int> >::_M_allocate (struct _Vector_base * const this, size_t __n)
{
  int * D.45951;
  int * iftmp.2;
  int * D.45945;
  struct _Vector_impl * _1;
  int * iftmp.2_2;
  int * iftmp.2_5;
  int * _9;
  int * iftmp.2_10;
  int * _11;

  <bb 2> :
  gimple_cond <ne_expr, __n_4(D), 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <addr_expr, _1, &this_7(D)->_M_impl, NULL, NULL>
  gimple_call <allocate, _9, _1, __n_4(D)>
  gimple_assign <ssa_name, iftmp.2_10, _9, NULL, NULL>
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <integer_cst, iftmp.2_5, 0B, NULL, NULL>

  <bb 5> :
  # gimple_phi <iftmp.2_2, iftmp.2_10(3), iftmp.2_5(4)>
  gimple_assign <ssa_name, _11, iftmp.2_2, NULL, NULL>

  <bb 6> :
gimple_label <<L3>>
  gimple_return <_11>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_M_create_storage (_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm, funcdef_no=2358, decl_uid=40910, cgraph_uid=962, symbol_order=967)

std::_Vector_base<int, std::allocator<int> >::_M_create_storage (struct _Vector_base * const this, size_t __n)
{
  int * D.45944;
  int * _1;
  int * _2;
  int * _3;
  long unsigned int _4;
  int * _5;
  int * _10;

  <bb 2> :
  gimple_call <_M_allocate, _10, this_7(D), __n_8(D)>
  gimple_assign <ssa_name, _1, _10, NULL, NULL>
  gimple_assign <ssa_name, this_7(D)->_M_impl.D.40901._M_start, _1, NULL, NULL>
  gimple_assign <component_ref, _2, this_7(D)->_M_impl.D.40901._M_start, NULL, NULL>
  gimple_assign <ssa_name, this_7(D)->_M_impl.D.40901._M_finish, _2, NULL, NULL>
  gimple_assign <component_ref, _3, this_7(D)->_M_impl.D.40901._M_start, NULL, NULL>
  gimple_assign <mult_expr, _4, __n_8(D), 4, NULL>
  gimple_assign <pointer_plus_expr, _5, _3, _4, NULL>
  gimple_assign <ssa_name, this_7(D)->_M_impl.D.40901._M_end_of_storage, _5, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_Vector_base (_ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_, funcdef_no=2304, decl_uid=40995, cgraph_uid=908, symbol_order=913)

std::_Vector_base<int, std::allocator<int> >::_Vector_base (struct _Vector_base * const this, size_t __n, const struct allocator_type & __a)
{
  struct _Vector_impl * _1;
  struct _Vector_impl * _2;

  <bb 2> :
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_4(D)->_M_impl, NULL, NULL>
  gimple_call <__ct_comp , NULL, _1, __a_6(D)>
  gimple_call <_M_create_storage, NULL, this_4(D), __n_8(D)>

  <bb 3> :
  gimple_return <NULL>

  <bb 4> :
gimple_label <<L0>>
  gimple_assign <addr_expr, _2, &this_4(D)->_M_impl, NULL, NULL>
  gimple_call <__dt_comp , NULL, _2>
  gimple_resx <1>

}



;; Function std::__iterator_category<int*> (_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_, funcdef_no=2484, decl_uid=45731, cgraph_uid=1088, symbol_order=1093)

std::__iterator_category<int*> (int * const & D.45732)
{
  <bb 2> :

  <bb 3> :
gimple_label <<L0>>
  gimple_return <<retval>>

}



;; Function std::__fill_a1<int*, int> (_ZSt9__fill_a1IPiiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_, funcdef_no=2491, decl_uid=45891, cgraph_uid=1095, symbol_order=1100)

std::__fill_a1<int*, int> (int * __first, int * __last, const int & __value)
{
  const int __tmp;

  <bb 2> :
  gimple_assign <mem_ref, __tmp_5, *__value_4(D), NULL, NULL>

  <bb 3> :
  # gimple_phi <__first_1, __first_6(D)(2), __first_9(4)>
  gimple_cond <eq_expr, __first_1, __last_7(D), NULL, NULL>
    goto <bb 5>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 4> :
  gimple_assign <ssa_name, *__first_1, __tmp_5, NULL, NULL>
  gimple_assign <pointer_plus_expr, __first_9, __first_1, 4, NULL>
  goto <bb 3>; [INV]

  <bb 5> :
  gimple_return <NULL>

}



;; Function std::__fill_a<int*, int> (_ZSt8__fill_aIPiiEvT_S1_RKT0_, funcdef_no=2490, decl_uid=45837, cgraph_uid=1094, symbol_order=1099)

std::__fill_a<int*, int> (int * __first, int * __last, const int & __value)
{
  <bb 2> :
  gimple_call <__fill_a1, NULL, __first_2(D), __last_3(D), __value_4(D)>
  gimple_return <NULL>

}



;; Function std::__fill_n_a<int*, long unsigned int, int> (_ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag, funcdef_no=2485, decl_uid=45734, cgraph_uid=1089, symbol_order=1094)

std::__fill_n_a<int*, long unsigned int, int> (int * __first, long unsigned int __n, const int & __value, struct random_access_iterator_tag D.45738)
{
  int * D.45982;
  long unsigned int _1;
  int * _2;
  long unsigned int _3;
  int * _4;
  int * _11;
  int * _12;

  <bb 2> :
  gimple_cond <eq_expr, __n_6(D), 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <ssa_name, _12, __first_7(D), NULL, NULL>
  // predicted unlikely by early return (on trees) predictor.
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <mult_expr, _1, __n_6(D), 4, NULL>
  gimple_assign <pointer_plus_expr, _2, __first_7(D), _1, NULL>
  gimple_call <__fill_a, NULL, __first_7(D), _2, __value_9(D)>
  gimple_assign <mult_expr, _3, __n_6(D), 4, NULL>
  gimple_assign <pointer_plus_expr, _11, __first_7(D), _3, NULL>

  <bb 5> :
  # gimple_phi <_4, _12(3), _11(4)>
gimple_label <<L2>>
  gimple_return <_4>

}



;; Function std::fill_n<int*, long unsigned int, int> (_ZSt6fill_nIPimiET_S1_T0_RKT1_, funcdef_no=2472, decl_uid=45633, cgraph_uid=1076, symbol_order=1081)

std::fill_n<int*, long unsigned int, int> (int * __first, long unsigned int __n, const int & __value)
{
  int * D.45976;
  struct random_access_iterator_tag D.45974;
  int * D.45973;
  long unsigned int _1;
  int * __first.4_2;
  int * _9;
  int * _10;

  <bb 2> :
  gimple_call <__iterator_category, NULL, &__first>
  gimple_call <__size_to_integer, _1, __n_5(D)>
  gimple_assign <parm_decl, __first.4_2, __first, NULL, NULL>
  gimple_call <__fill_n_a, _9, __first.4_2, _1, __value_7(D), D.45974>
  gimple_assign <ssa_name, _10, _9, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_10>

}



;; Function std::__uninitialized_fill_n<true>::__uninit_fill_n<int*, long unsigned int, int> (_ZNSt22__uninitialized_fill_nILb1EE15__uninit_fill_nIPimiEET_S3_T0_RKT1_, funcdef_no=2442, decl_uid=45493, cgraph_uid=1046, symbol_order=1051)

std::__uninitialized_fill_n<true>::__uninit_fill_n<int*, long unsigned int, int> (int * __first, long unsigned int __n, const int & __x)
{
  int * D.45972;
  int * D.45970;
  int * _6;
  int * _7;

  <bb 2> :
  gimple_call <fill_n, _6, __first_2(D), __n_3(D), __x_4(D)>
  gimple_assign <ssa_name, _7, _6, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::uninitialized_fill_n<int*, long unsigned int, int> (_ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_, funcdef_no=2408, decl_uid=44508, cgraph_uid=1012, symbol_order=1017)

std::uninitialized_fill_n<int*, long unsigned int, int> (int * __first, long unsigned int __n, const int & __x)
{
  int * D.45969;
  const bool __assignable;
  int * D.45967;
  int * _7;
  int * _8;

  <bb 2> :
  gimple_assign <integer_cst, __assignable_1, 1, NULL, NULL>
  gimple_call <__uninit_fill_n, _7, __first_3(D), __n_4(D), __x_5(D)>
  gimple_assign <ssa_name, _8, _7, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_8>

}



;; Function std::__uninitialized_fill_n_a<int*, long unsigned int, int, int> (_ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E, funcdef_no=2360, decl_uid=44094, cgraph_uid=964, symbol_order=969)

std::__uninitialized_fill_n_a<int*, long unsigned int, int, int> (int * __first, long unsigned int __n, const int & __x, struct allocator & D.44098)
{
  int * D.45966;
  int * D.45964;
  int * _6;
  int * _7;

  <bb 2> :
  gimple_call <uninitialized_fill_n, _6, __first_2(D), __n_3(D), __x_4(D)>
  gimple_assign <ssa_name, _7, _6, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::vector<int>::_M_fill_initialize (_ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi, funcdef_no=2309, decl_uid=41320, cgraph_uid=913, symbol_order=918)

std::vector<int>::_M_fill_initialize (struct vector * const this, size_type __n, const value_type & __value)
{
  int * D.45961;
  struct _Vector_base * _1;
  struct _Tp_alloc_type & _2;
  int * _3;
  int * _4;
  int * _11;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_5(D)->D.41590, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _2, _1>
  gimple_assign <component_ref, _3, this_5(D)->D.41590._M_impl.D.40901._M_start, NULL, NULL>
  gimple_call <__uninitialized_fill_n_a, _11, _3, __n_8(D), __value_9(D), _2>
  gimple_assign <ssa_name, _4, _11, NULL, NULL>
  gimple_assign <ssa_name, this_5(D)->D.41590._M_impl.D.40901._M_finish, _4, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::vector<int>::vector (_ZNSt6vectorIiSaIiEEC2EmRKiRKS0_, funcdef_no=2173, decl_uid=41561, cgraph_uid=777, symbol_order=782)

std::vector<int>::vector (struct vector * const this, size_type __n, const value_type & __value, const struct allocator_type & __a)
{
  long unsigned int D.45923;
  struct _Vector_base * _1;
  long unsigned int _2;
  struct _Vector_base * _3;
  long unsigned int _10;

  <bb 2> :
  gimple_assign <constructor, *this_5(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_5(D)->D.41590, NULL, NULL>
  gimple_call <_S_check_init_len, _10, __n_7(D), __a_8(D)>
  gimple_assign <ssa_name, _2, _10, NULL, NULL>
  gimple_call <__ct_base , NULL, _1, _2, __a_8(D)>
  gimple_call <_M_fill_initialize, NULL, this_5(D), __n_7(D), __value_12(D)>

  <bb 3> :
  gimple_return <NULL>

  <bb 4> :
gimple_label <<L0>>
  gimple_assign <addr_expr, _3, &this_5(D)->D.41590, NULL, NULL>
  gimple_call <__dt_base , NULL, _3>
  gimple_resx <1>

}



;; Function main (main, funcdef_no=1921, decl_uid=40526, cgraph_uid=525, symbol_order=527)

main ()
{
  struct basic_ostream & D.45916;
  struct iterator __for_end;
  struct iterator __for_begin;
  struct vector & __for_range;
  int x;
  struct vector vect;
  int n;
  int D.45910;
  bool retval.0;
  const value_type D.41651;
  struct allocator_type D.41653;
  long unsigned int _1;
  int & _2;
  struct basic_ostream & _3;
  bool retval.0_19;
  int _22;
  struct basic_ostream & _28;

  <bb 2> :
  gimple_assign <integer_cst, n_7, 3, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.41653>
  gimple_assign <integer_cst, D.41651, 10, NULL, NULL>
  gimple_assign <nop_expr, _1, n_7, NULL, NULL>
  gimple_call <__ct_comp , NULL, &vect, _1, &D.41651, &D.41653>

  <bb 3> :
  gimple_assign <constructor, D.41651, {CLOBBER}, NULL, NULL>
  gimple_call <__dt_comp , NULL, &D.41653>
  gimple_assign <constructor, D.41653, {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, __for_range_15, &vect, NULL, NULL>
  gimple_call <begin, __for_begin, __for_range_15>
  gimple_call <end, __for_end, __for_range_15>

  <bb 4> :
  gimple_call <operator!=, retval.0_19, &__for_begin, &__for_end>
  gimple_cond <ne_expr, retval.0_19, 0, NULL, NULL>
    goto <bb 5>; [INV]
  else
    goto <bb 8>; [INV]

  <bb 5> :
  gimple_call <operator*, _2, &__for_begin>
  gimple_assign <mem_ref, x_26, *_2, NULL, NULL>
  gimple_call <operator<<, _28, &cout, x_26>

  <bb 6> :
  gimple_assign <ssa_name, _3, _28, NULL, NULL>
  gimple_call <operator<<, NULL, _3, " ">

  <bb 7> :
  gimple_call <operator++, NULL, &__for_begin>
  goto <bb 4>; [INV]

  <bb 8> :
  gimple_assign <constructor, __for_begin, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, __for_end, {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, _22, 0, NULL, NULL>
  gimple_call <__dt_comp , NULL, &vect>
  gimple_assign <constructor, vect, {CLOBBER}, NULL, NULL>

  <bb 9> :
gimple_label <<L5>>
  gimple_return <_22>

  <bb 10> :
gimple_label <<L6>>
  gimple_resx <5>

  <bb 11> :
gimple_label <<L7>>
  gimple_assign <constructor, D.41651, {CLOBBER}, NULL, NULL>
  gimple_resx <4>

  <bb 12> :
gimple_label <<L8>>
  gimple_call <__dt_comp , NULL, &D.41653>
  gimple_resx <3>

  <bb 13> :
gimple_label <<L9>>
  gimple_assign <constructor, D.41653, {CLOBBER}, NULL, NULL>
  gimple_resx <2>

  <bb 14> :
gimple_label <<L10>>
  gimple_assign <constructor, __for_begin, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, __for_end, {CLOBBER}, NULL, NULL>
  gimple_resx <13>

  <bb 15> :
gimple_label <<L11>>
  gimple_call <__dt_comp , NULL, &vect>
  gimple_resx <12>

  <bb 16> :
gimple_label <<L12>>
  gimple_assign <constructor, vect, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function __static_initialization_and_destruction_0 (_Z41__static_initialization_and_destruction_0ii, funcdef_no=2492, decl_uid=45899, cgraph_uid=1096, symbol_order=1125)

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



;; Function _GLOBAL__sub_I_main (_GLOBAL__sub_I_main, funcdef_no=2493, decl_uid=45905, cgraph_uid=1097, symbol_order=1255)

_GLOBAL__sub_I_main ()
{
  <bb 2> :
  gimple_call <__static_initialization_and_destruction_0, NULL, 1, 65535>
  gimple_return <NULL>

}


