

swap_value  ( [unnamed] $a, [unnamed] $b )
{

	<bb 0> :
	nop;
	nop;
	T4 = Initial values a = ;
	T4 = T4 + $a;
	T4 = T4 +  b = ;
	T4 = T4 + $b;
	T3 = T4 +  
;
	echo  ( T3 );
	$c = $a;
	$a = $b;
	$b = $c;
	T11 = Swapped values a = ;
	T11 = T11 + $a;
	T11 = T11 +  b = ;
	T11 = T11 + $b;
	T10 = T11 +  
;
	echo  ( T10 );
	return null;

}

main  (  )
{

	<bb 0> :
	$x = 10;
	$y = 20;
	T5 = Actual arguments x = ;
	T5 = T5 + $x;
	T5 = T5 +  y = ;
	T5 = T5 + $y;
	T4 = T5 +  

;
	echo  ( T4 );
	swap_value  ( $x, $y );
	echo  ( Actual arguments do not change after the function: 
 );
	T10 = x = ;
	T10 = T10 + $x;
	T10 = T10 +  y = ;
	T10 = T10 + $y;
	T9 = T10 +  

;
	echo  ( T9 );
	swap_ref  ( $x, $y );
	echo  ( Actual arguments get changed after the function: 
 );
	T15 = x = ;
	T15 = T15 + $x;
	T15 = T15 +  y = ;
	T14 = T15 + $y;
	echo  ( T14 );
	return 1;

}

swap_ref  ( [unnamed] $a, [unnamed] $b )
{

	<bb 0> :
	nop;
	nop;
	T4 = Initial values a = ;
	T4 = T4 + $a;
	T4 = T4 +  b = ;
	T4 = T4 + $b;
	T3 = T4 +  
;
	echo  ( T3 );
	$c = $a;
	$a = $b;
	$b = $c;
	T11 = Swapped values a = ;
	T11 = T11 + $a;
	T11 = T11 +  b = ;
	T11 = T11 + $b;
	T10 = T11 +  
;
	echo  ( T10 );
	return null;

}


