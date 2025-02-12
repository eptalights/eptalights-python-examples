
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
	Check::Check  ( &obj );
	Check::Display  ( &obj );

	<bb 3> :
	Check::operator++  ( &obj );
	Check::Display  ( &obj );

	<bb 4> :
	$T7 = 0;
	obj = R"({)"R"(CLOBBER)"R"(})";

	<bb 5> :
	nop;
	return $T7;

	<bb 6> :
	nop;
	obj = R"({)"R"(CLOBBER)"R"(})";
	nop;

}

Check::operator++  ( this )
{

	<bb 2> :
	$T1 = this->i;
	$T2 = $T1 + 1;
	this->i = $T2;
	return;

}

Check::Display  ( this )
{

	<bb 2> :
	$T6 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("i=")" );
	$T1 = $T6;
	$T2 = this->i;
	$T9 = std::ostream::operator<<  ( $T1, $T2 );
	$T3 = $T9;
	std::ostream::operator<<  ( $T3, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );
	return;

}

Check::Check  ( this )
{

	<bb 2> :
	*this = R"({)"R"(CLOBBER)"R"(})";
	this->i = 0;
	return;

}
