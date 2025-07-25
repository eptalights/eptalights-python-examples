

// Class Properties and Constants 
class newclass  { 

}


newclass :: hello  (  )
{

	<bb 0> :
	echo  ( Hello from the parent class
 );
	return null;

}

newclass :: thanks  (  )
{

	<bb 0> :
	echo  ( Thank you from the child class
 );
	return null;

}


// Class Properties and Constants 
class newclass  { 

}


newclass :: hello  (  )
{

	<bb 0> :
	echo  ( Hello from the parent class
 );
	return null;

}

newclass :: thanks  (  )
{

	<bb 0> :
	echo  ( Thank you from the child class
 );
	return null;

}
// Class Properties and Constants 
class myclass  { 

}


myclass :: hello  (  )
{

	<bb 0> :
	echo  ( Hello from the parent class
 );
	return null;

}

myclass :: thanks  (  )
{

	<bb 0> :
	echo  ( Thank you from parent class
 );
	return null;

}

main  (  )
{

	<bb 0> :
	@2 = myclass  (  );
	$obj1 = @2;
	$obj1->hello  (  );
	$obj1->thanks  (  );
	@7 = newclass  (  );
	$obj2 = @7;
	$obj2->hello  (  );
	$obj2->thanks  (  );
	echo  (  );
	return 1;

}


