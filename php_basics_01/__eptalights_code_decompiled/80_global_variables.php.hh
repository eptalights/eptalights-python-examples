

main  (  )
{

	<bb 0> :
	$x = 10;
	$y = 20;
	addition  (  );
	echo  ( '' );
	return 1;

}

addition  (  )
{

	<bb 0> :
	T1 = $$global_fetch  ( 'x' );
	T2 = $$global_fetch  ( 'y' );
	T3 = T1 + T2;
	$z = T3;
	nop;
	T5 = 'Addition: ' + $z;
	T6 = T5 + '\n';
	echo  ( T6 );
	return 'null';

}


