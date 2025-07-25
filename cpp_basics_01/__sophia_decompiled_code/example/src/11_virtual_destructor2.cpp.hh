

_GLOBAL__sub_I_main  (  )
{

	<bb 2> :
	__static_initialization_and_destruction_0  ( 1, 65535 );
	return;

}

base::base  ( struct base *  const this )
{

	<bb 2> :
	*this = {CLOBBER};
	$T1 = &vtable for base + 16;
	this->_vptr.base = $T1;
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, "Constructing base\n" );
	return;

}

derived::~derived  ( struct derived *  const this )
{

	<bb 2> :
	derived::~derived  ( this );
	operator delete  ( this, 8 );
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

derived::derived  ( struct derived *  const this )
{

	<bb 2> :
	*this = {CLOBBER};
	$T1 = &this->689537318;
	base::base  ( $T1 );
	$T2 = &vtable for derived + 16;
	this->689537318._vptr.base = $T2;
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, "Constructing derived\n" );

	<bb 3> :
	return;

	<bb 4> :
	label <L0>;
	$T3 = &this->689537318;
	base::~base  ( $T3 );
	nop;

}

main  (  )
{
	void * 689541001 ;
	struct base * b ;
	struct derived * d ;
	int 689540999 ;
	struct base * 689540995 ;
	void * 689537362 ;

	<bb 2> :
	$T7 = operator new  ( 8 );
	$T8 = $T7;
	derived::derived  ( $T8 );

	<bb 3> :
	d = $T8;
	b = d;
	$T12 = b;
	if ( $T12 != 0 )
		goto <bb 4>;
	else
		goto <bb 5>;

	<bb 4> :
	$T1 = $T12->_vptr.base;
	$T2 = $T1 + 8;
	$T3 = *$T2;
	OBJ_TYPE_REF<$T3,$T3->1>  ( $T12 );

	<bb 5> :
	getchar  (  );
	$T15 = 0;

	<bb 6> :
	label <L3>;
	return $T15;

	<bb 7> :
	label <L4>;
	operator delete  ( $T8, 8 );
	nop;

}

base::~base  ( struct base *  const this )
{

	<bb 2> :
	base::~base  ( this );
	operator delete  ( this, 8 );
	return;

}


