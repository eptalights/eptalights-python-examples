

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
	struct basic_ostream & 689554435 ;
	struct basic_ostream & 689554434 ;
	struct basic_ostream & 689554433 ;
	struct basic_ostream & 689554432 ;
	mapped_type & 689554427 ;
	mapped_type & 689554422 ;
	mapped_type & 689554417 ;
	struct iterator it ;
	struct map mp ;
	int 689554415 ;
	struct iterator 689546407 ;
	bool 689554413 ;
	struct allocator 689546330 ;
	struct key_type 689546331 ;
	struct allocator 689546328 ;
	struct key_type 689546329 ;
	struct allocator 689546326 ;
	struct key_type 689546327 ;

	<bb 2> :
	std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::map  ( &mp );
	std::allocator<char>::allocator  ( &689546326 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546327, '"one"', &689546326 );

	<bb 3> :
	$T22 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &mp, &689546327 );

	<bb 4> :
	$T1 = $T22;
	*$T1 = 1;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546327 );
	689546327 = '{''CLOBBER''}';
	std::allocator<char>::~allocator  ( &689546326 );
	689546326 = '{''CLOBBER''}';
	std::allocator<char>::allocator  ( &689546328 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546329, '"two"', &689546328 );

	<bb 5> :
	$T31 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &mp, &689546329 );

	<bb 6> :
	$T2 = $T31;
	*$T2 = 2;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546329 );
	689546329 = '{''CLOBBER''}';
	std::allocator<char>::~allocator  ( &689546328 );
	689546328 = '{''CLOBBER''}';
	std::allocator<char>::allocator  ( &689546330 );
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string  ( &689546331, '"three"', &689546330 );

	<bb 7> :
	$T40 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::operator[]  ( &mp, &689546331 );

	<bb 8> :
	$T3 = $T40;
	*$T3 = 3;
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546331 );
	689546331 = '{''CLOBBER''}';
	std::allocator<char>::~allocator  ( &689546330 );
	689546330 = '{''CLOBBER''}';
	it = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::begin  ( &mp );

	<bb 9> :
	689546407 = std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::end  ( &mp );
	$T49 = std::operator!=  ( &it, &689546407 );
	689546407 = '{''CLOBBER''}';
	if ( $T49 != 0 )
		goto <bb 10>;
	else
		goto <bb 16>;

	<bb 10> :
	$T56 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"Key: "' );

	<bb 11> :
	$T4 = $T56;
	$T5 = std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>::operator->  ( &it );
	$T6 = &$T5->first;
	$T59 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<char, std::char_traits<char>, std::allocator<char>>  ( $T4, $T6 );

	<bb 12> :
	$T7 = $T59;
	$T61 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( $T7, '", Value: "' );

	<bb 13> :
	$T8 = $T61;
	$T9 = std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>::operator->  ( &it );
	$T10 = $T9->second;
	$T64 = std::ostream::operator<<  ( $T8, $T10 );

	<bb 14> :
	$T11 = $T64;
	std::ostream::operator<<  ( $T11, std::basic_ostream<char, std::char_traits<char>>& std::endl<char, std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&) );

	<bb 15> :
	std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>::operator++  ( &it );

	<bb 16> :
	$T51 = 0;
	std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::~map  ( &mp );
	mp = '{''CLOBBER''}';
	it = '{''CLOBBER''}';

	<bb 17> :
	label '<L5>';
	return $T51;

	<bb 18> :
	label '<L6>';
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546327 );
	nop;

	<bb 19> :
	label '<L7>';
	689546327 = '{''CLOBBER''}';
	nop;

	<bb 20> :
	label '<L8>';
	std::allocator<char>::~allocator  ( &689546326 );
	nop;

	<bb 21> :
	label '<L9>';
	689546326 = '{''CLOBBER''}';
	nop;

	<bb 22> :
	label '<L10>';
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546329 );
	nop;

	<bb 23> :
	label '<L11>';
	689546329 = '{''CLOBBER''}';
	nop;

	<bb 24> :
	label '<L12>';
	std::allocator<char>::~allocator  ( &689546328 );
	nop;

	<bb 25> :
	label '<L13>';
	689546328 = '{''CLOBBER''}';
	nop;

	<bb 26> :
	label '<L14>';
	std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string  ( &689546331 );
	nop;

	<bb 27> :
	label '<L15>';
	689546331 = '{''CLOBBER''}';
	nop;

	<bb 28> :
	label '<L16>';
	std::allocator<char>::~allocator  ( &689546330 );
	nop;

	<bb 29> :
	label '<L17>';
	689546330 = '{''CLOBBER''}';
	nop;

	<bb 30> :
	label '<L18>';
	std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, int>>>::~map  ( &mp );
	nop;

	<bb 31> :
	label '<L19>';
	mp = '{''CLOBBER''}';
	it = '{''CLOBBER''}';
	nop;

}


