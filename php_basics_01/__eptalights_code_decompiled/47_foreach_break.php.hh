

main  (  )
{

	<bb 0> :
	$array = '[1,2,3,4,5]';
	@3 = $$foreach_reset  ( $array );
	if ( @3 )
		goto <bb 1>;
	else
		goto <bb 5>;

	<bb 1> :
	$$foreach_fetch  ( @3, $value );
	if ( $value )
		goto <bb 2>;
	else
		goto <bb 5>;

	<bb 2> :
	T4 = $value == 3;
	if ( T4 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	goto 'BB_1';

	<bb 4> :
	T6 = 'Value is ';
	T6 = T6 + $value;
	T5 = T6 + ' \n';
	echo  ( T5 );
	goto 'BB_1';

	<bb 5> :
	$$foreach_free  ( @3 );
	return 1;

}


