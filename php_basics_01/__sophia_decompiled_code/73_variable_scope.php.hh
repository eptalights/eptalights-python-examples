

myfunction  (  )
{

	<bb 0> :
	$var1 = Hello;
	T4 = var=;
	T4 = T4 + $var;
	T4 = T4 +   var1=;
	T3 = T4 + $var1;
	T6 = T3 + 
;
	echo  ( T6 );
	return null;

}

main  (  )
{

	<bb 0> :
	$var = 100;
	myfunction  (  );
	T5 = var=;
	T5 = T5 + $var;
	T5 = T5 +   var1=;
	T4 = T5 + $var1;
	T7 = T4 + 
;
	echo  ( T7 );
	echo  ( 

<!-- 
var=  var1=Hello
var=100  var1=
 --> );
	return 1;

}


