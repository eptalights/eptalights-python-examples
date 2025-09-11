

myfunction  ( [unnamed] $x, [unnamed] $numbers )
{

	<bb 0> :
	nop;
	nop;
	nop;
	T3 = 'First number: ' + $x;
	T4 = T3 + '\n';
	echo  ( T4 );
	echo  ( 'Remaining numbers: ' );
	@5 = $$foreach_reset  ( $numbers );
	if ( @5 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 1> :
	$$foreach_fetch  ( @5, $n );
	if ( $n )
		goto <bb 2>;
	else
		goto <bb 3>;

	<bb 2> :
	nop;
	T6 = $n + '  ';
	echo  ( T6 );
	goto 'BB_1';

	<bb 3> :
	$$foreach_free  ( @5 );
	return 'null';

}

main  (  )
{

	<bb 0> :
	myfunction  ( 5, 12, 9, 23, 8, 41 );
	return 1;

}


