
main  (  )
{

	<bb 2> :
	ptr = malloc  ( 120 );
	i = 0;

	<bb 3> :
	if ( i > 2 )
		goto <bb 5>;
	else
		goto <bb 4>;

	<bb 4> :
	printf  ( R"("Enter first name and age respectively: ")" );
	$T1 = i;
	$T2 = $T1 * 40;
	$T3 = ptr + $T2;
	$T4 = &$T3->age;
	$T5 = i;
	$T6 = $T5 * 40;
	$T7 = ptr + $T6;
	$T8 = &$T7->name;
	*__isoc99_scanf  ( R"("%s %d")", $T8, $T4 );
	i = i + 1;

	<bb 5> :
	puts  ( &R"("Displaying Information:")"[0] );
	i = 0;

	<bb 6> :
	if ( i >= n )
		goto <bb 8>;
	else
		goto <bb 7>;

	<bb 7> :
	$T9 = i;
	$T10 = $T9 * 40;
	$T11 = ptr + $T10;
	$T12 = $T11->age;
	$T13 = i;
	$T14 = $T13 * 40;
	$T15 = ptr + $T14;
	$T16 = &$T15->name;
	printf  ( R"("Name: %s\tAge: %d\n")", $T16, $T12 );
	i = i + 1;

	<bb 8> :
	$T33 = 0;

	<bb 9> :
	nop;
	return $T33;

}
