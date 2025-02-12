
main  (  )
{

	<bb 2> :
	sum = 0;
	printf  ( R"("Enter number of elements: ")" );

	<bb 3> :
	*__isoc99_scanf  ( R"("%d")", &n );

	<bb 4> :
	$T1 = n;
	$T2 = $T1;
	ptr = calloc  ( $T2, 4 );
	if ( ptr == 0 )
		goto <bb 5>;
	else
		goto <bb 7>;

	<bb 5> :
	printf  ( R"("Error! memory not allocated.")" );

	<bb 6> :
	exit  ( 0 );

	<bb 7> :
	printf  ( R"("Enter elements: ")" );

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
	*__isoc99_scanf  ( R"("%d")", $T6 );

	<bb 11> :
	$T7 = i;
	$T8 = $T7 * 4;
	$T9 = ptr + $T8;
	$T10 = *$T9;
	sum = sum + $T10;
	i = i + 1;

	<bb 12> :
	printf  ( R"("Sum = %d")", sum );

	<bb 13> :
	free  ( ptr );
	$T28 = 0;
	n = R"({)"R"(CLOBBER)"R"(})";

	<bb 14> :
	nop;
	return $T28;

	<bb 15> :
	nop;
	n = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
