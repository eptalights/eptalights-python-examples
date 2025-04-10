

main  (  )
{
	<bb 0> :
	$x = 10;
	T2 = $x == 0;
	if ( T2 )
		goto <bb 4>;
	else
		goto <bb 1>;

	<bb 1> :
	T2 = $x == 1;
	if ( T2 )
		goto <bb 4>;
	else
		goto <bb 2>;

	<bb 2> :
	T2 = $x == 2;
	if ( T2 )
		goto <bb 4>;
	else
		goto <bb 3>;

	<bb 3> :
	goto 'BB_5';

	<bb 4> :
	echo  ( 'x between 0 and 2 \n' );
	goto 'BB_6';

	<bb 5> :
	echo  ( 'x is less than 0 or greater than 2' );

	<bb 6> :
	return 1;

}


