

main  (  )
{

	<bb 0> :
	$arr1 = {"a":10,"b":20,"c":30,"d":40};
	@5 = $$foreach_reset  ( $arr1 );
	if ( @5 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 1> :
	T6 = $$foreach_fetch  ( @5, $v );
	if ( $v )
		goto <bb 2>;
	else
		goto <bb 3>;

	<bb 2> :
	$k = T6;
	T9 = $v * 2;
	$arr2[$k] = T9;
	goto BB_1;

	<bb 3> :
	$$foreach_free  ( @5 );
	print_r  ( $arr2 );
	return 1;

}


