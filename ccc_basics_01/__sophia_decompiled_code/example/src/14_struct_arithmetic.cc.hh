

addNumbers  ( struct complex c1 = struct complex, struct complex c2 = struct complex, struct complex * result )
{

	<bb 2> :
	$T1 = c1.real;
	$T2 = c2.real;
	$T3 = $T1 + $T2;
	result->real = $T3;
	$T4 = c1.imag;
	$T5 = c2.imag;
	$T6 = $T4 + $T5;
	result->imag = $T6;
	return;

}

main  (  )
{
	struct complex result ;
	struct complex c2 ;
	struct complex c1 ;
	int 68952857 ;

	<bb 2> :
	puts  ( &"For first number,"[0] );

	<bb 3> :
	printf  ( "Enter real part: " );

	<bb 4> :
	*__isoc99_scanf  ( "%f", &c1.real );

	<bb 5> :
	printf  ( "Enter imaginary part: " );

	<bb 6> :
	*__isoc99_scanf  ( "%f", &c1.imag );

	<bb 7> :
	puts  ( &"For second number, "[0] );

	<bb 8> :
	printf  ( "Enter real part: " );

	<bb 9> :
	*__isoc99_scanf  ( "%f", &c2.real );

	<bb 10> :
	printf  ( "Enter imaginary part: " );

	<bb 11> :
	*__isoc99_scanf  ( "%f", &c2.imag );

	<bb 12> :
	addNumbers  ( c1, c2, &result );
	$T1 = result.real;
	$T2 = $T1;
	printf  ( "\nresult.real = %.1f\n", $T2 );

	<bb 13> :
	$T3 = result.imag;
	$T4 = $T3;
	printf  ( "result.imag = %.1f", $T4 );

	<bb 14> :
	$T20 = 0;
	c1 = {CLOBBER};
	c2 = {CLOBBER};
	result = {CLOBBER};

	<bb 15> :
	label <L1>;
	return $T20;

	<bb 16> :
	label <L2>;
	c1 = {CLOBBER};
	c2 = {CLOBBER};
	result = {CLOBBER};
	nop;

}


