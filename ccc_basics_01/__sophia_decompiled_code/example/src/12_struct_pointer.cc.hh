

main  (  )
{
	struct person person1 ;
	struct person * personPtr ;
	int 68952844 ;

	<bb 2> :
	personPtr = &person1;
	printf  ( "Enter age: " );

	<bb 3> :
	$T1 = &personPtr->age;
	*__isoc99_scanf  ( "%d", $T1 );

	<bb 4> :
	printf  ( "Enter weight: " );

	<bb 5> :
	$T2 = &personPtr->weight;
	*__isoc99_scanf  ( "%f", $T2 );

	<bb 6> :
	puts  ( &"Displaying:"[0] );

	<bb 7> :
	$T3 = personPtr->age;
	printf  ( "Age: %d\n", $T3 );

	<bb 8> :
	$T4 = personPtr->weight;
	$T5 = $T4;
	printf  ( "weight: %f", $T5 );

	<bb 9> :
	$T16 = 0;
	person1 = {CLOBBER};

	<bb 10> :
	label <L1>;
	return $T16;

	<bb 11> :
	label <L2>;
	person1 = {CLOBBER};
	nop;

}


