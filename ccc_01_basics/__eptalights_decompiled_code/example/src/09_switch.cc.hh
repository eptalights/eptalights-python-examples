
main  (  )
{

	<bb 2> :
	printf  ( R"("Enter an operator (+, -, *, /): ")" );

	<bb 3> :
	*__isoc99_scanf  ( R"("%c")", &operation );

	<bb 4> :
	printf  ( R"("Enter two operands: ")" );

	<bb 5> :
	*__isoc99_scanf  ( R"("%lf %lf")", &n1, &n2 );

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
	nop;
	$T3 = n1;
	$T4 = n2;
	$T5 = $T3 + $T4;
	$T6 = n2;
	$T7 = n1;
	printf  ( R"("%.1lf + %.1lf = %.1lf")", $T7, $T6, $T5 );

	<bb 8> :

	<bb 9> :
	nop;
	$T8 = n1;
	$T9 = n2;
	$T10 = $T8 - $T9;
	$T11 = n2;
	$T12 = n1;
	printf  ( R"("%.1lf - %.1lf = %.1lf")", $T12, $T11, $T10 );

	<bb 10> :

	<bb 11> :
	nop;
	$T13 = n1;
	$T14 = n2;
	$T15 = $T13 * $T14;
	$T16 = n2;
	$T17 = n1;
	printf  ( R"("%.1lf * %.1lf = %.1lf")", $T17, $T16, $T15 );

	<bb 12> :

	<bb 13> :
	nop;
	$T18 = n1;
	$T19 = n2;
	$T20 = $T18 / $T19;
	$T21 = n2;
	$T22 = n1;
	printf  ( R"("%.1lf / %.1lf = %.1lf")", $T22, $T21, $T20 );

	<bb 14> :

	<bb 15> :
	nop;
	printf  ( R"("Error! operator is not correct")" );

	<bb 16> :
	$T35 = 0;
	operation = R"({)"R"(CLOBBER)"R"(})";
	n1 = R"({)"R"(CLOBBER)"R"(})";
	n2 = R"({)"R"(CLOBBER)"R"(})";

	<bb 17> :
	nop;
	return $T35;

	<bb 18> :
	nop;
	operation = R"({)"R"(CLOBBER)"R"(})";
	n1 = R"({)"R"(CLOBBER)"R"(})";
	n2 = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
