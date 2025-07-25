

main  (  )
{

	<bb 0> :
	$a = 0;
	$b = 0;
	$i = 0;
	goto BB_2;

	<bb 1> :
	$a = $a + 10;
	$b = $b + 5;
	$$pre_inc  ( $i );

	<bb 2> :
	T9 = $i < 5;
	if ( T9 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 3> :
	T11 = At the end of the loop a = ;
	T11 = T11 + $a;
	T11 = T11 +  and b = ;
	T10 = T11 + $b;
	echo  ( T10 );
	return 1;

}


