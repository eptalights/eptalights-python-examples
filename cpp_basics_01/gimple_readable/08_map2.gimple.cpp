
;; Function std::__cxx11::basic_string<char>::_Alloc_hider::_Alloc_hider (_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_, funcdef_no=2459, decl_uid=19687, cgraph_uid=764, symbol_order=771)

std::__cxx11::basic_string<char>::_Alloc_hider::_Alloc_hider (struct _Alloc_hider * const this, char * __dat, const struct allocator & __a)
{
  <bb 2> :
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_call <__ct_base , NULL, this_2(D), __a_4(D)>
  gimple_assign <ssa_name, this_2(D)->_M_p, __dat_6(D), NULL, NULL>
  gimple_return <NULL>

}



;; Function operator new (_ZnwmPv, funcdef_no=38, decl_uid=3410, cgraph_uid=27, symbol_order=26)

operator new (size_t D.3408, void * __p)
{
  void * D.54617;
  void * _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __p_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function operator delete (_ZdlPvS_, funcdef_no=40, decl_uid=3418, cgraph_uid=29, symbol_order=28)

operator delete (void * D.3416, void * D.3417)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::char_traits<char>::length (_ZNSt11char_traitsIcE6lengthEPKc, funcdef_no=427, decl_uid=11765, cgraph_uid=83, symbol_order=83)

std::char_traits<char>::length (const char_type * __s)
{
  size_t D.54786;
  size_t _3;

  <bb 2> :
  gimple_call <__builtin_strlen, _3, __s_2(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::char_traits<char>::copy (_ZNSt11char_traitsIcE4copyEPcPKcm, funcdef_no=430, decl_uid=11777, cgraph_uid=86, symbol_order=86)

std::char_traits<char>::copy (char_type * __s1, const char_type * __s2, size_t __n)
{
  char_type * D.54654;
  char_type * _1;
  char_type * _8;
  char_type * _9;

  <bb 2> :
  gimple_cond <eq_expr, __n_3(D), 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <ssa_name, _9, __s1_5(D), NULL, NULL>
  // predicted unlikely by early return (on trees) predictor.
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_call <__builtin_memcpy, _8, __s1_5(D), __s2_6(D), __n_3(D)>

  <bb 5> :
  # gimple_phi <_1, _9(3), _8(4)>
gimple_label <<L2>>
  gimple_return <_1>

}



;; Function std::_Rb_tree_header::_M_reset (_ZNSt15_Rb_tree_header8_M_resetEv, funcdef_no=1598, decl_uid=37355, cgraph_uid=467, symbol_order=469)

std::_Rb_tree_header::_M_reset (struct _Rb_tree_header * const this)
{
  struct _Rb_tree_node_base * _1;
  struct _Rb_tree_node_base * _2;

  <bb 2> :
  gimple_assign <integer_cst, this_4(D)->_M_header._M_parent, 0B, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_4(D)->_M_header, NULL, NULL>
  gimple_assign <ssa_name, this_4(D)->_M_header._M_left, _1, NULL, NULL>
  gimple_assign <addr_expr, _2, &this_4(D)->_M_header, NULL, NULL>
  gimple_assign <ssa_name, this_4(D)->_M_header._M_right, _2, NULL, NULL>
  gimple_assign <integer_cst, this_4(D)->_M_node_count, 0, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Rb_tree_header::_Rb_tree_header (_ZNSt15_Rb_tree_headerC2Ev, funcdef_no=1592, decl_uid=37365, cgraph_uid=461, symbol_order=463)

std::_Rb_tree_header::_Rb_tree_header (struct _Rb_tree_header * const this)
{
  <bb 2> :
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, this_2(D)->_M_header._M_color, 0, NULL, NULL>
  gimple_call <_M_reset, NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<char>::new_allocator (_ZN9__gnu_cxx13new_allocatorIcEC2Ev, funcdef_no=2452, decl_uid=13860, cgraph_uid=757, symbol_order=764)

__gnu_cxx::new_allocator<char>::new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<char>::allocator (_ZNSaIcEC2Ev, funcdef_no=2256, decl_uid=13932, cgraph_uid=561, symbol_order=565)

std::allocator<char>::allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__ct_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<char>::~new_allocator (_ZN9__gnu_cxx13new_allocatorIcED2Ev, funcdef_no=2455, decl_uid=13865, cgraph_uid=760, symbol_order=767)

__gnu_cxx::new_allocator<char>::~new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<char>::~allocator (_ZNSaIcED2Ev, funcdef_no=2259, decl_uid=13937, cgraph_uid=564, symbol_order=568)

std::allocator<char>::~allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function std::__cxx11::basic_string<char>::_Alloc_hider::~_Alloc_hider (_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev, funcdef_no=2263, decl_uid=20685, cgraph_uid=567, symbol_order=571)

std::__cxx11::basic_string<char>::_Alloc_hider::~_Alloc_hider (struct _Alloc_hider * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::__cxx11::basic_string<char>::~basic_string (_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev, funcdef_no=2268, decl_uid=20530, cgraph_uid=573, symbol_order=577)

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



;; Function std::move<std::allocator<char>&> (_ZSt4moveIRSaIcEEONSt16remove_referenceIT_E4typeEOS3_, funcdef_no=2463, decl_uid=47264, cgraph_uid=768, symbol_order=775)

std::move<std::allocator<char>&> (struct allocator & __t)
{
  struct type & D.54650;
  struct type & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::__cxx11::basic_string<char>::_Alloc_hider::_Alloc_hider (_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_, funcdef_no=2465, decl_uid=19679, cgraph_uid=770, symbol_order=777)

std::__cxx11::basic_string<char>::_Alloc_hider::_Alloc_hider (struct _Alloc_hider * const this, char * __dat, struct allocator & __a)
{
  struct type & _1;

  <bb 2> :
  gimple_assign <constructor, *this_3(D), {CLOBBER}, NULL, NULL>
  gimple_call <move, _1, __a_5(D)>
  gimple_call <__ct_base , NULL, this_3(D), _1>
  gimple_assign <ssa_name, this_3(D)->_M_p, __dat_8(D), NULL, NULL>
  gimple_return <NULL>

}



;; Function std::__cxx11::basic_string<char>::basic_string (_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EOS4_, funcdef_no=2273, decl_uid=20448, cgraph_uid=578, symbol_order=583)

std::__cxx11::basic_string<char>::basic_string (struct basic_string * const this, struct basic_string & __str)
{
  char * D.54649;
  char * D.54648;
  bool D.54647;
  char * D.54646;
  struct allocator_type & D.54645;
  bool retval.5;
  struct _Alloc_hider * _1;
  struct allocator_type & _2;
  struct type & _3;
  char * _4;
  char[16] * _5;
  char[16] * _6;
  char * _7;
  long unsigned int _8;
  long unsigned int _9;
  char * _10;
  struct _Alloc_hider * _11;
  struct allocator_type & _18;
  char * _21;
  bool _24;
  bool retval.5_25;
  char * _27;
  char * _34;

  <bb 2> :
  gimple_assign <constructor, *this_14(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_14(D)->_M_dataplus, NULL, NULL>
  gimple_call <_M_get_allocator, _18, __str_16(D)>
  gimple_assign <ssa_name, _2, _18, NULL, NULL>
  gimple_call <move, _3, _2>
  gimple_call <_M_local_data, _21, this_14(D)>
  gimple_assign <ssa_name, _4, _21, NULL, NULL>
  gimple_call <__ct_comp , NULL, _1, _4, _3>
  gimple_call <_M_is_local, _24, __str_16(D)>
  gimple_assign <ssa_name, retval.5_25, _24, NULL, NULL>
  gimple_cond <ne_expr, retval.5_25, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <addr_expr, _5, &__str_16(D)->D.19696._M_local_buf, NULL, NULL>
  gimple_assign <addr_expr, _6, &this_14(D)->D.19696._M_local_buf, NULL, NULL>
  gimple_call <copy, NULL, _6, _5, 16>
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_call <_M_data, _27, __str_16(D)>
  gimple_assign <ssa_name, _7, _27, NULL, NULL>
  gimple_call <_M_data, NULL, this_14(D), _7>
  gimple_assign <component_ref, _8, __str_16(D)->D.19696._M_allocated_capacity, NULL, NULL>
  gimple_call <_M_capacity, NULL, this_14(D), _8>

  <bb 5> :
  gimple_call <length, _9, __str_16(D)>
  gimple_call <_M_length, NULL, this_14(D), _9>
  gimple_call <_M_local_data, _34, __str_16(D)>
  gimple_assign <ssa_name, _10, _34, NULL, NULL>
  gimple_call <_M_data, NULL, __str_16(D), _10>
  gimple_call <_M_set_length, NULL, __str_16(D), 0>
  gimple_return <NULL>

}



;; Function std::move<std::__cxx11::basic_string<char>&> (_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_, funcdef_no=2556, decl_uid=48237, cgraph_uid=861, symbol_order=868)

std::move<std::__cxx11::basic_string<char>&> (struct basic_string & __t)
{
  struct type & D.54571;
  struct type & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Rb_tree_key_compare<std::less<std::__cxx11::basic_string<char> > >::_Rb_tree_key_compare (_ZNSt20_Rb_tree_key_compareISt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEC2Ev, funcdef_no=2563, decl_uid=44855, cgraph_uid=868, symbol_order=875)

std::_Rb_tree_key_compare<std::less<std::__cxx11::basic_string<char> > >::_Rb_tree_key_compare (struct _Rb_tree_key_compare * const this)
{
  <bb 2> :
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::~new_allocator (_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev, funcdef_no=2566, decl_uid=44610, cgraph_uid=871, symbol_order=878)

__gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::~new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::~allocator (_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev, funcdef_no=2430, decl_uid=44680, cgraph_uid=735, symbol_order=742)

std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::~allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl<std::less<std::__cxx11::basic_string<char> >, true>::~_Rb_tree_impl (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb1EED2Ev, funcdef_no=2173, decl_uid=45440, cgraph_uid=475, symbol_order=479)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl<std::less<std::__cxx11::basic_string<char> >, true>::~_Rb_tree_impl (struct _Rb_tree_impl * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_begin (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_beginEv, funcdef_no=2569, decl_uid=44972, cgraph_uid=874, symbol_order=881)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_begin (struct _Rb_tree * const this)
{
  struct _Rb_tree_node * D.54530;
  struct _Rb_tree_node * _3;

  <bb 2> :
  gimple_assign <component_ref, _3, this_2(D)->_M_impl.D.44957._M_header._M_parent, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::operator== (_ZSteqRKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEESB_, funcdef_no=2573, decl_uid=48409, cgraph_uid=878, symbol_order=885)

std::operator== (const struct _Self & __x, const struct _Self & __y)
{
  bool D.54562;
  struct _Rb_tree_node_base * _1;
  struct _Rb_tree_node_base * _2;
  bool _6;

  <bb 2> :
  gimple_assign <component_ref, _1, __x_4(D)->_M_node, NULL, NULL>
  gimple_assign <component_ref, _2, __y_5(D)->_M_node, NULL, NULL>
  gimple_assign <eq_expr, _6, _1, _2, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::_Rb_tree_const_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::_Rb_tree_const_iterator (_ZNSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2ERKSt17_Rb_tree_iteratorIS8_E, funcdef_no=2595, decl_uid=48478, cgraph_uid=900, symbol_order=907)

std::_Rb_tree_const_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::_Rb_tree_const_iterator (struct _Rb_tree_const_iterator * const this, const struct iterator & __it)
{
  struct _Rb_tree_node_base * _1;

  <bb 2> :
  gimple_assign <constructor, *this_3(D), {CLOBBER}, NULL, NULL>
  gimple_assign <component_ref, _1, __it_5(D)->_M_node, NULL, NULL>
  gimple_assign <ssa_name, this_3(D)->_M_node, _1, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::operator== (_ZSteqRKSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEESB_, funcdef_no=2607, decl_uid=48468, cgraph_uid=912, symbol_order=919)

std::operator== (const struct _Self & __x, const struct _Self & __y)
{
  bool D.54855;
  const struct _Rb_tree_node_base * _1;
  const struct _Rb_tree_node_base * _2;
  bool _6;

  <bb 2> :
  gimple_assign <component_ref, _1, __x_4(D)->_M_node, NULL, NULL>
  gimple_assign <component_ref, _2, __y_5(D)->_M_node, NULL, NULL>
  gimple_assign <eq_expr, _6, _1, _2, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::new_allocator (_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEC2Ev, funcdef_no=2643, decl_uid=44605, cgraph_uid=948, symbol_order=955)

__gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::allocator (_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEC2Ev, funcdef_no=2560, decl_uid=44675, cgraph_uid=865, symbol_order=872)

std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__ct_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl<std::less<std::__cxx11::basic_string<char> >, true>::_Rb_tree_impl (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb1EEC2Ev, funcdef_no=2427, decl_uid=44954, cgraph_uid=732, symbol_order=739)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl<std::less<std::__cxx11::basic_string<char> >, true>::_Rb_tree_impl (struct _Rb_tree_impl * const this)
{
  struct _Rb_tree_key_compare * _1;
  struct _Rb_tree_header * _2;

  <bb 2> :
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_call <__ct_base , NULL, this_4(D)>
  gimple_assign <addr_expr, _1, &this_4(D)->D.44956, NULL, NULL>
  gimple_call <__ct_base , NULL, _1>
  gimple_assign <addr_expr, _2, &this_4(D)->D.44957, NULL, NULL>
  gimple_call <__ct_base , NULL, _2>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EEC2Ev, funcdef_no=2175, decl_uid=45520, cgraph_uid=478, symbol_order=482)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree (struct _Rb_tree * const this)
{
  struct _Rb_tree_impl * _1;
  struct _Rb_tree_impl * _2;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_3(D)->_M_impl, NULL, NULL>
  gimple_call <__ct_comp , NULL, _1>
  gimple_return <NULL>

}



;; Function std::map<std::__cxx11::basic_string<char>, int>::map (_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEC2Ev, funcdef_no=2177, decl_uid=45975, cgraph_uid=481, symbol_order=485)

std::map<std::__cxx11::basic_string<char>, int>::map (struct map * const this)
{
  struct _Rep_type * _1;
  struct _Rep_type * _2;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_3(D)->_M_t, NULL, NULL>
  gimple_call <__ct_comp , NULL, _1>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_S_right (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPSt18_Rb_tree_node_base, funcdef_no=2645, decl_uid=44986, cgraph_uid=950, symbol_order=957)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_S_right (struct _Rb_tree_node_base * __x)
{
  struct _Rb_tree_node * D.54555;
  struct _Rb_tree_node * _3;

  <bb 2> :
  gimple_assign <component_ref, _3, __x_2(D)->_M_right, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_S_left (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_S_leftEPSt18_Rb_tree_node_base, funcdef_no=2646, decl_uid=44982, cgraph_uid=951, symbol_order=958)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_S_left (struct _Rb_tree_node_base * __x)
{
  struct _Rb_tree_node * D.54553;
  struct _Rb_tree_node * _3;

  <bb 2> :
  gimple_assign <component_ref, _3, __x_2(D)->_M_left, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function __gnu_cxx::__is_null_pointer<const char> (_ZN9__gnu_cxx17__is_null_pointerIKcEEbPT_, funcdef_no=2648, decl_uid=51114, cgraph_uid=953, symbol_order=960)

__gnu_cxx::__is_null_pointer<const char> (const char * __ptr)
{
  bool D.54806;
  bool _2;

  <bb 2> :
  gimple_assign <eq_expr, _2, __ptr_1(D), 0B, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::key_comp (_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8key_compEv, funcdef_no=2653, decl_uid=45141, cgraph_uid=958, symbol_order=965)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::key_comp (const struct _Rb_tree * const this)
{
  <bb 2> :

  <bb 3> :
gimple_label <<L0>>
  gimple_return <<retval>>

}



;; Function std::map<std::__cxx11::basic_string<char>, int>::key_comp (_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE8key_compEv, funcdef_no=2574, decl_uid=45750, cgraph_uid=879, symbol_order=886)

std::map<std::__cxx11::basic_string<char>, int>::key_comp (const struct map * const this)
{
  const struct _Rep_type * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->_M_t, NULL, NULL>
  gimple_call <key_comp, NULL, _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <<retval>>

}



;; Function std::operator< <char, std::char_traits<char>, std::allocator<char> > (_ZStltIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_, funcdef_no=2655, decl_uid=51230, cgraph_uid=960, symbol_order=967)

std::operator< <char, std::char_traits<char>, std::allocator<char> > (const struct basic_string & __lhs, const struct basic_string & __rhs)
{
  int D.54570;
  bool D.54568;
  int _1;
  int _6;
  bool _7;

  <bb 2> :
  gimple_call <compare, _6, __lhs_3(D), __rhs_4(D)>
  gimple_assign <ssa_name, _1, _6, NULL, NULL>
  gimple_assign <lt_expr, _7, _1, 0, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::less<std::__cxx11::basic_string<char> >::operator() (_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_, funcdef_no=2576, decl_uid=44747, cgraph_uid=881, symbol_order=888)

std::less<std::__cxx11::basic_string<char> >::operator() (const struct less * const this, const struct basic_string & __x, const struct basic_string & __y)
{
  bool D.54566;
  bool _5;

  <bb 2> :
  gimple_call <operator<, _5, __x_2(D), __y_3(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function std::forward<std::__cxx11::basic_string<char> > (_ZSt7forwardINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEOT_RNSt16remove_referenceIS6_E4typeE, funcdef_no=2656, decl_uid=51244, cgraph_uid=961, symbol_order=968)

std::forward<std::__cxx11::basic_string<char> > (struct type & __t)
{
  struct basic_string & D.54575;
  struct basic_string & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::forward<const std::piecewise_construct_t&> (_ZSt7forwardIRKSt21piecewise_construct_tEOT_RNSt16remove_referenceIS3_E4typeE, funcdef_no=2663, decl_uid=51555, cgraph_uid=968, symbol_order=975)

std::forward<const std::piecewise_construct_t&> (const struct type & __t)
{
  const struct piecewise_construct_t & D.54593;
  const struct piecewise_construct_t & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::forward<std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&> > (_ZSt7forwardISt5tupleIJONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEEOT_RNSt16remove_referenceIS9_E4typeE, funcdef_no=2664, decl_uid=51559, cgraph_uid=969, symbol_order=976)

std::forward<std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&> > (struct type & __t)
{
  struct tuple & D.54591;
  struct tuple & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::forward<std::tuple<> > (_ZSt7forwardISt5tupleIJEEEOT_RNSt16remove_referenceIS2_E4typeE, funcdef_no=2665, decl_uid=51567, cgraph_uid=970, symbol_order=977)

std::forward<std::tuple<> > (struct type & __t)
{
  struct tuple & D.54589;
  struct tuple & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::_Rb_tree_iterator (_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPSt18_Rb_tree_node_base, funcdef_no=2687, decl_uid=48419, cgraph_uid=992, symbol_order=999)

std::_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::_Rb_tree_iterator (struct _Rb_tree_iterator * const this, struct _Rb_tree_node_base * __x)
{
  <bb 2> :
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_assign <ssa_name, this_2(D)->_M_node, __x_4(D), NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::end (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE3endEv, funcdef_no=2652, decl_uid=45147, cgraph_uid=957, symbol_order=964)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::end (struct _Rb_tree * const this)
{
  struct iterator D.51923;
  struct iterator D.54559;
  struct _Rb_tree_node_base * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->_M_impl.D.44957._M_header, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.51923, _1>
  gimple_assign <var_decl, D.54559, D.51923, NULL, NULL>
  gimple_assign <constructor, D.51923, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <D.54559>

}



;; Function std::map<std::__cxx11::basic_string<char>, int>::end (_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE3endEv, funcdef_no=2572, decl_uid=45642, cgraph_uid=877, symbol_order=884)

std::map<std::__cxx11::basic_string<char>, int>::end (struct map * const this)
{
  struct iterator D.54557;
  struct _Rep_type * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->_M_t, NULL, NULL>
  gimple_call <end, D.54557, _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <D.54557>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_begin (_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_beginEv, funcdef_no=2691, decl_uid=44974, cgraph_uid=996, symbol_order=1003)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_begin (const struct _Rb_tree * const this)
{
  const struct _Rb_tree_node * D.54839;
  const struct _Rb_tree_node * _3;

  <bb 2> :
  gimple_assign <component_ref, _3, this_2(D)->_M_impl.D.44957._M_header._M_parent, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_end (_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv, funcdef_no=2692, decl_uid=44978, cgraph_uid=997, symbol_order=1004)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_end (const struct _Rb_tree * const this)
{
  const struct _Rb_tree_node_base * D.54837;
  const struct _Rb_tree_node_base * _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_impl.D.44957._M_header, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Rb_tree_const_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::_Rb_tree_const_iterator (_ZNSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPKSt18_Rb_tree_node_base, funcdef_no=2696, decl_uid=48484, cgraph_uid=1001, symbol_order=1008)

std::_Rb_tree_const_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::_Rb_tree_const_iterator (struct _Rb_tree_const_iterator * const this, const struct _Rb_tree_node_base * __x)
{
  <bb 2> :
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_assign <ssa_name, this_2(D)->_M_node, __x_4(D), NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::end (_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE3endEv, funcdef_no=2606, decl_uid=45149, cgraph_uid=911, symbol_order=918)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::end (const struct _Rb_tree * const this)
{
  struct const_iterator D.51635;
  struct const_iterator D.54823;
  const struct _Rb_tree_node_base * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->_M_impl.D.44957._M_header, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.51635, _1>
  gimple_assign <var_decl, D.54823, D.51635, NULL, NULL>
  gimple_assign <constructor, D.51635, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <D.54823>

}



;; Function std::__iterator_category<const char*> (_ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_, funcdef_no=2734, decl_uid=51908, cgraph_uid=1039, symbol_order=1046)

std::__iterator_category<const char*> (const char * const & D.51909)
{
  <bb 2> :

  <bb 3> :
gimple_label <<L0>>
  gimple_return <<retval>>

}



;; Function std::__distance<const char*> (_ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag, funcdef_no=2735, decl_uid=51911, cgraph_uid=1040, symbol_order=1047)

std::__distance<const char*> (const char * __first, const char * __last, struct random_access_iterator_tag D.51914)
{
  difference_type D.54812;
  difference_type _3;

  <bb 2> :
  gimple_assign <pointer_diff_expr, _3, __last_1(D), __first_2(D), NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::distance<const char*> (_ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_, funcdef_no=2649, decl_uid=51117, cgraph_uid=954, symbol_order=961)

std::distance<const char*> (const char * __first, const char * __last)
{
  struct random_access_iterator_tag D.54809;
  difference_type D.54808;
  const char * __first.33_1;
  difference_type _6;

  <bb 2> :
  gimple_call <__iterator_category, NULL, &__first>
  gimple_assign <parm_decl, __first.33_1, __first, NULL, NULL>
  gimple_call <__distance, _6, __first.33_1, __last_4(D), D.54809>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::__cxx11::basic_string<char>::_M_construct<const char*> (_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag, funcdef_no=2570, decl_uid=48364, cgraph_uid=875, symbol_order=882)

std::__cxx11::basic_string<char>::_M_construct<const char*> (struct basic_string * const this, const char * __beg, const char * __end, struct forward_iterator_tag D.48368)
{
  char * D.54801;
  char * D.54800;
  long int D.54799;
  size_type __dnew;
  bool iftmp.29;
  bool retval.28;
  bool _1;
  long int _2;
  long unsigned int _3;
  long unsigned int __dnew.30_4;
  char * _5;
  long unsigned int __dnew.31_6;
  char * _7;
  void * _8;
  long unsigned int __dnew.32_9;
  bool iftmp.29_10;
  bool iftmp.29_18;
  bool iftmp.29_19;
  bool retval.28_20;
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
  gimple_assign <integer_cst, iftmp.29_18, 1, NULL, NULL>
  goto <bb 6>; [INV]

  <bb 5> :
  gimple_assign <integer_cst, iftmp.29_19, 0, NULL, NULL>

  <bb 6> :
  # gimple_phi <iftmp.29_10, iftmp.29_18(4), iftmp.29_19(5)>
  gimple_assign <ssa_name, retval.28_20, iftmp.29_10, NULL, NULL>
  gimple_cond <ne_expr, retval.28_20, 0, NULL, NULL>
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
  gimple_assign <var_decl, __dnew.30_4, __dnew, NULL, NULL>
  gimple_cond <gt_expr, __dnew.30_4, 15, NULL, NULL>
    goto <bb 10>; [INV]
  else
    goto <bb 13>; [INV]

  <bb 10> :
  gimple_call <_M_create, _26, this_24(D), &__dnew, 0>

  <bb 11> :
  gimple_assign <ssa_name, _5, _26, NULL, NULL>
  gimple_call <_M_data, NULL, this_24(D), _5>

  <bb 12> :
  gimple_assign <var_decl, __dnew.31_6, __dnew, NULL, NULL>
  gimple_call <_M_capacity, NULL, this_24(D), __dnew.31_6>

  <bb 13> :
  gimple_call <_M_data, _30, this_24(D)>

  <bb 14> :
  gimple_assign <ssa_name, _7, _30, NULL, NULL>
  gimple_call <_S_copy_chars, NULL, _7, __beg_15(D), __end_17(D)>
  gimple_assign <var_decl, __dnew.32_9, __dnew, NULL, NULL>
  gimple_call <_M_set_length, NULL, this_24(D), __dnew.32_9>

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



;; Function std::__cxx11::basic_string<char>::basic_string (_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EPKcRKS3_, funcdef_no=2436, decl_uid=20465, cgraph_uid=741, symbol_order=748)

std::__cxx11::basic_string<char>::basic_string (struct basic_string * const this, const char * __s, const struct allocator & __a)
{
  char * D.54783;
  const char * __end;
  struct forward_iterator_tag D.54782;
  struct random_access_iterator_tag D.48377;
  const char * iftmp.27;
  struct _Alloc_hider * _1;
  char * _2;
  long unsigned int _3;
  struct random_access_iterator_tag * _4;
  struct _Alloc_hider * _5;
  const char * iftmp.27_6;
  char * _12;
  const char * iftmp.27_16;
  const char * iftmp.27_18;

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
  gimple_assign <pointer_plus_expr, iftmp.27_18, __s_15(D), _3, NULL>
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <integer_cst, iftmp.27_16, 1B, NULL, NULL>

  <bb 5> :
  # gimple_phi <iftmp.27_6, iftmp.27_18(3), iftmp.27_16(4)>
  gimple_assign <ssa_name, __end_19, iftmp.27_6, NULL, NULL>
  gimple_assign <addr_expr, _4, &D.48377, NULL, NULL>
  gimple_call <_M_construct, NULL, this_9(D), __s_15(D), __end_19, D.54782>

  <bb 6> :
  gimple_assign <constructor, D.48377, {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

  <bb 7> :
gimple_label <<L3>>
  gimple_assign <constructor, D.48377, {CLOBBER}, NULL, NULL>
  gimple_resx <2>

  <bb 8> :
gimple_label <<L4>>
  gimple_assign <addr_expr, _5, &this_9(D)->_M_dataplus, NULL, NULL>
  gimple_call <__dt_comp , NULL, _5>
  gimple_resx <1>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_end (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv, funcdef_no=2737, decl_uid=44976, cgraph_uid=1042, symbol_order=1049)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_end (struct _Rb_tree * const this)
{
  struct _Rb_tree_node_base * D.54528;
  struct _Rb_tree_node_base * _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_impl.D.44957._M_header, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::forward<std::__cxx11::basic_string<char>&&> (_ZSt7forwardIONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEOT_RNSt16remove_referenceIS7_E4typeE, funcdef_no=2746, decl_uid=51953, cgraph_uid=1051, symbol_order=1058)

std::forward<std::__cxx11::basic_string<char>&&> (struct type & __t)
{
  struct basic_string & D.54633;
  struct basic_string & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Head_base<0, std::__cxx11::basic_string<char>&&, false>::_Head_base<std::__cxx11::basic_string<char> > (_ZNSt10_Head_baseILm0EONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELb0EEC2IS5_EEOT_, funcdef_no=2748, decl_uid=51961, cgraph_uid=1053, symbol_order=1060)

std::_Head_base<0, std::__cxx11::basic_string<char>&&, false>::_Head_base<std::__cxx11::basic_string<char> > (struct _Head_base * const this, struct basic_string & __h)
{
  struct basic_string & _1;

  <bb 2> :
  gimple_assign <constructor, *this_3(D), {CLOBBER}, NULL, NULL>
  gimple_call <forward, _1, __h_5(D)>
  gimple_assign <ssa_name, this_3(D)->_M_head_impl, _1, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Tuple_impl<0, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>::_Tuple_impl<std::__cxx11::basic_string<char> > (_ZNSt11_Tuple_implILm0EJONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEC2IS5_EEOT_, funcdef_no=2743, decl_uid=51938, cgraph_uid=1048, symbol_order=1055)

std::_Tuple_impl<0, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>::_Tuple_impl<std::__cxx11::basic_string<char> > (struct _Tuple_impl * const this, struct basic_string & __head)
{
  struct _Head_base * _1;
  struct basic_string & _2;

  <bb 2> :
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_4(D)->D.49745, NULL, NULL>
  gimple_call <forward, _2, __head_6(D)>
  gimple_call <__ct_base , NULL, _1, _2>
  gimple_return <NULL>

}



;; Function std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > (_ZNSt5tupleIJONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEC2IJS5_ELb1ELb1EEEDpOT_, funcdef_no=2658, decl_uid=51356, cgraph_uid=963, symbol_order=970)

std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > (struct tuple * const this, struct basic_string & __elements#0)
{
  struct _Tuple_impl * _1;
  struct basic_string & _2;

  <bb 2> :
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_4(D)->D.50617, NULL, NULL>
  gimple_call <forward, _2, __elements#0_6(D)>
  gimple_call <__ct_base , NULL, _1, _2>
  gimple_return <NULL>

}



;; Function std::forward_as_tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > (_ZSt16forward_as_tupleIJNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESt5tupleIJDpOT_EES9_, funcdef_no=2577, decl_uid=49188, cgraph_uid=898, symbol_order=905)

std::forward_as_tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > (struct basic_string & __args#0)
{
  struct basic_string & _1;

  <bb 2> :
  gimple_call <forward, _1, __args#0_3(D)>
  gimple_call <__ct_comp , NULL, _5(D), _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5(D)>

}



;; Function std::_Rb_tree_const_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_const_cast (_ZNKSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE13_M_const_castEv, funcdef_no=2752, decl_uid=48452, cgraph_uid=1057, symbol_order=1064)

std::_Rb_tree_const_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_const_cast (const struct _Rb_tree_const_iterator * const this)
{
  struct iterator D.53836;
  struct iterator D.54717;
  const struct _Rb_tree_node_base * _1;

  <bb 2> :
  gimple_assign <component_ref, _1, this_3(D)->_M_node, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.53836, _1>
  gimple_assign <var_decl, D.54717, D.53836, NULL, NULL>
  gimple_assign <constructor, D.53836, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <D.54717>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::size (_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4sizeEv, funcdef_no=2753, decl_uid=45161, cgraph_uid=1058, symbol_order=1065)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::size (const struct _Rb_tree * const this)
{
  size_type D.54720;
  size_type _3;

  <bb 2> :
  gimple_assign <component_ref, _3, this_2(D)->_M_impl.D.44957._M_node_count, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_rightmost (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_rightmostEv, funcdef_no=2754, decl_uid=44968, cgraph_uid=1059, symbol_order=1066)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_rightmost (struct _Rb_tree * const this)
{
  struct _Rb_tree_node_base * & D.54726;
  struct _Rb_tree_node_base * & _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_impl.D.44957._M_header._M_right, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_leftmost (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_leftmostEv, funcdef_no=2763, decl_uid=44964, cgraph_uid=1068, symbol_order=1075)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_leftmost (struct _Rb_tree * const this)
{
  struct _Rb_tree_node_base * & D.54722;
  struct _Rb_tree_node_base * & _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_impl.D.44957._M_header._M_left, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::operator-- (_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEmmEv, funcdef_no=2767, decl_uid=48404, cgraph_uid=1072, symbol_order=1079)

std::_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::operator-- (struct _Rb_tree_iterator * const this)
{
  struct _Self & D.54724;
  struct _Rb_tree_node_base * _1;
  struct _Rb_tree_node_base * _2;
  struct _Self & _6;

  <bb 2> :
  gimple_assign <component_ref, _1, this_4(D)->_M_node, NULL, NULL>
  gimple_call <_Rb_tree_decrement, _2, _1>
  gimple_assign <ssa_name, this_4(D)->_M_node, _2, NULL, NULL>
  gimple_assign <ssa_name, _6, this_4(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::operator++ (_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEppEv, funcdef_no=2768, decl_uid=48399, cgraph_uid=1073, symbol_order=1080)

std::_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::operator++ (struct _Rb_tree_iterator * const this)
{
  struct _Self & D.54728;
  struct _Rb_tree_node_base * _1;
  struct _Rb_tree_node_base * _2;
  struct _Self & _6;

  <bb 2> :
  gimple_assign <component_ref, _1, this_4(D)->_M_node, NULL, NULL>
  gimple_call <_Rb_tree_increment, _2, _1>
  gimple_assign <ssa_name, this_4(D)->_M_node, _2, NULL, NULL>
  gimple_assign <ssa_name, _6, this_4(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >::operator() (_ZNKSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEclERKS8_, funcdef_no=2773, decl_uid=52553, cgraph_uid=1078, symbol_order=1085)

std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >::operator() (const struct _Select1st * const this, const struct pair & __x)
{
  const struct first_type & D.54551;
  const struct first_type & _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &__x_1(D)->first, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_S_left (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_S_leftEPKSt18_Rb_tree_node_base, funcdef_no=2774, decl_uid=44984, cgraph_uid=1079, symbol_order=1086)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_S_left (const struct _Rb_tree_node_base * __x)
{
  const struct _Rb_tree_node * D.54851;
  const struct _Rb_tree_node * _3;

  <bb 2> :
  gimple_assign <component_ref, _3, __x_2(D)->_M_left, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_S_right (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPKSt18_Rb_tree_node_base, funcdef_no=2775, decl_uid=44988, cgraph_uid=1080, symbol_order=1087)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_S_right (const struct _Rb_tree_node_base * __x)
{
  const struct _Rb_tree_node * D.54853;
  const struct _Rb_tree_node * _3;

  <bb 2> :
  gimple_assign <component_ref, _3, __x_2(D)->_M_right, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_get_Node_allocator (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv, funcdef_no=2802, decl_uid=44700, cgraph_uid=1107, symbol_order=1114)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_get_Node_allocator (struct _Rb_tree * const this)
{
  struct _Node_allocator & D.54601;
  struct _Node_allocator & _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_impl, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function __gnu_cxx::__aligned_membuf<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_addr (_ZN9__gnu_cxx16__aligned_membufISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE7_M_addrEv, funcdef_no=2805, decl_uid=51079, cgraph_uid=1110, symbol_order=1117)

__gnu_cxx::__aligned_membuf<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_addr (struct __aligned_membuf * const this)
{
  void * D.54623;
  void * _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_storage, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function __gnu_cxx::__aligned_membuf<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_ptr (_ZN9__gnu_cxx16__aligned_membufISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE6_M_ptrEv, funcdef_no=2739, decl_uid=51083, cgraph_uid=1044, symbol_order=1051)

__gnu_cxx::__aligned_membuf<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_ptr (struct __aligned_membuf * const this)
{
  struct pair * D.54621;
  struct pair * _4;

  <bb 2> :
  gimple_call <_M_addr, _4, this_2(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4>

}



;; Function std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_valptr (_ZNSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv, funcdef_no=2654, decl_uid=51100, cgraph_uid=959, symbol_order=966)

std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_valptr (struct _Rb_tree_node * const this)
{
  struct pair * D.54619;
  struct __aligned_membuf * _1;
  struct pair * _5;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->_M_storage, NULL, NULL>
  gimple_call <_M_ptr, _5, _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function std::_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::operator* (_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEdeEv, funcdef_no=2575, decl_uid=48395, cgraph_uid=880, symbol_order=887)

std::_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >::operator* (const struct _Rb_tree_iterator * const this)
{
  struct pair & D.54776;
  struct _Rb_tree_node_base * _1;
  struct pair & _5;

  <bb 2> :
  gimple_assign <component_ref, _1, this_3(D)->_M_node, NULL, NULL>
  gimple_call <_M_valptr, _5, _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function std::_Head_base<0, std::__cxx11::basic_string<char>&&, false>::_M_head (_ZNSt10_Head_baseILm0EONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELb0EE7_M_headERS7_, funcdef_no=2807, decl_uid=49303, cgraph_uid=1112, symbol_order=1119)

std::_Head_base<0, std::__cxx11::basic_string<char>&&, false>::_M_head (struct _Head_base & __b)
{
  struct basic_string & D.54631;
  struct basic_string & _3;

  <bb 2> :
  gimple_assign <component_ref, _3, __b_2(D)->_M_head_impl, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::_Tuple_impl<0, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>::_M_head (_ZNSt11_Tuple_implILm0EJONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE7_M_headERS7_, funcdef_no=2745, decl_uid=49408, cgraph_uid=1050, symbol_order=1057)

std::_Tuple_impl<0, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>::_M_head (struct _Tuple_impl & __t)
{
  struct basic_string & D.54629;
  struct _Head_base * _1;
  struct basic_string & _5;

  <bb 2> :
  gimple_assign <addr_expr, _1, &__t_2(D)->D.49745, NULL, NULL>
  gimple_call <_M_head, _5, _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function std::_Tuple_impl<0, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>::_Tuple_impl (_ZNSt11_Tuple_implILm0EJONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEC2EOS7_, funcdef_no=2661, decl_uid=49718, cgraph_uid=966, symbol_order=973)

std::_Tuple_impl<0, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>::_Tuple_impl (struct _Tuple_impl * const this, struct _Tuple_impl & __in)
{
  struct _Head_base * _1;
  struct basic_string & _2;
  struct basic_string & _3;

  <bb 2> :
  gimple_assign <constructor, *this_5(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_5(D)->D.49745, NULL, NULL>
  gimple_call <_M_head, _2, __in_7(D)>
  gimple_call <forward, _3, _2>
  gimple_call <__ct_base , NULL, _1, _3>
  gimple_return <NULL>

}



;; Function std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>::tuple (_ZNSt5tupleIJONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEC2EOS7_, funcdef_no=2592, decl_uid=50564, cgraph_uid=896, symbol_order=903)

std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>::tuple (struct tuple * const this, struct tuple & D.50566)
{
  struct _Tuple_impl * _1;
  struct _Tuple_impl * _2;

  <bb 2> :
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_4(D)->D.50617, NULL, NULL>
  gimple_assign <addr_expr, _2, &_6(D)->D.50617, NULL, NULL>
  gimple_call <__ct_base , NULL, _1, _2>
  gimple_return <NULL>

}



;; Function std::forward<std::_Rb_tree_node_base*&> (_ZSt7forwardIRPSt18_Rb_tree_node_baseEOT_RNSt16remove_referenceIS3_E4typeE, funcdef_no=2810, decl_uid=53846, cgraph_uid=1115, symbol_order=1122)

std::forward<std::_Rb_tree_node_base*&> (struct _Rb_tree_node_base * & __t)
{
  struct _Rb_tree_node_base * & D.54733;
  struct _Rb_tree_node_base * & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&> (_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEERKS1_OT_, funcdef_no=2756, decl_uid=52198, cgraph_uid=1061, symbol_order=1068)

std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&> (struct pair * const this, struct _Rb_tree_node_base * const & __x, struct _Rb_tree_node_base * & __y)
{
  struct _Rb_tree_node_base * _1;
  struct _Rb_tree_node_base * & _2;
  struct _Rb_tree_node_base * _3;

  <bb 2> :
  gimple_assign <constructor, *this_5(D), {CLOBBER}, NULL, NULL>
  gimple_assign <mem_ref, _1, *__x_7(D), NULL, NULL>
  gimple_assign <ssa_name, this_5(D)->first, _1, NULL, NULL>
  gimple_call <forward, _2, __y_9(D)>
  gimple_assign <mem_ref, _3, *_2, NULL, NULL>
  gimple_assign <ssa_name, this_5(D)->second, _3, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&, std::_Rb_tree_node_base*&> (_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Lb1EEEOT_OT0_, funcdef_no=2765, decl_uid=52381, cgraph_uid=1070, symbol_order=1077)

std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&, std::_Rb_tree_node_base*&> (struct pair * const this, struct _Rb_tree_node_base * & __x, struct _Rb_tree_node_base * & __y)
{
  struct _Rb_tree_node_base * & _1;
  struct _Rb_tree_node_base * _2;
  struct _Rb_tree_node_base * & _3;
  struct _Rb_tree_node_base * _4;

  <bb 2> :
  gimple_assign <constructor, *this_6(D), {CLOBBER}, NULL, NULL>
  gimple_call <forward, _1, __x_8(D)>
  gimple_assign <mem_ref, _2, *_1, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->first, _2, NULL, NULL>
  gimple_call <forward, _3, __y_11(D)>
  gimple_assign <mem_ref, _4, *_3, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->second, _4, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&> (_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_Lb1EEEOT_RKS1_, funcdef_no=2770, decl_uid=52327, cgraph_uid=1075, symbol_order=1082)

std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&> (struct pair * const this, struct _Rb_tree_node_base * & __x, struct _Rb_tree_node_base * const & __y)
{
  struct _Rb_tree_node_base * & _1;
  struct _Rb_tree_node_base * _2;
  struct _Rb_tree_node_base * _3;

  <bb 2> :
  gimple_assign <constructor, *this_5(D), {CLOBBER}, NULL, NULL>
  gimple_call <forward, _1, __x_7(D)>
  gimple_assign <mem_ref, _2, *_1, NULL, NULL>
  gimple_assign <ssa_name, this_5(D)->first, _2, NULL, NULL>
  gimple_assign <mem_ref, _3, *__y_10(D), NULL, NULL>
  gimple_assign <ssa_name, this_5(D)->second, _3, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::begin (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5beginEv, funcdef_no=2811, decl_uid=45143, cgraph_uid=1116, symbol_order=1123)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::begin (struct _Rb_tree * const this)
{
  struct iterator D.54152;
  struct iterator D.54760;
  struct _Rb_tree_node_base * _1;

  <bb 2> :
  gimple_assign <component_ref, _1, this_3(D)->_M_impl.D.44957._M_header._M_left, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.54152, _1>
  gimple_assign <var_decl, D.54760, D.54152, NULL, NULL>
  gimple_assign <constructor, D.54152, {CLOBBER}, NULL, NULL>

  <bb 3> :
gimple_label <<L1>>
  gimple_return <D.54760>

}



;; Function std::pair<const std::__cxx11::basic_string<char>, int>::~pair (_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiED2Ev, funcdef_no=2842, decl_uid=53583, cgraph_uid=1146, symbol_order=1153)

std::pair<const std::__cxx11::basic_string<char>, int>::~pair (struct pair * const this)
{
  const struct basic_string * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->first, NULL, NULL>
  gimple_call <__dt_comp , NULL, _1>
  gimple_assign <constructor, MEM[(struct  &)this_2(D)], {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::destroy<std::pair<const std::__cxx11::basic_string<char>, int> > (_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE7destroyISA_EEvPT_, funcdef_no=2840, decl_uid=54130, cgraph_uid=1148, symbol_order=1155)

__gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::destroy<std::pair<const std::__cxx11::basic_string<char>, int> > (struct new_allocator * const this, struct pair * __p)
{
  <bb 2> :
  gimple_call <__dt_comp , NULL, __p_2(D)>
  gimple_return <NULL>

}



;; Function std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > > >::destroy<std::pair<const std::__cxx11::basic_string<char>, int> > (_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE7destroyIS9_EEvRSB_PT_, funcdef_no=2803, decl_uid=53439, cgraph_uid=1108, symbol_order=1115)

std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > > >::destroy<std::pair<const std::__cxx11::basic_string<char>, int> > (struct allocator_type & __a, struct pair * __p)
{
  <bb 2> :
  gimple_call <destroy, NULL, __a_2(D), __p_3(D)>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_destroy_node (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS8_E, funcdef_no=2731, decl_uid=44722, cgraph_uid=1037, symbol_order=1044)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_destroy_node (struct _Rb_tree * const this, struct _Rb_tree_node * __p)
{
  struct pair * _1;
  struct _Node_allocator & _2;

  <bb 2> :
  gimple_call <_M_valptr, _1, __p_4(D)>
  gimple_call <_M_get_Node_allocator, _2, this_6(D)>
  gimple_call <destroy, NULL, _2, _1>
  gimple_assign <constructor, *__p_4(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::deallocate (_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE10deallocateEPSB_m, funcdef_no=2844, decl_uid=44564, cgraph_uid=1149, symbol_order=1156)

__gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::deallocate (struct new_allocator * const this, struct _Rb_tree_node * __p, size_type __t)
{
  long unsigned int _1;

  <bb 2> :
  gimple_assign <mult_expr, _1, __t_2(D), 72, NULL>
  gimple_call <operator delete, NULL, __p_4(D), _1>
  gimple_return <NULL>

}



;; Function std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > > >::deallocate (_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE10deallocateERSB_PSA_m, funcdef_no=2804, decl_uid=53378, cgraph_uid=1109, symbol_order=1116)

std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > > >::deallocate (struct allocator_type & __a, struct _Rb_tree_node * __p, size_type __n)
{
  <bb 2> :
  gimple_call <deallocate, NULL, __a_2(D), __p_3(D), __n_4(D)>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_put_node (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS8_E, funcdef_no=2733, decl_uid=44708, cgraph_uid=1038, symbol_order=1045)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_put_node (struct _Rb_tree * const this, struct _Rb_tree_node * __p)
{
  struct _Node_allocator & _1;

  <bb 2> :
  gimple_call <_M_get_Node_allocator, _1, this_3(D)>
  gimple_call <deallocate, NULL, _1, __p_5(D), 1>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_drop_node (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS8_E, funcdef_no=2647, decl_uid=44725, cgraph_uid=952, symbol_order=959)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_drop_node (struct _Rb_tree * const this, struct _Rb_tree_node * __p)
{
  <bb 2> :
  gimple_call <_M_destroy_node, NULL, this_2(D), __p_3(D)>
  gimple_call <_M_put_node, NULL, this_2(D), __p_3(D)>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_erase (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_eraseEPSt13_Rb_tree_nodeIS8_E, funcdef_no=2568, decl_uid=45075, cgraph_uid=873, symbol_order=880)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_erase (struct _Rb_tree * const this, struct _Rb_tree_node * __x)
{
  struct _Rb_tree_node * __y;
  struct _Rb_tree_node * _1;

  <bb 2> :
  # gimple_phi <__x_2, __x_4(D)(0), __x_12(3)>
  gimple_cond <eq_expr, __x_2, 0B, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 3>; [INV]

  <bb 3> :
  gimple_call <_S_right, _1, __x_2>
  gimple_call <_M_erase, NULL, this_7(D), _1>
  gimple_call <_S_left, __y_10, __x_2>
  gimple_call <_M_drop_node, NULL, this_7(D), __x_2>
  gimple_assign <ssa_name, __x_12, __y_10, NULL, NULL>
  goto <bb 2>; [INV]

  <bb 4> :
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::~_Rb_tree (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EED2Ev, funcdef_no=2433, decl_uid=45525, cgraph_uid=738, symbol_order=745)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::~_Rb_tree (struct _Rb_tree * const this)
{
  struct _Rb_tree_node * _1;
  struct _Rb_tree_impl * _2;

  <bb 2> :
  gimple_call <_M_begin, _1, this_4(D)>
  gimple_call <_M_erase, NULL, this_4(D), _1>
  gimple_assign <addr_expr, _2, &this_4(D)->_M_impl, NULL, NULL>
  gimple_call <__dt_comp , NULL, _2>
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::map<std::__cxx11::basic_string<char>, int>::~map (_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEED2Ev, funcdef_no=2180, decl_uid=45980, cgraph_uid=484, symbol_order=488)

std::map<std::__cxx11::basic_string<char>, int>::~map (struct map * const this)
{
  struct _Rep_type * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->_M_t, NULL, NULL>
  gimple_call <__dt_comp , NULL, _1>
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::forward<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> >*&> (_ZSt7forwardIRPSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEOT_RNSt16remove_referenceISD_E4typeE, funcdef_no=2847, decl_uid=54160, cgraph_uid=1152, symbol_order=1159)

std::forward<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> >*&> (struct _Rb_tree_node * & __t)
{
  struct _Rb_tree_node * & D.54763;
  struct _Rb_tree_node * & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> >*&, std::_Rb_tree_node_base*&> (_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRPSt13_Rb_tree_nodeIS_IKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEERS1_Lb1EEEOT_OT0_, funcdef_no=2813, decl_uid=53998, cgraph_uid=1118, symbol_order=1125)

std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> >*&, std::_Rb_tree_node_base*&> (struct pair * const this, struct _Rb_tree_node * & __x, struct _Rb_tree_node_base * & __y)
{
  struct _Rb_tree_node * & _1;
  struct _Rb_tree_node * _2;
  struct _Rb_tree_node_base * & _3;
  struct _Rb_tree_node_base * _4;

  <bb 2> :
  gimple_assign <constructor, *this_6(D), {CLOBBER}, NULL, NULL>
  gimple_call <forward, _1, __x_8(D)>
  gimple_assign <mem_ref, _2, *_1, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->first, _2, NULL, NULL>
  gimple_call <forward, _3, __y_11(D)>
  gimple_assign <mem_ref, _4, *_3, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->second, _4, NULL, NULL>
  gimple_return <NULL>

}



;; Function __gnu_cxx::__aligned_membuf<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_addr (_ZNK9__gnu_cxx16__aligned_membufISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE7_M_addrEv, funcdef_no=2848, decl_uid=51081, cgraph_uid=1153, symbol_order=1160)

__gnu_cxx::__aligned_membuf<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_addr (const struct __aligned_membuf * const this)
{
  const void * D.54549;
  const void * _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_storage, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function __gnu_cxx::__aligned_membuf<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_ptr (_ZNK9__gnu_cxx16__aligned_membufISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE6_M_ptrEv, funcdef_no=2815, decl_uid=51085, cgraph_uid=1120, symbol_order=1127)

__gnu_cxx::__aligned_membuf<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_ptr (const struct __aligned_membuf * const this)
{
  const struct pair * D.54547;
  const struct pair * _4;

  <bb 2> :
  gimple_call <_M_addr, _4, this_2(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4>

}



;; Function std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_valptr (_ZNKSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv, funcdef_no=2772, decl_uid=51102, cgraph_uid=1077, symbol_order=1084)

std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> >::_M_valptr (const struct _Rb_tree_node * const this)
{
  const struct pair * D.54545;
  const struct __aligned_membuf * _1;
  const struct pair * _5;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->_M_storage, NULL, NULL>
  gimple_call <_M_ptr, _5, _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_S_key (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt13_Rb_tree_nodeIS8_E, funcdef_no=2684, decl_uid=44980, cgraph_uid=989, symbol_order=996)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_S_key (const struct _Rb_tree_node * __x)
{
  struct _Select1st D.52625;
  const struct basic_string & D.54542;
  const struct pair * _1;
  const struct basic_string & _6;

  <bb 2> :
  gimple_call <_M_valptr, _1, __x_3(D)>
  gimple_call <operator(), _6, &D.52625, _1>

  <bb 3> :
  gimple_assign <constructor, D.52625, {CLOBBER}, NULL, NULL>

  <bb 4> :
gimple_label <<L1>>
  gimple_return <_6>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_lower_bound (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_lower_boundEPSt13_Rb_tree_nodeIS8_EPSt18_Rb_tree_node_baseRS7_, funcdef_no=2738, decl_uid=45078, cgraph_uid=1043, symbol_order=1050)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_lower_bound (struct _Rb_tree * const this, struct _Rb_tree_node * __x, struct _Rb_tree_node_base * __y, const struct basic_string & __k)
{
  const struct basic_string & D.54540;
  struct iterator D.53689;
  struct iterator D.54538;
  bool retval.3;
  struct less * _1;
  const struct basic_string & _2;
  bool _3;
  const struct basic_string & _15;
  bool retval.3_18;

  <bb 2> :
  # gimple_phi <__x_4, __x_10(D)(0), __x_5(6)>
  # gimple_phi <__y_6, __y_11(D)(0), __y_7(6)>
  gimple_cond <eq_expr, __x_4, 0B, NULL, NULL>
    goto <bb 7>; [INV]
  else
    goto <bb 3>; [INV]

  <bb 3> :
  gimple_assign <addr_expr, _1, &this_13(D)->_M_impl.D.44956._M_key_compare, NULL, NULL>
  gimple_call <_S_key, _15, __x_4>
  gimple_assign <ssa_name, _2, _15, NULL, NULL>
  gimple_call <operator(), _3, _1, _2, __k_16(D)>
  gimple_assign <bit_not_expr, retval.3_18, _3, NULL, NULL>
  gimple_cond <ne_expr, retval.3_18, 0, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <ssa_name, __y_21, __x_4, NULL, NULL>
  gimple_call <_S_left, __x_23, __x_4>
  goto <bb 6>; [INV]

  <bb 5> :
  gimple_call <_S_right, __x_20, __x_4>

  <bb 6> :
  # gimple_phi <__x_5, __x_23(4), __x_20(5)>
  # gimple_phi <__y_7, __y_21(4), __y_6(5)>
  goto <bb 2>; [INV]

  <bb 7> :
  gimple_call <__ct_comp , NULL, &D.53689, __y_6>
  gimple_assign <var_decl, D.54538, D.53689, NULL, NULL>
  gimple_assign <constructor, D.53689, {CLOBBER}, NULL, NULL>

  <bb 8> :
gimple_label <<L7>>
  gimple_return <D.54538>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::lower_bound (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11lower_boundERS7_, funcdef_no=2651, decl_uid=45304, cgraph_uid=956, symbol_order=963)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::lower_bound (struct _Rb_tree * const this, const struct key_type & __k)
{
  struct iterator D.54526;
  struct _Rb_tree_node_base * _1;
  struct _Rb_tree_node * _2;

  <bb 2> :
  gimple_call <_M_end, _1, this_4(D)>
  gimple_call <_M_begin, _2, this_4(D)>
  gimple_call <_M_lower_bound, D.54526, this_4(D), _2, _1, __k_7(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <D.54526>

}



;; Function std::map<std::__cxx11::basic_string<char>, int>::lower_bound (_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE11lower_boundERS9_, funcdef_no=2571, decl_uid=45784, cgraph_uid=876, symbol_order=883)

std::map<std::__cxx11::basic_string<char>, int>::lower_bound (struct map * const this, const struct key_type & __x)
{
  struct iterator D.54524;
  struct _Rep_type * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->_M_t, NULL, NULL>
  gimple_call <lower_bound, D.54524, _1, __x_4(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <D.54524>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_S_key (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base, funcdef_no=2694, decl_uid=44990, cgraph_uid=999, symbol_order=1006)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_S_key (const struct _Rb_tree_node_base * __x)
{
  const struct basic_string & D.54732;
  const struct basic_string & D.54730;
  const struct basic_string & _4;
  const struct basic_string & _5;

  <bb 2> :
  gimple_call <_S_key, _4, __x_2(D)>
  gimple_assign <ssa_name, _5, _4, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_get_insert_unique_pos (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE24_M_get_insert_unique_posERS7_, funcdef_no=2758, decl_uid=45008, cgraph_uid=1067, symbol_order=1074)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_get_insert_unique_pos (struct _Rb_tree * const this, const struct key_type & __k)
{
  const struct basic_string & D.54754;
  const struct basic_string & D.54752;
  struct iterator __j;
  bool __comp;
  struct _Rb_tree_node_base * __y;
  struct _Rb_tree_node * __x;
  struct _Rb_tree_node_base * const D.54004;
  struct _Res D.54005;
  struct _Res D.54003;
  bool retval.25;
  struct _Res D.54002;
  struct pair D.54746;
  struct iterator D.53861;
  bool retval.24;
  struct _Rb_tree_node * iftmp.20;
  struct _Rb_tree_node * _1;
  struct _Rb_tree_node_base * _2;
  struct _Rb_tree_node * __x.17_3;
  struct _Rb_tree_node * __x.18_4;
  struct less * _5;
  struct _Rb_tree_node * __x.19_6;
  const struct basic_string & _7;
  struct _Rb_tree_node * __x.21_8;
  struct _Rb_tree_node * __x.22_9;
  struct _Rb_tree_node_base * __y.23_10;
  struct less * _11;
  struct _Rb_tree_node_base * _12;
  const struct basic_string & _13;
  struct _Rb_tree_node * iftmp.20_15;
  const struct basic_string & _30;
  struct _Rb_tree_node * iftmp.20_35;
  struct _Rb_tree_node * iftmp.20_37;
  bool retval.24_42;
  const struct basic_string & _49;
  bool retval.25_51;

  <bb 2> :
  gimple_call <_M_begin, _1, this_22(D)>
  gimple_assign <ssa_name, __x, _1, NULL, NULL>
  gimple_call <_M_end, _2, this_22(D)>
  gimple_assign <ssa_name, __y, _2, NULL, NULL>
  gimple_assign <integer_cst, __comp_27, 1, NULL, NULL>

  <bb 3> :
  # gimple_phi <__comp_14, __comp_27(2), __comp_33(8)>
  gimple_assign <var_decl, __x.17_3, __x, NULL, NULL>
  gimple_cond <eq_expr, __x.17_3, 0B, NULL, NULL>
    goto <bb 9>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 4> :
  gimple_assign <var_decl, __x.18_4, __x, NULL, NULL>
  gimple_assign <ssa_name, __y, __x.18_4, NULL, NULL>
  gimple_assign <addr_expr, _5, &this_22(D)->_M_impl.D.44956._M_key_compare, NULL, NULL>
  gimple_assign <var_decl, __x.19_6, __x, NULL, NULL>
  gimple_call <_S_key, _30, __x.19_6>

  <bb 5> :
  gimple_assign <ssa_name, _7, _30, NULL, NULL>
  gimple_call <operator(), __comp_33, _5, __k_31(D), _7>
  gimple_cond <ne_expr, __comp_33, 0, NULL, NULL>
    goto <bb 6>; [INV]
  else
    goto <bb 7>; [INV]

  <bb 6> :
  gimple_assign <var_decl, __x.21_8, __x, NULL, NULL>
  gimple_call <_S_left, iftmp.20_37, __x.21_8>
  goto <bb 8>; [INV]

  <bb 7> :
  gimple_assign <var_decl, __x.22_9, __x, NULL, NULL>
  gimple_call <_S_right, iftmp.20_35, __x.22_9>

  <bb 8> :
  # gimple_phi <iftmp.20_15, iftmp.20_37(6), iftmp.20_35(7)>
  gimple_assign <ssa_name, __x, iftmp.20_15, NULL, NULL>
  goto <bb 3>; [INV]

  <bb 9> :
  gimple_assign <var_decl, __y.23_10, __y, NULL, NULL>
  gimple_call <__ct_comp , NULL, &__j, __y.23_10>
  gimple_cond <ne_expr, __comp_14, 0, NULL, NULL>
    goto <bb 10>; [INV]
  else
    goto <bb 13>; [INV]

  <bb 10> :
  gimple_call <begin, D.53861, this_22(D)>
  gimple_call <operator==, retval.24_42, &__j, &D.53861>
  gimple_assign <constructor, D.53861, {CLOBBER}, NULL, NULL>
  gimple_cond <ne_expr, retval.24_42, 0, NULL, NULL>
    goto <bb 11>; [INV]
  else
    goto <bb 12>; [INV]

  <bb 11> :
  gimple_call <__ct_comp , NULL, &D.54002, &__x, &__y>
  gimple_assign <var_decl, D.54746, D.54002, NULL, NULL>
  gimple_assign <constructor, D.54002, {CLOBBER}, NULL, NULL>
  goto <bb 17>; [INV]

  <bb 12> :
  gimple_call <operator--, NULL, &__j>

  <bb 13> :
  gimple_assign <addr_expr, _11, &this_22(D)->_M_impl.D.44956._M_key_compare, NULL, NULL>
  gimple_assign <component_ref, _12, __j._M_node, NULL, NULL>
  gimple_call <_S_key, _49, _12>

  <bb 14> :
  gimple_assign <ssa_name, _13, _49, NULL, NULL>
  gimple_call <operator(), retval.25_51, _11, _13, __k_31(D)>
  gimple_cond <ne_expr, retval.25_51, 0, NULL, NULL>
    goto <bb 15>; [INV]
  else
    goto <bb 16>; [INV]

  <bb 15> :
  gimple_call <__ct_comp , NULL, &D.54003, &__x, &__y>
  gimple_assign <var_decl, D.54746, D.54003, NULL, NULL>
  gimple_assign <constructor, D.54003, {CLOBBER}, NULL, NULL>
  goto <bb 17>; [INV]

  <bb 16> :
  gimple_assign <integer_cst, D.54004, 0B, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.54005, &__j._M_node, &D.54004>
  gimple_assign <var_decl, D.54746, D.54005, NULL, NULL>
  gimple_assign <constructor, D.54005, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.54004, {CLOBBER}, NULL, NULL>

  <bb 17> :
  gimple_assign <constructor, __x, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, __y, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, __j, {CLOBBER}, NULL, NULL>

  <bb 18> :
gimple_label <<L18>>
  gimple_return <D.54746>

  <bb 19> :
gimple_label <<L19>>
  gimple_assign <constructor, __x, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, __y, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, __j, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_get_insert_hint_unique_pos (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS8_ERS7_, funcdef_no=2667, decl_uid=45014, cgraph_uid=988, symbol_order=995)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_get_insert_hint_unique_pos (struct _Rb_tree * const this, struct const_iterator __position, const struct key_type & __k)
{
  const struct basic_string & D.54707;
  const struct basic_string & D.54704;
  const struct basic_string & D.54698;
  const struct basic_string & D.54696;
  const struct basic_string & D.54693;
  struct iterator __after;
  struct iterator __before;
  struct iterator __pos;
  struct _Rb_tree_node_base * const D.52464;
  struct _Res D.52465;
  struct _Res D.52396;
  struct _Rb_tree_node_base * const D.52394;
  struct _Res D.52395;
  bool retval.16;
  bool retval.15;
  struct _Rb_tree_node_base * const D.52392;
  struct _Res D.52393;
  bool retval.14;
  bool retval.13;
  struct _Res D.52388;
  struct _Rb_tree_node_base * const D.52386;
  struct _Res D.52387;
  bool retval.12;
  bool retval.11;
  struct _Res D.52385;
  bool retval.10;
  bool retval.9;
  struct _Rb_tree_node_base * const D.52279;
  struct _Res D.52280;
  struct pair D.54667;
  bool iftmp.8;
  bool retval.7;
  bool retval.6;
  struct _Rb_tree_node_base * _1;
  struct _Rb_tree_node_base * _2;
  long unsigned int _3;
  struct less * _4;
  struct _Rb_tree_node_base * & _5;
  struct _Rb_tree_node_base * _6;
  const struct basic_string & _7;
  bool _8;
  struct _Rb_tree_node_base * & _9;
  struct less * _10;
  struct _Rb_tree_node_base * _11;
  const struct basic_string & _12;
  struct _Rb_tree_node_base * _13;
  struct _Rb_tree_node_base * & _14;
  struct _Rb_tree_node_base * _15;
  struct _Rb_tree_node_base * & _16;
  struct _Rb_tree_node_base * & _17;
  struct less * _18;
  struct _Self & _19;
  struct _Rb_tree_node_base * _20;
  const struct basic_string & _21;
  struct _Rb_tree_node_base * _22;
  struct _Rb_tree_node * _23;
  struct less * _24;
  struct _Rb_tree_node_base * _25;
  const struct basic_string & _26;
  struct _Rb_tree_node_base * _27;
  struct _Rb_tree_node_base * & _28;
  struct _Rb_tree_node_base * _29;
  struct _Rb_tree_node_base * & _30;
  struct less * _31;
  struct _Self & _32;
  struct _Rb_tree_node_base * _33;
  const struct basic_string & _34;
  struct _Rb_tree_node_base * _35;
  struct _Rb_tree_node * _36;
  bool iftmp.8_37;
  bool retval.6_50;
  const struct basic_string & _52;
  bool retval.9_55;
  const struct basic_string & _57;
  bool retval.13_59;
  bool retval.14_67;
  const struct basic_string & _70;
  bool retval.15_72;
  bool retval.16_75;
  bool retval.10_94;
  const struct basic_string & _97;
  bool retval.11_99;
  bool retval.12_102;
  const struct basic_string & _121;
  bool iftmp.8_123;
  bool iftmp.8_124;
  bool retval.7_125;

  <bb 2> :
  gimple_call <_M_const_cast, __pos, &__position>
  gimple_assign <component_ref, _1, __pos._M_node, NULL, NULL>
  gimple_call <_M_end, _2, this_48(D)>
  gimple_assign <eq_expr, retval.6_50, _1, _2, NULL>
  gimple_cond <ne_expr, retval.6_50, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 12>; [INV]

  <bb 3> :
  gimple_call <size, _3, this_48(D)>
  gimple_cond <ne_expr, _3, 0, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 7>; [INV]

  <bb 4> :
  gimple_assign <addr_expr, _4, &this_48(D)->_M_impl.D.44956._M_key_compare, NULL, NULL>
  gimple_call <_M_rightmost, _5, this_48(D)>
  gimple_assign <mem_ref, _6, *_5, NULL, NULL>
  gimple_call <_S_key, _121, _6>

  <bb 5> :
  gimple_assign <ssa_name, _7, _121, NULL, NULL>
  gimple_call <operator(), _8, _4, _7, __k_53(D)>
  gimple_cond <ne_expr, _8, 0, NULL, NULL>
    goto <bb 6>; [INV]
  else
    goto <bb 7>; [INV]

  <bb 6> :
  gimple_assign <integer_cst, iftmp.8_123, 1, NULL, NULL>
  goto <bb 8>; [INV]

  <bb 7> :
  gimple_assign <integer_cst, iftmp.8_124, 0, NULL, NULL>

  <bb 8> :
  # gimple_phi <iftmp.8_37, iftmp.8_123(6), iftmp.8_124(7)>
  gimple_assign <ssa_name, retval.7_125, iftmp.8_37, NULL, NULL>
  gimple_cond <ne_expr, retval.7_125, 0, NULL, NULL>
    goto <bb 9>; [INV]
  else
    goto <bb 10>; [INV]

  <bb 9> :
  gimple_call <_M_rightmost, _9, this_48(D)>
  gimple_assign <integer_cst, D.52279, 0B, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.52280, &D.52279, _9>
  gimple_assign <var_decl, D.54667, D.52280, NULL, NULL>
  gimple_assign <constructor, D.52280, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.52279, {CLOBBER}, NULL, NULL>
  goto <bb 37>; [INV]

  <bb 10> :
  gimple_call <_M_get_insert_unique_pos, D.54667, this_48(D), __k_53(D)>

  <bb 11> :
  goto <bb 37>; [INV]

  <bb 12> :
  gimple_assign <addr_expr, _10, &this_48(D)->_M_impl.D.44956._M_key_compare, NULL, NULL>
  gimple_assign <component_ref, _11, __pos._M_node, NULL, NULL>
  gimple_call <_S_key, _52, _11>

  <bb 13> :
  gimple_assign <ssa_name, _12, _52, NULL, NULL>
  gimple_call <operator(), retval.9_55, _10, __k_53(D), _12>
  gimple_cond <ne_expr, retval.9_55, 0, NULL, NULL>
    goto <bb 14>; [INV]
  else
    goto <bb 24>; [INV]

  <bb 14> :
  gimple_assign <var_decl, __before, __pos, NULL, NULL>
  gimple_assign <component_ref, _13, __pos._M_node, NULL, NULL>
  gimple_call <_M_leftmost, _14, this_48(D)>
  gimple_assign <mem_ref, _15, *_14, NULL, NULL>
  gimple_assign <eq_expr, retval.10_94, _13, _15, NULL>
  gimple_cond <ne_expr, retval.10_94, 0, NULL, NULL>
    goto <bb 15>; [INV]
  else
    goto <bb 16>; [INV]

  <bb 15> :
  gimple_call <_M_leftmost, _16, this_48(D)>
  gimple_call <_M_leftmost, _17, this_48(D)>
  gimple_call <__ct_comp , NULL, &D.52385, _17, _16>
  gimple_assign <var_decl, D.54667, D.52385, NULL, NULL>
  gimple_assign <constructor, D.52385, {CLOBBER}, NULL, NULL>
  goto <bb 23>; [INV]

  <bb 16> :
  gimple_assign <addr_expr, _18, &this_48(D)->_M_impl.D.44956._M_key_compare, NULL, NULL>
  gimple_call <operator--, _19, &__before>
  gimple_assign <component_ref, _20, _19->_M_node, NULL, NULL>
  gimple_call <_S_key, _97, _20>

  <bb 17> :
  gimple_assign <ssa_name, _21, _97, NULL, NULL>
  gimple_call <operator(), retval.11_99, _18, _21, __k_53(D)>
  gimple_cond <ne_expr, retval.11_99, 0, NULL, NULL>
    goto <bb 18>; [INV]
  else
    goto <bb 21>; [INV]

  <bb 18> :
  gimple_assign <component_ref, _22, __before._M_node, NULL, NULL>
  gimple_call <_S_right, _23, _22>
  gimple_assign <eq_expr, retval.12_102, _23, 0B, NULL>
  gimple_cond <ne_expr, retval.12_102, 0, NULL, NULL>
    goto <bb 19>; [INV]
  else
    goto <bb 20>; [INV]

  <bb 19> :
  gimple_assign <integer_cst, D.52386, 0B, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.52387, &D.52386, &__before._M_node>
  gimple_assign <var_decl, D.54667, D.52387, NULL, NULL>
  gimple_assign <constructor, D.52387, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.52386, {CLOBBER}, NULL, NULL>
  goto <bb 23>; [INV]

  <bb 20> :
  gimple_call <__ct_comp , NULL, &D.52388, &__pos._M_node, &__pos._M_node>
  gimple_assign <var_decl, D.54667, D.52388, NULL, NULL>
  gimple_assign <constructor, D.52388, {CLOBBER}, NULL, NULL>
  goto <bb 23>; [INV]

  <bb 21> :
  gimple_call <_M_get_insert_unique_pos, D.54667, this_48(D), __k_53(D)>

  <bb 22> :

  <bb 23> :
  gimple_assign <constructor, __before, {CLOBBER}, NULL, NULL>
  goto <bb 37>; [INV]

  <bb 24> :
  gimple_assign <addr_expr, _24, &this_48(D)->_M_impl.D.44956._M_key_compare, NULL, NULL>
  gimple_assign <component_ref, _25, __pos._M_node, NULL, NULL>
  gimple_call <_S_key, _57, _25>

  <bb 25> :
  gimple_assign <ssa_name, _26, _57, NULL, NULL>
  gimple_call <operator(), retval.13_59, _24, _26, __k_53(D)>
  gimple_cond <ne_expr, retval.13_59, 0, NULL, NULL>
    goto <bb 26>; [INV]
  else
    goto <bb 36>; [INV]

  <bb 26> :
  gimple_assign <var_decl, __after, __pos, NULL, NULL>
  gimple_assign <component_ref, _27, __pos._M_node, NULL, NULL>
  gimple_call <_M_rightmost, _28, this_48(D)>
  gimple_assign <mem_ref, _29, *_28, NULL, NULL>
  gimple_assign <eq_expr, retval.14_67, _27, _29, NULL>
  gimple_cond <ne_expr, retval.14_67, 0, NULL, NULL>
    goto <bb 27>; [INV]
  else
    goto <bb 28>; [INV]

  <bb 27> :
  gimple_call <_M_rightmost, _30, this_48(D)>
  gimple_assign <integer_cst, D.52392, 0B, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.52393, &D.52392, _30>
  gimple_assign <var_decl, D.54667, D.52393, NULL, NULL>
  gimple_assign <constructor, D.52393, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.52392, {CLOBBER}, NULL, NULL>
  goto <bb 35>; [INV]

  <bb 28> :
  gimple_assign <addr_expr, _31, &this_48(D)->_M_impl.D.44956._M_key_compare, NULL, NULL>
  gimple_call <operator++, _32, &__after>
  gimple_assign <component_ref, _33, _32->_M_node, NULL, NULL>
  gimple_call <_S_key, _70, _33>

  <bb 29> :
  gimple_assign <ssa_name, _34, _70, NULL, NULL>
  gimple_call <operator(), retval.15_72, _31, __k_53(D), _34>
  gimple_cond <ne_expr, retval.15_72, 0, NULL, NULL>
    goto <bb 30>; [INV]
  else
    goto <bb 33>; [INV]

  <bb 30> :
  gimple_assign <component_ref, _35, __pos._M_node, NULL, NULL>
  gimple_call <_S_right, _36, _35>
  gimple_assign <eq_expr, retval.16_75, _36, 0B, NULL>
  gimple_cond <ne_expr, retval.16_75, 0, NULL, NULL>
    goto <bb 31>; [INV]
  else
    goto <bb 32>; [INV]

  <bb 31> :
  gimple_assign <integer_cst, D.52394, 0B, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.52395, &D.52394, &__pos._M_node>
  gimple_assign <var_decl, D.54667, D.52395, NULL, NULL>
  gimple_assign <constructor, D.52395, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.52394, {CLOBBER}, NULL, NULL>
  goto <bb 35>; [INV]

  <bb 32> :
  gimple_call <__ct_comp , NULL, &D.52396, &__after._M_node, &__after._M_node>
  gimple_assign <var_decl, D.54667, D.52396, NULL, NULL>
  gimple_assign <constructor, D.52396, {CLOBBER}, NULL, NULL>
  goto <bb 35>; [INV]

  <bb 33> :
  gimple_call <_M_get_insert_unique_pos, D.54667, this_48(D), __k_53(D)>

  <bb 34> :

  <bb 35> :
  gimple_assign <constructor, __after, {CLOBBER}, NULL, NULL>
  goto <bb 37>; [INV]

  <bb 36> :
  gimple_assign <integer_cst, D.52464, 0B, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.52465, &__pos._M_node, &D.52464>
  gimple_assign <var_decl, D.54667, D.52465, NULL, NULL>
  gimple_assign <constructor, D.52465, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.52464, {CLOBBER}, NULL, NULL>

  <bb 37> :
  gimple_assign <constructor, __pos, {CLOBBER}, NULL, NULL>

  <bb 38> :
gimple_label <<L40>>
  gimple_return <D.54667>

  <bb 39> :
gimple_label <<L41>>
  gimple_assign <constructor, __before, {CLOBBER}, NULL, NULL>
  gimple_resx <4>

  <bb 40> :
gimple_label <<L42>>
  gimple_assign <constructor, __after, {CLOBBER}, NULL, NULL>
  gimple_resx <10>

  <bb 41> :
gimple_label <<L43>>
  gimple_assign <constructor, __pos, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_insert_node (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_insert_nodeEPSt18_Rb_tree_node_baseSG_PSt13_Rb_tree_nodeIS8_E, funcdef_no=2685, decl_uid=45033, cgraph_uid=990, symbol_order=997)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_insert_node (struct _Rb_tree * const this, struct _Rb_tree_node_base * __x, struct _Rb_tree_node_base * __p, struct _Rb_tree_node * __z)
{
  const struct basic_string & D.54774;
  const struct basic_string & D.54773;
  bool __insert_left;
  struct iterator D.52643;
  struct iterator D.54771;
  bool iftmp.26;
  struct _Rb_tree_node_base * _1;
  struct less * _2;
  const struct basic_string & _3;
  const struct basic_string & _4;
  bool _5;
  struct _Rb_tree_node_base * _6;
  int _7;
  long unsigned int _8;
  long unsigned int _9;
  bool iftmp.26_10;
  const struct basic_string & _19;
  const struct basic_string & _22;
  bool iftmp.26_24;
  bool iftmp.26_25;

  <bb 2> :
  gimple_cond <ne_expr, __x_13(D), 0B, NULL, NULL>
    goto <bb 5>; [INV]
  else
    goto <bb 3>; [INV]

  <bb 3> :
  gimple_call <_M_end, _1, this_15(D)>
  gimple_cond <eq_expr, __p_17(D), _1, NULL, NULL>
    goto <bb 5>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 4> :
  gimple_assign <addr_expr, _2, &this_15(D)->_M_impl.D.44956._M_key_compare, NULL, NULL>
  gimple_call <_S_key, _19, __p_17(D)>
  gimple_assign <ssa_name, _3, _19, NULL, NULL>
  gimple_call <_S_key, _22, __z_20(D)>
  gimple_assign <ssa_name, _4, _22, NULL, NULL>
  gimple_call <operator(), _5, _2, _4, _3>
  gimple_cond <ne_expr, _5, 0, NULL, NULL>
    goto <bb 5>; [INV]
  else
    goto <bb 6>; [INV]

  <bb 5> :
  gimple_assign <integer_cst, iftmp.26_25, 1, NULL, NULL>
  goto <bb 7>; [INV]

  <bb 6> :
  gimple_assign <integer_cst, iftmp.26_24, 0, NULL, NULL>

  <bb 7> :
  # gimple_phi <iftmp.26_10, iftmp.26_25(5), iftmp.26_24(6)>
  gimple_assign <ssa_name, __insert_left_26, iftmp.26_10, NULL, NULL>
  gimple_assign <addr_expr, _6, &this_15(D)->_M_impl.D.44957._M_header, NULL, NULL>
  gimple_assign <nop_expr, _7, __insert_left_26, NULL, NULL>
  gimple_call <_Rb_tree_insert_and_rebalance, NULL, _7, __z_20(D), __p_17(D), _6>
  gimple_assign <component_ref, _8, this_15(D)->_M_impl.D.44957._M_node_count, NULL, NULL>
  gimple_assign <plus_expr, _9, _8, 1, NULL>
  gimple_assign <ssa_name, this_15(D)->_M_impl.D.44957._M_node_count, _9, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.52643, __z_20(D)>
  gimple_assign <var_decl, D.54771, D.52643, NULL, NULL>
  gimple_assign <constructor, D.52643, {CLOBBER}, NULL, NULL>

  <bb 8> :
gimple_label <<L6>>
  gimple_return <D.54771>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_lower_bound (_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_lower_boundEPKSt13_Rb_tree_nodeIS8_EPKSt18_Rb_tree_node_baseRS7_, funcdef_no=2693, decl_uid=45083, cgraph_uid=998, symbol_order=1005)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_lower_bound (const struct _Rb_tree * const this, const struct _Rb_tree_node * __x, const struct _Rb_tree_node_base * __y, const struct basic_string & __k)
{
  const struct basic_string & D.54849;
  struct const_iterator D.52652;
  struct const_iterator D.54847;
  bool retval.35;
  const struct less * _1;
  const struct basic_string & _2;
  bool _3;
  const struct basic_string & _15;
  bool retval.35_18;

  <bb 2> :
  # gimple_phi <__x_4, __x_10(D)(0), __x_5(6)>
  # gimple_phi <__y_6, __y_11(D)(0), __y_7(6)>
  gimple_cond <eq_expr, __x_4, 0B, NULL, NULL>
    goto <bb 7>; [INV]
  else
    goto <bb 3>; [INV]

  <bb 3> :
  gimple_assign <addr_expr, _1, &this_13(D)->_M_impl.D.44956._M_key_compare, NULL, NULL>
  gimple_call <_S_key, _15, __x_4>
  gimple_assign <ssa_name, _2, _15, NULL, NULL>
  gimple_call <operator(), _3, _1, _2, __k_16(D)>
  gimple_assign <bit_not_expr, retval.35_18, _3, NULL, NULL>
  gimple_cond <ne_expr, retval.35_18, 0, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <ssa_name, __y_21, __x_4, NULL, NULL>
  gimple_call <_S_left, __x_23, __x_4>
  goto <bb 6>; [INV]

  <bb 5> :
  gimple_call <_S_right, __x_20, __x_4>

  <bb 6> :
  # gimple_phi <__x_5, __x_23(4), __x_20(5)>
  # gimple_phi <__y_7, __y_21(4), __y_6(5)>
  goto <bb 2>; [INV]

  <bb 7> :
  gimple_call <__ct_comp , NULL, &D.52652, __y_6>
  gimple_assign <var_decl, D.54847, D.52652, NULL, NULL>
  gimple_assign <constructor, D.52652, {CLOBBER}, NULL, NULL>

  <bb 8> :
gimple_label <<L7>>
  gimple_return <D.54847>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::find (_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4findERS7_, funcdef_no=2605, decl_uid=45298, cgraph_uid=910, symbol_order=917)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::find (const struct _Rb_tree * const this, const struct basic_string & __k)
{
  const struct basic_string & D.54832;
  struct const_iterator __j;
  struct const_iterator D.51630;
  struct const_iterator D.54826;
  const struct _Rb_tree_node_base * _1;
  const struct _Rb_tree_node * _2;
  bool _3;
  const struct less * _4;
  const struct _Rb_tree_node_base * _5;
  const struct basic_string & _6;
  bool _7;
  const struct basic_string & _20;

  <bb 2> :
  gimple_call <_M_end, _1, this_12(D)>
  gimple_call <_M_begin, _2, this_12(D)>
  gimple_call <_M_lower_bound, __j, this_12(D), _2, _1, __k_15(D)>

  <bb 3> :
  gimple_call <end, D.51630, this_12(D)>
  gimple_call <operator==, _3, &__j, &D.51630>
  gimple_cond <ne_expr, _3, 0, NULL, NULL>
    goto <bb 6>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 4> :
  gimple_assign <addr_expr, _4, &this_12(D)->_M_impl.D.44956._M_key_compare, NULL, NULL>
  gimple_assign <component_ref, _5, __j._M_node, NULL, NULL>
  gimple_call <_S_key, _20, _5>

  <bb 5> :
  gimple_assign <ssa_name, _6, _20, NULL, NULL>
  gimple_call <operator(), _7, _4, __k_15(D), _6>
  gimple_cond <ne_expr, _7, 0, NULL, NULL>
    goto <bb 6>; [INV]
  else
    goto <bb 7>; [INV]

  <bb 6> :
  gimple_call <end, D.54826, this_12(D)>
  goto <bb 8>; [INV]

  <bb 7> :
  gimple_assign <var_decl, D.54826, __j, NULL, NULL>

  <bb 8> :

  <bb 9> :
  gimple_assign <constructor, D.51630, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, __j, {CLOBBER}, NULL, NULL>

  <bb 10> :
gimple_label <<L6>>
  gimple_return <D.54826>

  <bb 11> :
gimple_label <<L7>>
  gimple_assign <constructor, D.51630, {CLOBBER}, NULL, NULL>
  gimple_resx <2>

  <bb 12> :
gimple_label <<L8>>
  gimple_assign <constructor, __j, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function std::map<std::__cxx11::basic_string<char>, int>::count (_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE5countERS9_, funcdef_no=2449, decl_uid=45774, cgraph_uid=754, symbol_order=761)

std::map<std::__cxx11::basic_string<char>, int>::count (const struct map * const this, const struct key_type & __x)
{
  struct const_iterator D.50703;
  struct const_iterator D.50704;
  size_type iftmp.34;
  size_type D.54814;
  const struct _Rep_type * _1;
  const struct _Rep_type * _2;
  bool _3;
  size_type iftmp.34_4;
  size_type iftmp.34_11;
  size_type iftmp.34_12;
  size_type _13;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_5(D)->_M_t, NULL, NULL>
  gimple_call <end, D.50704, _1>
  gimple_assign <addr_expr, _2, &this_5(D)->_M_t, NULL, NULL>
  gimple_call <find, D.50703, _2, __x_8(D)>

  <bb 3> :
  gimple_call <operator==, _3, &D.50703, &D.50704>
  gimple_cond <ne_expr, _3, 0, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <integer_cst, iftmp.34_12, 0, NULL, NULL>
  goto <bb 6>; [INV]

  <bb 5> :
  gimple_assign <integer_cst, iftmp.34_11, 1, NULL, NULL>

  <bb 6> :
  # gimple_phi <iftmp.34_4, iftmp.34_12(4), iftmp.34_11(5)>
  gimple_assign <ssa_name, _13, iftmp.34_4, NULL, NULL>
  gimple_assign <constructor, D.50703, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.50704, {CLOBBER}, NULL, NULL>

  <bb 7> :
gimple_label <<L5>>
  gimple_return <_13>

  <bb 8> :
gimple_label <<L6>>
  gimple_assign <constructor, D.50704, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_max_size (_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE11_M_max_sizeEv, funcdef_no=2860, decl_uid=44587, cgraph_uid=1165, symbol_order=1172)

__gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_max_size (const struct new_allocator * const this)
{
  size_type D.54612;
  size_type _1;

  <bb 2> :
  gimple_assign <integer_cst, _1, 128102389400760775, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_1>

}



;; Function __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::allocate (_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8allocateEmPKv, funcdef_no=2845, decl_uid=44560, cgraph_uid=1150, symbol_order=1157)

__gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::allocate (struct new_allocator * const this, size_type __n, const void * D.44563)
{
  struct _Rb_tree_node * D.54611;
  struct _Rb_tree_node * D.54609;
  bool retval.4;
  long unsigned int _1;
  long unsigned int _2;
  bool retval.4_7;
  struct _Rb_tree_node * _9;
  struct _Rb_tree_node * _10;

  <bb 2> :
  gimple_call <_M_max_size, _1, this_4(D)>
  gimple_assign <gt_expr, retval.4_7, __n_6(D), _1, NULL>
  gimple_cond <ne_expr, retval.4_7, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <__throw_bad_alloc, NULL>

  <bb 4> :
  gimple_assign <mult_expr, _2, __n_6(D), 72, NULL>
  gimple_call <operator new, _9, _2>
  gimple_assign <ssa_name, _10, _9, NULL, NULL>

  <bb 5> :
gimple_label <<L2>>
  gimple_return <_10>

}



;; Function std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > > >::allocate (_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE8allocateERSB_m, funcdef_no=2808, decl_uid=53371, cgraph_uid=1113, symbol_order=1120)

std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > > >::allocate (struct allocator_type & __a, size_type __n)
{
  struct _Rb_tree_node * D.54605;
  struct _Rb_tree_node * D.54603;
  struct _Rb_tree_node * _5;
  struct _Rb_tree_node * _6;

  <bb 2> :
  gimple_call <allocate, _5, __a_2(D), __n_3(D), 0B>
  gimple_assign <ssa_name, _6, _5, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_get_node (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_get_nodeEv, funcdef_no=2750, decl_uid=44706, cgraph_uid=1055, symbol_order=1062)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_get_node (struct _Rb_tree * const this)
{
  struct _Rb_tree_node * D.54600;
  struct _Rb_tree_node * D.54598;
  struct _Node_allocator & _1;
  struct _Rb_tree_node * _6;
  struct _Rb_tree_node * _7;

  <bb 2> :
  gimple_call <_M_get_Node_allocator, _1, this_3(D)>
  gimple_call <allocate, _6, _1, 1>
  gimple_assign <ssa_name, _7, _6, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::__get_helper<0, std::__cxx11::basic_string<char>&&> (_ZSt12__get_helperILm0EONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEJEERT0_RSt11_Tuple_implIXT_EJS7_DpT1_EE, funcdef_no=2872, decl_uid=54437, cgraph_uid=1177, symbol_order=1184)

std::__get_helper<0, std::__cxx11::basic_string<char>&&> (struct _Tuple_impl & __t)
{
  struct basic_string & D.54639;
  struct basic_string & _4;

  <bb 2> :
  gimple_call <_M_head, _4, __t_2(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4>

}



;; Function std::get<0, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&> (_ZSt3getILm0EJONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERSB_, funcdef_no=2871, decl_uid=54427, cgraph_uid=1176, symbol_order=1183)

std::get<0, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&> (struct tuple & __t)
{
  struct basic_string & D.54637;
  struct _Tuple_impl * _1;
  struct basic_string & _5;

  <bb 2> :
  gimple_assign <addr_expr, _1, &__t_2(D)->D.50617, NULL, NULL>
  gimple_call <__get_helper, _5, _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function std::pair<const std::__cxx11::basic_string<char>, int>::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&, 0> (_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEC2IJOS5_EJLm0EEJEJEEERSt5tupleIJDpT_EERSA_IJDpT1_EESt12_Index_tupleIJXspT0_EEESJ_IJXspT2_EEE, funcdef_no=2869, decl_uid=54396, cgraph_uid=1174, symbol_order=1181)

std::pair<const std::__cxx11::basic_string<char>, int>::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&, 0> (struct pair * const this, struct tuple & __tuple1, struct tuple & __tuple2, struct _Index_tuple D.54400, struct _Index_tuple D.54401)
{
  const struct basic_string * _1;
  struct basic_string & _2;
  struct basic_string & _3;
  const struct basic_string * _4;

  <bb 2> :
  gimple_assign <constructor, MEM[(struct  &)this_6(D)], {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_6(D)->first, NULL, NULL>
  gimple_call <get, _2, __tuple1_8(D)>
  gimple_call <forward, _3, _2>
  gimple_call <__ct_comp , NULL, _1, _3>
  gimple_assign <integer_cst, this_6(D)->second, 0, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::pair<const std::__cxx11::basic_string<char>, int>::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&> (_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEC2IJOS5_EJEEESt21piecewise_construct_tSt5tupleIJDpT_EESB_IJDpT0_EE, funcdef_no=2862, decl_uid=53803, cgraph_uid=1167, symbol_order=1174)

std::pair<const std::__cxx11::basic_string<char>, int>::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&> (struct pair * const this, struct piecewise_construct_t D.53805, struct tuple & __first, struct tuple __second)
{
  struct _Index_tuple D.54636;
  struct _Index_tuple D.54635;

  <bb 2> :
  gimple_assign <constructor, MEM[(struct  &)this_2(D)], {CLOBBER}, NULL, NULL>
  gimple_call <__ct_comp , NULL, this_2(D), __first_4(D), &__second, D.54636, D.54635>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::construct<std::pair<const std::__cxx11::basic_string<char>, int>, const std::piecewise_construct_t&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>, std::tuple<> > (_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE9constructISA_JRKSt21piecewise_construct_tSt5tupleIJOS8_EESH_IJEEEEEvPT_DpOT0_, funcdef_no=2846, decl_uid=54142, cgraph_uid=1151, symbol_order=1158)

__gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >::construct<std::pair<const std::__cxx11::basic_string<char>, int>, const std::piecewise_construct_t&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>, std::tuple<> > (struct new_allocator * const this, struct pair * __p, const struct piecewise_construct_t & __args#0, struct tuple & __args#1, struct tuple & __args#2)
{
  void * D.54259;
  void * D.54258;
  struct tuple D.54265;
  struct tuple D.54261;
  struct tuple & D.54264;
  const struct piecewise_construct_t D.54263;
  const struct piecewise_construct_t & _1;
  struct tuple & _2;
  struct tuple & _3;
  struct tuple & _10;
  void * _14;
  void * _16;

  <bb 2> :
  gimple_call <forward, _1, __args#0_5(D)>
  gimple_call <forward, _2, __args#1_7(D)>
  gimple_call <__ct_comp , NULL, &D.54261, _2>
  gimple_assign <addr_expr, _10, &D.54261, NULL, NULL>
  gimple_call <forward, _3, __args#2_11(D)>
  gimple_assign <ssa_name, _14, __p_13(D), NULL, NULL>
  gimple_call <operator new, _16, 40, _14>
  gimple_call <__ct_comp , NULL, _16, D.54263, _10, D.54265>

  <bb 3> :
  gimple_assign <constructor, D.54265, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.54261, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.54263, {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

  <bb 4> :
gimple_label <<L0>>
  gimple_call <operator delete, NULL, _16, _14>
  gimple_resx <4>

  <bb 5> :
gimple_label <<L1>>
  gimple_assign <constructor, D.54265, {CLOBBER}, NULL, NULL>
  gimple_resx <3>

  <bb 6> :
gimple_label <<L2>>
  gimple_assign <constructor, D.54261, {CLOBBER}, NULL, NULL>
  gimple_resx <2>

  <bb 7> :
gimple_label <<L3>>
  gimple_assign <constructor, D.54263, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > > >::construct<std::pair<const std::__cxx11::basic_string<char>, int>, const std::piecewise_construct_t&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>, std::tuple<> > (_ZNSt16allocator_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE9constructIS9_JRKSt21piecewise_construct_tSt5tupleIJOS7_EESH_IJEEEEEvRSB_PT_DpOT0_, funcdef_no=2809, decl_uid=53785, cgraph_uid=1114, symbol_order=1121)

std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > > >::construct<std::pair<const std::__cxx11::basic_string<char>, int>, const std::piecewise_construct_t&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>, std::tuple<> > (struct allocator_type & __a, struct pair * __p, const struct piecewise_construct_t & __args#0, struct tuple & __args#1, struct tuple & __args#2)
{
  struct tuple & _1;
  struct tuple & _2;
  const struct piecewise_construct_t & _3;

  <bb 2> :
  gimple_call <forward, _1, __args#2_5(D)>
  gimple_call <forward, _2, __args#1_7(D)>
  gimple_call <forward, _3, __args#0_9(D)>
  gimple_call <construct, NULL, __a_11(D), __p_12(D), _3, _2, _1>
  gimple_return <NULL>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_construct_node<const std::piecewise_construct_t&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>, std::tuple<> > (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_construct_nodeIJRKSt21piecewise_construct_tSt5tupleIJOS5_EESJ_IJEEEEEvPSt13_Rb_tree_nodeIS8_EDpOT_, funcdef_no=2751, decl_uid=51980, cgraph_uid=1056, symbol_order=1063)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_construct_node<const std::piecewise_construct_t&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>, std::tuple<> > (struct _Rb_tree * const this, struct _Rb_tree_node * __node, const struct piecewise_construct_t & __args#0, struct tuple & __args#1, struct tuple & __args#2)
{
  void * D.53741;
  void * D.53742;
  struct tuple & _1;
  struct tuple & _2;
  const struct piecewise_construct_t & _3;
  struct pair * _4;
  struct _Node_allocator & _5;
  void * _6;
  void * _8;
  void * _11;

  <bb 2> :
  gimple_assign <ssa_name, _8, __node_7(D), NULL, NULL>
  gimple_call <operator new, _11, 72, _8>
  gimple_call <forward, _1, __args#2_12(D)>
  gimple_call <forward, _2, __args#1_14(D)>
  gimple_call <forward, _3, __args#0_16(D)>
  gimple_call <_M_valptr, _4, __node_7(D)>
  gimple_call <_M_get_Node_allocator, _5, this_19(D)>
  gimple_call <construct, NULL, _5, _4, _3, _2, _1>

  <bb 3> :
  gimple_return <NULL>

  <bb 4> :
gimple_label <<L0>>
  gimple_eh_dispatch <1>

  <bb 5> :
gimple_label <<L1>>
  gimple_call <__builtin_eh_pointer, _6, 1>
  gimple_call <__cxa_begin_catch, NULL, _6>
  gimple_assign <constructor, *__node_7(D), {CLOBBER}, NULL, NULL>
  gimple_call <_M_put_node, NULL, this_19(D), __node_7(D)>
  gimple_call <__cxa_rethrow, NULL>

  <bb 6> :
gimple_label <<L2>>
  gimple_call <__cxa_end_catch, NULL>
  gimple_resx <3>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_create_node<const std::piecewise_construct_t&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>, std::tuple<> > (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_create_nodeIJRKSt21piecewise_construct_tSt5tupleIJOS5_EESJ_IJEEEEEPSt13_Rb_tree_nodeIS8_EDpOT_, funcdef_no=2666, decl_uid=51569, cgraph_uid=971, symbol_order=978)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_create_node<const std::piecewise_construct_t&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>, std::tuple<> > (struct _Rb_tree * const this, const struct piecewise_construct_t & __args#0, struct tuple & __args#1, struct tuple & __args#2)
{
  struct _Rb_tree_node * D.54597;
  struct _Rb_tree_node * __tmp;
  struct _Rb_tree_node * D.54595;
  struct tuple & _1;
  struct tuple & _2;
  const struct piecewise_construct_t & _3;
  struct _Rb_tree_node * _7;
  struct _Rb_tree_node * _16;

  <bb 2> :
  gimple_call <_M_get_node, _7, this_5(D)>
  gimple_assign <ssa_name, __tmp_8, _7, NULL, NULL>
  gimple_call <forward, _1, __args#2_9(D)>
  gimple_call <forward, _2, __args#1_11(D)>
  gimple_call <forward, _3, __args#0_13(D)>
  gimple_call <_M_construct_node, NULL, this_5(D), __tmp_8, _3, _2, _1>
  gimple_assign <ssa_name, _16, __tmp_8, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_16>

}



;; Function std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_emplace_hint_unique<const std::piecewise_construct_t&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>, std::tuple<> > (_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS5_EESJ_IJEEEEESt17_Rb_tree_iteratorIS8_ESt23_Rb_tree_const_iteratorIS8_EDpOT_, funcdef_no=2597, decl_uid=50676, cgraph_uid=906, symbol_order=913)

std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_M_emplace_hint_unique<const std::piecewise_construct_t&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&>, std::tuple<> > (struct _Rb_tree * const this, struct const_iterator __pos, const struct piecewise_construct_t & __args#0, struct tuple & __args#1, struct tuple & __args#2)
{
  const struct basic_string & D.54582;
  struct _Rb_tree_node * D.54581;
  struct pair __res;
  struct _Rb_tree_node * __z;
  struct iterator D.51621;
  struct iterator D.54579;
  struct tuple & _1;
  struct tuple & _2;
  const struct piecewise_construct_t & _3;
  const struct basic_string & _4;
  struct _Rb_tree_node_base * _5;
  struct _Rb_tree_node_base * _6;
  struct _Rb_tree_node_base * _7;
  struct _Rb_tree_node_base * _8;
  void * _9;
  struct _Rb_tree_node * _21;
  const struct basic_string & _24;

  <bb 2> :
  gimple_call <forward, _1, __args#2_13(D)>
  gimple_call <forward, _2, __args#1_15(D)>
  gimple_call <forward, _3, __args#0_17(D)>
  gimple_call <_M_create_node, _21, this_19(D), _3, _2, _1>
  gimple_assign <ssa_name, __z_22, _21, NULL, NULL>
  gimple_call <_S_key, _24, __z_22>

  <bb 3> :
  gimple_assign <ssa_name, _4, _24, NULL, NULL>
  gimple_call <_M_get_insert_hint_unique_pos, __res, this_19(D), __pos, _4>

  <bb 4> :
  gimple_assign <component_ref, _5, __res.second, NULL, NULL>
  gimple_cond <ne_expr, _5, 0B, NULL, NULL>
    goto <bb 5>; [INV]
  else
    goto <bb 7>; [INV]

  <bb 5> :
  gimple_assign <component_ref, _6, __res.second, NULL, NULL>
  gimple_assign <component_ref, _7, __res.first, NULL, NULL>
  gimple_call <_M_insert_node, D.54579, this_19(D), _7, _6, __z_22>

  <bb 6> :
  goto <bb 8>; [INV]

  <bb 7> :
  gimple_call <_M_drop_node, NULL, this_19(D), __z_22>
  gimple_assign <component_ref, _8, __res.first, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.51621, _8>
  gimple_assign <var_decl, D.54579, D.51621, NULL, NULL>
  gimple_assign <constructor, D.51621, {CLOBBER}, NULL, NULL>

  <bb 8> :
  gimple_assign <constructor, __res, {CLOBBER}, NULL, NULL>

  <bb 9> :
gimple_label <<L4>>
  gimple_return <D.54579>

  <bb 10> :
gimple_label <<L5>>
  gimple_assign <constructor, __res, {CLOBBER}, NULL, NULL>
  gimple_resx <2>

  <bb 11> :
gimple_label <<L6>>
  gimple_eh_dispatch <1>

  <bb 12> :
gimple_label <<L7>>
  gimple_call <__builtin_eh_pointer, _9, 1>
  gimple_call <__cxa_begin_catch, NULL, _9>
  gimple_call <_M_drop_node, NULL, this_19(D), __z_22>
  gimple_call <__cxa_rethrow, NULL>

  <bb 13> :
gimple_label <<L8>>
  gimple_call <__cxa_end_catch, NULL>
  gimple_resx <5>

}



;; Function std::map<std::__cxx11::basic_string<char>, int>::operator[] (_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEixEOS5_, funcdef_no=2438, decl_uid=45671, cgraph_uid=750, symbol_order=757)

std::map<std::__cxx11::basic_string<char>, int>::operator[] (struct map * const this, struct key_type & __k)
{
  struct iterator __i;
  mapped_type & D.54515;
  struct const_iterator D.50682;
  struct tuple D.50619;
  struct tuple D.50657;
  struct key_compare D.49186;
  struct iterator D.48524;
  bool iftmp.2;
  bool retval.1;
  bool _1;
  struct pair & _2;
  const struct basic_string * _3;
  bool _4;
  struct _Rep_type * _5;
  struct type & _6;
  struct pair & _7;
  bool iftmp.2_8;
  bool iftmp.2_22;
  bool iftmp.2_25;
  bool retval.1_26;
  mapped_type & _40;

  <bb 2> :
  gimple_call <lower_bound, __i, this_14(D), __k_15(D)>

  <bb 3> :
  gimple_call <end, D.48524, this_14(D)>
  gimple_call <operator==, _1, &__i, &D.48524>
  gimple_cond <ne_expr, _1, 0, NULL, NULL>
    goto <bb 6>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 4> :
  gimple_call <key_comp, NULL, this_14(D)>

  <bb 5> :
  gimple_call <operator*, _2, &__i>
  gimple_assign <addr_expr, _3, &_2->first, NULL, NULL>
  gimple_call <operator(), _4, &D.49186, __k_15(D), _3>
  gimple_cond <ne_expr, _4, 0, NULL, NULL>
    goto <bb 6>; [INV]
  else
    goto <bb 7>; [INV]

  <bb 6> :
  gimple_assign <integer_cst, iftmp.2_25, 1, NULL, NULL>
  goto <bb 8>; [INV]

  <bb 7> :
  gimple_assign <integer_cst, iftmp.2_22, 0, NULL, NULL>

  <bb 8> :
  # gimple_phi <iftmp.2_8, iftmp.2_25(6), iftmp.2_22(7)>
  gimple_assign <ssa_name, retval.1_26, iftmp.2_8, NULL, NULL>
  gimple_assign <constructor, D.49186, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.48524, {CLOBBER}, NULL, NULL>
  gimple_cond <ne_expr, retval.1_26, 0, NULL, NULL>
    goto <bb 9>; [INV]
  else
    goto <bb 11>; [INV]

  <bb 9> :
  gimple_assign <addr_expr, _5, &this_14(D)->_M_t, NULL, NULL>
  gimple_call <move, _6, __k_15(D)>
  gimple_call <forward_as_tuple, D.50619, _6> [return slot optimization]
  gimple_call <__ct_comp , NULL, &D.50682, &__i>
  gimple_call <_M_emplace_hint_unique, __i, _5, D.50682, &piecewise_construct, &D.50619, &D.50657>

  <bb 10> :
  gimple_assign <constructor, D.50682, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.50619, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.50657, {CLOBBER}, NULL, NULL>

  <bb 11> :
  gimple_call <operator*, _7, &__i>
  gimple_assign <addr_expr, _40, &_7->second, NULL, NULL>
  gimple_assign <constructor, __i, {CLOBBER}, NULL, NULL>

  <bb 12> :
gimple_label <<L8>>
  gimple_return <_40>

  <bb 13> :
gimple_label <<L9>>
  gimple_assign <constructor, D.49186, {CLOBBER}, NULL, NULL>
  gimple_resx <3>

  <bb 14> :
gimple_label <<L10>>
  gimple_assign <constructor, D.48524, {CLOBBER}, NULL, NULL>
  gimple_resx <2>

  <bb 15> :
gimple_label <<L11>>
  gimple_assign <constructor, D.50682, {CLOBBER}, NULL, NULL>
  gimple_resx <8>

  <bb 16> :
gimple_label <<L12>>
  gimple_assign <constructor, D.50619, {CLOBBER}, NULL, NULL>
  gimple_resx <7>

  <bb 17> :
gimple_label <<L13>>
  gimple_assign <constructor, D.50657, {CLOBBER}, NULL, NULL>
  gimple_resx <6>

  <bb 18> :
gimple_label <<L14>>
  gimple_assign <constructor, __i, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function main (main, funcdef_no=2166, decl_uid=44243, cgraph_uid=486, symbol_order=490)

main ()
{
  struct basic_ostream & D.54500;
  struct basic_ostream & D.54499;
  long unsigned int D.54494;
  struct basic_ostream & D.54489;
  mapped_type & D.54488;
  struct basic_ostream & D.54487;
  struct basic_ostream & D.54482;
  mapped_type & D.54481;
  struct basic_ostream & D.54480;
  struct basic_ostream & D.54475;
  mapped_type & D.54474;
  struct basic_ostream & D.54473;
  mapped_type & D.54468;
  mapped_type & D.54463;
  mapped_type & D.54458;
  struct map map;
  int D.54456;
  struct allocator D.46400;
  const struct key_type D.46401;
  bool retval.0;
  struct allocator D.46392;
  struct key_type D.46393;
  struct allocator D.46382;
  struct key_type D.46383;
  struct allocator D.46372;
  struct key_type D.46373;
  struct allocator D.46330;
  struct key_type D.46331;
  struct allocator D.46328;
  struct key_type D.46329;
  struct allocator D.46326;
  struct key_type D.46327;
  mapped_type & _1;
  mapped_type & _2;
  mapped_type & _3;
  struct basic_ostream & _4;
  mapped_type & _5;
  int _6;
  struct basic_ostream & _7;
  struct basic_ostream & _8;
  mapped_type & _9;
  int _10;
  struct basic_ostream & _11;
  struct basic_ostream & _12;
  mapped_type & _13;
  int _14;
  struct basic_ostream & _15;
  long unsigned int _16;
  struct basic_ostream & _17;
  struct basic_ostream & _18;
  mapped_type & _36;
  mapped_type & _45;
  mapped_type & _54;
  struct basic_ostream & _61;
  mapped_type & _65;
  struct basic_ostream & _67;
  struct basic_ostream & _74;
  mapped_type & _78;
  struct basic_ostream & _80;
  struct basic_ostream & _87;
  mapped_type & _91;
  struct basic_ostream & _93;
  long unsigned int _102;
  bool retval.0_103;
  struct basic_ostream & _109;
  struct basic_ostream & _112;
  int _114;

  <bb 2> :
  gimple_call <__ct_comp , NULL, &map>
  gimple_call <__ct_comp , NULL, &D.46326>
  gimple_call <__ct_comp , NULL, &D.46327, "one", &D.46326>

  <bb 3> :
  gimple_call <operator[], _36, &map, &D.46327>

  <bb 4> :
  gimple_assign <ssa_name, _1, _36, NULL, NULL>
  gimple_assign <integer_cst, *_1, 1, NULL, NULL>
  gimple_call <__dt_comp , NULL, &D.46327>
  gimple_assign <constructor, D.46327, {CLOBBER}, NULL, NULL>
  gimple_call <__dt_comp , NULL, &D.46326>
  gimple_assign <constructor, D.46326, {CLOBBER}, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.46328>
  gimple_call <__ct_comp , NULL, &D.46329, "two", &D.46328>

  <bb 5> :
  gimple_call <operator[], _45, &map, &D.46329>

  <bb 6> :
  gimple_assign <ssa_name, _2, _45, NULL, NULL>
  gimple_assign <integer_cst, *_2, 2, NULL, NULL>
  gimple_call <__dt_comp , NULL, &D.46329>
  gimple_assign <constructor, D.46329, {CLOBBER}, NULL, NULL>
  gimple_call <__dt_comp , NULL, &D.46328>
  gimple_assign <constructor, D.46328, {CLOBBER}, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.46330>
  gimple_call <__ct_comp , NULL, &D.46331, "three", &D.46330>

  <bb 7> :
  gimple_call <operator[], _54, &map, &D.46331>

  <bb 8> :
  gimple_assign <ssa_name, _3, _54, NULL, NULL>
  gimple_assign <integer_cst, *_3, 3, NULL, NULL>
  gimple_call <__dt_comp , NULL, &D.46331>
  gimple_assign <constructor, D.46331, {CLOBBER}, NULL, NULL>
  gimple_call <__dt_comp , NULL, &D.46330>
  gimple_assign <constructor, D.46330, {CLOBBER}, NULL, NULL>
  gimple_call <operator<<, _61, &cout, "Key: one, Value: ">

  <bb 9> :
  gimple_assign <ssa_name, _4, _61, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.46372>
  gimple_call <__ct_comp , NULL, &D.46373, "one", &D.46372>

  <bb 10> :
  gimple_call <operator[], _65, &map, &D.46373>

  <bb 11> :
  gimple_assign <ssa_name, _5, _65, NULL, NULL>
  gimple_assign <mem_ref, _6, *_5, NULL, NULL>
  gimple_call <operator<<, _67, _4, _6>

  <bb 12> :
  gimple_assign <ssa_name, _7, _67, NULL, NULL>
  gimple_call <operator<<, NULL, _7, endl>

  <bb 13> :
  gimple_call <__dt_comp , NULL, &D.46373>
  gimple_assign <constructor, D.46373, {CLOBBER}, NULL, NULL>
  gimple_call <__dt_comp , NULL, &D.46372>
  gimple_assign <constructor, D.46372, {CLOBBER}, NULL, NULL>
  gimple_call <operator<<, _74, &cout, "Key: two, Value: ">

  <bb 14> :
  gimple_assign <ssa_name, _8, _74, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.46382>
  gimple_call <__ct_comp , NULL, &D.46383, "two", &D.46382>

  <bb 15> :
  gimple_call <operator[], _78, &map, &D.46383>

  <bb 16> :
  gimple_assign <ssa_name, _9, _78, NULL, NULL>
  gimple_assign <mem_ref, _10, *_9, NULL, NULL>
  gimple_call <operator<<, _80, _8, _10>

  <bb 17> :
  gimple_assign <ssa_name, _11, _80, NULL, NULL>
  gimple_call <operator<<, NULL, _11, endl>

  <bb 18> :
  gimple_call <__dt_comp , NULL, &D.46383>
  gimple_assign <constructor, D.46383, {CLOBBER}, NULL, NULL>
  gimple_call <__dt_comp , NULL, &D.46382>
  gimple_assign <constructor, D.46382, {CLOBBER}, NULL, NULL>
  gimple_call <operator<<, _87, &cout, "Key: three, Value: ">

  <bb 19> :
  gimple_assign <ssa_name, _12, _87, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.46392>
  gimple_call <__ct_comp , NULL, &D.46393, "three", &D.46392>

  <bb 20> :
  gimple_call <operator[], _91, &map, &D.46393>

  <bb 21> :
  gimple_assign <ssa_name, _13, _91, NULL, NULL>
  gimple_assign <mem_ref, _14, *_13, NULL, NULL>
  gimple_call <operator<<, _93, _12, _14>

  <bb 22> :
  gimple_assign <ssa_name, _15, _93, NULL, NULL>
  gimple_call <operator<<, NULL, _15, endl>

  <bb 23> :
  gimple_call <__dt_comp , NULL, &D.46393>
  gimple_assign <constructor, D.46393, {CLOBBER}, NULL, NULL>
  gimple_call <__dt_comp , NULL, &D.46392>
  gimple_assign <constructor, D.46392, {CLOBBER}, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.46400>
  gimple_call <__ct_comp , NULL, &D.46401, "four", &D.46400>

  <bb 24> :
  gimple_call <count, _102, &map, &D.46401>

  <bb 25> :
  gimple_assign <ssa_name, _16, _102, NULL, NULL>
  gimple_assign <ne_expr, retval.0_103, _16, 0, NULL>
  gimple_call <__dt_comp , NULL, &D.46401>
  gimple_assign <constructor, D.46401, {CLOBBER}, NULL, NULL>
  gimple_call <__dt_comp , NULL, &D.46400>
  gimple_assign <constructor, D.46400, {CLOBBER}, NULL, NULL>
  gimple_cond <ne_expr, retval.0_103, 0, NULL, NULL>
    goto <bb 26>; [INV]
  else
    goto <bb 28>; [INV]

  <bb 26> :
  gimple_call <operator<<, _112, &cout, "Key \'four\' is in the map">

  <bb 27> :
  gimple_assign <ssa_name, _17, _112, NULL, NULL>
  gimple_call <operator<<, NULL, _17, endl>
  goto <bb 30>; [INV]

  <bb 28> :
  gimple_call <operator<<, _109, &cout, "Key \'four\' is not in the map">

  <bb 29> :
  gimple_assign <ssa_name, _18, _109, NULL, NULL>
  gimple_call <operator<<, NULL, _18, endl>

  <bb 30> :
  gimple_assign <integer_cst, _114, 0, NULL, NULL>
  gimple_call <__dt_comp , NULL, &map>
  gimple_assign <constructor, map, {CLOBBER}, NULL, NULL>

  <bb 31> :
gimple_label <<L5>>
  gimple_return <_114>

  <bb 32> :
gimple_label <<L6>>
  gimple_call <__dt_comp , NULL, &D.46327>
  gimple_resx <6>

  <bb 33> :
gimple_label <<L7>>
  gimple_assign <constructor, D.46327, {CLOBBER}, NULL, NULL>
  gimple_resx <5>

  <bb 34> :
gimple_label <<L8>>
  gimple_call <__dt_comp , NULL, &D.46326>
  gimple_resx <4>

  <bb 35> :
gimple_label <<L9>>
  gimple_assign <constructor, D.46326, {CLOBBER}, NULL, NULL>
  gimple_resx <3>

  <bb 36> :
gimple_label <<L10>>
  gimple_call <__dt_comp , NULL, &D.46329>
  gimple_resx <14>

  <bb 37> :
gimple_label <<L11>>
  gimple_assign <constructor, D.46329, {CLOBBER}, NULL, NULL>
  gimple_resx <13>

  <bb 38> :
gimple_label <<L12>>
  gimple_call <__dt_comp , NULL, &D.46328>
  gimple_resx <12>

  <bb 39> :
gimple_label <<L13>>
  gimple_assign <constructor, D.46328, {CLOBBER}, NULL, NULL>
  gimple_resx <11>

  <bb 40> :
gimple_label <<L14>>
  gimple_call <__dt_comp , NULL, &D.46331>
  gimple_resx <22>

  <bb 41> :
gimple_label <<L15>>
  gimple_assign <constructor, D.46331, {CLOBBER}, NULL, NULL>
  gimple_resx <21>

  <bb 42> :
gimple_label <<L16>>
  gimple_call <__dt_comp , NULL, &D.46330>
  gimple_resx <20>

  <bb 43> :
gimple_label <<L17>>
  gimple_assign <constructor, D.46330, {CLOBBER}, NULL, NULL>
  gimple_resx <19>

  <bb 44> :
gimple_label <<L18>>
  gimple_call <__dt_comp , NULL, &D.46373>
  gimple_resx <30>

  <bb 45> :
gimple_label <<L19>>
  gimple_assign <constructor, D.46373, {CLOBBER}, NULL, NULL>
  gimple_resx <29>

  <bb 46> :
gimple_label <<L20>>
  gimple_call <__dt_comp , NULL, &D.46372>
  gimple_resx <28>

  <bb 47> :
gimple_label <<L21>>
  gimple_assign <constructor, D.46372, {CLOBBER}, NULL, NULL>
  gimple_resx <27>

  <bb 48> :
gimple_label <<L22>>
  gimple_call <__dt_comp , NULL, &D.46383>
  gimple_resx <38>

  <bb 49> :
gimple_label <<L23>>
  gimple_assign <constructor, D.46383, {CLOBBER}, NULL, NULL>
  gimple_resx <37>

  <bb 50> :
gimple_label <<L24>>
  gimple_call <__dt_comp , NULL, &D.46382>
  gimple_resx <36>

  <bb 51> :
gimple_label <<L25>>
  gimple_assign <constructor, D.46382, {CLOBBER}, NULL, NULL>
  gimple_resx <35>

  <bb 52> :
gimple_label <<L26>>
  gimple_call <__dt_comp , NULL, &D.46393>
  gimple_resx <46>

  <bb 53> :
gimple_label <<L27>>
  gimple_assign <constructor, D.46393, {CLOBBER}, NULL, NULL>
  gimple_resx <45>

  <bb 54> :
gimple_label <<L28>>
  gimple_call <__dt_comp , NULL, &D.46392>
  gimple_resx <44>

  <bb 55> :
gimple_label <<L29>>
  gimple_assign <constructor, D.46392, {CLOBBER}, NULL, NULL>
  gimple_resx <43>

  <bb 56> :
gimple_label <<L30>>
  gimple_call <__dt_comp , NULL, &D.46401>
  gimple_resx <54>

  <bb 57> :
gimple_label <<L31>>
  gimple_assign <constructor, D.46401, {CLOBBER}, NULL, NULL>
  gimple_resx <53>

  <bb 58> :
gimple_label <<L32>>
  gimple_call <__dt_comp , NULL, &D.46400>
  gimple_resx <52>

  <bb 59> :
gimple_label <<L33>>
  gimple_assign <constructor, D.46400, {CLOBBER}, NULL, NULL>
  gimple_resx <51>

  <bb 60> :
gimple_label <<L34>>
  gimple_call <__dt_comp , NULL, &map>
  gimple_resx <2>

  <bb 61> :
gimple_label <<L35>>
  gimple_assign <constructor, map, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function __static_initialization_and_destruction_0 (_Z41__static_initialization_and_destruction_0ii, funcdef_no=2873, decl_uid=54444, cgraph_uid=1178, symbol_order=1209)

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



;; Function _GLOBAL__sub_I_main (_GLOBAL__sub_I_main, funcdef_no=2874, decl_uid=54450, cgraph_uid=1179, symbol_order=1340)

_GLOBAL__sub_I_main ()
{
  <bb 2> :
  gimple_call <__static_initialization_and_destruction_0, NULL, 1, 65535>
  gimple_return <NULL>

}


