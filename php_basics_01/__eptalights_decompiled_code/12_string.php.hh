

main  (  )
{
	<bb 0> :
	$str = 'This will not expand: \\n a newline';
	T3 = $str + '\n';
	echo  ( T3 );
	$x = 100;
	$str = 'Value of x = $x';
	echo  ( $str );
	return 1;

}


