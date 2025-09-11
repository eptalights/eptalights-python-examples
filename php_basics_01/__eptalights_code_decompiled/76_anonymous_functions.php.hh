

main  (  )
{

	<bb 0> :
	$maxmarks = 300;
	T4 = declare_lambda_function  (  );
	$$bind_lexical  ( T4, $maxmarks );
	$percent = T4;
	$m = 250;
	T8 = 'Marks = ';
	T8 = T8 + $m;
	T7 = T8 + ' Percentage = ';
	@10 = $percent  ( $m );
	T11 = T7 + @10;
	echo  ( T11 );
	echo  ( '' );
	return 1;

}


