

main  (  )
{

	<bb 0> :
	$arg = [23,5.55,142,56,99];
	echo  ( array= );
	@3 = $$foreach_reset  ( $arg );
	if ( @3 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 1> :
	$$foreach_fetch  ( @3, $i );
	if ( $i )
		goto <bb 2>;
	else
		goto <bb 3>;

	<bb 2> :
	T4 = $i + ,;
	echo  ( T4 );
	goto BB_1;

	<bb 3> :
	$$foreach_free  ( @3 );
	echo  ( 
 );
	@5 = max  ( $arg );
	T6 = max =  + @5;
	echo  ( T6 );
	return 1;

}


