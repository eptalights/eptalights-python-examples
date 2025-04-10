

main  ( int argc, char * * argv )
{
	<bb 2> :
	if ( argc <= 1 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	$T1 = *argv;
	printf  ( '"Usage: %s <password>\\n"', $T1 );
	exit  ( 0 );

	<bb 4> :
	$T2 = argv + 8;
	$T3 = *$T2;
	$T4 = check_authentication  ( $T3 );
	$T10 = $T4 != 0;
	if ( $T10 != 0 )
		goto <bb 5>;
	else
		goto <bb 6>;

	<bb 5> :
	puts  ( &'"\\n-=-=-=-=-=-=-=-=-=-=-=-=-=-"'[0] );
	puts  ( &'"      Access Granted."'[0] );
	puts  ( &'"-=-=-=-=-=-=-=-=-=-=-=-=-=-"'[0] );

	<bb 6> :
	puts  ( &'"\\nAccess Denied."'[0] );

	<bb 7> :
	$T15 = 0;

	<bb 8> :
	label '<L5>';
	return $T15;

}

check_authentication  ( char * password )
{
	<bb 2> :
	auth_flag = 0;
	strcpy  ( &password_buffer, password );
	$T1 = strcmp  ( &password_buffer, '"brillig"' );
	if ( $T1 == 0 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	auth_flag = 1;

	<bb 4> :
	$T2 = strcmp  ( &password_buffer, '"outgrabe"' );
	if ( $T2 == 0 )
		goto <bb 5>;
	else
		goto <bb 6>;

	<bb 5> :
	auth_flag = 1;

	<bb 6> :
	$T11 = auth_flag;
	password_buffer = '{''CLOBBER''}';

	<bb 7> :
	label '<L7>';
	return $T11;

}


