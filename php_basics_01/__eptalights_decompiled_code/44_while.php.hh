

main  (  )
{
	<bb 0> :
	$i = 0;
	$num = 50;
	goto 'BB_2';

	<bb 1> :
	$$pre_dec  ( $num );
	$$pre_inc  ( $i );

	<bb 2> :
	T9 = $i < 10;
	if ( T9 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 3> :
	T11 = 'Loop stopped at i = ';
	T11 = T11 + $i;
	T11 = T11 + ' and num = ';
	T10 = T11 + $num;
	echo  ( T10 );
	$numbers = '[10,20,30,40,50]';
	T14 = count  ( $numbers );
	$size = T14;
	$x = 0;
	goto 'BB_5';

	<bb 4> :
	T19 = 'Number at index ';
	T19 = T19 + $x;
	T19 = T19 + ' is ';
	T17 = $numbers[$x];
	T19 = T19 + T17;
	T18 = T19 + ' \n';
	echo  ( T18 );
	$$pre_inc  ( $x );

	<bb 5> :
	T23 = $x < $size;
	if ( T23 )
		goto <bb 4>;
	else
		goto <bb 6>;

	<bb 6> :
	return 1;

}


