

main  (  )
{

	<bb 0> :
	$a = 5;
	$b = 2;
	@7 = raiseto  ( $a, $b );
	$val = @7;
	T10 = $a;
	T10 = T10 + ' raised to ';
	T10 = T10 + $b;
	T10 = T10 + ' = ';
	T9 = T10 + $val;
	T13 = T9 + '\n';
	echo  ( T13 );
	$x = 7;
	$y = 3;
	T17 = $x;
	T17 = T17 + ' raised to ';
	T17 = T17 + $y;
	T16 = T17 + ' = ';
	@19 = raiseto  ( $x, $y );
	T20 = T16 + @19;
	T21 = T20 + '\n';
	echo  ( T21 );
	return 1;

}

raiseto  ( [unnamed] $x, [unnamed] $i )
{

	<bb 0> :
	nop;
	nop;
	T2 = $i == 2;
	if ( T2 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 1> :
	T3 = $$pow  ( $x, 2 );
	return T3;

	<bb 2> :
	goto 'BB_5';

	<bb 3> :
	T4 = $i == 3;
	if ( T4 )
		goto <bb 4>;
	else
		goto <bb 5>;

	<bb 4> :
	T5 = $$pow  ( $x, 3 );
	return T5;

	<bb 5> :
	return 'null';

}


