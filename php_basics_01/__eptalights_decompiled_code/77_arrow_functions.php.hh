

main  (  )
{
	<bb 0> :
	T3 = declare_lambda_function  (  );
	$add = T3;
	$x = 10;
	$y = 20;
	T8 = ' x: ';
	T8 = T8 + $x;
	T8 = T8 + ' y: ';
	T8 = T8 + $y;
	T7 = T8 + ' Addition: ';
	@11 = $add  ( $x, $y );
	T12 = T7 + @11;
	echo  ( T12 );
	echo  ( '' );
	return 1;

}


