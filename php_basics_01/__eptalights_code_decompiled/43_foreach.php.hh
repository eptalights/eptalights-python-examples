

main  (  )
{

	<bb 0> :
	$array = '[1,2,3,4,5]';
	@6 = $$foreach_reset  ( $array );
	if ( @6 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 1> :
	$$foreach_fetch  ( @6, $value );
	if ( $value )
		goto <bb 2>;
	else
		goto <bb 3>;

	<bb 2> :
	T8 = 'Value is ';
	T8 = T8 + $value;
	T7 = T8 + ' \n';
	echo  ( T7 );
	goto 'BB_1';

	<bb 3> :
	$$foreach_free  ( @6 );
	$capitals = '{"Maharashtra":"Mumbai","Telangana":"Hyderabad","UP":"Lucknow","Tamilnadu":"Chennai"}';
	@11 = $$foreach_reset  ( $capitals );
	if ( @11 )
		goto <bb 4>;
	else
		goto <bb 6>;

	<bb 4> :
	T12 = $$foreach_fetch  ( @11, $v );
	if ( $v )
		goto <bb 5>;
	else
		goto <bb 6>;

	<bb 5> :
	$k = T12;
	T15 = 'Capital of ';
	T15 = T15 + $k;
	T15 = T15 + ' is ';
	T15 = T15 + $v;
	T14 = T15 + ' \n';
	echo  ( T14 );
	goto 'BB_4';

	<bb 6> :
	$$foreach_free  ( @11 );
	return 1;

}


