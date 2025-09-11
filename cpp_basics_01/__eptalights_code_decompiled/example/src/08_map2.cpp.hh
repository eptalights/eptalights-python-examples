

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
	struct basic_ostream & 689554500 ;
	struct basic_ostream & 689554499 ;
	long unsigned int 689554494 ;
	struct basic_ostream & 689554489 ;
	mapped_type & 689554488 ;
	struct basic_ostream & 689554487 ;
	struct basic_ostream & 689554482 ;
	mapped_type & 689554481 ;
	struct basic_ostream & 689554480 ;
	struct basic_ostream & 689554475 ;
	mapped_type & 689554474 ;
	struct basic_ostream & 689554473 ;
	mapped_type & 689554468 ;
	mapped_type & 689554463 ;
	mapped_type & 689554458 ;
	struct map ;
	int 689554456 ;
	struct allocator 689546400 ;
	const  struct key_type 689546401 ;
	bool 689554452 ;
	struct allocator 689546392 ;
	struct key_type 689546393 ;
	struct allocator 689546382 ;
	struct key_type 689546383 ;
	struct allocator 689546372 ;
	struct key_type 689546373 ;
	struct allocator 689546330 ;
	struct key_type 689546331 ;
	struct allocator 689546328 ;
	struct key_type 689546329 ;
	struct allocator 689546326 ;
	struct key_type 689546327 ;

	<bb 2> :
	std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::map  ( &map );
	std::allocator<char>::allocator  ( &689546326 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546327, '"one"', &689546326 );

	<bb 3> :
	$T36 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &map, &689546327 );

	<bb 4> :
	$T1 = $T36;
	*$T1 = 1;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546327 );
	689546327 = '{''CLOBBER''}';
	std::allocator<char>::~allocator  ( &689546326 );
	689546326 = '{''CLOBBER''}';
	std::allocator<char>::allocator  ( &689546328 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546329, '"two"', &689546328 );

	<bb 5> :
	$T45 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &map, &689546329 );

	<bb 6> :
	$T2 = $T45;
	*$T2 = 2;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546329 );
	689546329 = '{''CLOBBER''}';
	std::allocator<char>::~allocator  ( &689546328 );
	689546328 = '{''CLOBBER''}';
	std::allocator<char>::allocator  ( &689546330 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546331, '"three"', &689546330 );

	<bb 7> :
	$T54 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &map, &689546331 );

	<bb 8> :
	$T3 = $T54;
	*$T3 = 3;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546331 );
	689546331 = '{''CLOBBER''}';
	std::allocator<char>::~allocator  ( &689546330 );
	689546330 = '{''CLOBBER''}';
	$T61 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"Key: one, Value: "' );

	<bb 9> :
	$T4 = $T61;
	std::allocator<char>::allocator  ( &689546372 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546373, '"one"', &689546372 );

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
	689546373 = '{''CLOBBER''}';
	std::allocator<char>::~allocator  ( &689546372 );
	689546372 = '{''CLOBBER''}';
	$T74 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"Key: two, Value: "' );

	<bb 14> :
	$T8 = $T74;
	std::allocator<char>::allocator  ( &689546382 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546383, '"two"', &689546382 );

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
	689546383 = '{''CLOBBER''}';
	std::allocator<char>::~allocator  ( &689546382 );
	689546382 = '{''CLOBBER''}';
	$T87 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"Key: three, Value: "' );

	<bb 19> :
	$T12 = $T87;
	std::allocator<char>::allocator  ( &689546392 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546393, '"three"', &689546392 );

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
	689546393 = '{''CLOBBER''}';
	std::allocator<char>::~allocator  ( &689546392 );
	689546392 = '{''CLOBBER''}';
	std::allocator<char>::allocator  ( &689546400 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546401, '"four"', &689546400 );

	<bb 24> :
	$T102 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::count  ( &map, &689546401 );

	<bb 25> :
	$T16 = $T102;
	$T103 = $T16 != 0;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546401 );
	689546401 = '{''CLOBBER''}';
	std::allocator<char>::~allocator  ( &689546400 );
	689546400 = '{''CLOBBER''}';
	if ( $T103 != 0 )
		goto <bb 26>;
	else
		goto <bb 28>;

	<bb 26> :
	$T112 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"Key \\\'four\\\' is in the map"' );

	<bb 27> :
	$T17 = $T112;
	std::ostream::operator<<  ( $T17, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );

	<bb 28> :
	$T109 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"Key \\\'four\\\' is not in the map"' );

	<bb 29> :
	$T18 = $T109;
	std::ostream::operator<<  ( $T18, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );

	<bb 30> :
	$T114 = 0;
	std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::~map  ( &map );
	map = '{''CLOBBER''}';

	<bb 31> :
	label '<L5>';
	return $T114;

	<bb 32> :
	label '<L6>';
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546327 );
	nop;

	<bb 33> :
	label '<L7>';
	689546327 = '{''CLOBBER''}';
	nop;

	<bb 34> :
	label '<L8>';
	std::allocator<char>::~allocator  ( &689546326 );
	nop;

	<bb 35> :
	label '<L9>';
	689546326 = '{''CLOBBER''}';
	nop;

	<bb 36> :
	label '<L10>';
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546329 );
	nop;

	<bb 37> :
	label '<L11>';
	689546329 = '{''CLOBBER''}';
	nop;

	<bb 38> :
	label '<L12>';
	std::allocator<char>::~allocator  ( &689546328 );
	nop;

	<bb 39> :
	label '<L13>';
	689546328 = '{''CLOBBER''}';
	nop;

	<bb 40> :
	label '<L14>';
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546331 );
	nop;

	<bb 41> :
	label '<L15>';
	689546331 = '{''CLOBBER''}';
	nop;

	<bb 42> :
	label '<L16>';
	std::allocator<char>::~allocator  ( &689546330 );
	nop;

	<bb 43> :
	label '<L17>';
	689546330 = '{''CLOBBER''}';
	nop;

	<bb 44> :
	label '<L18>';
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546373 );
	nop;

	<bb 45> :
	label '<L19>';
	689546373 = '{''CLOBBER''}';
	nop;

	<bb 46> :
	label '<L20>';
	std::allocator<char>::~allocator  ( &689546372 );
	nop;

	<bb 47> :
	label '<L21>';
	689546372 = '{''CLOBBER''}';
	nop;

	<bb 48> :
	label '<L22>';
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546383 );
	nop;

	<bb 49> :
	label '<L23>';
	689546383 = '{''CLOBBER''}';
	nop;

	<bb 50> :
	label '<L24>';
	std::allocator<char>::~allocator  ( &689546382 );
	nop;

	<bb 51> :
	label '<L25>';
	689546382 = '{''CLOBBER''}';
	nop;

	<bb 52> :
	label '<L26>';
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546393 );
	nop;

	<bb 53> :
	label '<L27>';
	689546393 = '{''CLOBBER''}';
	nop;

	<bb 54> :
	label '<L28>';
	std::allocator<char>::~allocator  ( &689546392 );
	nop;

	<bb 55> :
	label '<L29>';
	689546392 = '{''CLOBBER''}';
	nop;

	<bb 56> :
	label '<L30>';
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546401 );
	nop;

	<bb 57> :
	label '<L31>';
	689546401 = '{''CLOBBER''}';
	nop;

	<bb 58> :
	label '<L32>';
	std::allocator<char>::~allocator  ( &689546400 );
	nop;

	<bb 59> :
	label '<L33>';
	689546400 = '{''CLOBBER''}';
	nop;

	<bb 60> :
	label '<L34>';
	std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::~map  ( &map );
	nop;

	<bb 61> :
	label '<L35>';
	map = '{''CLOBBER''}';
	nop;

}


