

main  (  )
{
	<bb 0> :
	$x = 7;
	$y = 10;
	T5 = $y / 2;
	T6 = $x <=> T5;
	$z = T6;
	T9 = $x;
	T9 = T9 + ' <=> ';
	T9 = T9 + $y;
	T9 = T9 + '/2 = ';
	T8 = T9 + $z;
	echo  ( T8 );
	return 1;

}


