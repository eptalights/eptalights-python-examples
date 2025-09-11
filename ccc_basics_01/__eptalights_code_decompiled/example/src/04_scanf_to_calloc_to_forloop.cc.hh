

main  (  )
{
	int sum ;
	int * ptr ;
	int i ;
	int n ;
	int 68953637 ;

	<bb 2> :
	sum = 0;
	printf  ( '"Enter number of elements: "' );

	<bb 3> :
	*__isoc99_scanf  ( '"%d"', &n );

	<bb 4> :
	$T1 = n;
	$T2 = $T1;
	ptr = calloc  ( $T2, 4 );
	if ( ptr == 0 )
		goto <bb 5>;
	else
		goto <bb 7>;

	<bb 5> :
	printf  ( '"Error! memory not allocated."' );

	<bb 6> :
	exit  ( 0 );

	<bb 7> :
	printf  ( '"Enter elements: "' );

	<bb 8> :
	i = 0;

	<bb 9> :
	$T3 = n;
	if ( i >= $T3 )
		goto <bb 12>;
	else
		goto <bb 10>;

	<bb 10> :
	$T4 = i;
	$T5 = $T4 * 4;
	$T6 = ptr + $T5;
	*__isoc99_scanf  ( '"%d"', $T6 );

	<bb 11> :
	$T7 = i;
	$T8 = $T7 * 4;
	$T9 = ptr + $T8;
	$T10 = *$T9;
	sum = sum + $T10;
	i = i + 1;

	<bb 12> :
	printf  ( '"Sum = %d"', sum );

	<bb 13> :
	free  ( ptr );
	$T28 = 0;
	n = '{''CLOBBER''}';

	<bb 14> :
	label '<L6>';
	return $T28;

	<bb 15> :
	label '<L7>';
	n = '{''CLOBBER''}';
	nop;

}


