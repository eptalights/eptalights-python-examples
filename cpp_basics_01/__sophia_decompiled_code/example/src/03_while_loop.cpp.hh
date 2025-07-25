

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

main  (  )
{
	struct basic_ostream & 689540897 ;
	int remainder ;
	int reversed_number ;
	int n ;
	int 689540895 ;

	<bb 2> :
	reversed_number = 0;
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, "Enter an integer: " );

	<bb 3> :
	std::istream::operator>>  ( &std::cin, &n );

	<bb 4> :
	$T1 = n;
	if ( $T1 == 0 )
		goto <bb 6>;
	else
		goto <bb 5>;

	<bb 5> :
	$T2 = n;
	remainder = $T2 % 10;
	$T3 = reversed_number * 10;
	reversed_number = remainder + $T3;
	$T4 = n;
	$T5 = $T4 / 10;
	n = $T5;

	<bb 6> :
	$T18 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, "Reversed Number = " );

	<bb 7> :
	$T6 = $T18;
	std::ostream::operator<<  ( $T6, reversed_number );

	<bb 8> :
	$T20 = 0;
	n = {CLOBBER};

	<bb 9> :
	label <L4>;
	return $T20;

	<bb 10> :
	label <L5>;
	n = {CLOBBER};
	nop;

}


