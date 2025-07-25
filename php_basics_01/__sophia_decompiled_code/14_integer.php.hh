

main  (  )
{

	<bb 0> :
	$x = 10;
	$y = 3.5;
	T5 = $x / $y;
	$z = T5;
	var_dump  ( $z );
	@8 = intdiv  ( $x, $y );
	$z = @8;
	var_dump  ( $z );
	return 1;

}


