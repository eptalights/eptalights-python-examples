
main  (  )
{

	<bb 2> :
	personPtr = &person1;
	printf  ( R"("Enter age: ")" );

	<bb 3> :
	$T1 = &personPtr->age;
	*__isoc99_scanf  ( R"("%d")", $T1 );

	<bb 4> :
	printf  ( R"("Enter weight: ")" );

	<bb 5> :
	$T2 = &personPtr->weight;
	*__isoc99_scanf  ( R"("%f")", $T2 );

	<bb 6> :
	puts  ( &R"("Displaying:")"[0] );

	<bb 7> :
	$T3 = personPtr->age;
	printf  ( R"("Age: %d\n")", $T3 );

	<bb 8> :
	$T4 = personPtr->weight;
	$T5 = $T4;
	printf  ( R"("weight: %f")", $T5 );

	<bb 9> :
	$T16 = 0;
	person1 = R"({)"R"(CLOBBER)"R"(})";

	<bb 10> :
	nop;
	return $T16;

	<bb 11> :
	nop;
	person1 = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
