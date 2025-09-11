

myfunction  (  )
{

	<bb 0> :
	$sum = 0;
	T3 = $$func_get_args  (  );
	@4 = $$foreach_reset  ( T3 );
	if ( @4 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 1> :
	$$foreach_fetch  ( @4, $n );
	if ( $n )
		goto <bb 2>;
	else
		goto <bb 3>;

	<bb 2> :
	$sum = $sum + $n;
	goto 'BB_1';

	<bb 3> :
	$$foreach_free  ( @4 );
	return $sum;

	<bb 4> :
	return 'null';

}

main  (  )
{

	<bb 0> :
	@0 = myfunction  ( 5, 12, 9, 23, 8, 41 );
	echo  ( @0 );
	return 1;

}


