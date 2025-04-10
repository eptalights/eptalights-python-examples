

main  (  )
{
	<bb 0> :
	@0 = sum  ( 2, 3, 4.1 );
	echo  ( @0 );
	return 1;

}

sum  ( [unnamed] $ints )
{
	<bb 0> :
	nop;
	@1 = array_sum  ( $ints );
	return @1;

	<bb 1> :
	return 'null';

}


