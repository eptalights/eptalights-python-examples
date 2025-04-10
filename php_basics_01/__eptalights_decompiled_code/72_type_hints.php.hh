

main  (  )
{
	<bb 0> :
	$x = 10;
	$y = 20;
	addition  ( $x, $y );
	return 1;

}

addition  ( [unnamed] $x, [unnamed] $y )
{
	<bb 0> :
	nop;
	nop;
	T3 = 'First number: ';
	T3 = T3 + $x;
	T3 = T3 + ' Second number: ';
	T3 = T3 + $y;
	T2 = T3 + ' Addition: ';
	T6 = $x + $y;
	T7 = T2 + T6;
	echo  ( T7 );
	return 'null';

}


