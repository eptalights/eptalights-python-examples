

main  (  )
{
	double n2 ;
	double n1 ;
	char operation ;
	int 68952814 ;

	<bb 2> :
	printf  ( '"Enter an operator (+, -, *, /): "' );

	<bb 3> :
	*__isoc99_scanf  ( '"%c"', &operation );

	<bb 4> :
	printf  ( '"Enter two operands: "' );

	<bb 5> :
	*__isoc99_scanf  ( '"%lf %lf"', &n1, &n2 );

	<bb 6> :
	$T1 = operation;
	$T2 = $T1;
	switch ( $T2 )
	case default: :
		goto <bb 15>;
	case case42: :
		goto <bb 11>;
	case case43: :
		goto <bb 7>;
	case case45: :
		goto <bb 9>;
	case case47: :
		goto <bb 13>;

	<bb 7> :
	label '<L0>';
	$T3 = n1;
	$T4 = n2;
	$T5 = $T3 + $T4;
	$T6 = n2;
	$T7 = n1;
	printf  ( '"%.1lf + %.1lf = %.1lf"', $T7, $T6, $T5 );

	<bb 8> :

	<bb 9> :
	label '<L1>';
	$T8 = n1;
	$T9 = n2;
	$T10 = $T8 - $T9;
	$T11 = n2;
	$T12 = n1;
	printf  ( '"%.1lf - %.1lf = %.1lf"', $T12, $T11, $T10 );

	<bb 10> :

	<bb 11> :
	label '<L2>';
	$T13 = n1;
	$T14 = n2;
	$T15 = $T13 * $T14;
	$T16 = n2;
	$T17 = n1;
	printf  ( '"%.1lf * %.1lf = %.1lf"', $T17, $T16, $T15 );

	<bb 12> :

	<bb 13> :
	label '<L3>';
	$T18 = n1;
	$T19 = n2;
	$T20 = $T18 / $T19;
	$T21 = n2;
	$T22 = n1;
	printf  ( '"%.1lf / %.1lf = %.1lf"', $T22, $T21, $T20 );

	<bb 14> :

	<bb 15> :
	label '<L4>';
	printf  ( '"Error! operator is not correct"' );

	<bb 16> :
	$T35 = 0;
	operation = '{''CLOBBER''}';
	n1 = '{''CLOBBER''}';
	n2 = '{''CLOBBER''}';

	<bb 17> :
	label '<L7>';
	return $T35;

	<bb 18> :
	label '<L8>';
	operation = '{''CLOBBER''}';
	n1 = '{''CLOBBER''}';
	n2 = '{''CLOBBER''}';
	nop;

}


