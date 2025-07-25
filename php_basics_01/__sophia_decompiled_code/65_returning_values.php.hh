

main  (  )
{

	<bb 0> :
	$a = 5;
	@3 = raiseto  ( $a );
	$val = @3;
	T6 = Square of ;
	T6 = T6 + $a;
	T5 = T6 + : ;
	T8 = $val[sqr];
	T9 = T5 + T8;
	T10 = T9 + 
;
	echo  ( T10 );
	T12 = Cube of ;
	T12 = T12 + $a;
	T11 = T12 + : ;
	T14 = $val[cub];
	T15 = T11 + T14;
	T16 = T15 + 
;
	echo  ( T16 );
	return 1;

}

raiseto  ( [unnamed] $x )
{

	<bb 0> :
	nop;
	T4 = $$pow  ( $x, 2 );
	$sqr = T4;
	T6 = $$pow  ( $x, 3 );
	$cub = T6;
	T8 = $$init_array  ( $sqr, sqr );
	T8 = $$add_array_element  ( $cub, cub );
	$ret = T8;
	return $ret;

	<bb 1> :
	return null;

}


