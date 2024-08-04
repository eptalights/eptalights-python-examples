
;; Function operator new (_ZnwmPv, funcdef_no=286, decl_uid=11249, cgraph_uid=203, symbol_order=202)

operator new (size_t D.11247, void * __p)
{
  void * D.177903;
  void * _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __p_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::__deque_buf_size (_ZSt16__deque_buf_sizem, funcdef_no=2761, decl_uid=53354, cgraph_uid=986, symbol_order=987)

std::__deque_buf_size (size_t __size)
{
  size_t iftmp.1;
  size_t D.177804;
  size_t iftmp.1_1;
  size_t iftmp.1_3;
  size_t iftmp.1_4;
  size_t _5;

  <bb 2> :
  gimple_cond <le_expr, __size_2(D), 511, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <trunc_div_expr, iftmp.1_4, 512, __size_2(D), NULL>
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <integer_cst, iftmp.1_3, 1, NULL, NULL>

  <bb 5> :
  # gimple_phi <iftmp.1_1, iftmp.1_4(3), iftmp.1_3(4)>
  gimple_assign <ssa_name, _5, iftmp.1_1, NULL, NULL>

  <bb 6> :
gimple_label <<L3>>
  gimple_return <_5>

}



;; Function std::min<long unsigned int> (_ZSt3minImERKT_S2_S2_, funcdef_no=7872, decl_uid=18461, cgraph_uid=1810, symbol_order=1859)

std::min<long unsigned int> (const long unsigned int & __a, const long unsigned int & __b)
{
  const long unsigned int & D.177926;
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



;; Function printPair (_Z9printPairSt4pairIiiE, funcdef_no=8399, decl_uid=162949, cgraph_uid=1857, symbol_order=1906)

printPair (struct pair p)
{
  struct basic_ostream & D.177779;
  struct basic_ostream & D.177778;
  struct basic_ostream & D.177777;
  struct basic_ostream & D.177776;
  struct basic_ostream & _1;
  int _2;
  struct basic_ostream & _3;
  struct basic_ostream & _4;
  int _5;
  struct basic_ostream & _6;
  struct basic_ostream & _9;
  struct basic_ostream & _11;
  struct basic_ostream & _13;
  struct basic_ostream & _15;

  <bb 2> :
  gimple_call <operator<<, _9, &cout, "(">
  gimple_assign <ssa_name, _1, _9, NULL, NULL>
  gimple_assign <component_ref, _2, p.first, NULL, NULL>
  gimple_call <operator<<, _11, _1, _2>
  gimple_assign <ssa_name, _3, _11, NULL, NULL>
  gimple_call <operator<<, _13, _3, ", ">
  gimple_assign <ssa_name, _4, _13, NULL, NULL>
  gimple_assign <component_ref, _5, p.second, NULL, NULL>
  gimple_call <operator<<, _15, _4, _5>
  gimple_assign <ssa_name, _6, _15, NULL, NULL>
  gimple_call <operator<<, NULL, _6, ") ">
  gimple_return <NULL>

}



;; Function std::max<long unsigned int> (_ZSt3maxImERKT_S2_S2_, funcdef_no=8984, decl_uid=53829, cgraph_uid=2442, symbol_order=2494)

std::max<long unsigned int> (const long unsigned int & __a, const long unsigned int & __b)
{
  const long unsigned int & D.177850;
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



;; Function std::forward<int> (_ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE, funcdef_no=8989, decl_uid=170137, cgraph_uid=2446, symbol_order=2498)

std::forward<int> (type & __t)
{
  int & D.177896;
  int & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::pair<int, int>::pair<int, int> (_ZNSt4pairIiiEC2IiiLb1EEEOT_OT0_, funcdef_no=9007, decl_uid=165838, cgraph_uid=2465, symbol_order=2517)

std::pair<int, int>::pair<int, int> (struct pair * const this, int & __x, int & __y)
{
  int & _1;
  int _2;
  int & _3;
  int _4;

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



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_get_Tp_allocator (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EE19_M_get_Tp_allocatorEv, funcdef_no=9302, decl_uid=164422, cgraph_uid=2760, symbol_order=2812)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_get_Tp_allocator (struct _Deque_base * const this)
{
  struct _Tp_alloc_type & D.177815;
  struct _Tp_alloc_type & _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_impl, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::_Deque_iterator (_ZNSt15_Deque_iteratorISt4pairIiiERS1_PS1_EC2ERKS4_, funcdef_no=9304, decl_uid=164392, cgraph_uid=2762, symbol_order=2814)

std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::_Deque_iterator (struct _Deque_iterator * const this, const struct _Deque_iterator & __x)
{
  struct pair * _1;
  struct pair * _2;
  struct pair * _3;
  struct pair * * _4;

  <bb 2> :
  gimple_assign <constructor, *this_6(D), {CLOBBER}, NULL, NULL>
  gimple_assign <component_ref, _1, __x_8(D)->_M_cur, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->_M_cur, _1, NULL, NULL>
  gimple_assign <component_ref, _2, __x_8(D)->_M_first, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->_M_first, _2, NULL, NULL>
  gimple_assign <component_ref, _3, __x_8(D)->_M_last, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->_M_last, _3, NULL, NULL>
  gimple_assign <component_ref, _4, __x_8(D)->_M_node, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->_M_node, _4, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::end (_ZNSt5dequeISt4pairIiiESaIS1_EE3endEv, funcdef_no=9301, decl_uid=164770, cgraph_uid=2759, symbol_order=2811)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::end (struct deque * const this)
{
  struct iterator * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->D.165187._M_impl.D.164587._M_finish, NULL, NULL>
  gimple_call <__ct_comp , NULL, _4(D), _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4(D)>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::begin (_ZNSt5dequeISt4pairIiiESaIS1_EE5beginEv, funcdef_no=9300, decl_uid=164766, cgraph_uid=2758, symbol_order=2810)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::begin (struct deque * const this)
{
  struct iterator * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->D.165187._M_impl.D.164587._M_start, NULL, NULL>
  gimple_call <__ct_comp , NULL, _4(D), _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4(D)>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_destroy_data (_ZNSt5dequeISt4pairIiiESaIS1_EE15_M_destroy_dataESt15_Deque_iteratorIS1_RS1_PS1_ES7_RKS2_, funcdef_no=9306, decl_uid=164988, cgraph_uid=2764, symbol_order=2816)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_destroy_data (struct deque * const this, struct iterator & __first, struct iterator & __last, const struct allocator & D.164992)
{
  struct iterator D.172442;
  struct iterator D.172445;

  <bb 2> :

  <bb 3> :
  gimple_return <NULL>

}



;; Function std::move<std::pair<int, int>&> (_ZSt4moveIRSt4pairIiiEEONSt16remove_referenceIT_E4typeEOS4_, funcdef_no=9307, decl_uid=170193, cgraph_uid=2765, symbol_order=2817)

std::move<std::pair<int, int>&> (struct pair & __t)
{
  struct type & D.177898;
  struct type & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_get_Tp_allocator (_ZNKSt11_Deque_baseISt4pairIiiESaIS1_EE19_M_get_Tp_allocatorEv, funcdef_no=9310, decl_uid=164424, cgraph_uid=2768, symbol_order=2820)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_get_Tp_allocator (const struct _Deque_base * const this)
{
  const struct _Tp_alloc_type & D.177861;
  const struct _Tp_alloc_type & _2;

  <bb 2> :
  gimple_assign <addr_expr, _2, &this_1(D)->_M_impl, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>::_Deque_iterator (_ZNSt15_Deque_iteratorISt4pairIiiERKS1_PS2_EC2ERKS5_, funcdef_no=9321, decl_uid=170364, cgraph_uid=2779, symbol_order=2831)

std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>::_Deque_iterator (struct _Deque_iterator * const this, const struct _Deque_iterator & __x)
{
  struct pair * _1;
  struct pair * _2;
  struct pair * _3;
  struct pair * * _4;

  <bb 2> :
  gimple_assign <constructor, *this_6(D), {CLOBBER}, NULL, NULL>
  gimple_assign <component_ref, _1, __x_8(D)->_M_cur, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->_M_cur, _1, NULL, NULL>
  gimple_assign <component_ref, _2, __x_8(D)->_M_first, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->_M_first, _2, NULL, NULL>
  gimple_assign <component_ref, _3, __x_8(D)->_M_last, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->_M_last, _3, NULL, NULL>
  gimple_assign <component_ref, _4, __x_8(D)->_M_node, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->_M_node, _4, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::operator== (_ZSteqRKSt15_Deque_iteratorISt4pairIiiERS1_PS1_ES6_, funcdef_no=9472, decl_uid=164327, cgraph_uid=2930, symbol_order=2982)

std::operator== (const struct _Self & __x, const struct _Self & __y)
{
  bool D.177788;
  struct pair * _1;
  struct pair * _2;
  bool _6;

  <bb 2> :
  gimple_assign <component_ref, _1, __x_4(D)->_M_cur, NULL, NULL>
  gimple_assign <component_ref, _2, __y_5(D)->_M_cur, NULL, NULL>
  gimple_assign <eq_expr, _6, _1, _2, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::empty (_ZNKSt5dequeISt4pairIiiESaIS1_EE5emptyEv, funcdef_no=9286, decl_uid=164803, cgraph_uid=2744, symbol_order=2796)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::empty (const struct deque * const this)
{
  bool D.177785;
  const struct iterator * _1;
  const struct iterator * _2;
  bool _6;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_3(D)->D.165187._M_impl.D.164587._M_start, NULL, NULL>
  gimple_assign <addr_expr, _2, &this_3(D)->D.165187._M_impl.D.164587._M_finish, NULL, NULL>
  gimple_call <operator==, _6, _2, _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::stack<std::pair<int, int> >::empty (_ZNKSt5stackISt4pairIiiESt5dequeIS1_SaIS1_EEE5emptyEv, funcdef_no=8993, decl_uid=165270, cgraph_uid=2451, symbol_order=2503)

std::stack<std::pair<int, int> >::empty (const struct stack * const this)
{
  bool D.177783;
  const struct deque * _1;
  bool _5;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->c, NULL, NULL>
  gimple_call <empty, _5, _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::operator* (_ZNKSt15_Deque_iteratorISt4pairIiiERS1_PS1_EdeEv, funcdef_no=9474, decl_uid=164301, cgraph_uid=2932, symbol_order=2984)

std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::operator* (const struct _Deque_iterator * const this)
{
  struct pair & D.177810;
  struct pair & _3;

  <bb 2> :
  gimple_assign <component_ref, _3, this_2(D)->_M_cur, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int> >::~new_allocator (_ZN9__gnu_cxx13new_allocatorISt4pairIiiEED2Ev, funcdef_no=9490, decl_uid=163848, cgraph_uid=2948, symbol_order=3000)

__gnu_cxx::new_allocator<std::pair<int, int> >::~new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<std::pair<int, int> >::~allocator (_ZNSaISt4pairIiiEED2Ev, funcdef_no=9312, decl_uid=163918, cgraph_uid=2770, symbol_order=2822)

std::allocator<std::pair<int, int> >::~allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_Deque_impl::~_Deque_impl (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EE11_Deque_implD2Ev, funcdef_no=9293, decl_uid=165068, cgraph_uid=2750, symbol_order=2802)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_Deque_impl::~_Deque_impl (struct _Deque_impl * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>::_Deque_iterator<std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*> > (_ZNSt15_Deque_iteratorISt4pairIiiERKS1_PS2_EC2IS_IS1_RS1_PS1_EvEERKT_, funcdef_no=9497, decl_uid=172485, cgraph_uid=2955, symbol_order=3007)

std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>::_Deque_iterator<std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*> > (struct _Deque_iterator * const this, const struct _Deque_iterator & __x)
{
  struct pair * _1;
  struct pair * _2;
  struct pair * _3;
  struct pair * * _4;

  <bb 2> :
  gimple_assign <constructor, *this_6(D), {CLOBBER}, NULL, NULL>
  gimple_assign <component_ref, _1, __x_8(D)->_M_cur, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->_M_cur, _1, NULL, NULL>
  gimple_assign <component_ref, _2, __x_8(D)->_M_first, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->_M_first, _2, NULL, NULL>
  gimple_assign <component_ref, _3, __x_8(D)->_M_last, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->_M_last, _3, NULL, NULL>
  gimple_assign <component_ref, _4, __x_8(D)->_M_node, NULL, NULL>
  gimple_assign <ssa_name, this_6(D)->_M_node, _4, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::end (_ZNKSt5dequeISt4pairIiiESaIS1_EE3endEv, funcdef_no=9319, decl_uid=164772, cgraph_uid=2777, symbol_order=2829)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::end (const struct deque * const this)
{
  const struct iterator * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->D.165187._M_impl.D.164587._M_finish, NULL, NULL>
  gimple_call <__ct_comp , NULL, _4(D), _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4(D)>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::begin (_ZNKSt5dequeISt4pairIiiESaIS1_EE5beginEv, funcdef_no=9318, decl_uid=164768, cgraph_uid=2776, symbol_order=2828)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::begin (const struct deque * const this)
{
  const struct iterator * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->D.165187._M_impl.D.164587._M_start, NULL, NULL>
  gimple_call <__ct_comp , NULL, _4(D), _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4(D)>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int> >::destroy<std::pair<int, int> > (_ZN9__gnu_cxx13new_allocatorISt4pairIiiEE7destroyIS2_EEvPT_, funcdef_no=9596, decl_uid=173376, cgraph_uid=3054, symbol_order=3106)

__gnu_cxx::new_allocator<std::pair<int, int> >::destroy<std::pair<int, int> > (struct new_allocator * const this, struct pair * __p)
{
  <bb 2> :
  gimple_assign <constructor, *__p_2(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::allocator_traits<std::allocator<std::pair<int, int> > >::destroy<std::pair<int, int> > (_ZNSt16allocator_traitsISaISt4pairIiiEEE7destroyIS1_EEvRS2_PT_, funcdef_no=9475, decl_uid=172092, cgraph_uid=2933, symbol_order=2985)

std::allocator_traits<std::allocator<std::pair<int, int> > >::destroy<std::pair<int, int> > (struct allocator_type & __a, struct pair * __p)
{
  <bb 2> :
  gimple_call <destroy, NULL, __a_2(D), __p_3(D)>
  gimple_return <NULL>

}



;; Function std::forward<std::pair<int, int> > (_ZSt7forwardISt4pairIiiEEOT_RNSt16remove_referenceIS2_E4typeE, funcdef_no=9616, decl_uid=173511, cgraph_uid=3074, symbol_order=3126)

std::forward<std::pair<int, int> > (struct type & __t)
{
  struct pair & D.177905;
  struct pair & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int> >::new_allocator (_ZN9__gnu_cxx13new_allocatorISt4pairIiiEEC2ERKS3_, funcdef_no=9620, decl_uid=163838, cgraph_uid=3078, symbol_order=3130)

__gnu_cxx::new_allocator<std::pair<int, int> >::new_allocator (struct new_allocator * const this, const struct new_allocator & D.163840)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<std::pair<int, int> >::allocator (_ZNSaISt4pairIiiEEC2ERKS1_, funcdef_no=9487, decl_uid=163908, cgraph_uid=2945, symbol_order=2997)

std::allocator<std::pair<int, int> >::allocator (struct allocator * const this, const struct allocator & __a)
{
  <bb 2> :
  gimple_call <__ct_base , NULL, this_2(D), __a_3(D)>
  gimple_return <NULL>

}



;; Function std::allocator_traits<std::allocator<std::pair<int, int> > >::select_on_container_copy_construction (_ZNSt16allocator_traitsISaISt4pairIiiEEE37select_on_container_copy_constructionERKS2_, funcdef_no=9485, decl_uid=163962, cgraph_uid=2943, symbol_order=2995)

std::allocator_traits<std::allocator<std::pair<int, int> > >::select_on_container_copy_construction (const struct allocator_type & __rhs)
{
  <bb 2> :
  gimple_call <__ct_comp , NULL, _2(D), __rhs_3(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2(D)>

}



;; Function __gnu_cxx::__alloc_traits<std::allocator<std::pair<int, int> >, std::pair<int, int> >::_S_select_on_copy (_ZN9__gnu_cxx14__alloc_traitsISaISt4pairIiiEES2_E17_S_select_on_copyERKS3_, funcdef_no=9309, decl_uid=163996, cgraph_uid=2767, symbol_order=2819)

__gnu_cxx::__alloc_traits<std::allocator<std::pair<int, int> >, std::pair<int, int> >::_S_select_on_copy (const struct allocator & __a)
{
  <bb 2> :
  gimple_call <select_on_container_copy_construction, *_2(D), __a_3(D)> [return slot optimization]

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2(D)>

}



;; Function std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::_S_buffer_size (_ZNSt15_Deque_iteratorISt4pairIiiERS1_PS1_E14_S_buffer_sizeEv, funcdef_no=9622, decl_uid=164258, cgraph_uid=3080, symbol_order=3132)

std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::_S_buffer_size ()
{
  size_t D.177802;
  size_t _3;

  <bb 2> :
  gimple_call <__deque_buf_size, _3, 8>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::_M_set_node (_ZNSt15_Deque_iteratorISt4pairIiiERS1_PS1_E11_M_set_nodeEPS3_, funcdef_no=9595, decl_uid=164324, cgraph_uid=3053, symbol_order=3105)

std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::_M_set_node (struct _Deque_iterator * const this, struct pair * * __new_node)
{
  struct pair * _1;
  struct pair * _2;
  long unsigned int _3;
  long unsigned int _4;
  struct pair * _5;

  <bb 2> :
  gimple_assign <ssa_name, this_7(D)->_M_node, __new_node_8(D), NULL, NULL>
  gimple_assign <mem_ref, _1, *__new_node_8(D), NULL, NULL>
  gimple_assign <ssa_name, this_7(D)->_M_first, _1, NULL, NULL>
  gimple_assign <component_ref, _2, this_7(D)->_M_first, NULL, NULL>
  gimple_call <_S_buffer_size, _3>
  gimple_assign <mult_expr, _4, _3, 8, NULL>
  gimple_assign <pointer_plus_expr, _5, _2, _4, NULL>
  gimple_assign <ssa_name, this_7(D)->_M_last, _5, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::operator-- (_ZNSt15_Deque_iteratorISt4pairIiiERS1_PS1_EmmEv, funcdef_no=9473, decl_uid=164310, cgraph_uid=2931, symbol_order=2983)

std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::operator-- (struct _Deque_iterator * const this)
{
  struct _Self & D.177800;
  struct pair * _1;
  struct pair * _2;
  struct pair * * _3;
  struct pair * * _4;
  struct pair * _5;
  struct pair * _6;
  struct pair * _7;
  struct _Self & _14;

  <bb 2> :
  gimple_assign <component_ref, _1, this_10(D)->_M_cur, NULL, NULL>
  gimple_assign <component_ref, _2, this_10(D)->_M_first, NULL, NULL>
  gimple_cond <eq_expr, _1, _2, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <component_ref, _3, this_10(D)->_M_node, NULL, NULL>
  gimple_assign <pointer_plus_expr, _4, _3, 18446744073709551608, NULL>
  gimple_call <_M_set_node, NULL, this_10(D), _4>
  gimple_assign <component_ref, _5, this_10(D)->_M_last, NULL, NULL>
  gimple_assign <ssa_name, this_10(D)->_M_cur, _5, NULL, NULL>

  <bb 4> :
  gimple_assign <component_ref, _6, this_10(D)->_M_cur, NULL, NULL>
  gimple_assign <pointer_plus_expr, _7, _6, 18446744073709551608, NULL>
  gimple_assign <ssa_name, this_10(D)->_M_cur, _7, NULL, NULL>
  gimple_assign <ssa_name, _14, this_10(D), NULL, NULL>

  <bb 5> :
gimple_label <<L3>>
  gimple_return <_14>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::back (_ZNSt5dequeISt4pairIiiESaIS1_EE4backEv, funcdef_no=9287, decl_uid=164824, cgraph_uid=2745, symbol_order=2797)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::back (struct deque * const this)
{
  struct iterator __tmp;
  struct value_type & D.177792;
  struct value_type & _6;

  <bb 2> :
  gimple_call <end, __tmp, this_2(D)> [return slot optimization]
  gimple_call <operator--, NULL, &__tmp>
  gimple_call <operator*, _6, &__tmp>

  <bb 3> :
  gimple_assign <constructor, __tmp, {CLOBBER}, NULL, NULL>

  <bb 4> :
gimple_label <<L1>>
  gimple_return <_6>

}



;; Function std::stack<std::pair<int, int> >::top (_ZNSt5stackISt4pairIiiESt5dequeIS1_SaIS1_EEE3topEv, funcdef_no=8994, decl_uid=165274, cgraph_uid=2452, symbol_order=2504)

std::stack<std::pair<int, int> >::top (struct stack * const this)
{
  struct value_type & D.177790;
  struct deque * _1;
  struct value_type & _5;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->c, NULL, NULL>
  gimple_call <back, _5, _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function std::operator- (_ZStmiRKSt15_Deque_iteratorISt4pairIiiERS1_PS1_ES6_, funcdef_no=9492, decl_uid=164370, cgraph_uid=2950, symbol_order=3002)

std::operator- (const struct _Self & __x, const struct _Self & __y)
{
  difference_type D.177913;
  long unsigned int _1;
  long int _2;
  struct pair * * _3;
  struct pair * * _4;
  long int _5;
  long int _6;
  long int _7;
  long int _8;
  struct pair * _9;
  struct pair * _10;
  long int _11;
  long int _12;
  long int _13;
  struct pair * _14;
  struct pair * _15;
  long int _16;
  long int _17;
  difference_type _22;

  <bb 2> :
  gimple_call <_S_buffer_size, _1>
  gimple_assign <nop_expr, _2, _1, NULL, NULL>
  gimple_assign <component_ref, _3, __x_20(D)->_M_node, NULL, NULL>
  gimple_assign <component_ref, _4, __y_21(D)->_M_node, NULL, NULL>
  gimple_assign <pointer_diff_expr, _5, _3, _4, NULL>
  gimple_assign <exact_div_expr, _6, _5, 8, NULL>
  gimple_assign <plus_expr, _7, _6, -1, NULL>
  gimple_assign <mult_expr, _8, _2, _7, NULL>
  gimple_assign <component_ref, _9, __x_20(D)->_M_cur, NULL, NULL>
  gimple_assign <component_ref, _10, __x_20(D)->_M_first, NULL, NULL>
  gimple_assign <pointer_diff_expr, _11, _9, _10, NULL>
  gimple_assign <exact_div_expr, _12, _11, 8, NULL>
  gimple_assign <plus_expr, _13, _8, _12, NULL>
  gimple_assign <component_ref, _14, __y_21(D)->_M_last, NULL, NULL>
  gimple_assign <component_ref, _15, __y_21(D)->_M_cur, NULL, NULL>
  gimple_assign <pointer_diff_expr, _16, _14, _15, NULL>
  gimple_assign <exact_div_expr, _17, _16, 8, NULL>
  gimple_assign <plus_expr, _22, _13, _17, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_22>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::size (_ZNKSt5dequeISt4pairIiiESaIS1_EE4sizeEv, funcdef_no=9314, decl_uid=164790, cgraph_uid=2772, symbol_order=2824)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::size (const struct deque * const this)
{
  size_type D.177911;
  const struct iterator * _1;
  const struct iterator * _2;
  long int _3;
  size_type _7;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_4(D)->D.165187._M_impl.D.164587._M_start, NULL, NULL>
  gimple_assign <addr_expr, _2, &this_4(D)->D.165187._M_impl.D.164587._M_finish, NULL, NULL>
  gimple_call <operator-, _3, _2, _1>
  gimple_assign <nop_expr, _7, _3, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::stack<std::pair<int, int> >::size (_ZNKSt5stackISt4pairIiiESt5dequeIS1_SaIS1_EEE4sizeEv, funcdef_no=9013, decl_uid=165272, cgraph_uid=2471, symbol_order=2523)

std::stack<std::pair<int, int> >::size (const struct stack * const this)
{
  size_type D.177984;
  const struct deque * _1;
  size_type _5;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->c, NULL, NULL>
  gimple_call <size, _5, _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int> >::new_allocator (_ZN9__gnu_cxx13new_allocatorISt4pairIiiEEC2Ev, funcdef_no=9685, decl_uid=163843, cgraph_uid=3143, symbol_order=3195)

__gnu_cxx::new_allocator<std::pair<int, int> >::new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<std::pair<int, int> >::allocator (_ZNSaISt4pairIiiEEC2Ev, funcdef_no=9599, decl_uid=163913, cgraph_uid=3057, symbol_order=3109)

std::allocator<std::pair<int, int> >::allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__ct_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::_Deque_iterator (_ZNSt15_Deque_iteratorISt4pairIiiERS1_PS1_EC2Ev, funcdef_no=9688, decl_uid=164405, cgraph_uid=3146, symbol_order=3198)

std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::_Deque_iterator (struct _Deque_iterator * const this)
{
  <bb 2> :
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, this_2(D)->_M_cur, 0B, NULL, NULL>
  gimple_assign <integer_cst, this_2(D)->_M_first, 0B, NULL, NULL>
  gimple_assign <integer_cst, this_2(D)->_M_last, 0B, NULL, NULL>
  gimple_assign <integer_cst, this_2(D)->_M_node, 0B, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_Deque_impl_data::_Deque_impl_data (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EE16_Deque_impl_dataC2Ev, funcdef_no=9602, decl_uid=164514, cgraph_uid=3060, symbol_order=3112)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_Deque_impl_data::_Deque_impl_data (struct _Deque_impl_data * const this)
{
  struct iterator * _1;
  struct iterator * _2;

  <bb 2> :
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, this_4(D)->_M_map, 0B, NULL, NULL>
  gimple_assign <integer_cst, this_4(D)->_M_map_size, 0, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_4(D)->_M_start, NULL, NULL>
  gimple_call <__ct_comp , NULL, _1>
  gimple_assign <addr_expr, _2, &this_4(D)->_M_finish, NULL, NULL>
  gimple_call <__ct_comp , NULL, _2>
  gimple_return <NULL>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_Deque_impl::_Deque_impl (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EE11_Deque_implC2Ev, funcdef_no=9478, decl_uid=164585, cgraph_uid=2936, symbol_order=2988)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_Deque_impl::_Deque_impl (struct _Deque_impl * const this)
{
  struct _Deque_impl_data * _1;

  <bb 2> :
  gimple_assign <constructor, *this_3(D), {CLOBBER}, NULL, NULL>
  gimple_call <__ct_base , NULL, this_3(D)>
  gimple_assign <addr_expr, _1, &this_3(D)->D.164587, NULL, NULL>
  gimple_call <__ct_base , NULL, _1>
  gimple_return <NULL>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_Deque_impl::_Deque_impl (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EE11_Deque_implC2ERKS2_, funcdef_no=9494, decl_uid=164580, cgraph_uid=2952, symbol_order=3004)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_Deque_impl::_Deque_impl (struct _Deque_impl * const this, const struct _Tp_alloc_type & __a)
{
  struct _Deque_impl_data * _1;

  <bb 2> :
  gimple_assign <constructor, *this_3(D), {CLOBBER}, NULL, NULL>
  gimple_call <__ct_base , NULL, this_3(D), __a_5(D)>
  gimple_assign <addr_expr, _1, &this_3(D)->D.164587, NULL, NULL>
  gimple_call <__ct_base , NULL, _1>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int>*>::~new_allocator (_ZN9__gnu_cxx13new_allocatorIPSt4pairIiiEED2Ev, funcdef_no=9696, decl_uid=164111, cgraph_uid=3154, symbol_order=3206)

__gnu_cxx::new_allocator<std::pair<int, int>*>::~new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<std::pair<int, int>*>::~allocator (_ZNSaIPSt4pairIiiEED2Ev, funcdef_no=9608, decl_uid=164181, cgraph_uid=3066, symbol_order=3118)

std::allocator<std::pair<int, int>*>::~allocator (struct allocator * const this)
{
  <bb 2> :
  gimple_call <__dt_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int>*>::deallocate (_ZN9__gnu_cxx13new_allocatorIPSt4pairIiiEE10deallocateEPS3_m, funcdef_no=9701, decl_uid=164065, cgraph_uid=3159, symbol_order=3211)

__gnu_cxx::new_allocator<std::pair<int, int>*>::deallocate (struct new_allocator * const this, struct pair * * __p, size_type __t)
{
  long unsigned int _1;

  <bb 2> :
  gimple_assign <mult_expr, _1, __t_2(D), 8, NULL>
  gimple_call <operator delete, NULL, __p_4(D), _1>
  gimple_return <NULL>

}



;; Function std::allocator_traits<std::allocator<std::pair<int, int>*> >::deallocate (_ZNSt16allocator_traitsISaIPSt4pairIiiEEE10deallocateERS3_PS2_m, funcdef_no=9613, decl_uid=173431, cgraph_uid=3071, symbol_order=3123)

std::allocator_traits<std::allocator<std::pair<int, int>*> >::deallocate (struct allocator_type & __a, struct pair * * __p, size_type __n)
{
  <bb 2> :
  gimple_call <deallocate, NULL, __a_2(D), __p_3(D), __n_4(D)>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int> >::construct<std::pair<int, int>, std::pair<int, int> > (_ZN9__gnu_cxx13new_allocatorISt4pairIiiEE9constructIS2_JS2_EEEvPT_DpOT0_, funcdef_no=9703, decl_uid=174667, cgraph_uid=3161, symbol_order=3213)

__gnu_cxx::new_allocator<std::pair<int, int> >::construct<std::pair<int, int>, std::pair<int, int> > (struct new_allocator * const this, struct pair * __p, struct pair & __args#0)
{
  void * D.176260;
  void * D.176259;
  struct pair * D.176261;
  struct pair * _4;
  void * _6;
  void * _8;

  <bb 2> :
  gimple_call <forward, _4, __args#0_2(D)>
  gimple_assign <ssa_name, _6, __p_5(D), NULL, NULL>
  gimple_call <operator new, _8, 8, _6>
  gimple_assign <mem_ref, MEM[(struct pair *)_8], *_4, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::allocator_traits<std::allocator<std::pair<int, int> > >::construct<std::pair<int, int>, std::pair<int, int> > (_ZNSt16allocator_traitsISaISt4pairIiiEEE9constructIS1_JS1_EEEvRS2_PT_DpOT0_, funcdef_no=9617, decl_uid=173513, cgraph_uid=3075, symbol_order=3127)

std::allocator_traits<std::allocator<std::pair<int, int> > >::construct<std::pair<int, int>, std::pair<int, int> > (struct allocator_type & __a, struct pair * __p, struct pair & __args#0)
{
  struct pair & _1;

  <bb 2> :
  gimple_call <forward, _1, __args#0_3(D)>
  gimple_call <construct, NULL, __a_5(D), __p_6(D), _1>
  gimple_return <NULL>

}



;; Function std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::operator++ (_ZNSt15_Deque_iteratorISt4pairIiiERS1_PS1_EppEv, funcdef_no=9708, decl_uid=164305, cgraph_uid=3166, symbol_order=3218)

std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>::operator++ (struct _Deque_iterator * const this)
{
  struct _Self & D.178042;
  struct pair * _1;
  struct pair * _2;
  struct pair * _3;
  struct pair * _4;
  struct pair * * _5;
  struct pair * * _6;
  struct pair * _7;
  struct _Self & _14;

  <bb 2> :
  gimple_assign <component_ref, _1, this_10(D)->_M_cur, NULL, NULL>
  gimple_assign <pointer_plus_expr, _2, _1, 8, NULL>
  gimple_assign <ssa_name, this_10(D)->_M_cur, _2, NULL, NULL>
  gimple_assign <component_ref, _3, this_10(D)->_M_cur, NULL, NULL>
  gimple_assign <component_ref, _4, this_10(D)->_M_last, NULL, NULL>
  gimple_cond <eq_expr, _3, _4, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <component_ref, _5, this_10(D)->_M_node, NULL, NULL>
  gimple_assign <pointer_plus_expr, _6, _5, 8, NULL>
  gimple_call <_M_set_node, NULL, this_10(D), _6>
  gimple_assign <component_ref, _7, this_10(D)->_M_first, NULL, NULL>
  gimple_assign <ssa_name, this_10(D)->_M_cur, _7, NULL, NULL>

  <bb 4> :
  gimple_assign <ssa_name, _14, this_10(D), NULL, NULL>

  <bb 5> :
gimple_label <<L3>>
  gimple_return <_14>

}



;; Function std::__addressof<std::pair<int, int> > (_ZSt11__addressofISt4pairIiiEEPT_RS2_, funcdef_no=9709, decl_uid=174689, cgraph_uid=3167, symbol_order=3219)

std::__addressof<std::pair<int, int> > (struct pair & __r)
{
  struct pair * D.178028;
  struct pair * _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __r_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>::operator* (_ZNKSt15_Deque_iteratorISt4pairIiiERKS1_PS2_EdeEv, funcdef_no=9710, decl_uid=170274, cgraph_uid=3168, symbol_order=3220)

std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>::operator* (const struct _Deque_iterator * const this)
{
  const struct pair & D.178026;
  const struct pair & _3;

  <bb 2> :
  gimple_assign <component_ref, _3, this_2(D)->_M_cur, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int> >::deallocate (_ZN9__gnu_cxx13new_allocatorISt4pairIiiEE10deallocateEPS2_m, funcdef_no=9803, decl_uid=163802, cgraph_uid=3261, symbol_order=3313)

__gnu_cxx::new_allocator<std::pair<int, int> >::deallocate (struct new_allocator * const this, struct pair * __p, size_type __t)
{
  long unsigned int _1;

  <bb 2> :
  gimple_assign <mult_expr, _1, __t_2(D), 8, NULL>
  gimple_call <operator delete, NULL, __p_4(D), _1>
  gimple_return <NULL>

}



;; Function std::allocator_traits<std::allocator<std::pair<int, int> > >::deallocate (_ZNSt16allocator_traitsISaISt4pairIiiEEE10deallocateERS2_PS1_m, funcdef_no=9683, decl_uid=163947, cgraph_uid=3141, symbol_order=3193)

std::allocator_traits<std::allocator<std::pair<int, int> > >::deallocate (struct allocator_type & __a, struct pair * __p, size_type __n)
{
  <bb 2> :
  gimple_call <deallocate, NULL, __a_2(D), __p_3(D), __n_4(D)>
  gimple_return <NULL>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_deallocate_node (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EE18_M_deallocate_nodeEPS1_, funcdef_no=9597, decl_uid=164430, cgraph_uid=3055, symbol_order=3107)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_deallocate_node (struct _Deque_base * const this, struct pair * __p)
{
  long unsigned int _1;
  struct _Deque_impl * _2;

  <bb 2> :
  gimple_call <__deque_buf_size, _1, 8>
  gimple_assign <addr_expr, _2, &this_5(D)->_M_impl, NULL, NULL>
  gimple_call <deallocate, NULL, _2, __p_6(D), _1>
  gimple_return <NULL>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_pop_back_aux (_ZNSt5dequeISt4pairIiiESaIS1_EE15_M_pop_back_auxEv, funcdef_no=9476, decl_uid=164938, cgraph_uid=2934, symbol_order=2986)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_pop_back_aux (struct deque * const this)
{
  struct _Deque_base * _1;
  struct pair * _2;
  struct iterator * _3;
  struct pair * * _4;
  struct pair * * _5;
  struct pair * _6;
  struct pair * _7;
  struct pair * _8;
  struct _Deque_base * _9;
  struct _Tp_alloc_type & _10;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_11(D)->D.165187, NULL, NULL>
  gimple_assign <component_ref, _2, this_11(D)->D.165187._M_impl.D.164587._M_finish._M_first, NULL, NULL>
  gimple_call <_M_deallocate_node, NULL, _1, _2>
  gimple_assign <addr_expr, _3, &this_11(D)->D.165187._M_impl.D.164587._M_finish, NULL, NULL>
  gimple_assign <component_ref, _4, this_11(D)->D.165187._M_impl.D.164587._M_finish._M_node, NULL, NULL>
  gimple_assign <pointer_plus_expr, _5, _4, 18446744073709551608, NULL>
  gimple_call <_M_set_node, NULL, _3, _5>
  gimple_assign <component_ref, _6, this_11(D)->D.165187._M_impl.D.164587._M_finish._M_last, NULL, NULL>
  gimple_assign <pointer_plus_expr, _7, _6, 18446744073709551608, NULL>
  gimple_assign <ssa_name, this_11(D)->D.165187._M_impl.D.164587._M_finish._M_cur, _7, NULL, NULL>
  gimple_assign <component_ref, _8, this_11(D)->D.165187._M_impl.D.164587._M_finish._M_cur, NULL, NULL>
  gimple_assign <addr_expr, _9, &this_11(D)->D.165187, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _10, _9>
  gimple_call <destroy, NULL, _10, _8>
  gimple_return <NULL>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::pop_back (_ZNSt5dequeISt4pairIiiESaIS1_EE8pop_backEv, funcdef_no=9288, decl_uid=164850, cgraph_uid=2747, symbol_order=2799)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::pop_back (struct deque * const this)
{
  struct pair * _1;
  struct pair * _2;
  struct pair * _3;
  struct pair * _4;
  struct pair * _5;
  struct _Deque_base * _6;
  struct _Tp_alloc_type & _7;

  <bb 2> :
  gimple_assign <component_ref, _1, this_10(D)->D.165187._M_impl.D.164587._M_finish._M_cur, NULL, NULL>
  gimple_assign <component_ref, _2, this_10(D)->D.165187._M_impl.D.164587._M_finish._M_first, NULL, NULL>
  gimple_cond <ne_expr, _1, _2, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <component_ref, _3, this_10(D)->D.165187._M_impl.D.164587._M_finish._M_cur, NULL, NULL>
  gimple_assign <pointer_plus_expr, _4, _3, 18446744073709551608, NULL>
  gimple_assign <ssa_name, this_10(D)->D.165187._M_impl.D.164587._M_finish._M_cur, _4, NULL, NULL>
  gimple_assign <component_ref, _5, this_10(D)->D.165187._M_impl.D.164587._M_finish._M_cur, NULL, NULL>
  gimple_assign <addr_expr, _6, &this_10(D)->D.165187, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _7, _6>
  gimple_call <destroy, NULL, _7, _5>
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_call <_M_pop_back_aux, NULL, this_10(D)>

  <bb 5> :
  gimple_return <NULL>

}



;; Function std::stack<std::pair<int, int> >::pop (_ZNSt5stackISt4pairIiiESt5dequeIS1_SaIS1_EEE3popEv, funcdef_no=8995, decl_uid=165288, cgraph_uid=2453, symbol_order=2505)

std::stack<std::pair<int, int> >::pop (struct stack * const this)
{
  struct deque * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->c, NULL, NULL>
  gimple_call <pop_back, NULL, _1>
  gimple_return <NULL>

}



;; Function Showstack (_Z9ShowstackSt5stackISt4pairIiiESt5dequeIS1_SaIS1_EEE, funcdef_no=8400, decl_uid=163744, cgraph_uid=1862, symbol_order=1911)

Showstack (struct stack & s)
{
  bool retval.0;
  bool _1;
  struct value_type & _2;
  bool retval.0_7;

  <bb 2> :
  gimple_call <empty, _1, s_5(D)>
  gimple_assign <bit_not_expr, retval.0_7, _1, NULL, NULL>
  gimple_cond <ne_expr, retval.0_7, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <top, _2, s_5(D)>
  gimple_call <printPair, NULL, MEM[(const struct pair &)_2]>
  gimple_call <pop, NULL, s_5(D)>
  goto <bb 2>; [INV]

  <bb 4> :
  gimple_call <operator<<, NULL, &cout, 10>
  gimple_return <NULL>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_destroy_nodes (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EE16_M_destroy_nodesEPPS1_S5_, funcdef_no=9481, decl_uid=164447, cgraph_uid=2939, symbol_order=2991)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_destroy_nodes (struct _Deque_base * const this, struct pair * * __nstart, struct pair * * __nfinish)
{
  struct pair * * __n;
  struct pair * _1;

  <bb 2> :
  gimple_assign <ssa_name, __n_5, __nstart_4(D), NULL, NULL>

  <bb 3> :
  # gimple_phi <__n_2, __n_5(2), __n_10(4)>
  gimple_cond <ge_expr, __n_2, __nfinish_7(D), NULL, NULL>
    goto <bb 5>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 4> :
  gimple_assign <mem_ref, _1, *__n_2, NULL, NULL>
  gimple_call <_M_deallocate_node, NULL, this_8(D), _1>
  gimple_assign <pointer_plus_expr, __n_10, __n_2, 8, NULL>
  goto <bb 3>; [INV]

  <bb 5> :
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int>*>::new_allocator (_ZN9__gnu_cxx13new_allocatorIPSt4pairIiiEEC2Ev, funcdef_no=9807, decl_uid=164106, cgraph_uid=3265, symbol_order=3317)

__gnu_cxx::new_allocator<std::pair<int, int>*>::new_allocator (struct new_allocator * const this)
{
  <bb 2> :
  gimple_return <NULL>

}



;; Function std::allocator<std::pair<int, int>*>::allocator<std::pair<int, int> > (_ZNSaIPSt4pairIiiEEC2IS0_EERKSaIT_E, funcdef_no=9693, decl_uid=174634, cgraph_uid=3151, symbol_order=3203)

std::allocator<std::pair<int, int>*>::allocator<std::pair<int, int> > (struct allocator * const this, const struct allocator & D.174636)
{
  <bb 2> :
  gimple_call <__ct_base , NULL, this_2(D)>
  gimple_return <NULL>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_get_map_allocator (_ZNKSt11_Deque_baseISt4pairIiiESaIS1_EE20_M_get_map_allocatorEv, funcdef_no=9606, decl_uid=164426, cgraph_uid=3064, symbol_order=3116)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_get_map_allocator (const struct _Deque_base * const this)
{
  const struct _Tp_alloc_type & _1;

  <bb 2> :
  gimple_call <_M_get_Tp_allocator, _1, this_3(D)>
  gimple_call <__ct_comp , NULL, _5(D), _1>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_5(D)>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_deallocate_map (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EE17_M_deallocate_mapEPPS1_m, funcdef_no=9482, decl_uid=164436, cgraph_uid=2940, symbol_order=2992)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_deallocate_map (struct _Deque_base * const this, struct pair * * __p, size_t __n)
{
  struct _Map_alloc_type __map_alloc;

  <bb 2> :
  gimple_call <_M_get_map_allocator, __map_alloc, this_2(D)> [return slot optimization]
  gimple_call <deallocate, NULL, &__map_alloc, __p_4(D), __n_5(D)>
  gimple_call <__dt_comp , NULL, &__map_alloc>
  gimple_assign <constructor, __map_alloc, {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::~_Deque_base (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EED2Ev, funcdef_no=9298, decl_uid=164640, cgraph_uid=2756, symbol_order=2808)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::~_Deque_base (struct _Deque_base * const this)
{
  struct pair * * _1;
  struct pair * * _2;
  struct pair * * _3;
  struct pair * * _4;
  long unsigned int _5;
  struct pair * * _6;
  struct _Deque_impl * _7;

  <bb 2> :
  gimple_assign <component_ref, _1, this_10(D)->_M_impl.D.164587._M_map, NULL, NULL>
  gimple_cond <ne_expr, _1, 0B, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <component_ref, _2, this_10(D)->_M_impl.D.164587._M_finish._M_node, NULL, NULL>
  gimple_assign <pointer_plus_expr, _3, _2, 8, NULL>
  gimple_assign <component_ref, _4, this_10(D)->_M_impl.D.164587._M_start._M_node, NULL, NULL>
  gimple_call <_M_destroy_nodes, NULL, this_10(D), _4, _3>
  gimple_assign <component_ref, _5, this_10(D)->_M_impl.D.164587._M_map_size, NULL, NULL>
  gimple_assign <component_ref, _6, this_10(D)->_M_impl.D.164587._M_map, NULL, NULL>
  gimple_call <_M_deallocate_map, NULL, this_10(D), _6, _5>

  <bb 4> :
  gimple_assign <addr_expr, _7, &this_10(D)->_M_impl, NULL, NULL>
  gimple_call <__dt_comp , NULL, _7>
  gimple_assign <constructor, *this_10(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::~deque (_ZNSt5dequeISt4pairIiiESaIS1_EED2Ev, funcdef_no=9004, decl_uid=165184, cgraph_uid=2462, symbol_order=2514)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::~deque (struct deque * const this)
{
  struct iterator D.170176;
  struct iterator D.170177;
  struct _Deque_base * _1;
  struct _Tp_alloc_type & _2;
  struct _Deque_base * _3;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_4(D)->D.165187, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _2, _1>
  gimple_call <end, D.170177, this_4(D)> [return slot optimization]
  gimple_call <begin, D.170176, this_4(D)> [return slot optimization]
  gimple_call <_M_destroy_data, NULL, this_4(D), &D.170176, &D.170177, _2>
  gimple_assign <constructor, D.170176, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.170177, {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _3, &this_4(D)->D.165187, NULL, NULL>
  gimple_call <__dt_base , NULL, _3>
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::stack<std::pair<int, int> >::~stack (_ZNSt5stackISt4pairIiiESt5dequeIS1_SaIS1_EEED2Ev, funcdef_no=8408, decl_uid=165553, cgraph_uid=1865, symbol_order=1914)

std::stack<std::pair<int, int> >::~stack (struct stack * const this)
{
  struct deque * _1;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_2(D)->c, NULL, NULL>
  gimple_call <__dt_comp , NULL, _1>
  gimple_assign <constructor, *this_2(D), {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::operator== (_ZSteqRKSt15_Deque_iteratorISt4pairIiiERKS1_PS2_ES7_, funcdef_no=9812, decl_uid=170300, cgraph_uid=3270, symbol_order=3322)

std::operator== (const struct _Self & __x, const struct _Self & __y)
{
  bool D.178024;
  struct pair * _1;
  struct pair * _2;
  bool _6;

  <bb 2> :
  gimple_assign <component_ref, _1, __x_4(D)->_M_cur, NULL, NULL>
  gimple_assign <component_ref, _2, __y_5(D)->_M_cur, NULL, NULL>
  gimple_assign <eq_expr, _6, _1, _2, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::operator!= (_ZStneRKSt15_Deque_iteratorISt4pairIiiERKS1_PS2_ES7_, funcdef_no=9706, decl_uid=170307, cgraph_uid=3164, symbol_order=3216)

std::operator!= (const struct _Self & __x, const struct _Self & __y)
{
  bool D.178022;
  bool _1;
  bool _6;

  <bb 2> :
  gimple_call <operator==, _1, __x_3(D), __y_4(D)>
  gimple_assign <bit_not_expr, _6, _1, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::forward<const std::pair<int, int>&> (_ZSt7forwardIRKSt4pairIiiEEOT_RNSt16remove_referenceIS4_E4typeE, funcdef_no=9814, decl_uid=176281, cgraph_uid=3272, symbol_order=3324)

std::forward<const std::pair<int, int>&> (const struct type & __t)
{
  const struct pair & D.178030;
  const struct pair & _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __t_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::_Construct<std::pair<int, int>, const std::pair<int, int>&> (_ZSt10_ConstructISt4pairIiiEJRKS1_EEvPT_DpOT0_, funcdef_no=9711, decl_uid=174691, cgraph_uid=3169, symbol_order=3221)

std::_Construct<std::pair<int, int>, const std::pair<int, int>&> (struct pair * __p, const struct pair & __args#0)
{
  void * D.176284;
  void * D.176283;
  const struct pair * D.176285;
  const struct pair * _4;
  void * _6;
  void * _8;

  <bb 2> :
  gimple_call <forward, _4, __args#0_2(D)>
  gimple_assign <ssa_name, _6, __p_5(D), NULL, NULL>
  gimple_call <operator new, _8, 8, _6>
  gimple_assign <mem_ref, MEM[(struct pair *)_8], *_4, NULL, NULL>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int>*>::_M_max_size (_ZNK9__gnu_cxx13new_allocatorIPSt4pairIiiEE11_M_max_sizeEv, funcdef_no=9874, decl_uid=164088, cgraph_uid=3332, symbol_order=3384)

__gnu_cxx::new_allocator<std::pair<int, int>*>::_M_max_size (const struct new_allocator * const this)
{
  size_type D.177872;
  size_type _1;

  <bb 2> :
  gimple_assign <integer_cst, _1, 1152921504606846975, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_1>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int>*>::allocate (_ZN9__gnu_cxx13new_allocatorIPSt4pairIiiEE8allocateEmPKv, funcdef_no=9804, decl_uid=164061, cgraph_uid=3262, symbol_order=3314)

__gnu_cxx::new_allocator<std::pair<int, int>*>::allocate (struct new_allocator * const this, size_type __n, const void * D.164064)
{
  struct pair * * D.177871;
  struct pair * * D.177869;
  bool retval.2;
  long unsigned int _1;
  long unsigned int _2;
  bool retval.2_7;
  struct pair * * _9;
  struct pair * * _10;

  <bb 2> :
  gimple_call <_M_max_size, _1, this_4(D)>
  gimple_assign <gt_expr, retval.2_7, __n_6(D), _1, NULL>
  gimple_cond <ne_expr, retval.2_7, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <__throw_bad_alloc, NULL>

  <bb 4> :
  gimple_assign <mult_expr, _2, __n_6(D), 8, NULL>
  gimple_call <operator new, _9, _2>
  gimple_assign <ssa_name, _10, _9, NULL, NULL>

  <bb 5> :
gimple_label <<L2>>
  gimple_return <_10>

}



;; Function std::allocator_traits<std::allocator<std::pair<int, int>*> >::allocate (_ZNSt16allocator_traitsISaIPSt4pairIiiEEE8allocateERS3_m, funcdef_no=9690, decl_uid=173424, cgraph_uid=3148, symbol_order=3200)

std::allocator_traits<std::allocator<std::pair<int, int>*> >::allocate (struct allocator_type & __a, size_type __n)
{
  struct pair * * D.177865;
  struct pair * * D.177863;
  struct pair * * _5;
  struct pair * * _6;

  <bb 2> :
  gimple_call <allocate, _5, __a_2(D), __n_3(D), 0B>
  gimple_assign <ssa_name, _6, _5, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_allocate_map (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EE15_M_allocate_mapEm, funcdef_no=9604, decl_uid=164433, cgraph_uid=3062, symbol_order=3114)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_allocate_map (struct _Deque_base * const this, size_t __n)
{
  struct pair * * D.177854;
  struct _Map_alloc_type __map_alloc;
  struct pair * * D.177852;
  struct pair * * _6;
  struct pair * * _7;

  <bb 2> :
  gimple_call <_M_get_map_allocator, __map_alloc, this_2(D)> [return slot optimization]
  gimple_call <allocate, _6, &__map_alloc, __n_4(D)>

  <bb 3> :
  gimple_assign <ssa_name, _7, _6, NULL, NULL>

  <bb 4> :
  gimple_call <__dt_comp , NULL, &__map_alloc>
  gimple_assign <constructor, __map_alloc, {CLOBBER}, NULL, NULL>

  <bb 5> :
gimple_label <<L2>>
  gimple_return <_7>

  <bb 6> :
gimple_label <<L3>>
  gimple_call <__dt_comp , NULL, &__map_alloc>
  gimple_resx <2>

  <bb 7> :
gimple_label <<L4>>
  gimple_assign <constructor, __map_alloc, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>::_S_buffer_size (_ZNSt15_Deque_iteratorISt4pairIiiERKS1_PS2_E14_S_buffer_sizeEv, funcdef_no=9879, decl_uid=170232, cgraph_uid=3337, symbol_order=3389)

std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>::_S_buffer_size ()
{
  size_t D.178037;
  size_t _3;

  <bb 2> :
  gimple_call <__deque_buf_size, _3, 8>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_3>

}



;; Function std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>::_M_set_node (_ZNSt15_Deque_iteratorISt4pairIiiERKS1_PS2_E11_M_set_nodeEPPS1_, funcdef_no=9813, decl_uid=170297, cgraph_uid=3271, symbol_order=3323)

std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>::_M_set_node (struct _Deque_iterator * const this, struct pair * * __new_node)
{
  struct pair * _1;
  struct pair * _2;
  long unsigned int _3;
  long unsigned int _4;
  struct pair * _5;

  <bb 2> :
  gimple_assign <ssa_name, this_7(D)->_M_node, __new_node_8(D), NULL, NULL>
  gimple_assign <mem_ref, _1, *__new_node_8(D), NULL, NULL>
  gimple_assign <ssa_name, this_7(D)->_M_first, _1, NULL, NULL>
  gimple_assign <component_ref, _2, this_7(D)->_M_first, NULL, NULL>
  gimple_call <_S_buffer_size, _3>
  gimple_assign <mult_expr, _4, _3, 8, NULL>
  gimple_assign <pointer_plus_expr, _5, _2, _4, NULL>
  gimple_assign <ssa_name, this_7(D)->_M_last, _5, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>::operator++ (_ZNSt15_Deque_iteratorISt4pairIiiERKS1_PS2_EppEv, funcdef_no=9707, decl_uid=170278, cgraph_uid=3165, symbol_order=3217)

std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>::operator++ (struct _Deque_iterator * const this)
{
  struct _Self & D.178035;
  struct pair * _1;
  struct pair * _2;
  struct pair * _3;
  struct pair * _4;
  struct pair * * _5;
  struct pair * * _6;
  struct pair * _7;
  struct _Self & _14;

  <bb 2> :
  gimple_assign <component_ref, _1, this_10(D)->_M_cur, NULL, NULL>
  gimple_assign <pointer_plus_expr, _2, _1, 8, NULL>
  gimple_assign <ssa_name, this_10(D)->_M_cur, _2, NULL, NULL>
  gimple_assign <component_ref, _3, this_10(D)->_M_cur, NULL, NULL>
  gimple_assign <component_ref, _4, this_10(D)->_M_last, NULL, NULL>
  gimple_cond <eq_expr, _3, _4, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <component_ref, _5, this_10(D)->_M_node, NULL, NULL>
  gimple_assign <pointer_plus_expr, _6, _5, 8, NULL>
  gimple_call <_M_set_node, NULL, this_10(D), _6>
  gimple_assign <component_ref, _7, this_10(D)->_M_first, NULL, NULL>
  gimple_assign <ssa_name, this_10(D)->_M_cur, _7, NULL, NULL>

  <bb 4> :
  gimple_assign <ssa_name, _14, this_10(D), NULL, NULL>

  <bb 5> :
gimple_label <<L3>>
  gimple_return <_14>

}



;; Function std::__uninitialized_copy<false>::__uninit_copy<std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>, std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*> > (_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt15_Deque_iteratorISt4pairIiiERKS4_PS5_ES2_IS4_RS4_PS4_EEET0_T_SD_SC_, funcdef_no=9623, decl_uid=173760, cgraph_uid=3081, symbol_order=3133)

std::__uninitialized_copy<false>::__uninit_copy<std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>, std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*> > (struct _Deque_iterator & __first, struct _Deque_iterator & __last, struct _Deque_iterator & __result)
{
  struct _Deque_iterator __cur [value-expr: *<retval>];
  struct _Deque_iterator D.174704;
  struct _Deque_iterator D.174707;
  bool retval.17;
  const struct pair & _1;
  struct pair & _2;
  struct pair * _3;
  void * _4;
  bool retval.17_13;

  <bb 2> :
  gimple_call <__ct_comp , NULL, __cur_7(D), __result_8(D)>

  <bb 3> :
  gimple_call <operator!=, retval.17_13, __first_10(D), __last_11(D)>
  gimple_cond <ne_expr, retval.17_13, 0, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 4> :
  gimple_call <operator*, _1, __first_10(D)>
  gimple_call <operator*, _2, __cur_7(D)>
  gimple_call <__addressof, _3, _2>
  gimple_call <_Construct, NULL, _3, _1>
  gimple_call <operator++, NULL, __first_10(D)>
  gimple_call <operator++, NULL, __cur_7(D)>
  goto <bb 3>; [INV]

  <bb 5> :

  <bb 6> :
gimple_label <<L3>>
  gimple_return <__cur_7(D)>

}



;; Function std::uninitialized_copy<std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>, std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*> > (_ZSt18uninitialized_copyISt15_Deque_iteratorISt4pairIiiERKS2_PS3_ES0_IS2_RS2_PS2_EET0_T_SB_SA_, funcdef_no=9499, decl_uid=172499, cgraph_uid=2959, symbol_order=3011)

std::uninitialized_copy<std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>, std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*> > (struct _Deque_iterator & __first, struct _Deque_iterator & __last, struct _Deque_iterator & __result)
{
  const bool __assignable;
  struct _Deque_iterator D.173766;
  struct _Deque_iterator D.173769;
  struct _Deque_iterator D.173772;

  <bb 2> :
  gimple_assign <integer_cst, __assignable_1, 1, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.173772, __result_3(D)>
  gimple_call <__ct_comp , NULL, &D.173769, __last_5(D)>
  gimple_call <__ct_comp , NULL, &D.173766, __first_7(D)>
  gimple_call <__uninit_copy, *_9(D), &D.173766, &D.173769, &D.173772> [return slot optimization]

  <bb 3> :
  gimple_assign <constructor, D.173766, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.173769, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.173772, {CLOBBER}, NULL, NULL>

  <bb 4> :
gimple_label <<L3>>
  gimple_return <_9(D)>

  <bb 5> :
gimple_label <<L4>>
  gimple_assign <constructor, D.173766, {CLOBBER}, NULL, NULL>
  gimple_resx <3>

  <bb 6> :
gimple_label <<L5>>
  gimple_assign <constructor, D.173769, {CLOBBER}, NULL, NULL>
  gimple_resx <2>

  <bb 7> :
gimple_label <<L6>>
  gimple_assign <constructor, D.173772, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function std::__uninitialized_copy_a<std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>, std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>, std::pair<int, int> > (_ZSt22__uninitialized_copy_aISt15_Deque_iteratorISt4pairIiiERKS2_PS3_ES0_IS2_RS2_PS2_ES2_ET0_T_SB_SA_RSaIT1_E, funcdef_no=9323, decl_uid=170402, cgraph_uid=2781, symbol_order=2833)

std::__uninitialized_copy_a<std::_Deque_iterator<std::pair<int, int>, const std::pair<int, int>&, const std::pair<int, int>*>, std::_Deque_iterator<std::pair<int, int>, std::pair<int, int>&, std::pair<int, int>*>, std::pair<int, int> > (struct _Deque_iterator & __first, struct _Deque_iterator & __last, struct _Deque_iterator & __result, struct allocator & D.170406)
{
  struct _Deque_iterator D.172505;
  struct _Deque_iterator D.172508;
  struct _Deque_iterator D.172511;

  <bb 2> :
  gimple_call <__ct_comp , NULL, &D.172511, __result_2(D)>
  gimple_call <__ct_comp , NULL, &D.172508, __last_4(D)>
  gimple_call <__ct_comp , NULL, &D.172505, __first_6(D)>
  gimple_call <uninitialized_copy, *_8(D), &D.172505, &D.172508, &D.172511> [return slot optimization]

  <bb 3> :
  gimple_assign <constructor, D.172505, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.172508, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.172511, {CLOBBER}, NULL, NULL>

  <bb 4> :
gimple_label <<L3>>
  gimple_return <_8(D)>

  <bb 5> :
gimple_label <<L4>>
  gimple_assign <constructor, D.172505, {CLOBBER}, NULL, NULL>
  gimple_resx <3>

  <bb 6> :
gimple_label <<L5>>
  gimple_assign <constructor, D.172508, {CLOBBER}, NULL, NULL>
  gimple_resx <2>

  <bb 7> :
gimple_label <<L6>>
  gimple_assign <constructor, D.172511, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int> >::_M_max_size (_ZNK9__gnu_cxx13new_allocatorISt4pairIiiEE11_M_max_sizeEv, funcdef_no=9907, decl_uid=163825, cgraph_uid=3365, symbol_order=3417)

__gnu_cxx::new_allocator<std::pair<int, int> >::_M_max_size (const struct new_allocator * const this)
{
  size_type D.177892;
  size_type _1;

  <bb 2> :
  gimple_assign <integer_cst, _1, 1152921504606846975, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_1>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int> >::allocate (_ZN9__gnu_cxx13new_allocatorISt4pairIiiEE8allocateEmPKv, funcdef_no=9875, decl_uid=163798, cgraph_uid=3333, symbol_order=3385)

__gnu_cxx::new_allocator<std::pair<int, int> >::allocate (struct new_allocator * const this, size_type __n, const void * D.163801)
{
  struct pair * D.177891;
  struct pair * D.177889;
  bool retval.3;
  long unsigned int _1;
  long unsigned int _2;
  bool retval.3_7;
  struct pair * _9;
  struct pair * _10;

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
  gimple_assign <mult_expr, _2, __n_6(D), 8, NULL>
  gimple_call <operator new, _9, _2>
  gimple_assign <ssa_name, _10, _9, NULL, NULL>

  <bb 5> :
gimple_label <<L2>>
  gimple_return <_10>

}



;; Function std::allocator_traits<std::allocator<std::pair<int, int> > >::allocate (_ZNSt16allocator_traitsISaISt4pairIiiEEE8allocateERS2_m, funcdef_no=9805, decl_uid=163940, cgraph_uid=3263, symbol_order=3315)

std::allocator_traits<std::allocator<std::pair<int, int> > >::allocate (struct allocator_type & __a, size_type __n)
{
  struct pair * D.177885;
  struct pair * D.177883;
  struct pair * _5;
  struct pair * _6;

  <bb 2> :
  gimple_call <allocate, _5, __a_2(D), __n_3(D), 0B>
  gimple_assign <ssa_name, _6, _5, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_allocate_node (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EE16_M_allocate_nodeEv, funcdef_no=9691, decl_uid=164428, cgraph_uid=3149, symbol_order=3201)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_allocate_node (struct _Deque_base * const this)
{
  struct pair * D.177882;
  struct pair * D.177880;
  long unsigned int _1;
  struct _Deque_impl * _2;
  struct pair * _7;
  struct pair * _8;

  <bb 2> :
  gimple_call <__deque_buf_size, _1, 8>
  gimple_assign <addr_expr, _2, &this_5(D)->_M_impl, NULL, NULL>
  gimple_call <allocate, _7, _2, _1>
  gimple_assign <ssa_name, _8, _7, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_8>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_create_nodes (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EE15_M_create_nodesEPPS1_S5_, funcdef_no=9605, decl_uid=164443, cgraph_uid=3063, symbol_order=3115)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_create_nodes (struct _Deque_base * const this, struct pair * * __nstart, struct pair * * __nfinish)
{
  struct pair * D.177876;
  struct pair * * __cur;
  struct pair * _1;
  void * _2;
  struct pair * _11;

  <bb 2> :
  gimple_assign <ssa_name, __cur_6, __nstart_5(D), NULL, NULL>

  <bb 3> :
  # gimple_phi <__cur_3, __cur_6(2), __cur_13(5)>
  gimple_cond <ge_expr, __cur_3, __nfinish_8(D), NULL, NULL>
    goto <bb 6>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 4> :
  gimple_call <_M_allocate_node, _11, this_9(D)>

  <bb 5> :
  gimple_assign <ssa_name, _1, _11, NULL, NULL>
  gimple_assign <ssa_name, *__cur_3, _1, NULL, NULL>
  gimple_assign <pointer_plus_expr, __cur_13, __cur_3, 8, NULL>
  goto <bb 3>; [INV]

  <bb 6> :
  gimple_return <NULL>

  <bb 7> :
gimple_label <<L3>>
  gimple_eh_dispatch <1>

  <bb 8> :
gimple_label <<L4>>
  gimple_call <__builtin_eh_pointer, _2, 1>
  gimple_call <__cxa_begin_catch, NULL, _2>
  gimple_call <_M_destroy_nodes, NULL, this_9(D), __nstart_5(D), __cur_3>
  gimple_call <__cxa_rethrow, NULL>

  <bb 9> :
gimple_label <<L5>>
  gimple_call <__cxa_end_catch, NULL>
  gimple_resx <2>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_initialize_map (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EE17_M_initialize_mapEm, funcdef_no=9480, decl_uid=164440, cgraph_uid=2938, symbol_order=2990)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_initialize_map (struct _Deque_base * const this, size_t __num_elements)
{
  struct pair * * D.177844;
  struct pair * * __nfinish;
  struct pair * * __nstart;
  const size_t __num_nodes;
  const long unsigned int D.173386;
  const long unsigned int D.173387;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  const long unsigned int & _4;
  long unsigned int _5;
  long unsigned int _6;
  struct pair * * _7;
  struct pair * * _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  void * _14;
  long unsigned int _15;
  struct pair * * _16;
  struct iterator * _17;
  struct iterator * _18;
  struct pair * * _19;
  struct pair * _20;
  struct pair * _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  struct pair * _25;
  struct pair * * _38;

  <bb 2> :
  gimple_call <__deque_buf_size, _1, 8>
  gimple_assign <trunc_div_expr, _2, __num_elements_28(D), _1, NULL>
  gimple_assign <plus_expr, __num_nodes_29, _2, 1, NULL>
  gimple_assign <plus_expr, _3, __num_nodes_29, 2, NULL>
  gimple_assign <ssa_name, D.173387, _3, NULL, NULL>
  gimple_assign <integer_cst, D.173386, 8, NULL, NULL>
  gimple_call <max, _4, &D.173386, &D.173387>
  gimple_assign <mem_ref, _5, *_4, NULL, NULL>
  gimple_assign <ssa_name, this_33(D)->_M_impl.D.164587._M_map_size, _5, NULL, NULL>
  gimple_assign <constructor, D.173386, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.173387, {CLOBBER}, NULL, NULL>
  gimple_assign <component_ref, _6, this_33(D)->_M_impl.D.164587._M_map_size, NULL, NULL>
  gimple_call <_M_allocate_map, _38, this_33(D), _6>
  gimple_assign <ssa_name, _7, _38, NULL, NULL>
  gimple_assign <ssa_name, this_33(D)->_M_impl.D.164587._M_map, _7, NULL, NULL>
  gimple_assign <component_ref, _8, this_33(D)->_M_impl.D.164587._M_map, NULL, NULL>
  gimple_assign <component_ref, _9, this_33(D)->_M_impl.D.164587._M_map_size, NULL, NULL>
  gimple_assign <minus_expr, _10, _9, __num_nodes_29, NULL>
  gimple_assign <trunc_div_expr, _11, _10, 2, NULL>
  gimple_assign <mult_expr, _12, _11, 8, NULL>
  gimple_assign <pointer_plus_expr, __nstart_40, _8, _12, NULL>
  gimple_assign <mult_expr, _13, __num_nodes_29, 8, NULL>
  gimple_assign <pointer_plus_expr, __nfinish_41, __nstart_40, _13, NULL>
  gimple_call <_M_create_nodes, NULL, this_33(D), __nstart_40, __nfinish_41>

  <bb 3> :
  gimple_assign <addr_expr, _17, &this_33(D)->_M_impl.D.164587._M_start, NULL, NULL>
  gimple_call <_M_set_node, NULL, _17, __nstart_40>
  gimple_assign <addr_expr, _18, &this_33(D)->_M_impl.D.164587._M_finish, NULL, NULL>
  gimple_assign <pointer_plus_expr, _19, __nfinish_41, 18446744073709551608, NULL>
  gimple_call <_M_set_node, NULL, _18, _19>
  gimple_assign <component_ref, _20, this_33(D)->_M_impl.D.164587._M_start._M_first, NULL, NULL>
  gimple_assign <ssa_name, this_33(D)->_M_impl.D.164587._M_start._M_cur, _20, NULL, NULL>
  gimple_assign <component_ref, _21, this_33(D)->_M_impl.D.164587._M_finish._M_first, NULL, NULL>
  gimple_call <__deque_buf_size, _22, 8>
  gimple_assign <trunc_mod_expr, _23, __num_elements_28(D), _22, NULL>
  gimple_assign <mult_expr, _24, _23, 8, NULL>
  gimple_assign <pointer_plus_expr, _25, _21, _24, NULL>
  gimple_assign <ssa_name, this_33(D)->_M_impl.D.164587._M_finish._M_cur, _25, NULL, NULL>
  gimple_return <NULL>

  <bb 4> :
gimple_label <<L0>>
  gimple_eh_dispatch <3>

  <bb 5> :
gimple_label <<L1>>
  gimple_call <__builtin_eh_pointer, _14, 3>
  gimple_call <__cxa_begin_catch, NULL, _14>
  gimple_assign <component_ref, _15, this_33(D)->_M_impl.D.164587._M_map_size, NULL, NULL>
  gimple_assign <component_ref, _16, this_33(D)->_M_impl.D.164587._M_map, NULL, NULL>
  gimple_call <_M_deallocate_map, NULL, this_33(D), _16, _15>
  gimple_assign <integer_cst, this_33(D)->_M_impl.D.164587._M_map, 0B, NULL, NULL>
  gimple_assign <integer_cst, this_33(D)->_M_impl.D.164587._M_map_size, 0, NULL, NULL>
  gimple_call <__cxa_rethrow, NULL>

  <bb 6> :
gimple_label <<L2>>
  gimple_call <__cxa_end_catch, NULL>
  gimple_resx <4>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_Deque_base (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EEC2Ev, funcdef_no=9295, decl_uid=164635, cgraph_uid=2753, symbol_order=2805)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_Deque_base (struct _Deque_base * const this)
{
  struct _Deque_impl * _1;
  struct _Deque_impl * _2;

  <bb 2> :
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_4(D)->_M_impl, NULL, NULL>
  gimple_call <__ct_comp , NULL, _1>
  gimple_call <_M_initialize_map, NULL, this_4(D), 0>

  <bb 3> :
  gimple_return <NULL>

  <bb 4> :
gimple_label <<L0>>
  gimple_assign <addr_expr, _2, &this_4(D)->_M_impl, NULL, NULL>
  gimple_call <__dt_comp , NULL, _2>
  gimple_resx <1>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::deque (_ZNSt5dequeISt4pairIiiESaIS1_EEC2Ev, funcdef_no=8999, decl_uid=165179, cgraph_uid=2456, symbol_order=2508)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::deque (struct deque * const this)
{
  struct _Deque_base * _1;
  struct _Deque_base * _2;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_3(D)->D.165187, NULL, NULL>
  gimple_call <__ct_base , NULL, _1>
  gimple_return <NULL>

}



;; Function std::stack<std::pair<int, int> >::stack<> (_ZNSt5stackISt4pairIiiESt5dequeIS1_SaIS1_EEEC2IS4_vEEv, funcdef_no=9001, decl_uid=165545, cgraph_uid=2459, symbol_order=2511)

std::stack<std::pair<int, int> >::stack<> (struct stack * const this)
{
  struct deque * _1;
  struct deque * _2;

  <bb 2> :
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, this_4(D)->c, {}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_4(D)->c, NULL, NULL>
  gimple_call <__ct_comp , NULL, _1>
  gimple_return <NULL>

}



;; Function std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_Deque_base (_ZNSt11_Deque_baseISt4pairIiiESaIS1_EEC2ERKS2_m, funcdef_no=9316, decl_uid=164623, cgraph_uid=2774, symbol_order=2826)

std::_Deque_base<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_Deque_base (struct _Deque_base * const this, const struct allocator_type & __a, size_t __num_elements)
{
  struct _Deque_impl * _1;
  struct _Deque_impl * _2;

  <bb 2> :
  gimple_assign <constructor, *this_4(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_4(D)->_M_impl, NULL, NULL>
  gimple_call <__ct_comp , NULL, _1, __a_6(D)>
  gimple_call <_M_initialize_map, NULL, this_4(D), __num_elements_8(D)>

  <bb 3> :
  gimple_return <NULL>

  <bb 4> :
gimple_label <<L0>>
  gimple_assign <addr_expr, _2, &this_4(D)->_M_impl, NULL, NULL>
  gimple_call <__dt_comp , NULL, _2>
  gimple_resx <1>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::deque (_ZNSt5dequeISt4pairIiiESaIS1_EEC2ERKS3_, funcdef_no=9011, decl_uid=165150, cgraph_uid=2469, symbol_order=2521)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::deque (struct deque * const this, const struct deque & __x)
{
  struct const_iterator D.170432;
  struct const_iterator D.170433;
  struct _Deque_iterator D.170434;
  struct _Deque_iterator D.170431;
  struct allocator D.170430;
  struct _Deque_base * _1;
  long unsigned int _2;
  const struct _Deque_base * _3;
  const struct _Tp_alloc_type & _4;
  struct _Deque_base * _5;
  struct _Tp_alloc_type & _6;
  struct iterator * _7;
  struct _Deque_base * _8;

  <bb 2> :
  gimple_assign <constructor, *this_10(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_10(D)->D.165187, NULL, NULL>
  gimple_call <size, _2, __x_12(D)>
  gimple_assign <addr_expr, _3, &__x_12(D)->D.165187, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _4, _3>
  gimple_call <_S_select_on_copy, D.170430, _4> [return slot optimization]
  gimple_call <__ct_base , NULL, _1, &D.170430, _2>

  <bb 3> :
  gimple_call <__dt_comp , NULL, &D.170430>
  gimple_assign <constructor, D.170430, {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _5, &this_10(D)->D.165187, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _6, _5>
  gimple_assign <addr_expr, _7, &this_10(D)->D.165187._M_impl.D.164587._M_start, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.170434, _7>
  gimple_call <end, D.170433, __x_12(D)> [return slot optimization]
  gimple_call <begin, D.170432, __x_12(D)> [return slot optimization]
  gimple_call <__uninitialized_copy_a, D.170431, &D.170432, &D.170433, &D.170434, _6> [return slot optimization]

  <bb 4> :
  gimple_assign <constructor, D.170431, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.170432, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.170433, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.170434, {CLOBBER}, NULL, NULL>
  gimple_return <NULL>

  <bb 5> :
gimple_label <<L0>>
  gimple_call <__dt_comp , NULL, &D.170430>
  gimple_resx <2>

  <bb 6> :
gimple_label <<L1>>
  gimple_assign <constructor, D.170430, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

  <bb 7> :
gimple_label <<L2>>
  gimple_assign <constructor, D.170432, {CLOBBER}, NULL, NULL>
  gimple_resx <8>

  <bb 8> :
gimple_label <<L3>>
  gimple_assign <constructor, D.170433, {CLOBBER}, NULL, NULL>
  gimple_resx <7>

  <bb 9> :
gimple_label <<L4>>
  gimple_assign <constructor, D.170434, {CLOBBER}, NULL, NULL>
  gimple_resx <6>

  <bb 10> :
gimple_label <<L5>>
  gimple_assign <addr_expr, _8, &this_10(D)->D.165187, NULL, NULL>
  gimple_call <__dt_base , NULL, _8>
  gimple_resx <5>

}



;; Function std::stack<std::pair<int, int> >::stack (_ZNSt5stackISt4pairIiiESt5dequeIS1_SaIS1_EEEC2ERKS5_, funcdef_no=8419, decl_uid=165423, cgraph_uid=1876, symbol_order=1925)

std::stack<std::pair<int, int> >::stack (struct stack * const this, const struct stack & D.165425)
{
  struct deque * _1;
  const struct deque * _2;
  struct deque * _3;

  <bb 2> :
  gimple_assign <constructor, *this_5(D), {CLOBBER}, NULL, NULL>
  gimple_assign <addr_expr, _1, &this_5(D)->c, NULL, NULL>
  gimple_assign <addr_expr, _2, &_7(D)->c, NULL, NULL>
  gimple_call <__ct_comp , NULL, _1, _2>
  gimple_return <NULL>

}



;; Function __gnu_cxx::new_allocator<std::pair<int, int> >::max_size (_ZNK9__gnu_cxx13new_allocatorISt4pairIiiEE8max_sizeEv, funcdef_no=9908, decl_uid=163806, cgraph_uid=3366, symbol_order=3418)

__gnu_cxx::new_allocator<std::pair<int, int> >::max_size (const struct new_allocator * const this)
{
  size_type D.177922;
  size_type _4;

  <bb 2> :
  gimple_call <_M_max_size, _4, this_2(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4>

}



;; Function std::allocator_traits<std::allocator<std::pair<int, int> > >::max_size (_ZNSt16allocator_traitsISaISt4pairIiiEEE8max_sizeERKS2_, funcdef_no=9876, decl_uid=163960, cgraph_uid=3334, symbol_order=3386)

std::allocator_traits<std::allocator<std::pair<int, int> > >::max_size (const struct allocator_type & __a)
{
  size_type D.177920;
  size_type _4;

  <bb 2> :
  gimple_call <max_size, _4, __a_2(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_4>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_S_max_size (_ZNSt5dequeISt4pairIiiESaIS1_EE11_S_max_sizeERKS2_, funcdef_no=9810, decl_uid=164895, cgraph_uid=3268, symbol_order=3320)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_S_max_size (const struct _Tp_alloc_type & __a)
{
  const size_t __allocmax;
  const size_t __diffmax;
  size_type D.177917;
  long unsigned int _1;
  const long unsigned int & _2;
  size_type _9;

  <bb 2> :
  gimple_assign <integer_cst, __diffmax, 9223372036854775807, NULL, NULL>
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



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::max_size (_ZNKSt5dequeISt4pairIiiESaIS1_EE8max_sizeEv, funcdef_no=9704, decl_uid=164792, cgraph_uid=3162, symbol_order=3214)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::max_size (const struct deque * const this)
{
  size_type D.177915;
  const struct _Deque_base * _1;
  const struct _Tp_alloc_type & _2;
  size_type _7;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_3(D)->D.165187, NULL, NULL>
  gimple_call <_M_get_Tp_allocator, _2, _1>
  gimple_call <_S_max_size, _7, _2>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::__miter_base<std::pair<int, int>**> (_ZSt12__miter_baseIPPSt4pairIiiEET_S4_, funcdef_no=9909, decl_uid=177057, cgraph_uid=3367, symbol_order=3419)

std::__miter_base<std::pair<int, int>**> (struct pair * * __it)
{
  struct pair * * D.177949;
  struct pair * * _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __it_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::__niter_base<std::pair<int, int>**> (_ZSt12__niter_baseIPPSt4pairIiiEET_S4_, funcdef_no=9916, decl_uid=177120, cgraph_uid=3374, symbol_order=3426)

std::__niter_base<std::pair<int, int>**> (struct pair * * __it)
{
  struct pair * * D.177954;
  struct pair * * _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __it_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::__niter_wrap<std::pair<int, int>**> (_ZSt12__niter_wrapIPPSt4pairIiiEET_RKS4_S4_, funcdef_no=9918, decl_uid=177243, cgraph_uid=3376, symbol_order=3428)

std::__niter_wrap<std::pair<int, int>**> (struct pair * * const & D.177244, struct pair * * __res)
{
  struct pair * * D.177966;
  struct pair * * _2;

  <bb 2> :
  gimple_assign <ssa_name, _2, __res_1(D), NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_2>

}



;; Function std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<std::pair<int, int>*> (_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIPSt4pairIiiEEEPT_PKS6_S9_S7_, funcdef_no=9924, decl_uid=177303, cgraph_uid=3383, symbol_order=3435)

std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<std::pair<int, int>*> (struct pair * const * __first, struct pair * const * __last, struct pair * * __result)
{
  const ptrdiff_t _Num;
  struct pair * * D.177982;
  long int _1;
  long unsigned int _Num.15_2;
  long unsigned int _3;
  long unsigned int _Num.16_4;
  long unsigned int _5;
  struct pair * * _13;

  <bb 2> :
  gimple_assign <pointer_diff_expr, _1, __last_7(D), __first_8(D), NULL>
  gimple_assign <exact_div_expr, _Num_9, _1, 8, NULL>
  gimple_cond <ne_expr, _Num_9, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <nop_expr, _Num.15_2, _Num_9, NULL, NULL>
  gimple_assign <mult_expr, _3, _Num.15_2, 8, NULL>
  gimple_call <__builtin_memmove, NULL, __result_11(D), __first_8(D), _3>

  <bb 4> :
  gimple_assign <nop_expr, _Num.16_4, _Num_9, NULL, NULL>
  gimple_assign <mult_expr, _5, _Num.16_4, 8, NULL>
  gimple_assign <pointer_plus_expr, _13, __result_11(D), _5, NULL>

  <bb 5> :
gimple_label <<L3>>
  gimple_return <_13>

}



;; Function std::__copy_move_a2<false, std::pair<int, int>**, std::pair<int, int>**> (_ZSt14__copy_move_a2ILb0EPPSt4pairIiiES3_ET1_T0_S5_S4_, funcdef_no=9921, decl_uid=177265, cgraph_uid=3379, symbol_order=3431)

std::__copy_move_a2<false, std::pair<int, int>**, std::pair<int, int>**> (struct pair * * __first, struct pair * * __last, struct pair * * __result)
{
  struct pair * * D.177977;
  struct pair * * _6;

  <bb 2> :
  gimple_call <__copy_m, _6, __first_2(D), __last_3(D), __result_4(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::__copy_move_a1<false, std::pair<int, int>**, std::pair<int, int>**> (_ZSt14__copy_move_a1ILb0EPPSt4pairIiiES3_ET1_T0_S5_S4_, funcdef_no=9917, decl_uid=177239, cgraph_uid=3375, symbol_order=3427)

std::__copy_move_a1<false, std::pair<int, int>**, std::pair<int, int>**> (struct pair * * __first, struct pair * * __last, struct pair * * __result)
{
  struct pair * * D.177976;
  struct pair * * D.177974;
  struct pair * * _6;
  struct pair * * _7;

  <bb 2> :
  gimple_call <__copy_move_a2, _6, __first_2(D), __last_3(D), __result_4(D)>
  gimple_assign <ssa_name, _7, _6, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::__copy_move_a<false, std::pair<int, int>**, std::pair<int, int>**> (_ZSt13__copy_move_aILb0EPPSt4pairIiiES3_ET1_T0_S5_S4_, funcdef_no=9910, decl_uid=177059, cgraph_uid=3369, symbol_order=3421)

std::__copy_move_a<false, std::pair<int, int>**, std::pair<int, int>**> (struct pair * * __first, struct pair * * __last, struct pair * * __result)
{
  struct pair * * D.177973;
  struct pair * * D.177971;
  struct pair * * __result.14_1;
  struct pair * * _2;
  struct pair * * _3;
  struct pair * * _4;
  struct pair * * _5;
  struct pair * * _13;
  struct pair * * _15;

  <bb 2> :
  gimple_assign <parm_decl, __result.14_1, __result, NULL, NULL>
  gimple_call <__niter_base, _2, __result.14_1>
  gimple_call <__niter_base, _3, __last_8(D)>
  gimple_call <__niter_base, _4, __first_10(D)>
  gimple_call <__copy_move_a1, _13, _4, _3, _2>
  gimple_assign <ssa_name, _5, _13, NULL, NULL>
  gimple_call <__niter_wrap, _15, &__result, _5>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_15>

}



;; Function std::copy<std::pair<int, int>**, std::pair<int, int>**> (_ZSt4copyIPPSt4pairIiiES3_ET0_T_S5_S4_, funcdef_no=9877, decl_uid=176893, cgraph_uid=3335, symbol_order=3387)

std::copy<std::pair<int, int>**, std::pair<int, int>**> (struct pair * * __first, struct pair * * __last, struct pair * * __result)
{
  struct pair * * D.177970;
  struct pair * * D.177968;
  struct pair * * _1;
  struct pair * * _2;
  struct pair * * _10;
  struct pair * * _11;

  <bb 2> :
  gimple_call <__miter_base, _1, __last_4(D)>
  gimple_call <__miter_base, _2, __first_6(D)>
  gimple_call <__copy_move_a, _10, _2, _1, __result_8(D)>
  gimple_assign <ssa_name, _11, _10, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_11>

}



;; Function std::__copy_move_backward<false, true, std::random_access_iterator_tag>::__copy_move_b<std::pair<int, int>*> (_ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIPSt4pairIiiEEEPT_PKS6_S9_S7_, funcdef_no=9926, decl_uid=177318, cgraph_uid=3384, symbol_order=3436)

std::__copy_move_backward<false, true, std::random_access_iterator_tag>::__copy_move_b<std::pair<int, int>*> (struct pair * const * __first, struct pair * const * __last, struct pair * * __result)
{
  const ptrdiff_t _Num;
  struct pair * * D.177964;
  long int _1;
  long unsigned int _Num.11_2;
  long unsigned int _3;
  long unsigned int _Num.12_4;
  long unsigned int _5;
  sizetype _6;
  struct pair * * _7;
  long unsigned int _Num.13_8;
  long unsigned int _9;
  sizetype _10;
  struct pair * * _18;

  <bb 2> :
  gimple_assign <pointer_diff_expr, _1, __last_12(D), __first_13(D), NULL>
  gimple_assign <exact_div_expr, _Num_14, _1, 8, NULL>
  gimple_cond <ne_expr, _Num_14, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_assign <nop_expr, _Num.11_2, _Num_14, NULL, NULL>
  gimple_assign <mult_expr, _3, _Num.11_2, 8, NULL>
  gimple_assign <nop_expr, _Num.12_4, _Num_14, NULL, NULL>
  gimple_assign <mult_expr, _5, _Num.12_4, 8, NULL>
  gimple_assign <negate_expr, _6, _5, NULL, NULL>
  gimple_assign <pointer_plus_expr, _7, __result_16(D), _6, NULL>
  gimple_call <__builtin_memmove, NULL, _7, __first_13(D), _3>

  <bb 4> :
  gimple_assign <nop_expr, _Num.13_8, _Num_14, NULL, NULL>
  gimple_assign <mult_expr, _9, _Num.13_8, 8, NULL>
  gimple_assign <negate_expr, _10, _9, NULL, NULL>
  gimple_assign <pointer_plus_expr, _18, __result_16(D), _10, NULL>

  <bb 5> :
gimple_label <<L3>>
  gimple_return <_18>

}



;; Function std::__copy_move_backward_a2<false, std::pair<int, int>**, std::pair<int, int>**> (_ZSt23__copy_move_backward_a2ILb0EPPSt4pairIiiES3_ET1_T0_S5_S4_, funcdef_no=9922, decl_uid=177271, cgraph_uid=3380, symbol_order=3432)

std::__copy_move_backward_a2<false, std::pair<int, int>**, std::pair<int, int>**> (struct pair * * __first, struct pair * * __last, struct pair * * __result)
{
  struct pair * * D.177959;
  struct pair * * _6;

  <bb 2> :
  gimple_call <__copy_move_b, _6, __first_2(D), __last_3(D), __result_4(D)>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_6>

}



;; Function std::__copy_move_backward_a1<false, std::pair<int, int>**, std::pair<int, int>**> (_ZSt23__copy_move_backward_a1ILb0EPPSt4pairIiiES3_ET1_T0_S5_S4_, funcdef_no=9919, decl_uid=177250, cgraph_uid=3377, symbol_order=3429)

std::__copy_move_backward_a1<false, std::pair<int, int>**, std::pair<int, int>**> (struct pair * * __first, struct pair * * __last, struct pair * * __result)
{
  struct pair * * D.177958;
  struct pair * * D.177956;
  struct pair * * _6;
  struct pair * * _7;

  <bb 2> :
  gimple_call <__copy_move_backward_a2, _6, __first_2(D), __last_3(D), __result_4(D)>
  gimple_assign <ssa_name, _7, _6, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_7>

}



;; Function std::__copy_move_backward_a<false, std::pair<int, int>**, std::pair<int, int>**> (_ZSt22__copy_move_backward_aILb0EPPSt4pairIiiES3_ET1_T0_S5_S4_, funcdef_no=9912, decl_uid=177064, cgraph_uid=3370, symbol_order=3422)

std::__copy_move_backward_a<false, std::pair<int, int>**, std::pair<int, int>**> (struct pair * * __first, struct pair * * __last, struct pair * * __result)
{
  struct pair * * D.177953;
  struct pair * * D.177951;
  struct pair * * __result.10_1;
  struct pair * * _2;
  struct pair * * _3;
  struct pair * * _4;
  struct pair * * _5;
  struct pair * * _13;
  struct pair * * _15;

  <bb 2> :
  gimple_assign <parm_decl, __result.10_1, __result, NULL, NULL>
  gimple_call <__niter_base, _2, __result.10_1>
  gimple_call <__niter_base, _3, __last_8(D)>
  gimple_call <__niter_base, _4, __first_10(D)>
  gimple_call <__copy_move_backward_a1, _13, _4, _3, _2>
  gimple_assign <ssa_name, _5, _13, NULL, NULL>
  gimple_call <__niter_wrap, _15, &__result, _5>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_15>

}



;; Function std::copy_backward<std::pair<int, int>**, std::pair<int, int>**> (_ZSt13copy_backwardIPPSt4pairIiiES3_ET0_T_S5_S4_, funcdef_no=9878, decl_uid=176897, cgraph_uid=3336, symbol_order=3388)

std::copy_backward<std::pair<int, int>**, std::pair<int, int>**> (struct pair * * __first, struct pair * * __last, struct pair * * __result)
{
  struct pair * * D.177948;
  struct pair * * D.177946;
  struct pair * * _1;
  struct pair * * _2;
  struct pair * * _10;
  struct pair * * _11;

  <bb 2> :
  gimple_call <__miter_base, _1, __last_4(D)>
  gimple_call <__miter_base, _2, __first_6(D)>
  gimple_call <__copy_move_backward_a, _10, _2, _1, __result_8(D)>
  gimple_assign <ssa_name, _11, _10, NULL, NULL>

  <bb 3> :
gimple_label <<L0>>
  gimple_return <_11>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_reallocate_map (_ZNSt5dequeISt4pairIiiESaIS1_EE17_M_reallocate_mapEmb, funcdef_no=9811, decl_uid=165029, cgraph_uid=3269, symbol_order=3321)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_reallocate_map (struct deque * const this, size_type __nodes_to_add, bool __add_at_front)
{
  struct pair * * D.177945;
  struct pair * * __new_map;
  size_type __new_map_size;
  struct pair * * __new_nstart;
  const size_type __new_num_nodes;
  const size_type __old_num_nodes;
  sizetype iftmp.8;
  sizetype iftmp.6;
  struct pair * * _1;
  struct pair * * _2;
  long int _3;
  long int _4;
  long int _5;
  long unsigned int __nodes_to_add.5_6;
  long unsigned int _7;
  long unsigned int _8;
  struct pair * * _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int __nodes_to_add.7_14;
  sizetype _15;
  struct pair * * _16;
  struct pair * * _17;
  struct pair * * _18;
  struct pair * * _19;
  long unsigned int _20;
  struct pair * * _21;
  struct pair * * _22;
  struct pair * * _23;
  struct pair * * _24;
  long unsigned int _25;
  size_t * _26;
  const long unsigned int & _27;
  long unsigned int _28;
  long unsigned int _29;
  struct _Deque_base * _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  long unsigned int __nodes_to_add.9_34;
  sizetype _35;
  struct pair * * _36;
  struct pair * * _37;
  struct pair * * _38;
  struct _Deque_base * _39;
  long unsigned int _40;
  struct pair * * _41;
  struct iterator * _42;
  struct iterator * _43;
  long unsigned int _44;
  sizetype _45;
  struct pair * * _46;
  sizetype iftmp.6_48;
  sizetype iftmp.8_49;
  struct pair * * _58;
  sizetype iftmp.8_61;
  sizetype iftmp.8_62;
  sizetype iftmp.6_68;
  sizetype iftmp.6_69;

  <bb 2> :
  gimple_assign <component_ref, _1, this_52(D)->D.165187._M_impl.D.164587._M_finish._M_node, NULL, NULL>
  gimple_assign <component_ref, _2, this_52(D)->D.165187._M_impl.D.164587._M_start._M_node, NULL, NULL>
  gimple_assign <pointer_diff_expr, _3, _1, _2, NULL>
  gimple_assign <exact_div_expr, _4, _3, 8, NULL>
  gimple_assign <plus_expr, _5, _4, 1, NULL>
  gimple_assign <nop_expr, __old_num_nodes_53, _5, NULL, NULL>
  gimple_assign <parm_decl, __nodes_to_add.5_6, __nodes_to_add, NULL, NULL>
  gimple_assign <plus_expr, __new_num_nodes_54, __old_num_nodes_53, __nodes_to_add.5_6, NULL>
  gimple_assign <component_ref, _7, this_52(D)->D.165187._M_impl.D.164587._M_map_size, NULL, NULL>
  gimple_assign <mult_expr, _8, __new_num_nodes_54, 2, NULL>
  gimple_cond <gt_expr, _7, _8, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 9>; [INV]

  <bb 3> :
  gimple_assign <component_ref, _9, this_52(D)->D.165187._M_impl.D.164587._M_map, NULL, NULL>
  gimple_assign <component_ref, _10, this_52(D)->D.165187._M_impl.D.164587._M_map_size, NULL, NULL>
  gimple_assign <minus_expr, _11, _10, __new_num_nodes_54, NULL>
  gimple_assign <trunc_div_expr, _12, _11, 2, NULL>
  gimple_assign <mult_expr, _13, _12, 8, NULL>
  gimple_cond <ne_expr, __add_at_front_60(D), 0, NULL, NULL>
    goto <bb 4>; [INV]
  else
    goto <bb 5>; [INV]

  <bb 4> :
  gimple_assign <parm_decl, __nodes_to_add.7_14, __nodes_to_add, NULL, NULL>
  gimple_assign <mult_expr, iftmp.6_69, __nodes_to_add.7_14, 8, NULL>
  goto <bb 6>; [INV]

  <bb 5> :
  gimple_assign <integer_cst, iftmp.6_68, 0, NULL, NULL>

  <bb 6> :
  # gimple_phi <iftmp.6_48, iftmp.6_69(4), iftmp.6_68(5)>
  gimple_assign <plus_expr, _15, iftmp.6_48, _13, NULL>
  gimple_assign <pointer_plus_expr, __new_nstart_70, _9, _15, NULL>
  gimple_assign <component_ref, _16, this_52(D)->D.165187._M_impl.D.164587._M_start._M_node, NULL, NULL>
  gimple_cond <lt_expr, __new_nstart_70, _16, NULL, NULL>
    goto <bb 7>; [INV]
  else
    goto <bb 8>; [INV]

  <bb 7> :
  gimple_assign <component_ref, _17, this_52(D)->D.165187._M_impl.D.164587._M_finish._M_node, NULL, NULL>
  gimple_assign <pointer_plus_expr, _18, _17, 8, NULL>
  gimple_assign <component_ref, _19, this_52(D)->D.165187._M_impl.D.164587._M_start._M_node, NULL, NULL>
  gimple_call <copy, NULL, _19, _18, __new_nstart_70>
  goto <bb 13>; [INV]

  <bb 8> :
  gimple_assign <mult_expr, _20, __old_num_nodes_53, 8, NULL>
  gimple_assign <pointer_plus_expr, _21, __new_nstart_70, _20, NULL>
  gimple_assign <component_ref, _22, this_52(D)->D.165187._M_impl.D.164587._M_finish._M_node, NULL, NULL>
  gimple_assign <pointer_plus_expr, _23, _22, 8, NULL>
  gimple_assign <component_ref, _24, this_52(D)->D.165187._M_impl.D.164587._M_start._M_node, NULL, NULL>
  gimple_call <copy_backward, NULL, _24, _23, _21>
  goto <bb 13>; [INV]

  <bb 9> :
  gimple_assign <component_ref, _25, this_52(D)->D.165187._M_impl.D.164587._M_map_size, NULL, NULL>
  gimple_assign <addr_expr, _26, &this_52(D)->D.165187._M_impl.D.164587._M_map_size, NULL, NULL>
  gimple_call <max, _27, _26, &__nodes_to_add>
  gimple_assign <mem_ref, _28, *_27, NULL, NULL>
  gimple_assign <plus_expr, _29, _25, _28, NULL>
  gimple_assign <plus_expr, __new_map_size_56, _29, 2, NULL>
  gimple_assign <addr_expr, _30, &this_52(D)->D.165187, NULL, NULL>
  gimple_call <_M_allocate_map, _58, _30, __new_map_size_56>
  gimple_assign <ssa_name, __new_map_59, _58, NULL, NULL>
  gimple_assign <minus_expr, _31, __new_map_size_56, __new_num_nodes_54, NULL>
  gimple_assign <trunc_div_expr, _32, _31, 2, NULL>
  gimple_assign <mult_expr, _33, _32, 8, NULL>
  gimple_cond <ne_expr, __add_at_front_60(D), 0, NULL, NULL>
    goto <bb 10>; [INV]
  else
    goto <bb 11>; [INV]

  <bb 10> :
  gimple_assign <parm_decl, __nodes_to_add.9_34, __nodes_to_add, NULL, NULL>
  gimple_assign <mult_expr, iftmp.8_62, __nodes_to_add.9_34, 8, NULL>
  goto <bb 12>; [INV]

  <bb 11> :
  gimple_assign <integer_cst, iftmp.8_61, 0, NULL, NULL>

  <bb 12> :
  # gimple_phi <iftmp.8_49, iftmp.8_62(10), iftmp.8_61(11)>
  gimple_assign <plus_expr, _35, iftmp.8_49, _33, NULL>
  gimple_assign <pointer_plus_expr, __new_nstart_63, __new_map_59, _35, NULL>
  gimple_assign <component_ref, _36, this_52(D)->D.165187._M_impl.D.164587._M_finish._M_node, NULL, NULL>
  gimple_assign <pointer_plus_expr, _37, _36, 8, NULL>
  gimple_assign <component_ref, _38, this_52(D)->D.165187._M_impl.D.164587._M_start._M_node, NULL, NULL>
  gimple_call <copy, NULL, _38, _37, __new_nstart_63>
  gimple_assign <addr_expr, _39, &this_52(D)->D.165187, NULL, NULL>
  gimple_assign <component_ref, _40, this_52(D)->D.165187._M_impl.D.164587._M_map_size, NULL, NULL>
  gimple_assign <component_ref, _41, this_52(D)->D.165187._M_impl.D.164587._M_map, NULL, NULL>
  gimple_call <_M_deallocate_map, NULL, _39, _41, _40>
  gimple_assign <ssa_name, this_52(D)->D.165187._M_impl.D.164587._M_map, __new_map_59, NULL, NULL>
  gimple_assign <ssa_name, this_52(D)->D.165187._M_impl.D.164587._M_map_size, __new_map_size_56, NULL, NULL>

  <bb 13> :
  # gimple_phi <__new_nstart_47, __new_nstart_70(8), __new_nstart_63(12), __new_nstart_70(7)>
  gimple_assign <addr_expr, _42, &this_52(D)->D.165187._M_impl.D.164587._M_start, NULL, NULL>
  gimple_call <_M_set_node, NULL, _42, __new_nstart_47>
  gimple_assign <addr_expr, _43, &this_52(D)->D.165187._M_impl.D.164587._M_finish, NULL, NULL>
  gimple_assign <mult_expr, _44, __old_num_nodes_53, 8, NULL>
  gimple_assign <plus_expr, _45, _44, 18446744073709551608, NULL>
  gimple_assign <pointer_plus_expr, _46, __new_nstart_47, _45, NULL>
  gimple_call <_M_set_node, NULL, _43, _46>
  gimple_return <NULL>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_reserve_map_at_back (_ZNSt5dequeISt4pairIiiESaIS1_EE22_M_reserve_map_at_backEm, funcdef_no=9705, decl_uid=165023, cgraph_uid=3163, symbol_order=3215)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_reserve_map_at_back (struct deque * const this, size_type __nodes_to_add)
{
  long unsigned int _1;
  long unsigned int _2;
  struct pair * * _3;
  struct pair * * _4;
  long int _5;
  long int _6;
  long unsigned int _7;
  long unsigned int _8;

  <bb 2> :
  gimple_assign <plus_expr, _1, __nodes_to_add_10(D), 1, NULL>
  gimple_assign <component_ref, _2, this_12(D)->D.165187._M_impl.D.164587._M_map_size, NULL, NULL>
  gimple_assign <component_ref, _3, this_12(D)->D.165187._M_impl.D.164587._M_finish._M_node, NULL, NULL>
  gimple_assign <component_ref, _4, this_12(D)->D.165187._M_impl.D.164587._M_map, NULL, NULL>
  gimple_assign <pointer_diff_expr, _5, _3, _4, NULL>
  gimple_assign <exact_div_expr, _6, _5, 8, NULL>
  gimple_assign <nop_expr, _7, _6, NULL, NULL>
  gimple_assign <minus_expr, _8, _2, _7, NULL>
  gimple_cond <gt_expr, _1, _8, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <_M_reallocate_map, NULL, this_12(D), __nodes_to_add_10(D), 0>

  <bb 4> :
  gimple_return <NULL>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_push_back_aux<std::pair<int, int> > (_ZNSt5dequeISt4pairIiiESaIS1_EE16_M_push_back_auxIJS1_EEEvDpOT_, funcdef_no=9618, decl_uid=173530, cgraph_uid=3076, symbol_order=3128)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::_M_push_back_aux<std::pair<int, int> > (struct deque * const this, struct pair & __args#0)
{
  struct pair * D.177910;
  bool retval.4;
  long unsigned int _1;
  long unsigned int _2;
  struct _Deque_base * _3;
  struct pair * * _4;
  struct pair * * _5;
  struct pair * _6;
  struct pair & _7;
  struct pair * _8;
  struct _Deque_impl * _9;
  struct iterator * _10;
  struct pair * * _11;
  struct pair * * _12;
  struct pair * _13;
  void * _14;
  struct _Deque_base * _15;
  struct pair * * _16;
  struct pair * * _17;
  struct pair * _18;
  bool retval.4_23;
  struct pair * _26;

  <bb 2> :
  gimple_call <size, _1, this_20(D)>
  gimple_call <max_size, _2, this_20(D)>
  gimple_assign <eq_expr, retval.4_23, _1, _2, NULL>
  gimple_cond <ne_expr, retval.4_23, 0, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <__throw_length_error, NULL, "cannot create std::deque larger than max_size()">

  <bb 4> :
  gimple_call <_M_reserve_map_at_back, NULL, this_20(D), 1>
  gimple_assign <addr_expr, _3, &this_20(D)->D.165187, NULL, NULL>
  gimple_assign <component_ref, _4, this_20(D)->D.165187._M_impl.D.164587._M_finish._M_node, NULL, NULL>
  gimple_assign <pointer_plus_expr, _5, _4, 8, NULL>
  gimple_call <_M_allocate_node, _26, _3>
  gimple_assign <ssa_name, _6, _26, NULL, NULL>
  gimple_assign <ssa_name, *_5, _6, NULL, NULL>
  gimple_call <forward, _7, __args#0_28(D)>
  gimple_assign <component_ref, _8, this_20(D)->D.165187._M_impl.D.164587._M_finish._M_cur, NULL, NULL>
  gimple_assign <addr_expr, _9, &this_20(D)->D.165187._M_impl, NULL, NULL>
  gimple_call <construct, NULL, _9, _8, _7>
  gimple_assign <addr_expr, _10, &this_20(D)->D.165187._M_impl.D.164587._M_finish, NULL, NULL>
  gimple_assign <component_ref, _11, this_20(D)->D.165187._M_impl.D.164587._M_finish._M_node, NULL, NULL>
  gimple_assign <pointer_plus_expr, _12, _11, 8, NULL>
  gimple_call <_M_set_node, NULL, _10, _12>
  gimple_assign <component_ref, _13, this_20(D)->D.165187._M_impl.D.164587._M_finish._M_first, NULL, NULL>
  gimple_assign <ssa_name, this_20(D)->D.165187._M_impl.D.164587._M_finish._M_cur, _13, NULL, NULL>
  gimple_return <NULL>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::emplace_back<std::pair<int, int> > (_ZNSt5dequeISt4pairIiiESaIS1_EE12emplace_backIJS1_EEEvDpOT_, funcdef_no=9484, decl_uid=172450, cgraph_uid=2942, symbol_order=2994)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::emplace_back<std::pair<int, int> > (struct deque * const this, struct pair & __args#0)
{
  struct pair * _1;
  struct pair * _2;
  struct pair * _3;
  struct pair & _4;
  struct pair * _5;
  struct _Deque_impl * _6;
  struct pair * _7;
  struct pair * _8;
  struct pair & _9;

  <bb 2> :
  gimple_assign <component_ref, _1, this_12(D)->D.165187._M_impl.D.164587._M_finish._M_cur, NULL, NULL>
  gimple_assign <component_ref, _2, this_12(D)->D.165187._M_impl.D.164587._M_finish._M_last, NULL, NULL>
  gimple_assign <pointer_plus_expr, _3, _2, 18446744073709551608, NULL>
  gimple_cond <ne_expr, _1, _3, NULL, NULL>
    goto <bb 3>; [INV]
  else
    goto <bb 4>; [INV]

  <bb 3> :
  gimple_call <forward, _4, __args#0_13(D)>
  gimple_assign <component_ref, _5, this_12(D)->D.165187._M_impl.D.164587._M_finish._M_cur, NULL, NULL>
  gimple_assign <addr_expr, _6, &this_12(D)->D.165187._M_impl, NULL, NULL>
  gimple_call <construct, NULL, _6, _5, _4>
  gimple_assign <component_ref, _7, this_12(D)->D.165187._M_impl.D.164587._M_finish._M_cur, NULL, NULL>
  gimple_assign <pointer_plus_expr, _8, _7, 8, NULL>
  gimple_assign <ssa_name, this_12(D)->D.165187._M_impl.D.164587._M_finish._M_cur, _8, NULL, NULL>
  goto <bb 5>; [INV]

  <bb 4> :
  gimple_call <forward, _9, __args#0_13(D)>
  gimple_call <_M_push_back_aux, NULL, this_12(D), _9>

  <bb 5> :
  gimple_return <NULL>

}



;; Function std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::push_back (_ZNSt5dequeISt4pairIiiESaIS1_EE9push_backEOS1_, funcdef_no=9308, decl_uid=164841, cgraph_uid=2766, symbol_order=2818)

std::deque<std::pair<int, int>, std::allocator<std::pair<int, int> > >::push_back (struct deque * const this, struct value_type & __x)
{
  struct type & _1;

  <bb 2> :
  gimple_call <move, _1, __x_3(D)>
  gimple_call <emplace_back, NULL, this_5(D), _1>
  gimple_return <NULL>

}



;; Function std::stack<std::pair<int, int> >::push (_ZNSt5stackISt4pairIiiESt5dequeIS1_SaIS1_EEE4pushEOS1_, funcdef_no=9009, decl_uid=165281, cgraph_uid=2467, symbol_order=2519)

std::stack<std::pair<int, int> >::push (struct stack * const this, struct value_type & __x)
{
  struct deque * _1;
  struct type & _2;

  <bb 2> :
  gimple_assign <addr_expr, _1, &this_3(D)->c, NULL, NULL>
  gimple_call <move, _2, __x_5(D)>
  gimple_call <push_back, NULL, _1, _2>
  gimple_return <NULL>

}



;; Function main (main, funcdef_no=8405, decl_uid=165414, cgraph_uid=1878, symbol_order=1927)

main ()
{
  struct basic_ostream & D.177836;
  struct stack s;
  int D.177817;
  struct stack D.165896;
  struct stack D.165868;
  int D.165855;
  int D.165854;
  struct value_type D.165856;
  int D.165852;
  int D.165851;
  struct value_type D.165853;
  int D.165849;
  int D.165848;
  struct value_type D.165850;
  int D.165846;
  int D.165845;
  struct value_type D.165847;
  int D.165843;
  int D.165842;
  struct value_type D.165844;
  struct basic_ostream & _1;
  long unsigned int _2;
  struct value_type & _3;
  struct basic_ostream & _49;
  int _62;

  <bb 2> :
  gimple_call <__ct_comp , NULL, &s>

  <bb 3> :
  gimple_assign <integer_cst, D.165842, 10, NULL, NULL>
  gimple_assign <integer_cst, D.165843, 20, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.165844, &D.165842, &D.165843>
  gimple_call <push, NULL, &s, &D.165844>

  <bb 4> :
  gimple_assign <constructor, D.165844, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.165843, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.165842, {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, D.165845, 15, NULL, NULL>
  gimple_assign <integer_cst, D.165846, 5, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.165847, &D.165845, &D.165846>
  gimple_call <push, NULL, &s, &D.165847>

  <bb 5> :
  gimple_assign <constructor, D.165847, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.165846, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.165845, {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, D.165848, 1, NULL, NULL>
  gimple_assign <integer_cst, D.165849, 5, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.165850, &D.165848, &D.165849>
  gimple_call <push, NULL, &s, &D.165850>

  <bb 6> :
  gimple_assign <constructor, D.165850, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.165849, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.165848, {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, D.165851, 5, NULL, NULL>
  gimple_assign <integer_cst, D.165852, 10, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.165853, &D.165851, &D.165852>
  gimple_call <push, NULL, &s, &D.165853>

  <bb 7> :
  gimple_assign <constructor, D.165853, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.165852, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.165851, {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, D.165854, 7, NULL, NULL>
  gimple_assign <integer_cst, D.165855, 9, NULL, NULL>
  gimple_call <__ct_comp , NULL, &D.165856, &D.165854, &D.165855>
  gimple_call <push, NULL, &s, &D.165856>

  <bb 8> :
  gimple_assign <constructor, D.165856, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.165855, {CLOBBER}, NULL, NULL>
  gimple_assign <constructor, D.165854, {CLOBBER}, NULL, NULL>
  gimple_call <operator<<, NULL, &cout, "Stack of Pairs: ">

  <bb 9> :
  gimple_call <__ct_comp , NULL, &D.165868, &s>

  <bb 10> :
  gimple_call <Showstack, NULL, &D.165868>

  <bb 11> :
  gimple_call <__dt_comp , NULL, &D.165868>
  gimple_assign <constructor, D.165868, {CLOBBER}, NULL, NULL>
  gimple_call <operator<<, _49, &cout, "\nSize of Stack of Pairs: ">

  <bb 12> :
  gimple_assign <ssa_name, _1, _49, NULL, NULL>
  gimple_call <size, _2, &s>
  gimple_call <operator<<, NULL, _1, _2>

  <bb 13> :
  gimple_call <operator<<, NULL, &cout, "\nTop of Stack of Pairs: ">

  <bb 14> :
  gimple_call <top, _3, &s>
  gimple_call <printPair, NULL, MEM[(const struct pair &)_3]>

  <bb 15> :
  gimple_call <operator<<, NULL, &cout, "\n\nRemoving the top pair\n">

  <bb 16> :
  gimple_call <pop, NULL, &s>
  gimple_call <operator<<, NULL, &cout, "Current Stack of Pairs: ">

  <bb 17> :
  gimple_call <__ct_comp , NULL, &D.165896, &s>

  <bb 18> :
  gimple_call <Showstack, NULL, &D.165896>

  <bb 19> :
  gimple_call <__dt_comp , NULL, &D.165896>
  gimple_assign <constructor, D.165896, {CLOBBER}, NULL, NULL>
  gimple_assign <integer_cst, _62, 0, NULL, NULL>
  gimple_call <__dt_comp , NULL, &s>
  gimple_assign <constructor, s, {CLOBBER}, NULL, NULL>

  <bb 20> :
gimple_label <<L2>>
  gimple_return <_62>

  <bb 21> :
gimple_label <<L3>>
  gimple_assign <constructor, D.165844, {CLOBBER}, NULL, NULL>
  gimple_resx <5>

  <bb 22> :
gimple_label <<L4>>
  gimple_assign <constructor, D.165843, {CLOBBER}, NULL, NULL>
  gimple_resx <4>

  <bb 23> :
gimple_label <<L5>>
  gimple_assign <constructor, D.165842, {CLOBBER}, NULL, NULL>
  gimple_resx <3>

  <bb 24> :
gimple_label <<L6>>
  gimple_assign <constructor, D.165847, {CLOBBER}, NULL, NULL>
  gimple_resx <11>

  <bb 25> :
gimple_label <<L7>>
  gimple_assign <constructor, D.165846, {CLOBBER}, NULL, NULL>
  gimple_resx <10>

  <bb 26> :
gimple_label <<L8>>
  gimple_assign <constructor, D.165845, {CLOBBER}, NULL, NULL>
  gimple_resx <9>

  <bb 27> :
gimple_label <<L9>>
  gimple_assign <constructor, D.165850, {CLOBBER}, NULL, NULL>
  gimple_resx <17>

  <bb 28> :
gimple_label <<L10>>
  gimple_assign <constructor, D.165849, {CLOBBER}, NULL, NULL>
  gimple_resx <16>

  <bb 29> :
gimple_label <<L11>>
  gimple_assign <constructor, D.165848, {CLOBBER}, NULL, NULL>
  gimple_resx <15>

  <bb 30> :
gimple_label <<L12>>
  gimple_assign <constructor, D.165853, {CLOBBER}, NULL, NULL>
  gimple_resx <23>

  <bb 31> :
gimple_label <<L13>>
  gimple_assign <constructor, D.165852, {CLOBBER}, NULL, NULL>
  gimple_resx <22>

  <bb 32> :
gimple_label <<L14>>
  gimple_assign <constructor, D.165851, {CLOBBER}, NULL, NULL>
  gimple_resx <21>

  <bb 33> :
gimple_label <<L15>>
  gimple_assign <constructor, D.165856, {CLOBBER}, NULL, NULL>
  gimple_resx <29>

  <bb 34> :
gimple_label <<L16>>
  gimple_assign <constructor, D.165855, {CLOBBER}, NULL, NULL>
  gimple_resx <28>

  <bb 35> :
gimple_label <<L17>>
  gimple_assign <constructor, D.165854, {CLOBBER}, NULL, NULL>
  gimple_resx <27>

  <bb 36> :
gimple_label <<L18>>
  gimple_call <__dt_comp , NULL, &D.165868>
  gimple_resx <34>

  <bb 37> :
gimple_label <<L19>>
  gimple_assign <constructor, D.165868, {CLOBBER}, NULL, NULL>
  gimple_resx <33>

  <bb 38> :
gimple_label <<L20>>
  gimple_call <__dt_comp , NULL, &D.165896>
  gimple_resx <38>

  <bb 39> :
gimple_label <<L21>>
  gimple_assign <constructor, D.165896, {CLOBBER}, NULL, NULL>
  gimple_resx <37>

  <bb 40> :
gimple_label <<L22>>
  gimple_call <__dt_comp , NULL, &s>
  gimple_resx <2>

  <bb 41> :
gimple_label <<L23>>
  gimple_assign <constructor, s, {CLOBBER}, NULL, NULL>
  gimple_resx <1>

}



;; Function __static_initialization_and_destruction_0 (_Z41__static_initialization_and_destruction_0ii, funcdef_no=9952, decl_uid=177522, cgraph_uid=3410, symbol_order=3594)

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



;; Function _GLOBAL__sub_I__Z9printPairSt4pairIiiE (_GLOBAL__sub_I__Z9printPairSt4pairIiiE, funcdef_no=9975, decl_uid=177774, cgraph_uid=3433, symbol_order=4363)

_GLOBAL__sub_I__Z9printPairSt4pairIiiE ()
{
  <bb 2> :
  gimple_call <__static_initialization_and_destruction_0, NULL, 1, 65535>
  gimple_return <NULL>

}


