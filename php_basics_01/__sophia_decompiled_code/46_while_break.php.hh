

main  (  )
{

	<bb 0> :
	$i = 0;
	goto BB_3;

	<bb 1> :
	$$pre_inc  ( $i );
	T3 = $i == 3;
	if ( T3 )
		goto <bb 2>;
	else
		goto <bb 3>;

	<bb 2> :
	goto BB_4;

	<bb 3> :
	T4 = $i < 10;
	if ( T4 )
		goto <bb 1>;
	else
		goto <bb 4>;

	<bb 4> :
	nop;
	T5 = Loop stopped at i =  + $i;
	echo  ( T5 );
	return 1;

}


