

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
	$T3 = $T2 * 4;
	ptr = malloc  ( $T3 );
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
	$T4 = n;
	if ( i >= $T4 )
		goto <bb 12>;
	else
		goto <bb 10>;

	<bb 10> :
	$T5 = i;
	$T6 = $T5 * 4;
	$T7 = ptr + $T6;
	*__isoc99_scanf  ( '"%d"', $T7 );

	<bb 11> :
	$T8 = i;
	$T9 = $T8 * 4;
	$T10 = ptr + $T9;
	$T11 = *$T10;
	sum = sum + $T11;
	i = i + 1;

	<bb 12> :
	printf  ( '"Sum = %d"', sum );

	<bb 13> :
	free  ( ptr );
	$T29 = 0;
	n = '{''CLOBBER''}';

	<bb 14> :
	label '<L6>';
	return $T29;

	<bb 15> :
	label '<L7>';
	n = '{''CLOBBER''}';
	nop;

}


