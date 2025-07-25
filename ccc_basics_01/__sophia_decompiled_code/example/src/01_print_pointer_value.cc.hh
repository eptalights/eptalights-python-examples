

main  (  )
{
	int * p ;
	int c ;
	int 68952807 ;

	<bb 2> :
	c = 5;
	p = &c;
	$T1 = *p;
	printf  ( "%d", $T1 );

	<bb 3> :
	$T6 = 0;
	c = {CLOBBER};

	<bb 4> :
	label <L1>;
	return $T6;

	<bb 5> :
	label <L2>;
	c = {CLOBBER};
	nop;

}


