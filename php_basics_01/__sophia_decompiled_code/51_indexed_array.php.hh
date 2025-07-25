

main  (  )
{

	<bb 0> :
	$arr1 = [10,20,30,40,50];
	T5 = count  ( $arr1 );
	$size = T5;
	$i = 0;
	goto BB_2;

	<bb 1> :
	T8 = $size - $i;
	T9 = T8 - 1;
	T11 = $arr1[$i];
	$arr2[T9] = T11;
	$$pre_inc  ( $i );

	<bb 2> :
	T13 = $i < $size;
	if ( T13 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 3> :
	$i = 0;
	goto BB_5;

	<bb 4> :
	T18 = arr1[;
	T18 = T18 + $i;
	T18 = T18 + ] = $;
	T15 = $arr1[$i];
	T18 = T18 + T15;
	T18 = T18 +  arr2[;
	T18 = T18 + $i;
	T18 = T18 + ] = $;
	T16 = $arr2[$i];
	T18 = T18 + T16;
	T17 = T18 +  
;
	echo  ( T17 );
	$$pre_inc  ( $i );

	<bb 5> :
	T24 = $i < $size;
	if ( T24 )
		goto <bb 4>;
	else
		goto <bb 6>;

	<bb 6> :
	return 1;

}


