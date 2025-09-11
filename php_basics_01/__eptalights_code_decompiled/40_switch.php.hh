

main  (  )
{

	<bb 0> :
	$x = 0;
	T2 = $x == 0;
	if ( T2 )
		goto <bb 4>;
	else
		goto <bb 1>;

	<bb 1> :
	T2 = $x == 1;
	if ( T2 )
		goto <bb 5>;
	else
		goto <bb 2>;

	<bb 2> :
	T2 = $x == 2;
	if ( T2 )
		goto <bb 6>;
	else
		goto <bb 3>;

	<bb 3> :
	goto 'BB_7';

	<bb 4> :
	echo  ( 'x equals 0' );
	goto 'BB_8';

	<bb 5> :
	echo  ( 'x equals 1 \n' );
	goto 'BB_8';

	<bb 6> :
	echo  ( 'x equals 2 \n' );
	goto 'BB_8';

	<bb 7> :
	echo  ( 'None of the above' );

	<bb 8> :
	return 1;

}


