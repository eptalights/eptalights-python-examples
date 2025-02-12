
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
	$T1 = &vtable for child + 16;
	childObj.689537226._vptr.GFG = $T1;
	ptr = &childObj.689537226;
	$T2 = ptr->_vptr.GFG;
	$T3 = *$T2;
	689537315 = OBJ_TYPE_REF<$T3,$T3->0>  ( ptr );

	<bb 3> :
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<char, std::char_traits<char>, std::allocator<char>>  ( &std::cout, &689537315 );

	<bb 4> :
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689537315 );
	689537315 = R"({)"R"(CLOBBER)"R"(})";
	$T12 = 0;
	childObj = R"({)"R"(CLOBBER)"R"(})";

	<bb 5> :
	nop;
	return $T12;

	<bb 6> :
	nop;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689537315 );
	nop;

	<bb 7> :
	nop;
	689537315 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 8> :
	nop;
	childObj = R"({)"R"(CLOBBER)"R"(})";
	nop;

}

child::returnString  ( this )
{

	<bb 2> :
	std::allocator<char>::allocator  ( &689537232 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( $T3, R"("GeeksforGeeks")", &689537232 );

	<bb 3> :
	std::allocator<char>::~allocator  ( &689537232 );
	689537232 = R"({)"R"(CLOBBER)"R"(})";

	<bb 4> :
	nop;
	return $T3;

	<bb 5> :
	nop;
	std::allocator<char>::~allocator  ( &689537232 );
	nop;

	<bb 6> :
	nop;
	689537232 = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
