

main  (  )
{

	<bb 0> :
	$x = 13;
	T2 = $x % 2;
	T3 = T2 == 0;
	if ( T3 )
		goto <bb 1>;
	else
		goto <bb 5>;

	<bb 1> :
	T4 = $x % 3;
	T5 = T4 == 0;
	if ( T5 )
		goto <bb 2>;
	else
		goto <bb 3>;

	<bb 2> :
	T7 = <h3>;
	T7 = T7 + $x;
	T6 = T7 +  is divisible by 2 and 3</h3>;
	echo  ( T6 );
	goto BB_4;

	<bb 3> :
	T10 = <h3>;
	T10 = T10 + $x;
	T9 = T10 +  is divisible by 2 but not divisible by 3</h3>;
	echo  ( T9 );

	<bb 4> :
	goto BB_8;

	<bb 5> :
	T12 = $x % 3;
	T13 = T12 == 0;
	if ( T13 )
		goto <bb 6>;
	else
		goto <bb 7>;

	<bb 6> :
	T15 = <h3>;
	T15 = T15 + $x;
	T14 = T15 +  is divisible by 3 but not divisible by 2</h3>;
	echo  ( T14 );
	goto BB_8;

	<bb 7> :
	T18 = <h3>;
	T18 = T18 + $x;
	T17 = T18 +  is not divisible by 3 and not divisible by 2</h3>;
	echo  ( T17 );

	<bb 8> :
	return 1;

}


