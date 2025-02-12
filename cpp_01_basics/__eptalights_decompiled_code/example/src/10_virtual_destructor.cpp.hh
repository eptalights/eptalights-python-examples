
_GLOBAL__sub_I_main  (  )
{

	<bb 2> :
	__static_initialization_and_destruction_0  ( 1, 65535 );
	return;

}

base::base  ( this )
{

	<bb 2> :
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("Constructing base\n")" );
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

derived::derived  ( this )
{

	<bb 2> :
	base::base  ( this );
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("Constructing derived\n")" );

	<bb 3> :
	return;

	<bb 4> :
	nop;
	base::~base  ( this );
	nop;

}

main  (  )
{

	<bb 2> :
	$T4 = operator new  ( 1 );
	$T5 = $T4;
	derived::derived  ( $T5 );

	<bb 3> :
	d = $T5;
	b = d;
	$T9 = b;
	if ( $T9 != 0 )
		goto <bb 4>;
	else
		goto <bb 5>;

	<bb 4> :
	base::~base  ( $T9 );
	operator delete  ( $T9, 1 );

	<bb 5> :
	getchar  (  );
	$T13 = 0;

	<bb 6> :
	nop;
	return $T13;

	<bb 7> :
	nop;
	operator delete  ( $T5, 1 );
	nop;

}

base::~base  ( this )
{

	<bb 2> :
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("Destructing base\n")" );
	return;

}
