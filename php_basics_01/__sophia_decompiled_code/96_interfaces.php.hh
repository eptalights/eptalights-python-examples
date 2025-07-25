

// Class Properties and Constants 
class square  { 

}


square :: __construct  ( [unnamed] $arg1 )
{

	<bb 0> :
	nop;
	$this->side = $arg1;
	return null;

}

square :: area  (  )
{

	<bb 0> :
	T0 = $this->side;
	@1 = pow  ( T0, 2 );
	$$verify_return_type  ( @1 );
	return @1;

	<bb 1> :
	$$verify_return_type  (  );
	return null;

}


// Class Properties and Constants 
class square  { 

}


square :: __construct  ( [unnamed] $arg1 )
{

	<bb 0> :
	nop;
	$this->side = $arg1;
	return null;

}

square :: area  (  )
{

	<bb 0> :
	T0 = $this->side;
	@1 = pow  ( T0, 2 );
	$$verify_return_type  ( @1 );
	return @1;

	<bb 1> :
	$$verify_return_type  (  );
	return null;

}
// Class Properties and Constants 
class circle  { 

}


circle :: __construct  ( [unnamed] $arg1 )
{

	<bb 0> :
	nop;
	$this->radius = $arg1;
	return null;

}

circle :: area  (  )
{

	<bb 0> :
	T0 = $this->radius;
	@1 = pow  ( T0, 2 );
	@2 = pi  (  );
	T3 = @1 * @2;
	$$verify_return_type  ( T3 );
	return T3;

	<bb 1> :
	$$verify_return_type  (  );
	return null;

}


// Class Properties and Constants 
class square  { 

}


square :: __construct  ( [unnamed] $arg1 )
{

	<bb 0> :
	nop;
	$this->side = $arg1;
	return null;

}

square :: area  (  )
{

	<bb 0> :
	T0 = $this->side;
	@1 = pow  ( T0, 2 );
	$$verify_return_type  ( @1 );
	return @1;

	<bb 1> :
	$$verify_return_type  (  );
	return null;

}


// Class Properties and Constants 
class square  { 

}


square :: __construct  ( [unnamed] $arg1 )
{

	<bb 0> :
	nop;
	$this->side = $arg1;
	return null;

}

square :: area  (  )
{

	<bb 0> :
	T0 = $this->side;
	@1 = pow  ( T0, 2 );
	$$verify_return_type  ( @1 );
	return @1;

	<bb 1> :
	$$verify_return_type  (  );
	return null;

}
// Class Properties and Constants 
class circle  { 

}


circle :: __construct  ( [unnamed] $arg1 )
{

	<bb 0> :
	nop;
	$this->radius = $arg1;
	return null;

}

circle :: area  (  )
{

	<bb 0> :
	T0 = $this->radius;
	@1 = pow  ( T0, 2 );
	@2 = pi  (  );
	T3 = @1 * @2;
	$$verify_return_type  ( T3 );
	return T3;

	<bb 1> :
	$$verify_return_type  (  );
	return null;

}
// Class Properties and Constants 
class shape  { 

}


shape :: area  (  )
{

	<bb 0> :
	$$verify_return_type  (  );
	return null;

}

main  (  )
{

	<bb 0> :
	class  ( square );
	class  ( circle );
	@2 = square  ( 5 );
	$sq = @2;
	T5 = $sq->side;
	T6 = Side:  + T5;
	T7 = T6 +  Area of Square: ;
	@8 = $sq->area  (  );
	T9 = T7 + @8;
	T10 = T9 + 
;
	echo  ( T10 );
	@11 = circle  ( 5 );
	$cir = @11;
	T14 = $cir->radius;
	T15 = Radius:  + T14;
	T16 = T15 +  Area of Circle: ;
	@17 = $cir->area  (  );
	T18 = T16 + @17;
	T19 = T18 + 
;
	echo  ( T19 );
	echo  (  );
	return 1;

}


