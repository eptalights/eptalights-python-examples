

main  (  )
{

	<bb 0> :
	$z = 1;
	T5 = declare_lambda_function  (  );
	$$bind_lexical  ( T5, $y );
	$$bind_lexical  ( T5, $z );
	$fn = T5;
	$x = 5;
	$y = 10;
	T10 = 'x:';
	T10 = T10 + $x;
	T10 = T10 + ' y:';
	T10 = T10 + $y;
	T9 = T10 + ' \n';
	echo  ( T9 );
	@13 = $fn  ( $x );
	@14 = @13  ( $y );
	T15 = 'Result of nested arrow functions: ' + @14;
	echo  ( T15 );
	return 1;

}


