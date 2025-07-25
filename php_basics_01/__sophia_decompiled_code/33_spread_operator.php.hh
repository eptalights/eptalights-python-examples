

myfunction  ( [unnamed] $x, [unnamed] $y, [unnamed] $z )
{

	<bb 0> :
	nop;
	nop;
	nop;
	T4 = x = ;
	T4 = T4 + $x;
	T4 = T4 +   y = ;
	T4 = T4 + $y;
	T4 = T4 +   z = ;
	T3 = T4 + $z;
	echo  ( T3 );
	return null;

}

main  (  )
{

	<bb 0> :
	$arr1 = [4,5];
	T5 = $$init_array  ( 1, NEXT );
	T5 = $$add_array_element  ( 2, NEXT );
	T5 = $$add_array_element  ( 3, NEXT );
	T5 = $$add_array_unpack  ( $arr1 );
	$arr2 = T5;
	print_r  ( $arr2 );
	$arr1 = [1,2,3];
	$arr2 = [4,5,6];
	T10 = $$init_array  ( NEXT );
	T10 = $$add_array_unpack  ( $arr1 );
	T10 = $$add_array_unpack  ( $arr2 );
	$arr3 = T10;
	print_r  ( $arr3 );
	$$check_undef_args  (  );
	myfunction  ( [10,20], 30 );
	@14 = get_squares  (  );
	T15 = $$init_array  ( NEXT );
	T15 = $$add_array_unpack  ( @14 );
	$squares = T15;
	print_r  ( $squares );
	echo  (  );
	return 1;

}

get_squares  (  )
{

	<bb 0> :
	$i = 0;
	goto BB_2;

	<bb 1> :
	T4 = $$pow  ( $i, 2 );
	$arr = T4;
	$$pre_inc  ( $i );

	<bb 2> :
	T6 = $i < 5;
	if ( T6 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 3> :
	return $arr;

	<bb 4> :
	return null;

}


