

main  (  )
{
	<bb 0> :
	$x = 10;
	$y = 20;
	@5 = addfunction  ( $x, $y );
	$num = @5;
	nop;
	T7 = 'Sum of the two numbers is : ' + $num;
	echo  ( T7 );
	echo  ( '    ' );
	return 1;

}

addFunction  ( [unnamed] $num1, [unnamed] $num2 )
{
	<bb 0> :
	nop;
	nop;
	T3 = $num1 + $num2;
	$sum = T3;
	return $sum;

	<bb 1> :
	return 'null';

}


