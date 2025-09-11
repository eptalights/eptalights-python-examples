

main  (  )
{

	<bb 0> :
	$a = '[3,2,5,6,1]';
	usort  ( $a, 'mysort' );
	@5 = $$foreach_reset  ( $a );
	if ( @5 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 1> :
	T6 = $$foreach_fetch  ( @5, $value );
	if ( $value )
		goto <bb 2>;
	else
		goto <bb 3>;

	<bb 2> :
	$key = T6;
	T9 = $key;
	T9 = T9 + ': ';
	T9 = T9 + $value;
	T8 = T9 + '\n';
	echo  ( T8 );
	goto 'BB_1';

	<bb 3> :
	$$foreach_free  ( @5 );
	echo  ( '' );
	return 1;

}

mysort  ( [unnamed] $a, [unnamed] $b )
{

	<bb 0> :
	nop;
	nop;
	T2 = $a == $b;
	if ( T2 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	return 0;

	<bb 2> :
	T3 = $a < $b;
	if ( T3 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	T4 = -1;
	goto 'BB_5';

	<bb 4> :
	T4 = 1;

	<bb 5> :
	return T4;

	<bb 6> :
	return 'null';

}


