

main  (  )
{

	<bb 0> :
	$a = 42;
	$b = 0;
	T4 = $a;
	if ( T4 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	T4 = $$bool  ( $b );

	<bb 2> :
	if ( T4 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	echo  ( TEST1 : Both a and b are true 
 );
	goto BB_5;

	<bb 4> :
	echo  ( TEST1 : Either a or b is false 
 );

	<bb 5> :
	T5 = $a;
	if ( T5 )
		goto <bb 6>;
	else
		goto <bb 7>;

	<bb 6> :
	T5 = $$bool  ( $b );

	<bb 7> :
	if ( T5 )
		goto <bb 8>;
	else
		goto <bb 9>;

	<bb 8> :
	echo  ( TEST2 : Both a and b are true 
 );
	goto BB_10;

	<bb 9> :
	echo  ( TEST2 : Either a or b is false 
 );

	<bb 10> :
	T6 = $a;
	if ( T6 )
		goto <bb 12>;
	else
		goto <bb 11>;

	<bb 11> :
	T6 = $$bool  ( $b );

	<bb 12> :
	if ( T6 )
		goto <bb 13>;
	else
		goto <bb 14>;

	<bb 13> :
	echo  ( TEST3 : Either a or b is true 
 );
	goto BB_15;

	<bb 14> :
	echo  ( TEST3 : Both a and b are false 
 );

	<bb 15> :
	T7 = $a;
	if ( T7 )
		goto <bb 17>;
	else
		goto <bb 16>;

	<bb 16> :
	T7 = $$bool  ( $b );

	<bb 17> :
	if ( T7 )
		goto <bb 18>;
	else
		goto <bb 19>;

	<bb 18> :
	echo  ( TEST4 : Either a or b is true 
 );
	goto BB_20;

	<bb 19> :
	echo  ( TEST4 : Both a and b are false 
 );

	<bb 20> :
	$a = 10;
	$b = 20;
	if ( $a )
		goto <bb 21>;
	else
		goto <bb 22>;

	<bb 21> :
	echo  ( TEST5 : a is true 
 );
	goto BB_23;

	<bb 22> :
	echo  ( TEST5 : a is false 
 );

	<bb 23> :
	if ( $b )
		goto <bb 24>;
	else
		goto <bb 25>;

	<bb 24> :
	echo  ( TEST6 : b is true 
 );
	goto BB_26;

	<bb 25> :
	echo  ( TEST6 : b is false 
 );

	<bb 26> :
	T10 = $$bool_not  ( $a );
	if ( T10 )
		goto <bb 27>;
	else
		goto <bb 28>;

	<bb 27> :
	echo  ( TEST7 : a is true 
 );
	goto BB_29;

	<bb 28> :
	echo  ( TEST7 : a is false 
 );

	<bb 29> :
	T11 = $$bool_not  ( $b );
	if ( T11 )
		goto <bb 30>;
	else
		goto <bb 31>;

	<bb 30> :
	echo  ( TEST8 : b is true 
 );
	goto BB_32;

	<bb 31> :
	echo  ( TEST8 : b is false );

	<bb 32> :
	return 1;

}


