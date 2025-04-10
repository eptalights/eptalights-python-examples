

main  (  )
{
	<bb 0> :
	addition  ( 10, 20 );
	$x = 100;
	$y = 200;
	addition  ( $x, $y );
	return 1;

}

addition  ( [unnamed] $first, [unnamed] $second )
{
	<bb 0> :
	nop;
	nop;
	T3 = $first + $second;
	$result = T3;
	T6 = 'First number: ';
	T6 = T6 + $first;
	T5 = T6 + ' \n';
	echo  ( T5 );
	T9 = 'Second number: ';
	T9 = T9 + $second;
	T8 = T9 + ' \n';
	echo  ( T8 );
	nop;
	T11 = 'Addition: ' + $result;
	echo  ( T11 );
	return 'null';

}


