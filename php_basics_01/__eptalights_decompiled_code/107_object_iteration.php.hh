

// Class Properties and Constants 
class myclass  { 

}


myclass :: __construct  (  )
{
	<bb 0> :
	$this->var = 'Hello World';
	$this->var1 = '[1,2,3]';
	$this->x = 100;
	$this->y = 200;
	$this->z = 300;
	return 'null';

}

main  (  )
{
	<bb 0> :
	@3 = myclass  (  );
	$obj = @3;
	@6 = $$foreach_reset  ( $obj );
	if ( @6 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 1> :
	T7 = $$foreach_fetch  ( @6, $value );
	if ( $value )
		goto <bb 2>;
	else
		goto <bb 3>;

	<bb 2> :
	$key = T7;
	T10 = $key;
	T10 = T10 + ' => ';
	T10 = T10 + $value;
	T9 = T10 + '\n';
	echo  ( T9 );
	goto 'BB_1';

	<bb 3> :
	$$foreach_free  ( @6 );
	echo  ( '' );
	return 1;

}


