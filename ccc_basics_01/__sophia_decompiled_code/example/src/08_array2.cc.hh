

main  (  )
{
	int i ;
	int 68952853 ;

	<bb 2> :
	puts  ( &"Enter information of students:"[0] );
	i = 0;

	<bb 3> :
	if ( i > 4 )
		goto <bb 5>;
	else
		goto <bb 4>;

	<bb 4> :
	$T1 = i + 1;
	s[i].roll = $T1;
	$T2 = s[i].roll;
	printf  ( "\nFor roll number%d,\n", $T2 );
	printf  ( "Enter first name: " );
	$T3 = &s[i].firstName;
	*__isoc99_scanf  ( "%s", $T3 );
	printf  ( "Enter marks: " );
	$T4 = &s[i].marks;
	*__isoc99_scanf  ( "%f", $T4 );
	i = i + 1;

	<bb 5> :
	puts  ( &"Displaying Information:\n"[0] );
	i = 0;

	<bb 6> :
	if ( i > 4 )
		goto <bb 8>;
	else
		goto <bb 7>;

	<bb 7> :
	$T5 = i + 1;
	printf  ( "\nRoll number: %d\n", $T5 );
	printf  ( "First name: " );
	$T6 = &s[i].firstName;
	puts  ( $T6 );
	$T7 = s[i].marks;
	$T8 = $T7;
	printf  ( "Marks: %.1f", $T8 );
	putchar  ( 10 );
	i = i + 1;

	<bb 8> :
	$T31 = 0;

	<bb 9> :
	label <L6>;
	return $T31;

}


