
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
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("Enter an integer: ")" );

	<bb 3> :
	std::istream::operator>>  ( &std::cin, &number );

	<bb 4> :
	$T8 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("You entered ")" );

	<bb 5> :
	$T1 = $T8;
	$T2 = number;
	std::ostream::operator<<  ( $T1, $T2 );

	<bb 6> :
	$T10 = 0;
	number = R"({)"R"(CLOBBER)"R"(})";

	<bb 7> :
	nop;
	return $T10;

	<bb 8> :
	nop;
	number = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
