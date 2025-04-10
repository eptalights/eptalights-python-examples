

main  (  )
{
	<bb 0> :
	@2 = foo  (  );
	$x = @2;
	$y = $x;
	T6 = $x->var1;
	T7 = T6 + ' ';
	T8 = $y->var1;
	T9 = T7 + T8;
	T10 = T9 + '\n';
	echo  ( T10 );
	$x->var1 = 'Hello World';
	T12 = $x->var1;
	T13 = T12 + ' ';
	T14 = $y->var1;
	T15 = T13 + T14;
	T16 = T15 + '\n';
	echo  ( T16 );
	echo  ( '' );
	return 1;

}


