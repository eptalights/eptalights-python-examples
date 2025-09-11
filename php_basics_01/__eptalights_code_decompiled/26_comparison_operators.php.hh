

main  (  )
{

	<bb 0> :
	$a = 42;
	$b = 20;
	T4 = $a == $b;
	if ( T4 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	echo  ( 'TEST1 : a is equal to b \n' );
	goto 'BB_3';

	<bb 2> :
	echo  ( 'TEST1 : a is not equal to b \n' );

	<bb 3> :
	T5 = $b < $a;
	if ( T5 )
		goto <bb 4>;
	else
		goto <bb 5>;

	<bb 4> :
	echo  ( 'TEST2 : a is greater than  b \n' );
	goto 'BB_6';

	<bb 5> :
	echo  ( 'TEST2 : a is not greater than b \n' );

	<bb 6> :
	T6 = $a < $b;
	if ( T6 )
		goto <bb 7>;
	else
		goto <bb 8>;

	<bb 7> :
	echo  ( 'TEST3 : a is less than  b \n' );
	goto 'BB_9';

	<bb 8> :
	echo  ( 'TEST3 : a is not less than b \n' );

	<bb 9> :
	T7 = $a != $b;
	if ( T7 )
		goto <bb 10>;
	else
		goto <bb 11>;

	<bb 10> :
	echo  ( 'TEST4 : a is not equal to b \n' );
	goto 'BB_12';

	<bb 11> :
	echo  ( 'TEST4 : a is equal to b \n' );

	<bb 12> :
	T8 = $b <= $a;
	if ( T8 )
		goto <bb 13>;
	else
		goto <bb 14>;

	<bb 13> :
	echo  ( 'TEST5 : a is either greater than or equal to b \n' );
	goto 'BB_15';

	<bb 14> :
	echo  ( 'TEST5 : a is neither greater than nor equal to b \n' );

	<bb 15> :
	T9 = $a <= $b;
	if ( T9 )
		goto <bb 16>;
	else
		goto <bb 17>;

	<bb 16> :
	echo  ( 'TEST6 : a is either less than or equal to b \n' );
	goto 'BB_18';

	<bb 17> :
	echo  ( 'TEST6 : a is neither less than nor equal to b' );

	<bb 18> :
	return 1;

}


