
addNumbers  ( c1, c2, result )
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

	<bb 2> :
	puts  ( &R"("For first number,")"[0] );

	<bb 3> :
	printf  ( R"("Enter real part: ")" );

	<bb 4> :
	*__isoc99_scanf  ( R"("%f")", &c1.real );

	<bb 5> :
	printf  ( R"("Enter imaginary part: ")" );

	<bb 6> :
	*__isoc99_scanf  ( R"("%f")", &c1.imag );

	<bb 7> :
	puts  ( &R"("For second number, ")"[0] );

	<bb 8> :
	printf  ( R"("Enter real part: ")" );

	<bb 9> :
	*__isoc99_scanf  ( R"("%f")", &c2.real );

	<bb 10> :
	printf  ( R"("Enter imaginary part: ")" );

	<bb 11> :
	*__isoc99_scanf  ( R"("%f")", &c2.imag );

	<bb 12> :
	addNumbers  ( c1, c2, &result );
	$T1 = result.real;
	$T2 = $T1;
	printf  ( R"("\nresult.real = %.1f\n")", $T2 );

	<bb 13> :
	$T3 = result.imag;
	$T4 = $T3;
	printf  ( R"("result.imag = %.1f")", $T4 );

	<bb 14> :
	$T20 = 0;
	c1 = R"({)"R"(CLOBBER)"R"(})";
	c2 = R"({)"R"(CLOBBER)"R"(})";
	result = R"({)"R"(CLOBBER)"R"(})";

	<bb 15> :
	nop;
	return $T20;

	<bb 16> :
	nop;
	c1 = R"({)"R"(CLOBBER)"R"(})";
	c2 = R"({)"R"(CLOBBER)"R"(})";
	result = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
