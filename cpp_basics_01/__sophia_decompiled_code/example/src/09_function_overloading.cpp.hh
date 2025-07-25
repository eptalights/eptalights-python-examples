

_GLOBAL__sub_I_main  (  )
{

	<bb 2> :
	__static_initialization_and_destruction_0  ( 1, 65535 );
	return;

}

__static_initialization_and_destruction_0  ( int __initialize_p, int __priority )
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

Geeks::func  ( struct Geeks *  const this = struct Geeks *  const, int x )
{
	struct basic_ostream & 6895173504 ;
	struct basic_ostream & 6895173503 ;

	<bb 2> :
	$T5 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, "value of x is " );
	$T1 = $T5;
	$T8 = std::ostream::operator<<  ( $T1, x );
	$T2 = $T8;
	std::ostream::operator<<  ( $T2, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );
	return;

}

Geeks::func  ( struct Geeks *  const this = struct Geeks *  const, double x )
{
	struct __ostream_type & 6895173506 ;
	struct basic_ostream & 6895173505 ;

	<bb 2> :
	$T5 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, "value of x is " );
	$T1 = $T5;
	$T8 = std::ostream::operator<<  ( $T1, x );
	$T2 = $T8;
	std::ostream::operator<<  ( $T2, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );
	return;

}

Geeks::func  ( struct Geeks *  const this = struct Geeks *  const, int x, int y )
{
	struct basic_ostream & 6895173510 ;
	struct basic_ostream & 6895173509 ;
	struct basic_ostream & 6895173508 ;
	struct basic_ostream & 6895173507 ;

	<bb 2> :
	$T7 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, "value of x and y is " );
	$T1 = $T7;
	$T10 = std::ostream::operator<<  ( $T1, x );
	$T2 = $T10;
	$T12 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( $T2, ", " );
	$T3 = $T12;
	$T15 = std::ostream::operator<<  ( $T3, y );
	$T4 = $T15;
	std::ostream::operator<<  ( $T4, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );
	return;

}

main  (  )
{
	struct Geeks obj1 ;
	int 6895173498 ;

	<bb 2> :
	Geeks::func  ( &obj1, 7 );

	<bb 3> :
	Geeks::func  ( &obj1, 9.1319999999999996731503415503539144992828369140625e+0 );

	<bb 4> :
	Geeks::func  ( &obj1, 85, 64 );

	<bb 5> :
	$T6 = 0;
	obj1 = {CLOBBER};

	<bb 6> :
	label <L1>;
	return $T6;

	<bb 7> :
	label <L2>;
	obj1 = {CLOBBER};
	nop;

}


