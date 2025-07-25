

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
	struct basic_ostream & 689540917 ;
	struct basic_ostream & 689540912 ;
	struct basic_ostream & 689540911 ;
	int ex ;
	int result ;
	int denominator ;
	int numerator ;
	int 689540909 ;
	register  int * 689537227 ;
	void * 689537221 ;

	<bb 2> :
	numerator = 5;
	denominator = 0;
	if ( denominator == 0 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	$T13 = __cxa_allocate_exception  ( 4 );
	$T13 = denominator;
	__cxa_throw  ( $T13, &typeinfo for int, 0 );

	<bb 4> :
	result = numerator / denominator;

	<bb 5> :
	$T28 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, "Division Result is: " );
	$T4 = $T28;
	std::ostream::operator<<  ( $T4, result );
	$T30 = 0;

	<bb 6> :
	label <L3>;
	return $T30;

	<bb 7> :
	label <L4>;
	nop;

	<bb 8> :
	nop;

	<bb 9> :
	label <L5>;
	$T1 = __builtin_eh_pointer  ( 1 );
	$T17 = __cxa_begin_catch  ( $T1 );
	ex = *$T17;
	$T20 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, "Exception: Divide by zero not allowed :" );

	<bb 10> :
	$T2 = $T20;
	$T22 = std::ostream::operator<<  ( $T2, ex );

	<bb 11> :
	$T3 = $T22;
	std::ostream::operator<<  ( $T3, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );

	<bb 12> :
	__cxa_end_catch  (  );

	<bb 13> :
	label <L6>;
	__cxa_end_catch  (  );
	nop;

}


