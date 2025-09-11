

// Class Properties and Constants 
class myclass  { 

}


myclass :: myinstancemethod  (  )
{

	<bb 0> :
	echo  ( 'This is an instance method\n' );
	echo  ( 'calling static method from instance method\n' );
	mystaticmethod  (  );
	return 'null';

}

myclass :: mystaticmethod  (  )
{

	<bb 0> :
	echo  ( 'This is a static method\n' );
	return 'null';

}

main  (  )
{

	<bb 0> :
	@1 = myclass  (  );
	$obj = @1;
	$obj->myinstancemethod  (  );
	return 1;

}


