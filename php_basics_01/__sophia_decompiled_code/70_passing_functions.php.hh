

square  ( [unnamed] $number )
{

	<bb 0> :
	nop;
	T1 = $$pow  ( $number, 3 );
	return T1;

	<bb 1> :
	return null;

}

cube  ( [unnamed] $number )
{

	<bb 0> :
	nop;
	T1 = $$pow  ( $number, 2 );
	return T1;

	<bb 1> :
	return null;

}

myfunction  ( [unnamed] $function, [unnamed] $number )
{

	<bb 0> :
	nop;
	nop;
	@3 = $function  ( $number );
	$result = @3;
	return $result;

	<bb 1> :
	return null;

}

main  (  )
{

	<bb 0> :
	$x = 5;
	@4 = myfunction  ( cube, $x );
	$cube = @4;
	@6 = myfunction  ( square, $x );
	$square = @6;
	T9 = Square of ;
	T9 = T9 + $x;
	T9 = T9 +  = ;
	T8 = T9 + $square;
	T11 = T8 + 
;
	echo  ( T11 );
	T13 = Cube of ;
	T13 = T13 + $x;
	T13 = T13 +  = ;
	T12 = T13 + $cube;
	T15 = T12 + 
;
	echo  ( T15 );
	echo  (  );
	return 1;

}


