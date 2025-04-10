

showarray  ( [unnamed] $arr )
{
	<bb 0> :
	nop;
	@3 = $$foreach_reset  ( $arr );
	if ( @3 )
		goto <bb 1>;
	else
		goto <bb 6>;

	<bb 1> :
	T4 = $$foreach_fetch  ( @3, $v );
	if ( $v )
		goto <bb 2>;
	else
		goto <bb 6>;

	<bb 2> :
	$k = T4;
	T6 = $$type_check  ( $v );
	if ( T6 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	showarray  ( $v );
	goto 'BB_5';

	<bb 4> :
	T9 = $k;
	T9 = T9 + ' => ';
	T9 = T9 + $v;
	T8 = T9 + '  ';
	echo  ( T8 );

	<bb 5> :
	goto 'BB_1';

	<bb 6> :
	$$foreach_free  ( @3 );
	echo  ( '\n' );
	return 'null';

}

main  (  )
{
	<bb 0> :
	$arr3D = '[[[1,0,9],[0,5,6],[1,0,3]],[[0,4,6],[0,0,1],[1,2,7]]]';
	showarray  ( $arr3D );
	return 1;

}


