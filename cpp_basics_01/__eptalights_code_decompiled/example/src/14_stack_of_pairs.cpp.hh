

printPair  ( struct pair p = struct pair )
{
	struct basic_ostream & 6895177858 ;
	struct basic_ostream & 6895177857 ;
	struct basic_ostream & 6895177856 ;
	struct basic_ostream & 6895177855 ;

	<bb 2> :
	$T9 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"("' );
	$T1 = $T9;
	$T2 = p.first;
	$T11 = std::ostream::operator<<  ( $T1, $T2 );
	$T3 = $T11;
	$T13 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( $T3, '", "' );
	$T4 = $T13;
	$T5 = p.second;
	$T15 = std::ostream::operator<<  ( $T4, $T5 );
	$T6 = $T15;
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( $T6, '") "' );
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

Showstack  ( struct stack & s )
{
	bool 6895177860 ;

	<bb 2> :
	$T1 = std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::empty  ( s );
	$T7 = !$T1;
	if ( $T7 != 0 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	$T2 = std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::top  ( s );
	printPair  ( $T2 );
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::pop  ( s );

	<bb 4> :
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, 10 );
	return;

}

main  (  )
{
	struct basic_ostream & 6895177915 ;
	struct stack s ;
	int 6895177896 ;
	struct stack 6895165963 ;
	struct stack 6895165935 ;
	int 6895165922 ;
	int 6895165921 ;
	struct value_type 6895165923 ;
	int 6895165919 ;
	int 6895165918 ;
	struct value_type 6895165920 ;
	int 6895165916 ;
	int 6895165915 ;
	struct value_type 6895165917 ;
	int 6895165913 ;
	int 6895165912 ;
	struct value_type 6895165914 ;
	int 6895165910 ;
	int 6895165909 ;
	struct value_type 6895165911 ;

	<bb 2> :
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::stack<std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>, void>  ( &s );

	<bb 3> :
	6895165909 = 10;
	6895165910 = 20;
	std::pair<int, int>::pair<int, int, true>  ( &6895165911, &6895165909, &6895165910 );
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::push  ( &s, &6895165911 );

	<bb 4> :
	6895165911 = '{''CLOBBER''}';
	6895165910 = '{''CLOBBER''}';
	6895165909 = '{''CLOBBER''}';
	6895165912 = 15;
	6895165913 = 5;
	std::pair<int, int>::pair<int, int, true>  ( &6895165914, &6895165912, &6895165913 );
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::push  ( &s, &6895165914 );

	<bb 5> :
	6895165914 = '{''CLOBBER''}';
	6895165913 = '{''CLOBBER''}';
	6895165912 = '{''CLOBBER''}';
	6895165915 = 1;
	6895165916 = 5;
	std::pair<int, int>::pair<int, int, true>  ( &6895165917, &6895165915, &6895165916 );
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::push  ( &s, &6895165917 );

	<bb 6> :
	6895165917 = '{''CLOBBER''}';
	6895165916 = '{''CLOBBER''}';
	6895165915 = '{''CLOBBER''}';
	6895165918 = 5;
	6895165919 = 10;
	std::pair<int, int>::pair<int, int, true>  ( &6895165920, &6895165918, &6895165919 );
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::push  ( &s, &6895165920 );

	<bb 7> :
	6895165920 = '{''CLOBBER''}';
	6895165919 = '{''CLOBBER''}';
	6895165918 = '{''CLOBBER''}';
	6895165921 = 7;
	6895165922 = 9;
	std::pair<int, int>::pair<int, int, true>  ( &6895165923, &6895165921, &6895165922 );
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::push  ( &s, &6895165923 );

	<bb 8> :
	6895165923 = '{''CLOBBER''}';
	6895165922 = '{''CLOBBER''}';
	6895165921 = '{''CLOBBER''}';
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"Stack of Pairs: "' );

	<bb 9> :
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::stack  ( &6895165935, &s );

	<bb 10> :
	Showstack  ( &6895165935 );

	<bb 11> :
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::~stack  ( &6895165935 );
	6895165935 = '{''CLOBBER''}';
	$T49 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"\\nSize of Stack of Pairs: "' );

	<bb 12> :
	$T1 = $T49;
	$T2 = std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::size  ( &s );
	std::ostream::operator<<  ( $T1, $T2 );

	<bb 13> :
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"\\nTop of Stack of Pairs: "' );

	<bb 14> :
	$T3 = std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::top  ( &s );
	printPair  ( $T3 );

	<bb 15> :
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"\\n\\nRemoving the top pair\\n"' );

	<bb 16> :
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::pop  ( &s );
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, '"Current Stack of Pairs: "' );

	<bb 17> :
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::stack  ( &6895165963, &s );

	<bb 18> :
	Showstack  ( &6895165963 );

	<bb 19> :
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::~stack  ( &6895165963 );
	6895165963 = '{''CLOBBER''}';
	$T62 = 0;
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::~stack  ( &s );
	s = '{''CLOBBER''}';

	<bb 20> :
	label '<L2>';
	return $T62;

	<bb 21> :
	label '<L3>';
	6895165911 = '{''CLOBBER''}';
	nop;

	<bb 22> :
	label '<L4>';
	6895165910 = '{''CLOBBER''}';
	nop;

	<bb 23> :
	label '<L5>';
	6895165909 = '{''CLOBBER''}';
	nop;

	<bb 24> :
	label '<L6>';
	6895165914 = '{''CLOBBER''}';
	nop;

	<bb 25> :
	label '<L7>';
	6895165913 = '{''CLOBBER''}';
	nop;

	<bb 26> :
	label '<L8>';
	6895165912 = '{''CLOBBER''}';
	nop;

	<bb 27> :
	label '<L9>';
	6895165917 = '{''CLOBBER''}';
	nop;

	<bb 28> :
	label '<L10>';
	6895165916 = '{''CLOBBER''}';
	nop;

	<bb 29> :
	label '<L11>';
	6895165915 = '{''CLOBBER''}';
	nop;

	<bb 30> :
	label '<L12>';
	6895165920 = '{''CLOBBER''}';
	nop;

	<bb 31> :
	label '<L13>';
	6895165919 = '{''CLOBBER''}';
	nop;

	<bb 32> :
	label '<L14>';
	6895165918 = '{''CLOBBER''}';
	nop;

	<bb 33> :
	label '<L15>';
	6895165923 = '{''CLOBBER''}';
	nop;

	<bb 34> :
	label '<L16>';
	6895165922 = '{''CLOBBER''}';
	nop;

	<bb 35> :
	label '<L17>';
	6895165921 = '{''CLOBBER''}';
	nop;

	<bb 36> :
	label '<L18>';
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::~stack  ( &6895165935 );
	nop;

	<bb 37> :
	label '<L19>';
	6895165935 = '{''CLOBBER''}';
	nop;

	<bb 38> :
	label '<L20>';
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::~stack  ( &6895165963 );
	nop;

	<bb 39> :
	label '<L21>';
	6895165963 = '{''CLOBBER''}';
	nop;

	<bb 40> :
	label '<L22>';
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::~stack  ( &s );
	nop;

	<bb 41> :
	label '<L23>';
	s = '{''CLOBBER''}';
	nop;

}

_GLOBAL__sub_I__Z9printPairSt4pairIiiE  (  )
{

	<bb 2> :
	__static_initialization_and_destruction_0  ( 1, 65535 );
	return;

}


