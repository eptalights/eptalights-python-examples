

main  (  )
{
	<bb 0> :
	$numbers = '[10,20,30,40,50]';
	$i = 0;
	goto 'BB_2';

	<bb 1> :
	T6 = 'numbers[';
	T6 = T6 + $i;
	T6 = T6 + '] = ';
	T4 = $numbers[$i];
	T6 = T6 + T4;
	T5 = T6 + ' \n';
	echo  ( T5 );
	$$pre_inc  ( $i );

	<bb 2> :
	T10 = count  ( $numbers );
	T11 = $i < T10;
	if ( T11 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 3> :
	return 1;

}


