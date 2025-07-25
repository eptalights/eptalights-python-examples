

main  (  )
{

	<bb 0> :
	$a = 42;
	$b = 20;
	T5 = $a + $b;
	$c = T5;
	T8 = Addtion Operation Result: ;
	T8 = T8 + $c;
	T7 = T8 +  
;
	echo  ( T7 );
	T10 = $a - $b;
	$c = T10;
	T13 = Substraction Operation Result: ;
	T13 = T13 + $c;
	T12 = T13 +  
;
	echo  ( T12 );
	T15 = $a * $b;
	$c = T15;
	T18 = Multiplication Operation Result: ;
	T18 = T18 + $c;
	T17 = T18 +  
;
	echo  ( T17 );
	T20 = $a / $b;
	$c = T20;
	T23 = Division Operation Result: ;
	T23 = T23 + $c;
	T22 = T23 +  
;
	echo  ( T22 );
	T25 = $a % $b;
	$c = T25;
	T28 = Modulus Operation Result: ;
	T28 = T28 + $c;
	T27 = T28 +  
;
	echo  ( T27 );
	T30 = $$post_inc  ( $a );
	$c = T30;
	T33 = Increment Operation Result: ;
	T33 = T33 + $c;
	T32 = T33 +  
;
	echo  ( T32 );
	T35 = $$post_dec  ( $a );
	$c = T35;
	nop;
	T37 = Decrement Operation Result:  + $c;
	echo  ( T37 );
	return 1;

}


