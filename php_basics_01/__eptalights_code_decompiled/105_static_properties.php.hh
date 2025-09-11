

// Class Properties and Constants 
class newclass  { 

}


newclass :: __construct  (  )
{

	<bb 0> :
	$$pre_inc  ( self::$var1 );
	T1 = self::$var1;
	T2 = 'object number ' + T1;
	T3 = T2 + '\n';
	echo  ( T3 );
	return 'null';

}

newclass :: getstatic  (  )
{

	<bb 0> :
	T0 = self::$var1;
	T1 = 'Static property in parent class: ' + T0;
	T2 = T1 + '\n';
	echo  ( T2 );
	return 'null';

}


// Class Properties and Constants 
class newclass  { 

}


newclass :: __construct  (  )
{

	<bb 0> :
	$$pre_inc  ( self::$var1 );
	T1 = self::$var1;
	T2 = 'object number ' + T1;
	T3 = T2 + '\n';
	echo  ( T3 );
	return 'null';

}

newclass :: getstatic  (  )
{

	<bb 0> :
	T0 = self::$var1;
	T1 = 'Static property in parent class: ' + T0;
	T2 = T1 + '\n';
	echo  ( T2 );
	return 'null';

}
// Class Properties and Constants 
class myclass  { 

}


myclass :: __construct  (  )
{

	<bb 0> :
	$$pre_inc  ( self::$var1 );
	T1 = self::$var1;
	T2 = 'object number ' + T1;
	T3 = T2 + '\n';
	echo  ( T3 );
	return 'null';

}

main  (  )
{

	<bb 0> :
	@1 = newclass  (  );
	$obj = @1;
	$obj->getstatic  (  );
	echo  ( '\n\n<!-- -->\n' );
	return 1;

}


