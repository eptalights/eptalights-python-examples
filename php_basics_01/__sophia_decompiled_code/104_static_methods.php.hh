

// Class Properties and Constants 
class mynewclass  { 

}


mynewclass :: mystaticmethod  (  )
{

	<bb 0> :
	echo  ( This is a static method
 );
	return null;

}

mynewclass :: myinstancemethod  (  )
{

	<bb 0> :
	echo  ( This is an instance method
 );
	echo  ( calling static method from instance method
 );
	mystaticmethod  (  );
	return null;

}

mynewclass :: myfunction  (  )
{

	<bb 0> :
	echo  ( This an instance method of the derived class
 );
	echo  ( Calling static method of the parent class
 );
	mystaticmethod  (  );
	return null;

}


// Class Properties and Constants 
class mynewclass  { 

}


mynewclass :: mystaticmethod  (  )
{

	<bb 0> :
	echo  ( This is a static method
 );
	return null;

}

mynewclass :: myinstancemethod  (  )
{

	<bb 0> :
	echo  ( This is an instance method
 );
	echo  ( calling static method from instance method
 );
	mystaticmethod  (  );
	return null;

}

mynewclass :: myfunction  (  )
{

	<bb 0> :
	echo  ( This an instance method of the derived class
 );
	echo  ( Calling static method of the parent class
 );
	mystaticmethod  (  );
	return null;

}
// Class Properties and Constants 
class myclass  { 

}


myclass :: myinstancemethod  (  )
{

	<bb 0> :
	echo  ( This is an instance method
 );
	echo  ( calling static method from instance method
 );
	mystaticmethod  (  );
	return null;

}

myclass :: mystaticmethod  (  )
{

	<bb 0> :
	echo  ( This is a static method
 );
	return null;

}

main  (  )
{

	<bb 0> :
	@1 = mynewclass  (  );
	$obj = @1;
	mystaticmethod  (  );
	$obj->myfunction  (  );
	echo  (  );
	return 1;

}


