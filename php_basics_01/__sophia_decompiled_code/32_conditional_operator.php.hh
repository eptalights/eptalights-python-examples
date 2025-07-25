

main  (  )
{

	<bb 0> :
	$a = 10;
	$b = 20;
	T5 = $b < $a;
	if ( T5 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	T6 = $a;
	goto BB_3;

	<bb 2> :
	T6 = $b;

	<bb 3> :
	$result = T6;
	T9 = TEST1 : Value of result is ;
	T9 = T9 + $result;
	T8 = T9 +  
;
	echo  ( T8 );
	T11 = $a < $b;
	if ( T11 )
		goto <bb 4>;
	else
		goto <bb 5>;

	<bb 4> :
	T12 = $a;
	goto BB_6;

	<bb 5> :
	T12 = $b;

	<bb 6> :
	$result = T12;
	nop;
	T14 = TEST2 : Value of result is  + $result;
	echo  ( T14 );
	return 1;

}


