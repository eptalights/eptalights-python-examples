

// Class Properties and Constants 
class square  { 
	public  (long ) side = 5 ;
}


square :: area  (  )
{

	<bb 0> :
	T1 = $this->side;
	T2 = $$pow  ( T1, 2 );
	T3 = $$fetch_class_constant  ( 'PI' );
	T4 = T2 * T3;
	$area = T4;
	return $area;

	<bb 1> :
	return 'null';

}

main  (  )
{

	<bb 0> :
	$$declare_const  ( 'X', 22 );
	$$declare_const  ( 'Y', 7 );
	@1 = square  (  );
	$s1 = @1;
	T4 = $$fetch_class_constant  ( 'square', 'PI' );
	T5 = 'PI=' + T4;
	T6 = T5 + '\n';
	echo  ( T6 );
	@7 = $s1->area  (  );
	T8 = 'area=' + @7;
	echo  ( T8 );
	echo  ( '' );
	return 1;

}


