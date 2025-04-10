

main  (  )
{
	<bb 0> :
	$x = 'bat';
	$y = 'baz';
	T5 = $x <=> $y;
	$z = T5;
	T8 = $x;
	T8 = T8 + ' <=> ';
	T8 = T8 + $y;
	T8 = T8 + ' = ';
	T7 = T8 + $z;
	echo  ( T7 );
	echo  ( '\n\n<!-- \nbat <=> baz = -1 \n-->' );
	return 1;

}


