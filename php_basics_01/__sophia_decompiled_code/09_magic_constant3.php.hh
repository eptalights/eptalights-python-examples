

// Class Properties and Constants 
class myclass  { 

}


myclass :: __construct  (  )
{

	<bb 0> :
	echo  ( Inside the constructor of myclass
 );
	return null;

}

myclass :: getClassName  (  )
{

	<bb 0> :
	echo  ( from an instance method of myclass );
	return null;

}

main  (  )
{

	<bb 0> :
	@1 = myclass  (  );
	$obj = @1;
	$obj->getClassName  (  );
	return 1;

}


