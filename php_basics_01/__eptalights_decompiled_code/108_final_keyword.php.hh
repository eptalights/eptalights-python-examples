

// Class Properties and Constants 
class circle  { 
	const (double) PI = 3.14286 ;
}


circle :: __construct  ( [unnamed] $x )
{
	<bb 0> :
	nop;
	CONSTRUCTOR  ( $x, $x );
	return 'null';

}

circle :: area  (  )
{
	<bb 0> :
	T0 = $this->a;
	T1 = T0 * 3.14286;
	T2 = $this->b;
	T3 = T1 * T2;
	$$verify_return_type  ( T3 );
	return T3;

	<bb 1> :
	$$verify_return_type  (  );
	return 'null';

}


// Class Properties and Constants 
class circle  { 
	const (double) PI = 3.14286 ;
}


circle :: __construct  ( [unnamed] $x )
{
	<bb 0> :
	nop;
	CONSTRUCTOR  ( $x, $x );
	return 'null';

}

circle :: area  (  )
{
	<bb 0> :
	T0 = $this->a;
	T1 = T0 * 3.14286;
	T2 = $this->b;
	T3 = T1 * T2;
	$$verify_return_type  ( T3 );
	return T3;

	<bb 1> :
	$$verify_return_type  (  );
	return 'null';

}
// Class Properties and Constants 
class ellipse  { 
	private (undef) b = '' ;
}


ellipse :: area  (  )
{
	<bb 0> :
	T0 = $this->a;
	T1 = T0 * 3.14286;
	T2 = $this->b;
	T3 = T1 * T2;
	$$verify_return_type  ( T3 );
	return T3;

	<bb 1> :
	$$verify_return_type  (  );
	return 'null';

}

ellipse :: __construct  ( [unnamed] $x, [unnamed] $y )
{
	<bb 0> :
	nop;
	nop;
	$this->a = $x;
	$this->b = $y;
	return 'null';

}

main  (  )
{
	<bb 0> :
	@1 = circle  ( 5 );
	$c1 = @1;
	@4 = $c1->area  (  );
	T5 = 'Area: ' + @4;
	T6 = T5 + '\n';
	echo  ( T6 );
	echo  ( '' );
	return 1;

}


