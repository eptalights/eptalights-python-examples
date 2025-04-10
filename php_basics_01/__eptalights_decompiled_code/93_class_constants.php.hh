

// Class Properties and Constants 
class square  { 
	public (long) side = 5 ;
}


square :: area  (  )
{
	<bb 0> :
	T1 = $this->side;
	T2 = $$pow  ( T1, 2 );
	T3 = T2 * 3.14159;
	$area = T3;
	return $area;

	<bb 1> :
	return 'null';

}

main  (  )
{
	<bb 0> :
	@1 = square  (  );
	$s1 = @1;
	echo  ( 'PI=3.1415926535898\n' );
	@4 = $s1->area  (  );
	T5 = 'area=' + @4;
	echo  ( T5 );
	echo  ( '' );
	return 1;

}


