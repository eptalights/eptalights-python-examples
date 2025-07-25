

main  (  )
{
	int * ptr ;
	int [ 5 ] x ;
	int 68952807 ;

	<bb 2> :
	x[0] = 1;
	x[1] = 2;
	x[2] = 3;
	x[3] = 4;
	x[4] = 5;
	ptr = &x[2];
	$T1 = *ptr;
	printf  ( "*ptr = %d \n", $T1 );

	<bb 3> :
	$T2 = ptr + 4;
	$T3 = *$T2;
	printf  ( "*(ptr+1) = %d \n", $T3 );

	<bb 4> :
	$T4 = ptr + 18446744073709551612;
	$T5 = *$T4;
	printf  ( "*(ptr-1) = %d", $T5 );

	<bb 5> :
	$T17 = 0;
	x = {CLOBBER};

	<bb 6> :
	label <L1>;
	return $T17;

	<bb 7> :
	label <L2>;
	x = {CLOBBER};
	nop;

}


