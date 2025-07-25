

square  ( [unnamed] $number )
{

	<bb 0> :
	nop;
	T1 = $number * $number;
	return T1;

	<bb 1> :
	return null;

}

main  (  )
{

	<bb 0> :
	$arr = [1,2,3,4,5];
	@3 = array_map  ( square, $arr );
	$squares = @3;
	var_dump  ( $squares );
	echo  (  );
	return 1;

}


