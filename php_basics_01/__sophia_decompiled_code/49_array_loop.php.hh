

main  (  )
{

	<bb 0> :
	$capitals = {"Maharashtra":"Mumbai","Telangana":"Hyderabad","UP":"Lucknow","Tamilnadu":"Chennai"};
	@5 = array_keys  ( $capitals );
	$keys = @5;
	$i = 0;
	goto BB_2;

	<bb 1> :
	T8 = $keys[$i];
	$cap = T8;
	T12 = Capital of ;
	T12 = T12 + $cap;
	T12 = T12 +  is ;
	T10 = $capitals[$cap];
	T12 = T12 + T10;
	T11 = T12 +  
;
	echo  ( T11 );
	$$pre_inc  ( $i );

	<bb 2> :
	T16 = count  ( $keys );
	T17 = $i < T16;
	if ( T17 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 3> :
	return 1;

}


