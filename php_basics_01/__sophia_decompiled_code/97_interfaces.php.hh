

// Class Properties and Constants 
class percent  { 

}


percent :: percent  (  )
{

	<bb 0> :
	$$verify_return_type  (  );
	return null;

}


// Class Properties and Constants 
class percent  { 

}


percent :: percent  (  )
{

	<bb 0> :
	$$verify_return_type  (  );
	return null;

}
// Class Properties and Constants 
class marks  { 

}


marks :: __construct  ( [unnamed] $x, [unnamed] $y, [unnamed] $z )
{

	<bb 0> :
	nop;
	nop;
	nop;
	$this->m1 = $x;
	$this->m2 = $y;
	$this->m3 = $z;
	return null;

}


// Class Properties and Constants 
class percent  { 

}


percent :: percent  (  )
{

	<bb 0> :
	$$verify_return_type  (  );
	return null;

}


// Class Properties and Constants 
class percent  { 

}


percent :: percent  (  )
{

	<bb 0> :
	$$verify_return_type  (  );
	return null;

}
// Class Properties and Constants 
class marks  { 

}


marks :: __construct  ( [unnamed] $x, [unnamed] $y, [unnamed] $z )
{

	<bb 0> :
	nop;
	nop;
	nop;
	$this->m1 = $x;
	$this->m2 = $y;
	$this->m3 = $z;
	return null;

}
// Class Properties and Constants 
class student  { 

}


student :: percent  (  )
{

	<bb 0> :
	T0 = $this->m1;
	T1 = $this->m2;
	T2 = T0 + T1;
	T3 = $this->m3;
	T4 = T2 + T3;
	T5 = T4 * 100;
	T6 = T5 / 300;
	$$verify_return_type  ( T6 );
	return T6;

	<bb 1> :
	$$verify_return_type  (  );
	return null;

}

main  (  )
{

	<bb 0> :
	class  ( student, marks );
	@1 = student  ( 50, 60, 70 );
	$s1 = @1;
	@4 = $s1->percent  (  );
	T5 = Percentage of marks:  + @4;
	T6 = T5 + 
;
	echo  ( T6 );
	echo  (  );
	return 1;

}


