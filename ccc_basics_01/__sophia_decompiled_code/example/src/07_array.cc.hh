

main  (  )
{
	int i ;
	float [ 5 ] arr2 ;
	int [ 5 ] arr1 ;
	int [ 5 ] arr ;
	int 68952813 ;

	<bb 2> :
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	arr1[0] = 1;
	arr1[1] = 2;
	arr1[2] = 3;
	arr1[3] = 4;
	arr1[4] = 5;
	arr2[0] = 1.0e+0;
	i = 0;

	<bb 3> :
	if ( i > 4 )
		goto <bb 5>;
	else
		goto <bb 4>;

	<bb 4> :
	$T1 = i;
	$T2 = $T1;
	$T3 = $T2 * 2.100000000000000088817841970012523233890533447265625e+0;
	$T4 = $T3;
	arr2[i] = $T4;
	i = i + 1;

	<bb 5> :
	$T22 = 0;
	arr = {CLOBBER};
	arr1 = {CLOBBER};
	arr2 = {CLOBBER};

	<bb 6> :
	label <L4>;
	return $T22;

}


