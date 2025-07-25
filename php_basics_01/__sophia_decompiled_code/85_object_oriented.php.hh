

// Class Properties and Constants 
class Foo  { 

}


Foo :: staticValue  (  )
{

	<bb 0> :
	T0 = self::$my_static;
	return T0;

	<bb 1> :
	return null;

}

main  (  )
{

	<bb 0> :
	T1 = Foo::$my_static;
	T2 = T1 + 
;
	echo  ( T2 );
	@3 = Foo  (  );
	$foo = @3;
	@6 = $foo->staticValue  (  );
	T7 = @6 + 
;
	echo  ( T7 );
	echo  ( 	 );
	return 1;

}


