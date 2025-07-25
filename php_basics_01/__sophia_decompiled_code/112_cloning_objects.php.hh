

main  (  )
{

	<bb 0> :
	@2 = foo  (  );
	$x = @2;
	T5 = clone  ( $x );
	$y = T5;
	T7 = $x->var1;
	T8 = T7 +  ;
	T9 = $y->var1;
	T10 = T8 + T9;
	T11 = T10 + 
;
	echo  ( T11 );
	$x->var1 = Hello PHP;
	T13 = $x->var1;
	T14 = T13 +  ;
	T15 = $y->var1;
	T16 = T14 + T15;
	T17 = T16 + 
;
	echo  ( T17 );
	echo  (  );
	return 1;

}


