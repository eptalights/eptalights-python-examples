

// Class Properties and Constants 
class multiplication  { 

}


multiplication :: multiply  ( [unnamed] $x, [unnamed] $y )
{

	<bb 0> :
	nop;
	nop;
	T2 = $x * $y;
	return T2;

	<bb 1> :
	return 'null';

}


// Class Properties and Constants 
class multiplication  { 

}


multiplication :: multiply  ( [unnamed] $x, [unnamed] $y )
{

	<bb 0> :
	nop;
	nop;
	T2 = $x * $y;
	return T2;

	<bb 1> :
	return 'null';

}
// Class Properties and Constants 
class numbers  { 

}


numbers :: calculate  (  )
{

	<bb 0> :
	nop;
	@1 = $this->m1;
	nop;
	@2 = $this->m2;
	@3 = this->add  ( @1, @2 );
	T4 = $$init_array  ( @3, 'NEXT' );
	nop;
	@5 = $this->m1;
	nop;
	@6 = $this->m2;
	@7 = this->multiply  ( @5, @6 );
	T4 = $$add_array_element  ( @7, 'NEXT' );
	$arr = T4;
	$$verify_return_type  ( $arr );
	return $arr;

	<bb 1> :
	$$verify_return_type  (  );
	return 'null';

}

numbers :: __construct  ( [unnamed] $x, [unnamed] $y )
{

	<bb 0> :
	nop;
	nop;
	$this->m1 = $x;
	$this->m2 = $y;
	return 'null';

}


// Class Properties and Constants 
class multiplication  { 

}


multiplication :: multiply  ( [unnamed] $x, [unnamed] $y )
{

	<bb 0> :
	nop;
	nop;
	T2 = $x * $y;
	return T2;

	<bb 1> :
	return 'null';

}


// Class Properties and Constants 
class multiplication  { 

}


multiplication :: multiply  ( [unnamed] $x, [unnamed] $y )
{

	<bb 0> :
	nop;
	nop;
	T2 = $x * $y;
	return T2;

	<bb 1> :
	return 'null';

}
// Class Properties and Constants 
class numbers  { 

}


numbers :: calculate  (  )
{

	<bb 0> :
	nop;
	@1 = $this->m1;
	nop;
	@2 = $this->m2;
	@3 = this->add  ( @1, @2 );
	T4 = $$init_array  ( @3, 'NEXT' );
	nop;
	@5 = $this->m1;
	nop;
	@6 = $this->m2;
	@7 = this->multiply  ( @5, @6 );
	T4 = $$add_array_element  ( @7, 'NEXT' );
	$arr = T4;
	$$verify_return_type  ( $arr );
	return $arr;

	<bb 1> :
	$$verify_return_type  (  );
	return 'null';

}

numbers :: __construct  ( [unnamed] $x, [unnamed] $y )
{

	<bb 0> :
	nop;
	nop;
	$this->m1 = $x;
	$this->m2 = $y;
	return 'null';

}
// Class Properties and Constants 
class addition  { 

}


addition :: add  ( [unnamed] $x, [unnamed] $y )
{

	<bb 0> :
	nop;
	nop;
	T2 = $x + $y;
	return T2;

	<bb 1> :
	return 'null';

}

main  (  )
{

	<bb 0> :
	class  ( 'numbers' );
	@2 = numbers  ( 50, 60 );
	$obj = @2;
	@5 = $obj->calculate  (  );
	$res = @5;
	T7 = $res[0];
	T8 = 'Addition: ' + T7;
	T9 = T8 + '\n';
	echo  ( T9 );
	T10 = $res[1];
	T11 = 'Multiplication: ' + T10;
	T12 = T11 + '\n';
	echo  ( T12 );
	echo  ( '' );
	return 1;

}


