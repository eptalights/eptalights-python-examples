

main  (  )
{
	int 68952811 ;

	<bb 2> :
	printNumbers  (  );
	$T3 = 0;

	<bb 3> :
	label '<L0>';
	return $T3;

}

printNumbers  (  )
{
	int n ;

	<bb 2> :
	n = 1;

	<bb 3> :
	label 'label';
	printf  ( '"%d "', n );
	n = n + 1;
	if ( n <= 10 )
		goto <bb 4>;
	else
		goto <bb 5>;

	<bb 4> :
	nop;

	<bb 5> :
	return;

}


