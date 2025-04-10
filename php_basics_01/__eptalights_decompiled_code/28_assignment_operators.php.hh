

main  (  )
{
	<bb 0> :
	$a = 42;
	$b = 20;
	T5 = $a + $b;
	$c = T5;
	T8 = 'Addition Operation Result: ';
	T8 = T8 + $c;
	T7 = T8 + ' \n';
	echo  ( T7 );
	$c = $c + $a;
	T12 = 'Add AND Assignment Operation Result: ';
	T12 = T12 + $c;
	T11 = T12 + ' \n';
	echo  ( T11 );
	$c = $c - $a;
	T16 = 'Subtract AND Assignment Operation Result: ';
	T16 = T16 + $c;
	T15 = T16 + ' \n';
	echo  ( T15 );
	$c = $c * $a;
	T20 = 'Multiply AND Assignment Operation Result: ';
	T20 = T20 + $c;
	T19 = T20 + ' \n';
	echo  ( T19 );
	$c = $c / $a;
	T24 = 'Division AND Assignment Operation Result: ';
	T24 = T24 + $c;
	T23 = T24 + ' \n';
	echo  ( T23 );
	$c = $c % $a;
	nop;
	T27 = 'Modulus AND Assignment Operation Result: ' + $c;
	echo  ( T27 );
	return 1;

}


