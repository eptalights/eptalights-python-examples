

factorial  ( [unnamed] $n )
{

	<bb 0> :
	nop;
	T1 = $n == 1;
	if ( T1 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 1> :
	T2 = $n + '\n';
	echo  ( T2 );
	return 1;

	<bb 2> :
	goto 'BB_4';

	<bb 3> :
	nop;
	T3 = $n + ' * ';
	echo  ( T3 );
	T4 = $n - 1;
	@5 = factorial  ( T4 );
	T6 = $n * @5;
	return T6;

	<bb 4> :
	return 'null';

}

main  (  )
{

	<bb 0> :
	@0 = factorial  ( 5 );
	T1 = 'Factorial of 5 = ' + @0;
	echo  ( T1 );
	return 1;

}


