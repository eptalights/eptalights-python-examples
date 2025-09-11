

// Class Properties and Constants 
class Name  { 

}


Name :: toString  (  )
{

	<bb 0> :
	T0 = $this->_lastName;
	T1 = T0 + ', ';
	T2 = $this->_firstName;
	T3 = T1 + T2;
	return T3;

	<bb 1> :
	return 'null';

}

Name :: Name  ( [unnamed] $first_name, [unnamed] $last_name )
{

	<bb 0> :
	nop;
	nop;
	$this->_firstName = $first_name;
	$this->_lastName = $last_name;
	return 'null';

}


// Class Properties and Constants 
class Name  { 

}


Name :: toString  (  )
{

	<bb 0> :
	T0 = $this->_lastName;
	T1 = T0 + ', ';
	T2 = $this->_firstName;
	T3 = T1 + T2;
	return T3;

	<bb 1> :
	return 'null';

}

Name :: Name  ( [unnamed] $first_name, [unnamed] $last_name )
{

	<bb 0> :
	nop;
	nop;
	$this->_firstName = $first_name;
	$this->_lastName = $last_name;
	return 'null';

}
// Class Properties and Constants 
class NameSub1  { 

}


NameSub1 :: NameSub1  ( [unnamed] $first_name, [unnamed] $middle_initial, [unnamed] $last_name )
{

	<bb 0> :
	nop;
	nop;
	nop;
	Name  ( $first_name, $last_name );
	$this->_middleInitial = $middle_initial;
	return 'null';

}

NameSub1 :: Name  ( [unnamed] $first_name, [unnamed] $last_name )
{

	<bb 0> :
	nop;
	nop;
	$this->_firstName = $first_name;
	$this->_lastName = $last_name;
	return 'null';

}

NameSub1 :: toString  (  )
{

	<bb 0> :
	@0 = toString  (  );
	T1 = @0 + ' ';
	T2 = $this->_middleInitial;
	T3 = T1 + T2;
	return T3;

	<bb 1> :
	return 'null';

}

main  (  )
{

	<bb 0> :
	return 1;

}


