

square  ( [unnamed] $number )
{
	<bb 0> :
	nop;
	T1 = $number * $number;
	return T1;

	<bb 1> :
	return 'null';

}

main  (  )
{
	<bb 0> :
	$arr = '[1,2,3,4,5]';
	@3 = $$foreach_reset  ( $arr );
	if ( @3 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 1> :
	$$foreach_fetch  ( @3, $a );
	if ( $a )
		goto <bb 2>;
	else
		goto <bb 3>;

	<bb 2> :
	T5 = 'square of ';
	T5 = T5 + $a;
	T4 = T5 + ':';
	@7 = square  ( $a );
	T8 = T4 + @7;
	T9 = T8 + '\n';
	echo  ( T9 );
	goto 'BB_1';

	<bb 3> :
	$$foreach_free  ( @3 );
	echo  ( '' );
	return 1;

}


