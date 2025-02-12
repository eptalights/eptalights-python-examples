
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
	std::vector<int, std::allocator<int>>::vector  ( &vect );
	689541713 = 10;
	std::vector<int, std::allocator<int>>::push_back  ( &vect, &689541713 );

	<bb 3> :
	689541713 = R"({)"R"(CLOBBER)"R"(})";
	689541714 = 20;
	std::vector<int, std::allocator<int>>::push_back  ( &vect, &689541714 );

	<bb 4> :
	689541714 = R"({)"R"(CLOBBER)"R"(})";
	689541715 = 30;
	std::vector<int, std::allocator<int>>::push_back  ( &vect, &689541715 );

	<bb 5> :
	689541715 = R"({)"R"(CLOBBER)"R"(})";
	__for_range = &vect;
	__for_begin = std::vector<int, std::allocator<int>>::begin  ( __for_range );
	__for_end = std::vector<int, std::allocator<int>>::end  ( __for_range );

	<bb 6> :
	$T21 = bool __gnu_cxx::operator!=<int*, std::vector<int, std::allocator<int>>>  ( &__for_begin, &__for_end );
	if ( $T21 != 0 )
		goto <bb 7>;
	else
		goto <bb 10>;

	<bb 7> :
	$T1 = __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::operator*  ( &__for_begin );
	x = *$T1;
	$T30 = std::ostream::operator<<  ( &std::cout, x );

	<bb 8> :
	$T2 = $T30;
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( $T2, R"(" ")" );

	<bb 9> :
	__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::operator++  ( &__for_begin );

	<bb 10> :
	__for_begin = R"({)"R"(CLOBBER)"R"(})";
	__for_end = R"({)"R"(CLOBBER)"R"(})";
	$T24 = 0;
	std::vector<int, std::allocator<int>>::~vector  ( &vect );
	vect = R"({)"R"(CLOBBER)"R"(})";

	<bb 11> :
	nop;
	return $T24;

	<bb 12> :
	nop;
	689541713 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 13> :
	nop;
	689541714 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 14> :
	nop;
	689541715 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 15> :
	nop;
	__for_begin = R"({)"R"(CLOBBER)"R"(})";
	__for_end = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 16> :
	nop;
	std::vector<int, std::allocator<int>>::~vector  ( &vect );
	nop;

	<bb 17> :
	nop;
	vect = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
