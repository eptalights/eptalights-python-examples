
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
	std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::map  ( &map );
	std::allocator<char>::allocator  ( &689546326 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546327, R"("one")", &689546326 );

	<bb 3> :
	$T36 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &map, &689546327 );

	<bb 4> :
	$T1 = $T36;
	*$T1 = 1;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546327 );
	689546327 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::~allocator  ( &689546326 );
	689546326 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::allocator  ( &689546328 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546329, R"("two")", &689546328 );

	<bb 5> :
	$T45 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &map, &689546329 );

	<bb 6> :
	$T2 = $T45;
	*$T2 = 2;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546329 );
	689546329 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::~allocator  ( &689546328 );
	689546328 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::allocator  ( &689546330 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546331, R"("three")", &689546330 );

	<bb 7> :
	$T54 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &map, &689546331 );

	<bb 8> :
	$T3 = $T54;
	*$T3 = 3;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546331 );
	689546331 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::~allocator  ( &689546330 );
	689546330 = R"({)"R"(CLOBBER)"R"(})";
	$T61 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("Key: one, Value: ")" );

	<bb 9> :
	$T4 = $T61;
	std::allocator<char>::allocator  ( &689546372 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546373, R"("one")", &689546372 );

	<bb 10> :
	$T65 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &map, &689546373 );

	<bb 11> :
	$T5 = $T65;
	$T6 = *$T5;
	$T67 = std::ostream::operator<<  ( $T4, $T6 );

	<bb 12> :
	$T7 = $T67;
	std::ostream::operator<<  ( $T7, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );

	<bb 13> :
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546373 );
	689546373 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::~allocator  ( &689546372 );
	689546372 = R"({)"R"(CLOBBER)"R"(})";
	$T74 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("Key: two, Value: ")" );

	<bb 14> :
	$T8 = $T74;
	std::allocator<char>::allocator  ( &689546382 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546383, R"("two")", &689546382 );

	<bb 15> :
	$T78 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &map, &689546383 );

	<bb 16> :
	$T9 = $T78;
	$T10 = *$T9;
	$T80 = std::ostream::operator<<  ( $T8, $T10 );

	<bb 17> :
	$T11 = $T80;
	std::ostream::operator<<  ( $T11, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );

	<bb 18> :
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546383 );
	689546383 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::~allocator  ( &689546382 );
	689546382 = R"({)"R"(CLOBBER)"R"(})";
	$T87 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("Key: three, Value: ")" );

	<bb 19> :
	$T12 = $T87;
	std::allocator<char>::allocator  ( &689546392 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546393, R"("three")", &689546392 );

	<bb 20> :
	$T91 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &map, &689546393 );

	<bb 21> :
	$T13 = $T91;
	$T14 = *$T13;
	$T93 = std::ostream::operator<<  ( $T12, $T14 );

	<bb 22> :
	$T15 = $T93;
	std::ostream::operator<<  ( $T15, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );

	<bb 23> :
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546393 );
	689546393 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::~allocator  ( &689546392 );
	689546392 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::allocator  ( &689546400 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546401, R"("four")", &689546400 );

	<bb 24> :
	$T102 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::count  ( &map, &689546401 );

	<bb 25> :
	$T16 = $T102;
	$T103 = $T16 != 0;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546401 );
	689546401 = R"({)"R"(CLOBBER)"R"(})";
	std::allocator<char>::~allocator  ( &689546400 );
	689546400 = R"({)"R"(CLOBBER)"R"(})";
	if ( $T103 != 0 )
		goto <bb 26>;
	else
		goto <bb 28>;

	<bb 26> :
	$T112 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("Key \'four\' is in the map")" );

	<bb 27> :
	$T17 = $T112;
	std::ostream::operator<<  ( $T17, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );

	<bb 28> :
	$T109 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("Key \'four\' is not in the map")" );

	<bb 29> :
	$T18 = $T109;
	std::ostream::operator<<  ( $T18, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );

	<bb 30> :
	$T114 = 0;
	std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::~map  ( &map );
	map = R"({)"R"(CLOBBER)"R"(})";

	<bb 31> :
	nop;
	return $T114;

	<bb 32> :
	nop;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546327 );
	nop;

	<bb 33> :
	nop;
	689546327 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 34> :
	nop;
	std::allocator<char>::~allocator  ( &689546326 );
	nop;

	<bb 35> :
	nop;
	689546326 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 36> :
	nop;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546329 );
	nop;

	<bb 37> :
	nop;
	689546329 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 38> :
	nop;
	std::allocator<char>::~allocator  ( &689546328 );
	nop;

	<bb 39> :
	nop;
	689546328 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 40> :
	nop;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546331 );
	nop;

	<bb 41> :
	nop;
	689546331 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 42> :
	nop;
	std::allocator<char>::~allocator  ( &689546330 );
	nop;

	<bb 43> :
	nop;
	689546330 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 44> :
	nop;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546373 );
	nop;

	<bb 45> :
	nop;
	689546373 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 46> :
	nop;
	std::allocator<char>::~allocator  ( &689546372 );
	nop;

	<bb 47> :
	nop;
	689546372 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 48> :
	nop;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546383 );
	nop;

	<bb 49> :
	nop;
	689546383 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 50> :
	nop;
	std::allocator<char>::~allocator  ( &689546382 );
	nop;

	<bb 51> :
	nop;
	689546382 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 52> :
	nop;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546393 );
	nop;

	<bb 53> :
	nop;
	689546393 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 54> :
	nop;
	std::allocator<char>::~allocator  ( &689546392 );
	nop;

	<bb 55> :
	nop;
	689546392 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 56> :
	nop;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546401 );
	nop;

	<bb 57> :
	nop;
	689546401 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 58> :
	nop;
	std::allocator<char>::~allocator  ( &689546400 );
	nop;

	<bb 59> :
	nop;
	689546400 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 60> :
	nop;
	std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::~map  ( &map );
	nop;

	<bb 61> :
	nop;
	map = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
