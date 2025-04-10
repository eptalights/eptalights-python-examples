

main  (  )
{
	<bb 0> :
	$i = 1;
	goto 'BB_5';

	<bb 1> :
	$j = 1;
	goto 'BB_3';

	<bb 2> :
	T5 = 'i= ';
	T5 = T5 + $i;
	T5 = T5 + ' j= ';
	T5 = T5 + $j;
	T4 = T5 + ' \n';
	echo  ( T4 );
	$$pre_inc  ( $j );

	<bb 3> :
	T9 = $j <= 3;
	if ( T9 )
		goto <bb 2>;
	else
		goto <bb 4>;

	<bb 4> :
	$$pre_inc  ( $i );

	<bb 5> :
	T11 = $i <= 3;
	if ( T11 )
		goto <bb 1>;
	else
		goto <bb 6>;

	<bb 6> :
	return 1;

}


