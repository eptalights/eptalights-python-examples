

// Class Properties and Constants 
class myclass  { 

}


myclass :: __set  ( [unnamed] $name, [unnamed] $value )
{

	<bb 0> :
	nop;
	nop;
	T3 = 'setting ';
	T3 = T3 + $name;
	T3 = T3 + ' property to ';
	T3 = T3 + $value;
	T2 = T3 + ' \n';
	echo  ( T2 );
	$this->$name = $value;
	return 'null';

}

myclass :: __get  ( [unnamed] $name )
{

	<bb 0> :
	nop;
	T2 = 'value of ';
	T2 = T2 + $name;
	T1 = T2 + ' property is ';
	echo  ( T1 );
	T4 = $this->$name;
	return T4;

	<bb 1> :
	return 'null';

}

main  (  )
{

	<bb 0> :
	@1 = myclass  (  );
	$obj = @1;
	$obj->myproperty = 'Hello World!';
	T5 = $obj->myproperty;
	T6 = 'Retrieving myproperty: ' + T5;
	T7 = T6 + '\n';
	echo  ( T7 );
	echo  ( '' );
	return 1;

}


