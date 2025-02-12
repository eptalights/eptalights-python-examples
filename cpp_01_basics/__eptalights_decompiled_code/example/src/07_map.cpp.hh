
_GLOBAL__sub_I_main  (  )
{

	<bb 2> :
	__static_initialization_and_destruction_0  ( 1, 65535 );
	return;

}

__static_initialization_and_destruction_0  ( __initialize_p, __priority )
{

	<bb 2> :
	if ( __initialize_p == 1 )
		goto <bb 3>;
	else
		goto <bb 5>;

	<bb 3> :
	if ( __priority == 65535 )
		goto <bb 4>;
	else
		goto <bb 5>;

	<bb 4> :
	std::ios_base::Init::Init  ( &std::__ioinit );
	__cxa_atexit  ( std::ios_base::Init::~Init(), &std::__ioinit, &__dso_handle );

	<bb 5> :
	return;

}

main  (  )
{

	<bb 2> :
	std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::map  ( &mp );
	std::allocator<char>::allocator  ( &689546326 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546327, R"("one")", &689546326 );

	<bb 3> :
	$T22 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &mp, &689546327 );

	<bb 4> :
	$T1 = $T22;
	*$T1 = 1;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546327 );
	689546327 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::~allocator  ( &689546326 );
	689546326 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::allocator  ( &689546328 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546329, R"("two")", &689546328 );

	<bb 5> :
	$T31 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &mp, &689546329 );

	<bb 6> :
	$T2 = $T31;
	*$T2 = 2;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546329 );
	689546329 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::~allocator  ( &689546328 );
	689546328 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::allocator  ( &689546330 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546331, R"("three")", &689546330 );

	<bb 7> :
	$T40 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &mp, &689546331 );

	<bb 8> :
	$T3 = $T40;
	*$T3 = 3;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546331 );
	689546331 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::~allocator  ( &689546330 );
	689546330 = R"({)"R"(CLOBBER)"R"(})";
	it = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::begin  ( &mp );

	<bb 9> :
	689546407 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::end  ( &mp );
	$T49 = std::operator!=  ( &it, &689546407 );
	689546407 = R"({)"R"(CLOBBER)"R"(})";
	if ( $T49 != 0 )
		goto <bb 10>;
	else
		goto <bb 16>;

	<bb 10> :
	$T56 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("Key: ")" );

	<bb 11> :
	$T4 = $T56;
	$T5 = std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>::operator->  ( &it );
	$T6 = &$T5->first;
	$T59 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<char, std::char_traits<char>, std::allocator<char>>  ( $T4, $T6 );

	<bb 12> :
	$T7 = $T59;
	$T61 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( $T7, R"(", Value: ")" );

	<bb 13> :
	$T8 = $T61;
	$T9 = std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>::operator->  ( &it );
	$T10 = $T9->second;
	$T64 = std::ostream::operator<<  ( $T8, $T10 );

	<bb 14> :
	$T11 = $T64;
	std::ostream::operator<<  ( $T11, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );

	<bb 15> :
	std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>::operator++  ( &it );

	<bb 16> :
	$T51 = 0;
	std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::~map  ( &mp );
	mp = R"({)"R"(CLOBBER)"R"(})";
	it = R"({)"R"(CLOBBER)"R"(})";

	<bb 17> :
	nop;
	return $T51;

	<bb 18> :
	nop;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546327 );
	nop;

	<bb 19> :
	nop;
	689546327 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 20> :
	nop;
	std::allocator<char>::~allocator  ( &689546326 );
	nop;

	<bb 21> :
	nop;
	689546326 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 22> :
	nop;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546329 );
	nop;

	<bb 23> :
	nop;
	689546329 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 24> :
	nop;
	std::allocator<char>::~allocator  ( &689546328 );
	nop;

	<bb 25> :
	nop;
	689546328 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 26> :
	nop;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546331 );
	nop;

	<bb 27> :
	nop;
	689546331 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 28> :
	nop;
	std::allocator<char>::~allocator  ( &689546330 );
	nop;

	<bb 29> :
	nop;
	689546330 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 30> :
	nop;
	std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::~map  ( &mp );
	nop;

	<bb 31> :
	nop;
	mp = R"({)"R"(CLOBBER)"R"(})";
	it = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
