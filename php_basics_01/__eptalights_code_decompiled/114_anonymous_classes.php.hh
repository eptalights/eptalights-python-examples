

// Class Properties and Constants 
class myclass  { 

}


myclass :: hello  (  )
{

	<bb 0> :
	echo  ( 'Hello World!\n' );
	return 'null';

}


// Class Properties and Constants 
class myclass  { 

}


myclass :: hello  (  )
{

	<bb 0> :
	echo  ( 'Hello World!\n' );
	return 'null';

}
// Class Properties and Constants 
class myclass@anonymous  { 

}


myclass@anonymous :: __construct  ( [unnamed] $x )
{

	<bb 0> :
	nop;
	$this->nm = $x;
	return 'null';

}

myclass@anonymous :: greeting  (  )
{

	<bb 0> :
	hello  (  );
	T1 = $this->nm;
	T2 = 'Welcome ' + T1;
	T3 = T2 + '\n';
	echo  ( T3 );
	return 'null';

}

main  (  )
{

	<bb 0> :
	@1 = $$declare_anonymous_class  ( 'myclass@anonymous', 'myclass' );
	@2 = @1  ( 'Neena' );
	$obj = @2;
	$obj->greeting  (  );
	echo  ( '' );
	return 1;

}


