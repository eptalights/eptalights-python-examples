

division  ( [unnamed] $x, [unnamed] $y )
{

	<bb 0> :
	nop;
	nop;
	T3 = $x / $y;
	$z = T3;
	$$verify_return_type  ( $z );
	return $z;

	<bb 1> :
	$$verify_return_type  (  );
	return 'null';

}

main  (  )
{

	<bb 0> :
	$x = 20.5;
	$y = 10;
	T4 = 'First number: ' + $x;
	echo  ( T4 );
	T5 = '\nSecond number: ' + $y;
	echo  ( T5 );
	@6 = division  ( $x, $y );
	T7 = '\nDivision: ' + @6;
	echo  ( T7 );
	return 1;

}


