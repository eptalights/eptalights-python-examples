

myfunction  ( [unnamed] $x, [unnamed] $y, [unnamed] $z )
{

	<bb 0> :
	nop;
	nop;
	nop;
	T4 = x = ;
	T4 = T4 + $x;
	T4 = T4 +   y = ;
	T4 = T4 + $y;
	T4 = T4 +   z = ;
	T3 = T4 + $z;
	echo  ( T3 );
	return null;

}

main  (  )
{

	<bb 0> :
	$$check_undef_args  (  );
	myfunction  ( 10, 20, 30 );
	echo  (  );
	return 1;

}


