

main  (  )
{

	<bb 0> :
	$i = 0;
	$num = 0;

	<bb 1> :
	$$pre_inc  ( $i );
	T5 = $i < 10;
	if ( T5 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 2> :
	nop;
	T6 = 'Loop stopped at i = ' + $i;
	echo  ( T6 );
	return 1;

}


