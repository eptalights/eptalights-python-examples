

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
	struct Check obj ;
	int 689540934 ;

	<bb 2> :
	Check::Check  ( &obj );
	Check::Display  ( &obj );

	<bb 3> :
	Check::operator++  ( &obj );
	Check::Display  ( &obj );

	<bb 4> :
	$T7 = 0;
	obj = '{''CLOBBER''}';

	<bb 5> :
	label '<L1>';
	return $T7;

	<bb 6> :
	label '<L2>';
	obj = '{''CLOBBER''}';
	nop;

}

Check::operator++  ( struct Check *  const this )
{

	<bb 2> :
	$T1 = this->i;
	$T2 = $T1 + 1;
	this->i = $T2;
	return;

}

Check::Display  ( struct Check *  const this )
{
	struct basic_ostream & 689540940 ;
	struct basic_ostream & 689540939 ;

	<bb 2> :
	$T6 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"i="' );
	$T1 = $T6;
	$T2 = this->i;
	$T9 = std::ostream::operator<<  ( $T1, $T2 );
	$T3 = $T9;
	std::ostream::operator<<  ( $T3, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );
	return;

}

Check::Check  ( struct Check *  const this )
{

	<bb 2> :
	*this = '{''CLOBBER''}';
	this->i = 0;
	return;

}


