

myfunction  (  )
{
	<bb 0> :
	$a = 'a';
	$b = 'b';
	T3 = $a + $b;
	T4 = T3 / 2;
	$c = T4;
	T7 = 'inside function a = ';
	T7 = T7 + $a;
	T7 = T7 + ' b = ';
	T7 = T7 + $b;
	T7 = T7 + ' c = ';
	T6 = T7 + $c;
	T10 = T6 + '\n';
	echo  ( T10 );
	T11 = $a + 10;
	$a = T11;
	return 'null';

}

main  (  )
{
	<bb 0> :
	$a = 10;
	$b = 20;
	T6 = 'Global variables before function call: a = ';
	T6 = T6 + $a;
	T6 = T6 + ' b = ';
	T5 = T6 + $b;
	T8 = T5 + '\n';
	echo  ( T8 );
	myfunction  (  );
	T11 = 'Variables after function call: a = ';
	T11 = T11 + $a;
	T11 = T11 + ' b = ';
	T11 = T11 + $b;
	T11 = T11 + ' c = ';
	T10 = T11 + $c;
	echo  ( T10 );
	echo  ( '' );
	return 1;

}


