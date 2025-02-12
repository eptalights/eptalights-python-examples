
main  (  )
{

	<bb 2> :
	c = 5;
	p = &c;
	$T1 = *p;
	printf  ( R"("%d")", $T1 );

	<bb 3> :
	$T6 = 0;
	c = R"({)"R"(CLOBBER)"R"(})";

	<bb 4> :
	nop;
	return $T6;

	<bb 5> :
	nop;
	c = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
