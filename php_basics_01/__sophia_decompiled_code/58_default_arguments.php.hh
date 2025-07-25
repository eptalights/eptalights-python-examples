

main  (  )
{

	<bb 0> :
	percent  ( 30, 35, 40, 150 );
	return 1;

}

percent  ( [unnamed] $p, [unnamed] $c, [unnamed] $m, [unnamed] $ttl )
{

	<bb 0> :
	nop;
	nop;
	nop;
	nop;
	T5 = $p + $c;
	T6 = T5 + $m;
	T7 = T6 * 100;
	T8 = T7 / $ttl;
	$per = T8;
	echo  ( Marks obtained: 
 );
	T11 = Physics = ;
	T11 = T11 + $p;
	T11 = T11 +  Chemistry = ;
	T11 = T11 + $c;
	T11 = T11 +  Maths = ;
	T11 = T11 + $m;
	T10 = T11 +  
;
	echo  ( T10 );
	T16 = Percentage = ;
	T16 = T16 + $per;
	T15 = T16 +  
;
	echo  ( T15 );
	return null;

}


