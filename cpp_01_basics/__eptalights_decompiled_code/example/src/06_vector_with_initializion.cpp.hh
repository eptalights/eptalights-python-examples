
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
	n = 3;
	std::allocator<int>::allocator  ( &689541655 );
	689541653 = 10;
	$T1 = n;
	std::vector<int, std::allocator<int>>::vector  ( &vect, $T1, &689541653, &689541655 );

	<bb 3> :
	689541653 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<int>::~allocator  ( &689541655 );
	689541655 = R"({)"R"(CLOBBER)"R"(})";
	__for_range = &vect;
	__for_begin = std::vector<int, std::allocator<int>>::begin  ( __for_range );
	__for_end = std::vector<int, std::allocator<int>>::end  ( __for_range );

	<bb 4> :
	$T19 = bool __gnu_cxx::operator!=<int*, std::vector<int, std::allocator<int>>>  ( &__for_begin, &__for_end );
	if ( $T19 != 0 )
		goto <bb 5>;
	else
		goto <bb 8>;

	<bb 5> :
	$T2 = __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::operator*  ( &__for_begin );
	x = *$T2;
	$T28 = std::ostream::operator<<  ( &std::cout, x );

	<bb 6> :
	$T3 = $T28;
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( $T3, R"(" ")" );

	<bb 7> :
	__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::operator++  ( &__for_begin );

	<bb 8> :
	__for_begin = R"({)"R"(CLOBBER)"R"(})";
	__for_end = R"({)"R"(CLOBBER)"R"(})";
	$T22 = 0;
	std::vector<int, std::allocator<int>>::~vector  ( &vect );
	vect = R"({)"R"(CLOBBER)"R"(})";

	<bb 9> :
	nop;
	return $T22;

	<bb 10> :
	nop;
	nop;

	<bb 11> :
	nop;
	689541653 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 12> :
	nop;
	std::allocator<int>::~allocator  ( &689541655 );
	nop;

	<bb 13> :
	nop;
	689541655 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 14> :
	nop;
	__for_begin = R"({)"R"(CLOBBER)"R"(})";
	__for_end = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 15> :
	nop;
	std::vector<int, std::allocator<int>>::~vector  ( &vect );
	nop;

	<bb 16> :
	nop;
	vect = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
