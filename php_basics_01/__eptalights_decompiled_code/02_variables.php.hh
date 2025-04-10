

main  (  )
{
	<bb 0> :
	$x = 10;
	T2 = gettype  ( $x );
	T3 = 'Data type of x: ' + T2;
	T4 = T3 + '\n';
	echo  ( T4 );
	$x = 10.55;
	T6 = gettype  ( $x );
	T7 = 'Data type of x now: ' + T6;
	T8 = T7 + '';
	echo  ( T8 );
	return 1;

}


