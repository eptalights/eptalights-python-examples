
main  (  )
{

	<bb 2> :
	puts  ( &R"("Enter 12 values: ")"[0] );

	<bb 3> :
	i = 0;

	<bb 4> :
	if ( i > 1 )
		goto <bb 13>;
	else
		goto <bb 5>;

	<bb 5> :
	j = 0;

	<bb 6> :
	if ( j > 2 )
		goto <bb 12>;
	else
		goto <bb 7>;

	<bb 7> :
	k = 0;

	<bb 8> :
	if ( k > 1 )
		goto <bb 11>;
	else
		goto <bb 9>;

	<bb 9> :
	$T1 = &test[i][j][k];
	*__isoc99_scanf  ( R"("%d")", $T1 );

	<bb 10> :
	k = k + 1;

	<bb 11> :
	j = j + 1;

	<bb 12> :
	i = i + 1;

	<bb 13> :
	puts  ( &R"("\nDisplaying values:")"[0] );

	<bb 14> :
	i = 0;

	<bb 15> :
	if ( i > 1 )
		goto <bb 24>;
	else
		goto <bb 16>;

	<bb 16> :
	j = 0;

	<bb 17> :
	if ( j > 2 )
		goto <bb 23>;
	else
		goto <bb 18>;

	<bb 18> :
	k = 0;

	<bb 19> :
	if ( k > 1 )
		goto <bb 22>;
	else
		goto <bb 20>;

	<bb 20> :
	$T2 = test[i][j][k];
	printf  ( R"("test[%d][%d][%d] = %d\n")", i, j, k, $T2 );

	<bb 21> :
	k = k + 1;

	<bb 22> :
	j = j + 1;

	<bb 23> :
	i = i + 1;

	<bb 24> :
	$T33 = 0;
	test = R"({)"R"(CLOBBER)"R"(})";

	<bb 25> :
	nop;
	return $T33;

	<bb 26> :
	nop;
	test = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
