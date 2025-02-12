
printPair  ( p )
{

	<bb 2> :
	$T9 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("(")" );
	$T1 = $T9;
	$T2 = p.first;
	$T11 = std::ostream::operator<<  ( $T1, $T2 );
	$T3 = $T11;
	$T13 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( $T3, R"(", ")" );
	$T4 = $T13;
	$T5 = p.second;
	$T15 = std::ostream::operator<<  ( $T4, $T5 );
	$T6 = $T15;
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( $T6, R"(") ")" );
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

Showstack  ( s )
{

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

	<bb 2> :
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::stack<std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>, void>  ( &s );

	<bb 3> :
	6895165909 = 10;
	6895165910 = 20;
	std::pair<int, int>::pair<int, int, true>  ( &6895165911, &6895165909, &6895165910 );
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::push  ( &s, &6895165911 );

	<bb 4> :
	6895165911 = R"({)"R"(CLOBBER)"R"(})";
	6895165910 = R"({)"R"(CLOBBER)"R"(})";
	6895165909 = R"({)"R"(CLOBBER)"R"(})";
	6895165912 = 15;
	6895165913 = 5;
	std::pair<int, int>::pair<int, int, true>  ( &6895165914, &6895165912, &6895165913 );
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::push  ( &s, &6895165914 );

	<bb 5> :
	6895165914 = R"({)"R"(CLOBBER)"R"(})";
	6895165913 = R"({)"R"(CLOBBER)"R"(})";
	6895165912 = R"({)"R"(CLOBBER)"R"(})";
	6895165915 = 1;
	6895165916 = 5;
	std::pair<int, int>::pair<int, int, true>  ( &6895165917, &6895165915, &6895165916 );
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::push  ( &s, &6895165917 );

	<bb 6> :
	6895165917 = R"({)"R"(CLOBBER)"R"(})";
	6895165916 = R"({)"R"(CLOBBER)"R"(})";
	6895165915 = R"({)"R"(CLOBBER)"R"(})";
	6895165918 = 5;
	6895165919 = 10;
	std::pair<int, int>::pair<int, int, true>  ( &6895165920, &6895165918, &6895165919 );
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::push  ( &s, &6895165920 );

	<bb 7> :
	6895165920 = R"({)"R"(CLOBBER)"R"(})";
	6895165919 = R"({)"R"(CLOBBER)"R"(})";
	6895165918 = R"({)"R"(CLOBBER)"R"(})";
	6895165921 = 7;
	6895165922 = 9;
	std::pair<int, int>::pair<int, int, true>  ( &6895165923, &6895165921, &6895165922 );
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::push  ( &s, &6895165923 );

	<bb 8> :
	6895165923 = R"({)"R"(CLOBBER)"R"(})";
	6895165922 = R"({)"R"(CLOBBER)"R"(})";
	6895165921 = R"({)"R"(CLOBBER)"R"(})";
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("Stack of Pairs: ")" );

	<bb 9> :
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::stack  ( &6895165935, &s );

	<bb 10> :
	Showstack  ( &6895165935 );

	<bb 11> :
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::~stack  ( &6895165935 );
	6895165935 = R"({)"R"(CLOBBER)"R"(})";
	$T49 = std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("\nSize of Stack of Pairs: ")" );

	<bb 12> :
	$T1 = $T49;
	$T2 = std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::size  ( &s );
	std::ostream::operator<<  ( $T1, $T2 );

	<bb 13> :
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("\nTop of Stack of Pairs: ")" );

	<bb 14> :
	$T3 = std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::top  ( &s );
	printPair  ( $T3 );

	<bb 15> :
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("\n\nRemoving the top pair\n")" );

	<bb 16> :
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::pop  ( &s );
	std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>  ( &std::cout, R"("Current Stack of Pairs: ")" );

	<bb 17> :
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::stack  ( &6895165963, &s );

	<bb 18> :
	Showstack  ( &6895165963 );

	<bb 19> :
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::~stack  ( &6895165963 );
	6895165963 = R"({)"R"(CLOBBER)"R"(})";
	$T62 = 0;
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::~stack  ( &s );
	s = R"({)"R"(CLOBBER)"R"(})";

	<bb 20> :
	nop;
	return $T62;

	<bb 21> :
	nop;
	6895165911 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 22> :
	nop;
	6895165910 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 23> :
	nop;
	6895165909 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 24> :
	nop;
	6895165914 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 25> :
	nop;
	6895165913 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 26> :
	nop;
	6895165912 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 27> :
	nop;
	6895165917 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 28> :
	nop;
	6895165916 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 29> :
	nop;
	6895165915 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 30> :
	nop;
	6895165920 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 31> :
	nop;
	6895165919 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 32> :
	nop;
	6895165918 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 33> :
	nop;
	6895165923 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 34> :
	nop;
	6895165922 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 35> :
	nop;
	6895165921 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 36> :
	nop;
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::~stack  ( &6895165935 );
	nop;

	<bb 37> :
	nop;
	6895165935 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 38> :
	nop;
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::~stack  ( &6895165963 );
	nop;

	<bb 39> :
	nop;
	6895165963 = R"({)"R"(CLOBBER)"R"(})";
	nop;

	<bb 40> :
	nop;
	std::stack<std::pair<int, int>, std::deque<std::pair<int, int>, std::allocator<std::pair<int, int>>>>::~stack  ( &s );
	nop;

	<bb 41> :
	nop;
	s = R"({)"R"(CLOBBER)"R"(})";
	nop;

}

_GLOBAL__sub_I__Z9printPairSt4pairIiiE  (  )
{

	<bb 2> :
	__static_initialization_and_destruction_0  ( 1, 65535 );
	return;

}
