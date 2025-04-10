

// Class Properties and Constants 
class class@anonymous  { 

}


class@anonymous :: __construct  ( [unnamed] $x )
{
	<bb 0> :
	nop;
	$this->x = $x;
	return 'null';

}

class@anonymous :: division  ( [unnamed] $x )
{
	<bb 0> :
	nop;
	T1 = $this->x;
	T2 = T1 / $x;
	return T2;

	<bb 1> :
	return 'null';

}

class@anonymous :: addition  ( [unnamed] $x )
{
	<bb 0> :
	nop;
	T1 = $this->x;
	T2 = T1 + $x;
	return T2;

	<bb 1> :
	return 'null';

}

main  (  )
{
	<bb 0> :
	@1 = $$declare_anonymous_class  ( 'class@anonymous' );
	@2 = @1  ( 10 );
	$obj = @2;
	@5 = $obj->addition  ( 20 );
	T6 = 'Addition: ' + @5;
	T7 = T6 + '\n';
	echo  ( T7 );
	@8 = $obj->division  ( 20 );
	T9 = 'Division: ' + @8;
	T10 = T9 + '\n';
	echo  ( T10 );
	echo  ( '' );
	return 1;

}


