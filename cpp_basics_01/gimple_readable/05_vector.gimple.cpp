
;; Function operator new (_ZnwmPv, funcdef_no=38, decl_uid=3410, cgraph_uid=27, symbol_order=26)

operator new (size_t D.3408, void * __p)
{
  void * D.46596;
  void * _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __p_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function __gnu_cxx::__normal_iterator<int*, std::vector<int> >::operator++ (_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv, funcdef_no=2192, decl_uid=41758, cgraph_uid=796, symbol_order=801)

__gnu_cxx::__normal_iterator<int*, std::vector<int> >::operator++ (struct __normal_iterator * const this)
{
  struct __normal_iterator & D.46753;
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



;; Function __gnu_cxx::__normal_iterator<int*, std::vector<int> >::operator* (_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv, funcdef_no=2193, decl_uid=41754, cgraph_uid=797, symbol_order=802)

__gnu_cxx::__normal_iterator<int*, std::vector<int> >::operator* (const struct __normal_iterator * const this)
{
  int & D.46751;
  int & _3;

  <bb 2> :
  gimple_assign <component_ref, _3, this_2(D)->_M_current, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_Vector_impl_data::_Vector_impl_data (_ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev, funcdef_no=2308, decl_uid=40849, cgraph_uid=912, symbol_order=917)

std::_Vector_base<int, std::allocator<int> >::_Vector_impl_data::_Vector_impl_data (struct _Vector_impl_data * const this)
{
  <bb 2> :
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, this_2(D)->_M_start, 0B, NULL, NULL>
  gimple_assign <integer_cst, this_2(D)->_M_finish, 0B, NULL, NULL>
  gimple_assign <integer_cst, this_2(D)->_M_end_of_storage, 0B, NULL, NULL>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<int>::~new_allocator (_ZN9__gnu_cxx13new_allocatorIiED2Ev, funcdef_no=2311, decl_uid=40620, cgraph_uid=915, symbol_order=920)

__gnu_cxx::new_allocator<int>::~new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<int>::~allocator (_ZNSaIiED2Ev, funcdef_no=2180, decl_uid=40690, cgraph_uid=784, symbol_order=789)

std::allocator<int>::~allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl (_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev, funcdef_no=1926, decl_uid=40954, cgraph_uid=527, symbol_order=529)

std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl (struct _Vector_impl * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator (_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv, funcdef_no=2314, decl_uid=40790, cgraph_uid=918, symbol_order=923)

std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator (struct _Vector_base * const this)
{
  struct _Tp_alloc_type & D.46738;
  struct _Tp_alloc_type & _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_impl, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::move<int&> (_ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_, funcdef_no=2316, decl_uid=43784, cgraph_uid=920, symbol_order=925)

std::move<int&> (int & __t)
{
  type & D.46590;
  type & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function __gnu_cxx::__normal_iterator<int*, std::vector<int> >::__normal_iterator (_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_, funcdef_no=2320, decl_uid=41796, cgraph_uid=924, symbol_order=929)

__gnu_cxx::__normal_iterator<int*, std::vector<int> >::__normal_iterator (struct __normal_iterator * const this, int * const & __i)
{
  int * _1;

  <bb 2> :
  gimple_assign <constructor, *this_3(D), {CLOBBER}, NULL, NULL>
  gimple_assign <mem_ref, _1, *__i_5(D), NULL, NULL>
  gimple_assign <ssa_name, this_3(D)->_M_current, _1, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::vector<int>::begin (_ZNSt6vectorIiSaIiEE5beginEv, funcdef_no=2189, decl_uid=41170, cgraph_uid=793, symbol_order=798)

std::vector<int>::begin (struct vector * const this)
{
  struct iterator D.43790;
  struct iterator D.46743;
  int * * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->D.41589._M_impl.D.40900._M_start, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.43790, _1>
  gimple_assign <var_decl, D.46743, D.43790, NULL, NULL>
  gimple_assign <constructor, D.43790, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <D.46743>

}



;; Function std::vector<int>::end (_ZNSt6vectorIiSaIiEE3endEv, funcdef_no=2190, decl_uid=41174, cgraph_uid=794, symbol_order=799)

std::vector<int>::end (struct vector * const this)
{
  struct iterator D.43792;
  struct iterator D.46746;
  int * * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->D.41589._M_impl.D.40900._M_finish, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.43792, _1>
  gimple_assign <var_decl, D.46746, D.43792, NULL, NULL>
  gimple_assign <constructor, D.43792, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <D.46746>

}



;; Function __gnu_cxx::__normal_iterator<int*, std::vector<int> >::base (_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv, funcdef_no=2322, decl_uid=41783, cgraph_uid=926, symbol_order=931)

__gnu_cxx::__normal_iterator<int*, std::vector<int> >::base (const struct __normal_iterator * const this)
{
  int * const & D.46685;
  int * const & _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_current, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function __gnu_cxx::operator!=<int*, std::vector<int> > (_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_, funcdef_no=2191, decl_uid=41854, cgraph_uid=795, symbol_order=800)

__gnu_cxx::operator!=<int*, std::vector<int> > (const struct __normal_iterator & __lhs, const struct __normal_iterator & __rhs)
{
  bool D.46749;
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



;; Function __gnu_cxx::new_allocator<int>::new_allocator (_ZN9__gnu_cxx13new_allocatorIiEC2Ev, funcdef_no=2359, decl_uid=40615, cgraph_uid=963, symbol_order=968)

__gnu_cxx::new_allocator<int>::new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<int>::allocator (_ZNSaIiEC2Ev, funcdef_no=2305, decl_uid=40685, cgraph_uid=909, symbol_order=914)

std::allocator<int>::allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__ct_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl (_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2Ev, funcdef_no=2177, decl_uid=40898, cgraph_uid=781, symbol_order=786)

std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl (struct _Vector_impl * const this)
{
  struct _Vector_impl_data * _1;

  <bb 2> :
  gimple_assign <constructor, *this_3(D), {CLOBBER}, NULL, NULL>
  gimple_call <__ct_base , NULL, this_3(D)>
  gimple_assign <addr_expr, _1, &this_3(D)->D.40900, NULL, NULL>
  gimple_call <__ct_base , NULL, _1>
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_Vector_base (_ZNSt12_Vector_baseIiSaIiEEC2Ev, funcdef_no=1928, decl_uid=41012, cgraph_uid=530, symbol_order=532)

std::_Vector_base<int, std::allocator<int> >::_Vector_base (struct _Vector_base * const this)
{
  struct _Vector_impl * _1;
  struct _Vector_impl * _2;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_3(D)->_M_impl, NULL, NULL>
  gimple_call <__ct_comp , NULL, _1>
  gimple_return <NULL>

}



;; Function std::vector<int>::vector (_ZNSt6vectorIiSaIiEEC2Ev, funcdef_no=1930, decl_uid=41581, cgraph_uid=533, symbol_order=535)

std::vector<int>::vector (struct vector * const this)
{
  struct _Vector_base * _1;
  struct _Vector_base * _2;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_3(D)->D.41589, NULL, NULL>
  gimple_call <__ct_base , NULL, _1>
  gimple_return <NULL>

}



;; Function std::forward<int> (_ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE, funcdef_no=2363, decl_uid=44168, cgraph_uid=967, symbol_order=972)

std::forward<int> (type & __t)
{
  int & D.46598;
  int & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::vector<int>::_S_nothrow_relocate (_ZNSt6vectorIiSaIiEE19_S_nothrow_relocateESt17integral_constantIbLb1EE, funcdef_no=2367, decl_uid=41047, cgraph_uid=971, symbol_order=976)

std::vector<int>::_S_nothrow_relocate (struct true_type D.41048)
{
  bool D.46736;
  bool _1;

  <bb 2> :
  gimple_assign <integer_cst, _1, 1, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_1>

}



;; Function std::vector<int>::_S_use_relocate (_ZNSt6vectorIiSaIiEE15_S_use_relocateEv, funcdef_no=2366, decl_uid=41051, cgraph_uid=969, symbol_order=974)

std::vector<int>::_S_use_relocate ()
{
  struct integral_constant D.46733;
  struct __is_move_insertable D.44901;
  bool D.46732;
  struct __is_move_insertable * _1;
  bool _4;

  <bb 2> :
  gimple_assign <addr_expr, _1, &D.44901, NULL, NULL>
  gimple_call <_S_nothrow_relocate, _4, D.46733>

  <bb 3> :
  gimple_assign <constructor, D.44901, {CLOBBER}, NULL, NULL>

  <bb 4> :
gimple_label <<L1>>
  gimple_return <_4>

}



;; Function __gnu_cxx::new_allocator<int>::deallocate (_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim, funcdef_no=2404, decl_uid=40574, cgraph_uid=1008, symbol_order=1013)

__gnu_cxx::new_allocator<int>::deallocate (struct new_allocator * const this, int * __p, size_type __t)
{
  long unsigned int _1;

  <bb 2> :
  gimple_assign <mult_expr, _1, __t_2(D), 4, NULL>
  gimple_call <operator delete, NULL, __p_4(D), _1>
  gimple_return <NULL>

}



;; Function std::allocator_traits<std::allocator<int> >::deallocate (_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim, funcdef_no=2361, decl_uid=40719, cgraph_uid=965, symbol_order=970)

std::allocator_traits<std::allocator<int> >::deallocate (struct allocator_type & __a, int * __p, size_type __n)
{
  <bb 2> :
  gimple_call <deallocate, NULL, __a_2(D), __p_3(D), __n_4(D)>
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_M_deallocate (_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim, funcdef_no=2313, decl_uid=40905, cgraph_uid=917, symbol_order=922)

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



;; Function std::_Vector_base<int, std::allocator<int> >::~_Vector_base (_ZNSt12_Vector_baseIiSaIiEED2Ev, funcdef_no=2183, decl_uid=41017, cgraph_uid=787, symbol_order=792)

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
  gimple_assign <component_ref, _1, this_9(D)->_M_impl.D.40900._M_end_of_storage, NULL, NULL>
  gimple_assign <component_ref, _2, this_9(D)->_M_impl.D.40900._M_start, NULL, NULL>
  gimple_assign <pointer_diff_expr, _3, _1, _2, NULL>
  gimple_assign <exact_div_expr, _4, _3, 4, NULL>
  gimple_assign <nop_expr, _5, _4, NULL, NULL>
  gimple_assign <component_ref, _6, this_9(D)->_M_impl.D.40900._M_start, NULL, NULL>
  gimple_call <_M_deallocate, NULL, this_9(D), _6, _5>
  gimple_assign <addr_expr, _7, &this_9(D)->_M_impl, NULL, NULL>
  gimple_call <__dt_comp , NULL, _7>
  gimple_assign <constructor, *this_9(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Destroy_aux<true>::__destroy<int*> (_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_, funcdef_no=2405, decl_uid=44736, cgraph_uid=1009, symbol_order=1014)

std::_Destroy_aux<true>::__destroy<int*> (int * D.44737, int * D.44738)
{
  <bb 2> :
  GIMPLE_NOP
  gimple_return <NULL>

}



;; Function std::_Destroy<int*> (_ZSt8_DestroyIPiEvT_S1_, funcdef_no=2362, decl_uid=44155, cgraph_uid=966, symbol_order=971)

std::_Destroy<int*> (int * __first, int * __last)
{
  <bb 2> :
  gimple_call <__destroy, NULL, __first_2(D), __last_3(D)>
  gimple_return <NULL>

}



;; Function std::_Destroy<int*, int> (_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E, funcdef_no=2315, decl_uid=43766, cgraph_uid=919, symbol_order=924)

std::_Destroy<int*, int> (int * __first, int * __last, struct allocator & D.43769)
{
  <bb 2> :
  gimple_call <_Destroy, NULL, __first_2(D), __last_3(D)>
  gimple_return <NULL>

}



;; Function std::vector<int>::~vector (_ZNSt6vectorIiSaIiEED2Ev, funcdef_no=2186, decl_uid=41586, cgraph_uid=790, symbol_order=795)

std::vector<int>::~vector (struct vector * const this)
{
  struct _Vector_base * _1;
  struct _Tp_alloc_type & _2;
  int * _3;
  int * _4;
  struct _Vector_base * _5;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_6(D)->D.41589, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _2, _1>
  gimple_assign <component_ref, _3, this_6(D)->D.41589._M_impl.D.40900._M_finish, NULL, NULL>
  gimple_assign <component_ref, _4, this_6(D)->D.41589._M_impl.D.40900._M_start, NULL, NULL>
  gimple_call <_Destroy, NULL, _4, _3, _2>
  gimple_assign <addr_expr, _5, &this_6(D)->D.41589, NULL, NULL>
  gimple_call <__dt_base , NULL, _5>
  gimple_assign <constructor, *this_6(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<int>::construct<int, int> (_ZN9__gnu_cxx13new_allocatorIiE9constructIiJiEEEvPT_DpOT0_, funcdef_no=2406, decl_uid=44743, cgraph_uid=1010, symbol_order=1015)

__gnu_cxx::new_allocator<int>::construct<int, int> (struct new_allocator * const this, int * __p, int & __args#0)
{
  void * D.45909;
  void * D.45908;
  int D.45910;
  int & _1;
  int _5;
  void * _7;
  void * _9;

  <bb 2> :
  gimple_call <forward, _1, __args#0_3(D)>
  gimple_assign <mem_ref, _5, *_1, NULL, NULL>
  gimple_assign <ssa_name, _7, __p_6(D), NULL, NULL>
  gimple_call <operator new, _9, 4, _7>
  gimple_assign <ssa_name, MEM[(int *)_9], _5, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::allocator_traits<std::allocator<int> >::construct<int, int> (_ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_, funcdef_no=2364, decl_uid=44170, cgraph_uid=968, symbol_order=973)

std::allocator_traits<std::allocator<int> >::construct<int, int> (struct allocator_type & __a, int * __p, int & __args#0)
{
  int & _1;

  <bb 2> :
  gimple_call <forward, _1, __args#0_3(D)>
  gimple_call <construct, NULL, __a_5(D), __p_6(D), _1>
  gimple_return <NULL>

}



;; Function __gnu_cxx::operator-<int*, std::vector<int> > (_ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_, funcdef_no=2408, decl_uid=44753, cgraph_uid=1012, symbol_order=1017)

__gnu_cxx::operator-<int*, std::vector<int> > (const struct __normal_iterator & __lhs, const struct __normal_iterator & __rhs)
{
  difference_type D.46653;
  int * const & _1;
  int * _2;
  int * const & _3;
  int * _4;
  long int _5;
  difference_type _11;

  <bb 2> :
  gimple_call <base, _1, __lhs_7(D)>
  gimple_assign <mem_ref, _2, *_1, NULL, NULL>
  gimple_call <base, _3, __rhs_9(D)>
  gimple_assign <mem_ref, _4, *_3, NULL, NULL>
  gimple_assign <pointer_diff_expr, _5, _2, _4, NULL>
  gimple_assign <exact_div_expr, _11, _5, 4, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_11>

}



;; Function std::vector<int>::size (_ZNKSt6vectorIiSaIiEE4sizeEv, funcdef_no=2443, decl_uid=41194, cgraph_uid=1047, symbol_order=1052)

std::vector<int>::size (const struct vector * const this)
{
  size_type D.46634;
  int * _1;
  int * _2;
  long int _3;
  long int _4;
  size_type _7;

  <bb 2> :
  gimple_assign <component_ref, _1, this_6(D)->D.41589._M_impl.D.40900._M_finish, NULL, NULL>
  gimple_assign <component_ref, _2, this_6(D)->D.41589._M_impl.D.40900._M_start, NULL, NULL>
  gimple_assign <pointer_diff_expr, _3, _1, _2, NULL>
  gimple_assign <exact_div_expr, _4, _3, 4, NULL>
  gimple_assign <nop_expr, _7, _4, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::max<long unsigned int> (_ZSt3maxImERKT_S2_S2_, funcdef_no=2444, decl_uid=45913, cgraph_uid=1048, symbol_order=1053)

std::max<long unsigned int> (const long unsigned int & __a, const long unsigned int & __b)
{
  const long unsigned int & D.46632;
  long unsigned int _1;
  long unsigned int _2;
  const long unsigned int & _3;
  const long unsigned int & _7;
  const long unsigned int & _8;

  <bb 2> :
  gimple_assign <mem_ref, _1, *__a_5(D), NULL, NULL>
  gimple_assign <mem_ref, _2, *__b_6(D), NULL, NULL>
  gimple_cond <lt_expr, _1, _2, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <ssa_name, _8, __b_6(D), NULL, NULL>
  // predicted unlikely by early return (on trees) predictor.
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <ssa_name, _7, __a_5(D), NULL, NULL>

  <bb 5> :
  # gimple_phi <_3, _8(3), _7(4)>
gimple_label <<L2>>
  gimple_return <_3>

}



;; Function __gnu_cxx::new_allocator<int>::destroy<int> (_ZN9__gnu_cxx13new_allocatorIiE7destroyIiEEvPT_, funcdef_no=2449, decl_uid=46107, cgraph_uid=1053, symbol_order=1058)

__gnu_cxx::new_allocator<int>::destroy<int> (struct new_allocator * const this, int * __p)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator_traits<std::allocator<int> >::destroy<int> (_ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_, funcdef_no=2412, decl_uid=45077, cgraph_uid=1016, symbol_order=1021)

std::allocator_traits<std::allocator<int> >::destroy<int> (struct allocator_type & __a, int * __p)
{
  <bb 2> :
  gimple_call <destroy, NULL, __a_2(D), __p_3(D)>
  gimple_return <NULL>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator (_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv, funcdef_no=2478, decl_uid=40792, cgraph_uid=1082, symbol_order=1087)

std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator (const struct _Vector_base * const this)
{
  const struct _Tp_alloc_type & D.46638;
  const struct _Tp_alloc_type & _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_impl, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::min<long unsigned int> (_ZSt3minImERKT_S2_S2_, funcdef_no=2498, decl_uid=11279, cgraph_uid=1102, symbol_order=1107)

std::min<long unsigned int> (const long unsigned int & __a, const long unsigned int & __b)
{
  const long unsigned int & D.46651;
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



;; Function __gnu_cxx::new_allocator<int>::_M_max_size (_ZNK9__gnu_cxx13new_allocatorIiE11_M_max_sizeEv, funcdef_no=2499, decl_uid=40597, cgraph_uid=1103, symbol_order=1108)

__gnu_cxx::new_allocator<int>::_M_max_size (const struct new_allocator * const this)
{
  size_type D.46647;
  size_type _1;

  <bb 2> :
  gimple_assign <integer_cst, _1, 2305843009213693951, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_1>

}



;; Function __gnu_cxx::new_allocator<int>::allocate (_ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv, funcdef_no=2479, decl_uid=40570, cgraph_uid=1083, symbol_order=1088)

__gnu_cxx::new_allocator<int>::allocate (struct new_allocator * const this, size_type __n, const void * D.40573)
{
  int * D.46670;
  int * D.46668;
  bool retval.7;
  long unsigned int _1;
  long unsigned int _2;
  bool retval.7_7;
  int * _9;
  int * _10;

  <bb 2> :
  gimple_call <_M_max_size, _1, this_4(D)>
  gimple_assign <gt_expr, retval.7_7, __n_6(D), _1, NULL>
  gimple_cond <ne_expr, retval.7_7, 0, NULL, NULL>
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



;; Function std::allocator_traits<std::allocator<int> >::allocate (_ZNSt16allocator_traitsISaIiEE8allocateERS0_m, funcdef_no=2445, decl_uid=40712, cgraph_uid=1049, symbol_order=1054)

std::allocator_traits<std::allocator<int> >::allocate (struct allocator_type & __a, size_type __n)
{
  int * D.46664;
  int * D.46662;
  int * _5;
  int * _6;

  <bb 2> :
  gimple_call <allocate, _5, __a_2(D), __n_3(D), 0B>
  gimple_assign <ssa_name, _6, _5, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::_Vector_base<int, std::allocator<int> >::_M_allocate (_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm, funcdef_no=2409, decl_uid=40902, cgraph_uid=1013, symbol_order=1018)

std::_Vector_base<int, std::allocator<int> >::_M_allocate (struct _Vector_base * const this, size_t __n)
{
  int * D.46661;
  int * iftmp.6;
  int * D.46655;
  struct _Vector_impl * _1;
  int * iftmp.6_2;
  int * iftmp.6_5;
  int * _9;
  int * iftmp.6_10;
  int * _11;

  <bb 2> :
  gimple_cond <ne_expr, __n_4(D), 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <addr_expr, _1, &this_7(D)->_M_impl, NULL, NULL>
  gimple_call <allocate, _9, _1, __n_4(D)>
  gimple_assign <ssa_name, iftmp.6_10, _9, NULL, NULL>
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <integer_cst, iftmp.6_5, 0B, NULL, NULL>

  <bb 5> :
  # gimple_phi <iftmp.6_2, iftmp.6_10(3), iftmp.6_5(4)>
  gimple_assign <ssa_name, _11, iftmp.6_2, NULL, NULL>

  <bb 6> :
gimple_label <<L3>>
  gimple_return <_11>

}



;; Function std::__niter_base<int*> (_ZSt12__niter_baseIPiET_S1_, funcdef_no=2500, decl_uid=44931, cgraph_uid=1104, symbol_order=1109)

std::__niter_base<int*> (int * __it)
{
  int * D.46678;
  int * _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __it_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::__relocate_a_1<int, int> (_ZSt14__relocate_a_1IiiENSt9enable_ifIXsrSt24__is_bitwise_relocatableIT_vE5valueEPS2_E4typeES4_S4_S4_RSaIT0_E, funcdef_no=2501, decl_uid=45065, cgraph_uid=1105, symbol_order=1110)

std::__relocate_a_1<int, int> (int * __first, int * __last, int * __result, struct allocator & D.45069)
{
  ptrdiff_t __count;
  int * D.46683;
  long int _1;
  long unsigned int __count.8_2;
  long unsigned int _3;
  long unsigned int __count.9_4;
  long unsigned int _5;
  int * _13;

  <bb 2> :
  gimple_assign <pointer_diff_expr, _1, __last_7(D), __first_8(D), NULL>
  gimple_assign <exact_div_expr, __count_9, _1, 4, NULL>
  gimple_cond <gt_expr, __count_9, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <nop_expr, __count.8_2, __count_9, NULL, NULL>
  gimple_assign <mult_expr, _3, __count.8_2, 4, NULL>
  gimple_call <__builtin_memmove, NULL, __result_11(D), __first_8(D), _3>

  <bb 4> :
  gimple_assign <nop_expr, __count.9_4, __count_9, NULL, NULL>
  gimple_assign <mult_expr, _5, __count.9_4, 4, NULL>
  gimple_assign <pointer_plus_expr, _13, __result_11(D), _5, NULL>

  <bb 5> :
gimple_label <<L3>>
  gimple_return <_13>

}



;; Function std::__relocate_a<int*, int*, std::allocator<int> > (_ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_, funcdef_no=2480, decl_uid=44925, cgraph_uid=1084, symbol_order=1089)

std::__relocate_a<int*, int*, std::allocator<int> > (int * __first, int * __last, int * __result, struct allocator & __alloc)
{
  int * D.46676;
  int * _1;
  int * _2;
  int * _3;
  int * _13;

  <bb 2> :
  gimple_call <__niter_base, _1, __result_5(D)>
  gimple_call <__niter_base, _2, __last_7(D)>
  gimple_call <__niter_base, _3, __first_9(D)>
  gimple_call <__relocate_a_1, _13, _3, _2, _1, __alloc_11(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_13>

}



;; Function std::vector<int>::_S_do_relocate (_ZNSt6vectorIiSaIiEE14_S_do_relocateEPiS2_S2_RS0_St17integral_constantIbLb1EE, funcdef_no=2446, decl_uid=41052, cgraph_uid=1050, symbol_order=1055)

std::vector<int>::_S_do_relocate (int * __first, int * __last, int * __result, struct _Tp_alloc_type & __alloc, struct true_type D.41057)
{
  int * D.46674;
  int * _7;

  <bb 2> :
  gimple_call <__relocate_a, _7, __first_2(D), __last_3(D), __result_4(D), __alloc_5(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::vector<int>::_S_relocate (_ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_, funcdef_no=2410, decl_uid=41064, cgraph_uid=1014, symbol_order=1019)

std::vector<int>::_S_relocate (int * __first, int * __last, int * __result, struct _Tp_alloc_type & __alloc)
{
  struct integral_constant D.46672;
  int * D.46671;
  int * _7;

  <bb 2> :
  gimple_call <_S_do_relocate, _7, __first_2(D), __last_3(D), __result_4(D), __alloc_5(D), D.46672>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::move<int*&> (_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_, funcdef_no=2502, decl_uid=46341, cgraph_uid=1106, symbol_order=1111)

std::move<int*&> (int * & __t)
{
  int * & D.46695;
  int * & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::move_iterator<int*>::move_iterator (_ZNSt13move_iteratorIPiEC2ES0_, funcdef_no=2482, decl_uid=46050, cgraph_uid=1086, symbol_order=1091)

std::move_iterator<int*>::move_iterator (struct move_iterator * const this, int * __i)
{
  int * & _1;
  int * _2;

  <bb 2> :
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_call <move, _1, &__i>
  gimple_assign <mem_ref, _2, *_1, NULL, NULL>
  gimple_assign <ssa_name, this_4(D)->_M_current, _2, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::__make_move_if_noexcept_iterator<int> (_ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_, funcdef_no=2447, decl_uid=45954, cgraph_uid=1051, symbol_order=1056)

std::__make_move_if_noexcept_iterator<int> (int * __i)
{
  struct move_iterator D.46232;
  struct move_iterator D.46692;

  <bb 2> :
  gimple_call <__ct_comp , NULL, &D.46232, __i_2(D)>
  gimple_assign <var_decl, D.46692, D.46232, NULL, NULL>
  gimple_assign <constructor, D.46232, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <D.46692>

}



;; Function __gnu_cxx::new_allocator<int>::max_size (_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv, funcdef_no=2508, decl_uid=40578, cgraph_uid=1112, symbol_order=1117)

__gnu_cxx::new_allocator<int>::max_size (const struct new_allocator * const this)
{
  size_type D.46645;
  size_type _4;

  <bb 2> :
  gimple_call <_M_max_size, _4, this_2(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4>

}



;; Function std::allocator_traits<std::allocator<int> >::max_size (_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_, funcdef_no=2497, decl_uid=40732, cgraph_uid=1101, symbol_order=1106)

std::allocator_traits<std::allocator<int> >::max_size (const struct allocator_type & __a)
{
  size_type D.46643;
  size_type _4;

  <bb 2> :
  gimple_call <max_size, _4, __a_2(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4>

}



;; Function std::vector<int>::_S_max_size (_ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_, funcdef_no=2477, decl_uid=41443, cgraph_uid=1081, symbol_order=1086)

std::vector<int>::_S_max_size (const struct _Tp_alloc_type & __a)
{
  const size_t __allocmax;
  const size_t __diffmax;
  size_type D.46640;
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



;; Function std::vector<int>::max_size (_ZNKSt6vectorIiSaIiEE8max_sizeEv, funcdef_no=2442, decl_uid=41196, cgraph_uid=1046, symbol_order=1051)

std::vector<int>::max_size (const struct vector * const this)
{
  size_type D.46636;
  const struct _Vector_base * _1;
  const struct _Tp_alloc_type & _2;
  size_type _7;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_3(D)->D.41589, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _2, _1>
  gimple_call <_S_max_size, _7, _2>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::vector<int>::_M_check_len (_ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc, funcdef_no=2407, decl_uid=41436, cgraph_uid=1011, symbol_order=1016)

std::vector<int>::_M_check_len (const struct vector * const this, size_type __n, const char * __s)
{
  const size_type __len;
  size_type iftmp.5;
  size_type D.46623;
  const long unsigned int D.45916;
  bool retval.3;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int __n.4_4;
  long unsigned int _5;
  long unsigned int _6;
  const long unsigned int & _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  size_type iftmp.5_11;
  bool retval.3_18;
  size_type iftmp.5_27;
  size_type iftmp.5_29;
  size_type _30;

  <bb 2> :
  gimple_call <max_size, _1, this_15(D)>
  gimple_call <size, _2, this_15(D)>
  gimple_assign <minus_expr, _3, _1, _2, NULL>
  gimple_assign <parm_decl, __n.4_4, __n, NULL, NULL>
  gimple_assign <lt_expr, retval.3_18, _3, __n.4_4, NULL>
  gimple_cond <ne_expr, retval.3_18, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <__throw_length_error, NULL, __s_31(D)>

  <bb 4> :
  gimple_call <size, _5, this_15(D)>
  gimple_call <size, _6, this_15(D)>
  gimple_assign <ssa_name, D.45916, _6, NULL, NULL>
  gimple_call <max, _7, &D.45916, &__n>
  gimple_assign <mem_ref, _8, *_7, NULL, NULL>
  gimple_assign <plus_expr, __len_23, _5, _8, NULL>
  gimple_assign <constructor, D.45916, {CLOBBER}, NULL, NULL>
  gimple_call <size, _9, this_15(D)>
  gimple_cond <lt_expr, __len_23, _9, NULL, NULL>
    goto <bb 6>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 5> :
  gimple_call <max_size, _10, this_15(D)>
  gimple_cond <gt_expr, __len_23, _10, NULL, NULL>
    goto <bb 6>; [INV]
  else
    goto <bb 7>; [INV]

  <bb 6> :
  gimple_call <max_size, iftmp.5_29, this_15(D)>
  goto <bb 8>; [INV]

  <bb 7> :
  gimple_assign <ssa_name, iftmp.5_27, __len_23, NULL, NULL>

  <bb 8> :
  # gimple_phi <iftmp.5_11, iftmp.5_29(6), iftmp.5_27(7)>
  gimple_assign <ssa_name, _30, iftmp.5_11, NULL, NULL>

  <bb 9> :
gimple_label <<L6>>
  gimple_return <_30>

}



;; Function std::move_iterator<int*>::base (_ZNKSt13move_iteratorIPiE4baseEv, funcdef_no=2512, decl_uid=46008, cgraph_uid=1116, symbol_order=1121)

std::move_iterator<int*>::base (const struct move_iterator * const this)
{
  int * D.46713;
  int * _3;

  <bb 2> :
  gimple_assign <component_ref, _3, this_2(D)->_M_current, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::__miter_base<int*> (_ZSt12__miter_baseIPiET_S1_, funcdef_no=2513, decl_uid=46499, cgraph_uid=1117, symbol_order=1122)

std::__miter_base<int*> (int * __it)
{
  int * D.46715;
  int * _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __it_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::__miter_base<int*> (_ZSt12__miter_baseIPiEDTcl12__miter_basecldtfp_4baseEEESt13move_iteratorIT_E, funcdef_no=2510, decl_uid=46501, cgraph_uid=1114, symbol_order=1119)

std::__miter_base<int*> (struct move_iterator __it)
{
  int * D.46711;
  int * _1;
  int * _5;

  <bb 2> :
  gimple_call <base, _1, &__it>
  gimple_call <__miter_base, _5, _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function std::__niter_wrap<int*> (_ZSt12__niter_wrapIPiET_RKS1_S1_, funcdef_no=2515, decl_uid=46517, cgraph_uid=1119, symbol_order=1124)

std::__niter_wrap<int*> (int * const & D.46518, int * __res)
{
  int * D.46730;
  int * _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __res_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::__copy_move<true, true, std::random_access_iterator_tag>::__copy_m<int> (_ZNSt11__copy_moveILb1ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_, funcdef_no=2517, decl_uid=46549, cgraph_uid=1121, symbol_order=1126)

std::__copy_move<true, true, std::random_access_iterator_tag>::__copy_m<int> (const int * __first, const int * __last, int * __result)
{
  const ptrdiff_t _Num;
  int * D.46728;
  long int _1;
  long unsigned int _Num.11_2;
  long unsigned int _3;
  long unsigned int _Num.12_4;
  long unsigned int _5;
  int * _13;

  <bb 2> :
  gimple_assign <pointer_diff_expr, _1, __last_7(D), __first_8(D), NULL>
  gimple_assign <exact_div_expr, _Num_9, _1, 4, NULL>
  gimple_cond <ne_expr, _Num_9, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <nop_expr, _Num.11_2, _Num_9, NULL, NULL>
  gimple_assign <mult_expr, _3, _Num.11_2, 4, NULL>
  gimple_call <__builtin_memmove, NULL, __result_11(D), __first_8(D), _3>

  <bb 4> :
  gimple_assign <nop_expr, _Num.12_4, _Num_9, NULL, NULL>
  gimple_assign <mult_expr, _5, _Num.12_4, 4, NULL>
  gimple_assign <pointer_plus_expr, _13, __result_11(D), _5, NULL>

  <bb 5> :
gimple_label <<L3>>
  gimple_return <_13>

}



;; Function std::__copy_move_a2<true, int*, int*> (_ZSt14__copy_move_a2ILb1EPiS0_ET1_T0_S2_S1_, funcdef_no=2516, decl_uid=46526, cgraph_uid=1120, symbol_order=1125)

std::__copy_move_a2<true, int*, int*> (int * __first, int * __last, int * __result)
{
  int * D.46723;
  int * _6;

  <bb 2> :
  gimple_call <__copy_m, _6, __first_2(D), __last_3(D), __result_4(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::__copy_move_a1<true, int*, int*> (_ZSt14__copy_move_a1ILb1EPiS0_ET1_T0_S2_S1_, funcdef_no=2514, decl_uid=46513, cgraph_uid=1118, symbol_order=1123)

std::__copy_move_a1<true, int*, int*> (int * __first, int * __last, int * __result)
{
  int * D.46722;
  int * D.46720;
  int * _6;
  int * _7;

  <bb 2> :
  gimple_call <__copy_move_a2, _6, __first_2(D), __last_3(D), __result_4(D)>
  gimple_assign <ssa_name, _7, _6, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::__copy_move_a<true, int*, int*> (_ZSt13__copy_move_aILb1EPiS0_ET1_T0_S2_S1_, funcdef_no=2511, decl_uid=46507, cgraph_uid=1115, symbol_order=1120)

std::__copy_move_a<true, int*, int*> (int * __first, int * __last, int * __result)
{
  int * D.46719;
  int * D.46717;
  int * __result.10_1;
  int * _2;
  int * _3;
  int * _4;
  int * _5;
  int * _13;
  int * _15;

  <bb 2> :
  gimple_assign <parm_decl, __result.10_1, __result, NULL, NULL>
  gimple_call <__niter_base, _2, __result.10_1>
  gimple_call <__niter_base, _3, __last_8(D)>
  gimple_call <__niter_base, _4, __first_10(D)>
  gimple_call <__copy_move_a1, _13, _4, _3, _2>
  gimple_assign <ssa_name, _5, _13, NULL, NULL>
  gimple_call <__niter_wrap, _15, &__result, _5>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_15>

}



;; Function std::copy<std::move_iterator<int*>, int*> (_ZSt4copyISt13move_iteratorIPiES1_ET0_T_S4_S3_, funcdef_no=2509, decl_uid=46476, cgraph_uid=1113, symbol_order=1118)

std::copy<std::move_iterator<int*>, int*> (struct move_iterator __first, struct move_iterator __last, int * __result)
{
  int * D.46710;
  int * D.46709;
  int * D.46708;
  int * D.46706;
  int * _1;
  int * _2;
  int * _5;
  int * _7;
  int * _10;
  int * _11;

  <bb 2> :
  gimple_call <__miter_base, _5, __last>
  gimple_assign <ssa_name, _1, _5, NULL, NULL>
  gimple_call <__miter_base, _7, __first>
  gimple_assign <ssa_name, _2, _7, NULL, NULL>
  gimple_call <__copy_move_a, _10, _2, _1, __result_8(D)>
  gimple_assign <ssa_name, _11, _10, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_11>

}



;; Function std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<int*>, int*> (_ZNSt20__uninitialized_copyILb1EE13__uninit_copyISt13move_iteratorIPiES3_EET0_T_S6_S5_, funcdef_no=2503, decl_uid=46426, cgraph_uid=1107, symbol_order=1112)

std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<int*>, int*> (struct move_iterator __first, struct move_iterator __last, int * __result)
{
  int * D.46705;
  int * D.46703;
  int * _4;
  int * _5;

  <bb 2> :
  gimple_call <copy, _4, __first, __last, __result_2(D)>
  gimple_assign <ssa_name, _5, _4, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function std::uninitialized_copy<std::move_iterator<int*>, int*> (_ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_, funcdef_no=2484, decl_uid=46234, cgraph_uid=1089, symbol_order=1094)

std::uninitialized_copy<std::move_iterator<int*>, int*> (struct move_iterator __first, struct move_iterator __last, int * __result)
{
  int * D.46702;
  const bool __assignable;
  int * D.46700;
  int * _5;
  int * _6;

  <bb 2> :
  gimple_assign <integer_cst, __assignable_1, 1, NULL, NULL>
  gimple_call <__uninit_copy, _5, __first, __last, __result_3(D)>
  gimple_assign <ssa_name, _6, _5, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::__uninitialized_copy_a<std::move_iterator<int*>, int*, int> (_ZSt22__uninitialized_copy_aISt13move_iteratorIPiES1_iET0_T_S4_S3_RSaIT1_E, funcdef_no=2448, decl_uid=46069, cgraph_uid=1052, symbol_order=1057)

std::__uninitialized_copy_a<std::move_iterator<int*>, int*, int> (struct move_iterator __first, struct move_iterator __last, int * __result, struct allocator & D.46073)
{
  int * D.46699;
  int * D.46697;
  int * _4;
  int * _5;

  <bb 2> :
  gimple_call <uninitialized_copy, _4, __first, __last, __result_2(D)>
  gimple_assign <ssa_name, _5, _4, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> > (_ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_, funcdef_no=2411, decl_uid=45072, cgraph_uid=1015, symbol_order=1020)

std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> > (int * __first, int * __last, int * __result, struct allocator & __alloc)
{
  int * D.46691;
  struct move_iterator D.46689;
  struct move_iterator D.46688;
  int * D.46687;
  int * _9;
  int * _10;

  <bb 2> :
  gimple_call <__make_move_if_noexcept_iterator, D.46688, __last_2(D)>
  gimple_call <__make_move_if_noexcept_iterator, D.46689, __first_4(D)>
  gimple_call <__uninitialized_copy_a, _9, D.46689, D.46688, __result_6(D), __alloc_7(D)>
  gimple_assign <ssa_name, _10, _9, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_10>

}



;; Function std::vector<int>::_M_realloc_insert<int> (_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_, funcdef_no=2365, decl_uid=44301, cgraph_uid=972, symbol_order=977)

std::vector<int>::_M_realloc_insert<int> (struct vector * const this, struct iterator __position, int & __args#0)
{
  bool D.46619;
  int * D.46615;
  int * D.46614;
  bool D.46613;
  int * D.46612;
  const size_type D.46611;
  int * __new_finish;
  int * __new_start;
  const size_type __elems_before;
  int * __old_finish;
  int * __old_start;
  const size_type __len;
  bool retval.2;
  bool retval.1;
  struct iterator D.44752;
  long int _1;
  struct _Vector_base * _2;
  int & _3;
  long unsigned int _4;
  int * _5;
  struct _Vector_impl * _6;
  struct _Vector_base * _7;
  struct _Tp_alloc_type & _8;
  int * const & _9;
  int * _10;
  struct _Vector_base * _11;
  struct _Tp_alloc_type & _12;
  int * const & _13;
  int * _14;
  struct _Vector_base * _15;
  struct _Tp_alloc_type & _16;
  int * const & _17;
  int * _18;
  struct _Vector_base * _19;
  struct _Tp_alloc_type & _20;
  int * const & _21;
  int * _22;
  void * _23;
  long unsigned int _24;
  int * _25;
  struct _Vector_impl * _26;
  struct _Vector_base * _27;
  struct _Tp_alloc_type & _28;
  struct _Vector_base * _29;
  bool _30;
  struct _Vector_base * _31;
  struct _Tp_alloc_type & _32;
  struct _Vector_base * _33;
  int * _34;
  long int _35;
  long int _36;
  long unsigned int _37;
  long unsigned int _38;
  int * _39;
  const size_type _50;
  int * _59;
  bool _67;
  bool retval.1_68;
  int * _72;
  int * _78;
  bool _90;
  bool retval.2_91;

  <bb 2> :
  gimple_call <_M_check_len, _50, this_48(D), 1, "vector::_M_realloc_insert">
  gimple_assign <ssa_name, __len_51, _50, NULL, NULL>
  gimple_assign <component_ref, __old_start_52, this_48(D)->D.41589._M_impl.D.40900._M_start, NULL, NULL>
  gimple_assign <component_ref, __old_finish_53, this_48(D)->D.41589._M_impl.D.40900._M_finish, NULL, NULL>
  gimple_call <begin, D.44752, this_48(D)>
  gimple_call <operator-, _1, &__position, &D.44752>
  gimple_assign <nop_expr, __elems_before_56, _1, NULL, NULL>
  gimple_assign <constructor, D.44752, {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _2, &this_48(D)->D.41589, NULL, NULL>
  gimple_call <_M_allocate, _59, _2, __len_51>
  gimple_assign <ssa_name, __new_start_60, _59, NULL, NULL>
  gimple_assign <ssa_name, __new_finish_61, __new_start_60, NULL, NULL>
  gimple_call <forward, _3, __args#0_62(D)>
  gimple_assign <mult_expr, _4, __elems_before_56, 4, NULL>
  gimple_assign <pointer_plus_expr, _5, __new_start_60, _4, NULL>
  gimple_assign <addr_expr, _6, &this_48(D)->D.41589._M_impl, NULL, NULL>
  gimple_call <construct, NULL, _6, _5, _3>
  gimple_assign <integer_cst, __new_finish_65, 0B, NULL, NULL>
  gimple_call <_S_use_relocate, _67>

  <bb 3> :
  gimple_assign <ssa_name, retval.1_68, _67, NULL, NULL>
  gimple_cond <ne_expr, retval.1_68, 0, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <addr_expr, _7, &this_48(D)->D.41589, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _8, _7>
  gimple_call <base, _9, &__position>
  gimple_assign <mem_ref, _10, *_9, NULL, NULL>
  gimple_call <_S_relocate, __new_finish_83, __old_start_52, _10, __new_start_60, _8>
  gimple_assign <pointer_plus_expr, __new_finish_84, __new_finish_83, 4, NULL>
  gimple_assign <addr_expr, _11, &this_48(D)->D.41589, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _12, _11>
  gimple_call <base, _13, &__position>
  gimple_assign <mem_ref, _14, *_13, NULL, NULL>
  gimple_call <_S_relocate, __new_finish_88, _14, __old_finish_53, __new_finish_84, _12>
  goto <bb 8>; [INV]

  <bb 5> :
  gimple_assign <addr_expr, _15, &this_48(D)->D.41589, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _16, _15>
  gimple_call <base, _17, &__position>
  gimple_assign <mem_ref, _18, *_17, NULL, NULL>
  gimple_call <__uninitialized_move_if_noexcept_a, _72, __old_start_52, _18, __new_start_60, _16>

  <bb 6> :
  gimple_assign <ssa_name, __new_finish_73, _72, NULL, NULL>
  gimple_assign <pointer_plus_expr, __new_finish_74, __new_finish_73, 4, NULL>
  gimple_assign <addr_expr, _19, &this_48(D)->D.41589, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _20, _19>
  gimple_call <base, _21, &__position>
  gimple_assign <mem_ref, _22, *_21, NULL, NULL>
  gimple_call <__uninitialized_move_if_noexcept_a, _78, _22, __old_finish_53, __new_finish_74, _20>

  <bb 7> :
  gimple_assign <ssa_name, __new_finish_79, _78, NULL, NULL>

  <bb 8> :
  # gimple_phi <__new_finish_40, __new_finish_88(4), __new_finish_79(7)>
  gimple_call <_S_use_relocate, _90>
  gimple_assign <ssa_name, _30, _90, NULL, NULL>
  gimple_assign <bit_not_expr, retval.2_91, _30, NULL, NULL>
  gimple_cond <ne_expr, retval.2_91, 0, NULL, NULL>
    goto <bb 9>; [INV]
  else
    goto <bb 10>; [INV]

  <bb 9> :
  gimple_assign <addr_expr, _31, &this_48(D)->D.41589, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _32, _31>
  gimple_call <_Destroy, NULL, __old_start_52, __old_finish_53, _32>

  <bb 10> :
  gimple_assign <addr_expr, _33, &this_48(D)->D.41589, NULL, NULL>
  gimple_assign <component_ref, _34, this_48(D)->D.41589._M_impl.D.40900._M_end_of_storage, NULL, NULL>
  gimple_assign <pointer_diff_expr, _35, _34, __old_start_52, NULL>
  gimple_assign <exact_div_expr, _36, _35, 4, NULL>
  gimple_assign <nop_expr, _37, _36, NULL, NULL>
  gimple_call <_M_deallocate, NULL, _33, __old_start_52, _37>
  gimple_assign <ssa_name, this_48(D)->D.41589._M_impl.D.40900._M_start, __new_start_60, NULL, NULL>
  gimple_assign <ssa_name, this_48(D)->D.41589._M_impl.D.40900._M_finish, __new_finish_40, NULL, NULL>
  gimple_assign <mult_expr, _38, __len_51, 4, NULL>
  gimple_assign <pointer_plus_expr, _39, __new_start_60, _38, NULL>
  gimple_assign <ssa_name, this_48(D)->D.41589._M_impl.D.40900._M_end_of_storage, _39, NULL, NULL>
  gimple_return <NULL>

  <bb 11> :
  # gimple_phi <__new_finish_41, __new_finish_65(2), __new_finish_65(5), __new_finish_74(6)>
gimple_label <<L6>>
  gimple_eh_dispatch <2>

  <bb 12> :
gimple_label <<L7>>
  gimple_call <__builtin_eh_pointer, _23, 2>
  gimple_call <__cxa_begin_catch, NULL, _23>
  gimple_cond <eq_expr, __new_finish_41, 0B, NULL, NULL>
    goto <bb 13>; [INV]
  else
    goto <bb 14>; [INV]

  <bb 13> :
  gimple_assign <mult_expr, _24, __elems_before_56, 4, NULL>
  gimple_assign <pointer_plus_expr, _25, __new_start_60, _24, NULL>
  gimple_assign <addr_expr, _26, &this_48(D)->D.41589._M_impl, NULL, NULL>
  gimple_call <destroy, NULL, _26, _25>
  goto <bb 15>; [INV]

  <bb 14> :
  gimple_assign <addr_expr, _27, &this_48(D)->D.41589, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _28, _27>
  gimple_call <_Destroy, NULL, __new_start_60, __new_finish_41, _28>

  <bb 15> :
  gimple_assign <addr_expr, _29, &this_48(D)->D.41589, NULL, NULL>
  gimple_call <_M_deallocate, NULL, _29, __new_start_60, __len_51>

  <bb 16> :
  gimple_call <__cxa_rethrow, NULL>

  <bb 17> :
gimple_label <<L11>>
  gimple_call <__cxa_end_catch, NULL>
  gimple_resx <3>

}



;; Function std::vector<int>::emplace_back<int> (_ZNSt6vectorIiSaIiEE12emplace_backIJiEEEvDpOT_, funcdef_no=2317, decl_uid=43786, cgraph_uid=922, symbol_order=927)

std::vector<int>::emplace_back<int> (struct vector * const this, int & __args#0)
{
  struct __normal_iterator D.46595;
  int * _1;
  int * _2;
  int & _3;
  int * _4;
  struct _Vector_impl * _5;
  int * _6;
  int * _7;
  int & _8;

  <bb 2> :
  gimple_assign <component_ref, _1, this_11(D)->D.41589._M_impl.D.40900._M_finish, NULL, NULL>
  gimple_assign <component_ref, _2, this_11(D)->D.41589._M_impl.D.40900._M_end_of_storage, NULL, NULL>
  gimple_cond <ne_expr, _1, _2, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <forward, _3, __args#0_12(D)>
  gimple_assign <component_ref, _4, this_11(D)->D.41589._M_impl.D.40900._M_finish, NULL, NULL>
  gimple_assign <addr_expr, _5, &this_11(D)->D.41589._M_impl, NULL, NULL>
  gimple_call <construct, NULL, _5, _4, _3>
  gimple_assign <component_ref, _6, this_11(D)->D.41589._M_impl.D.40900._M_finish, NULL, NULL>
  gimple_assign <pointer_plus_expr, _7, _6, 4, NULL>
  gimple_assign <ssa_name, this_11(D)->D.41589._M_impl.D.40900._M_finish, _7, NULL, NULL>
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_call <forward, _8, __args#0_12(D)>
  gimple_call <end, D.46595, this_11(D)>
  gimple_call <_M_realloc_insert, NULL, this_11(D), D.46595, _8>

  <bb 5> :
  gimple_return <NULL>

}



;; Function std::vector<int>::push_back (_ZNSt6vectorIiSaIiEE9push_backEOi, funcdef_no=2188, decl_uid=41244, cgraph_uid=792, symbol_order=797)

std::vector<int>::push_back (struct vector * const this, value_type & __x)
{
  type & _1;

  <bb 2> :
  gimple_call <move, _1, __x_3(D)>
  gimple_call <emplace_back, NULL, this_5(D), _1>
  gimple_return <NULL>

}



;; Function main (main, funcdef_no=1921, decl_uid=40526, cgraph_uid=535, symbol_order=537)

main ()
{
  struct basic_ostream & D.46583;
  struct iterator __for_end;
  struct iterator __for_begin;
  struct vector & __for_range;
  int x;
  struct vector vect;
  int D.46578;
  bool retval.0;
  value_type D.41713;
  value_type D.41712;
  value_type D.41711;
  int & _1;
  struct basic_ostream & _2;
  bool retval.0_21;
  int _24;
  struct basic_ostream & _30;

  <bb 2> :
  gimple_call <__ct_comp , NULL, &vect>
  gimple_assign <integer_cst, D.41711, 10, NULL, NULL>
  gimple_call <push_back, NULL, &vect, &D.41711>

  <bb 3> :
  gimple_assign <constructor, D.41711, {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, D.41712, 20, NULL, NULL>
  gimple_call <push_back, NULL, &vect, &D.41712>

  <bb 4> :
  gimple_assign <constructor, D.41712, {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, D.41713, 30, NULL, NULL>
  gimple_call <push_back, NULL, &vect, &D.41713>

  <bb 5> :
  gimple_assign <constructor, D.41713, {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, __for_range_17, &vect, NULL, NULL>
  gimple_call <begin, __for_begin, __for_range_17>
  gimple_call <end, __for_end, __for_range_17>

  <bb 6> :
  gimple_call <operator!=, retval.0_21, &__for_begin, &__for_end>
  gimple_cond <ne_expr, retval.0_21, 0, NULL, NULL>
    goto <bb 7>; [INV]
  else
    goto <bb 10>; [INV]

  <bb 7> :
  gimple_call <operator*, _1, &__for_begin>
  gimple_assign <mem_ref, x_28, *_1, NULL, NULL>
  gimple_call <operator<<, _30, &cout, x_28>

  <bb 8> :
  gimple_assign <ssa_name, _2, _30, NULL, NULL>
  gimple_call <operator<<, NULL, _2, " ">

  <bb 9> :
  gimple_call <operator++, NULL, &__for_begin>
  goto <bb 6>; [INV]

  <bb 10> :
  gimple_assign <constructor, __for_begin, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, __for_end, {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, _24, 0, NULL, NULL>
  gimple_call <__dt_comp , NULL, &vect>
  gimple_assign <constructor, vect, {CLOBBER}, NULL, NULL>

  <bb 11> :
gimple_label <<L5>>
  gimple_return <_24>

  <bb 12> :
gimple_label <<L6>>
  gimple_assign <constructor, D.41711, {CLOBBER}, NULL, NULL>
  gimple_resx <3>

  <bb 13> :
gimple_label <<L7>>
  gimple_assign <constructor, D.41712, {CLOBBER}, NULL, NULL>
  gimple_resx <5>

  <bb 14> :
gimple_label <<L8>>
  gimple_assign <constructor, D.41713, {CLOBBER}, NULL, NULL>
  gimple_resx <7>

  <bb 15> :
gimple_label <<L9>>
  gimple_assign <constructor, __for_begin, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, __for_end, {CLOBBER}, NULL, NULL>
  gimple_resx <9>

  <bb 16> :
gimple_label <<L10>>
  gimple_call <__dt_comp , NULL, &vect>
  gimple_resx <2>

  <bb 17> :
gimple_label <<L11>>
  gimple_assign <constructor, vect, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function __static_initialization_and_destruction_0 (_Z41__static_initialization_and_destruction_0ii, funcdef_no=2518, decl_uid=46567, cgraph_uid=1122, symbol_order=1151)

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



;; Function _GLOBAL__sub_I_main (_GLOBAL__sub_I_main, funcdef_no=2519, decl_uid=46573, cgraph_uid=1123, symbol_order=1281)

_GLOBAL__sub_I_main ()
{
  <bb 2> :
  gimple_call <__static_initialization_and_destruction_0, NULL, 1, 65535>
  gimple_return <NULL>

}


