
main  ( argc, argv )
{

	<bb 2> :
	if ( argc <= 1 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	$T1 = *argv;
	printf  ( R"("Usage: %s <password>\n")", $T1 );
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
	puts  ( &R"("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-")"[0] );
	puts  ( &R"("      Access Granted.")"[0] );
	puts  ( &R"("-=-=-=-=-=-=-=-=-=-=-=-=-=-")"[0] );

	<bb 6> :
	puts  ( &R"("\nAccess Denied.")"[0] );

	<bb 7> :
	$T15 = 0;

	<bb 8> :
	nop;
	return $T15;

}

check_authentication  ( password )
{

	<bb 2> :
	auth_flag = 0;
	strcpy  ( &password_buffer, password );
	$T1 = strcmp  ( &password_buffer, R"("brillig")" );
	if ( $T1 == 0 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	auth_flag = 1;

	<bb 4> :
	$T2 = strcmp  ( &password_buffer, R"("outgrabe")" );
	if ( $T2 == 0 )
		goto <bb 5>;
	else
		goto <bb 6>;

	<bb 5> :
	auth_flag = 1;

	<bb 6> :
	$T11 = auth_flag;
	password_buffer = R"({)"R"(CLOBBER)"R"(})";

	<bb 7> :
	nop;
	return $T11;

}
