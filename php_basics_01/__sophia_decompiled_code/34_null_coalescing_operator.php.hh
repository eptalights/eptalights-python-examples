

main  (  )
{

	<bb 0> :
	T1 = $$global_fetch  ( _GET );
	T2 = T1[name];
	T3 = coalesce  ( T2 );
	if ( T3 )
		goto <bb 4>;
	else
		goto <bb 1>;

	<bb 1> :
	T4 = $$global_fetch  ( _POST );
	T5 = T4[name];
	T6 = coalesce  ( T5 );
	if ( T6 )
		goto <bb 3>;
	else
		goto <bb 2>;

	<bb 2> :
	T6 = Guest;

	<bb 3> :
	T3 = T6;

	<bb 4> :
	$username = T3;
	nop;
	T8 = Welcome  + $username;
	echo  ( T8 );
	return 1;

}


