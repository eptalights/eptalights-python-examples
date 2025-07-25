

main  (  )
{

	<bb 0> :
	@1 = date  ( D );
	$d = @1;
	T3 = $d == Fri;
	if ( T3 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	echo  ( <h3>Have a nice weekend!</h3> );
	goto BB_5;

	<bb 2> :
	T4 = $d == Sun;
	if ( T4 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	echo  ( <h3>Have a nice Sunday!</h3> );
	goto BB_5;

	<bb 4> :
	echo  ( <h3>Have a nice day!</h3> );

	<bb 5> :
	return 1;

}


