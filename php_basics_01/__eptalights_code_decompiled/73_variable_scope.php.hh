

myfunction  (  )
{

	<bb 0> :
	$var1 = 'Hello';
	T4 = 'var=';
	T4 = T4 + $var;
	T4 = T4 + '  var1=';
	T3 = T4 + $var1;
	T6 = T3 + '\n';
	echo  ( T6 );
	return 'null';

}

main  (  )
{

	<bb 0> :
	$var = 100;
	myfunction  (  );
	T5 = 'var=';
	T5 = T5 + $var;
	T5 = T5 + '  var1=';
	T4 = T5 + $var1;
	T7 = T4 + '\n';
	echo  ( T7 );
	echo  ( '\n\n<!-- \nvar=  var1=Hello\nvar=100  var1=\n -->' );
	return 1;

}


