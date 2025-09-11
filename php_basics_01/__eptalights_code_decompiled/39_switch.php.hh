

main  (  )
{

	<bb 0> :
	@1 = date  ( 'D' );
	$d = @1;
	$$switch  ( $d );

	<bb 1> :
	T3 = $d == 'Mon';
	if ( T3 )
		goto <bb 9>;
	else
		goto <bb 2>;

	<bb 2> :
	T3 = $d == 'Tue';
	if ( T3 )
		goto <bb 10>;
	else
		goto <bb 3>;

	<bb 3> :
	T3 = $d == 'Wed';
	if ( T3 )
		goto <bb 11>;
	else
		goto <bb 4>;

	<bb 4> :
	T3 = $d == 'Thu';
	if ( T3 )
		goto <bb 12>;
	else
		goto <bb 5>;

	<bb 5> :
	T3 = $d == 'Fri';
	if ( T3 )
		goto <bb 13>;
	else
		goto <bb 6>;

	<bb 6> :
	T3 = $d == 'Sat';
	if ( T3 )
		goto <bb 14>;
	else
		goto <bb 7>;

	<bb 7> :
	T3 = $d == 'Sun';
	if ( T3 )
		goto <bb 15>;
	else
		goto <bb 8>;

	<bb 8> :
	goto 'BB_16';

	<bb 9> :
	echo  ( 'Today is Monday' );
	goto 'BB_17';

	<bb 10> :
	echo  ( 'Today is Tuesday' );
	goto 'BB_17';

	<bb 11> :
	echo  ( 'Today is Wednesday' );
	goto 'BB_17';

	<bb 12> :
	echo  ( 'Today is Thursday' );
	goto 'BB_17';

	<bb 13> :
	echo  ( 'Today is Friday' );
	goto 'BB_17';

	<bb 14> :
	echo  ( 'Today is Saturday' );
	goto 'BB_17';

	<bb 15> :
	echo  ( 'Today is Sunday' );
	goto 'BB_17';

	<bb 16> :
	echo  ( 'Wonder which day is this ?' );

	<bb 17> :
	return 1;

}


