

main  (  )
{

	<bb 0> :
	@4 = getdate  (  );
	$date_array = @4;
	@6 = $$foreach_reset  ( $date_array );
	if ( @6 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 1> :
	T7 = $$foreach_fetch  ( @6, $val );
	if ( $val )
		goto <bb 2>;
	else
		goto <bb 3>;

	<bb 2> :
	$key = T7;
	T10 = $key;
	T10 = T10 + ' = ';
	T10 = T10 + $val;
	T9 = T10 + '\n';
	echo  ( T9 );
	goto 'BB_1';

	<bb 3> :
	$$foreach_free  ( @6 );
	$formated_date = "Today's date: ";
	T13 = $date_array['mday'];
	T14 = T13 + '-';
	$formated_date = $formated_date + T14;
	T16 = $date_array['mon'];
	T17 = T16 + '-';
	$formated_date = $formated_date + T17;
	T19 = $date_array['year'];
	$formated_date = $formated_date + T19;
	echo  ( $formated_date );
	return 1;

}


