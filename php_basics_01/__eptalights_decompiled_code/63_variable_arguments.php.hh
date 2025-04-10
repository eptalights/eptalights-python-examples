

myfunction  (  )
{
	<bb 0> :
	T2 = $$func_get_args  (  );
	$len = T2;
	echo  ( 'Numbers : ' );
	$i = 0;
	$i = 0;
	goto 'BB_2';

	<bb 1> :
	@6 = func_get_arg  ( $i );
	T7 = @6 + ' ';
	echo  ( T7 );
	$$pre_inc  ( $i );

	<bb 2> :
	T9 = $i < $len;
	if ( T9 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 3> :
	return 'null';

}

main  (  )
{
	<bb 0> :
	myfunction  ( 5, 12, 9, 23, 8, 41 );
	return 1;

}


