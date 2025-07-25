

// Class Properties and Constants 
class myclass  { 

}


myclass :: __call  ( [unnamed] $name, [unnamed] $args )
{

	<bb 0> :
	nop;
	nop;
	T3 = Calling object method ;
	T3 = T3 + $name;
	T2 = T3 +  with ;
	@5 = implode  (  , $args );
	T6 = T2 + @5;
	T7 = T6 + 
;
	echo  ( T7 );
	return null;

}

myclass :: __callStatic  ( [unnamed] $name, [unnamed] $args )
{

	<bb 0> :
	nop;
	nop;
	T3 = Calling static method ;
	T3 = T3 + $name;
	T2 = T3 +  with ;
	@5 = implode  (  , $args );
	T6 = T2 + @5;
	T7 = T6 + 
;
	echo  ( T7 );
	return null;

}

main  (  )
{

	<bb 0> :
	@1 = myclass  (  );
	$obj = @1;
	$obj->mymethod  ( Hello World! );
	mymethod  ( Hello World! );
	echo  (  );
	return 1;

}


