

main  (  )
{
	int week ;
	int i ;
	int attendence ;
	int week ;
	int i ;
	struct Employee [ 5 ] emp ;
	int 68953119 ;

	<bb 2> :
	i = 0;

	<bb 3> :
	if ( i > 4 )
		goto <bb 8>;
	else
		goto <bb 4>;

	<bb 4> :
	emp[i].employeeID = i;
	$T1 = &emp[i].Name;
	memcpy  ( $T1, "Amit", 5 );
	week = 0;

	<bb 5> :
	if ( week > 6 )
		goto <bb 7>;
	else
		goto <bb 6>;

	<bb 6> :
	emp[i].WeekAttendence[week] = week;
	week = week + 1;

	<bb 7> :
	i = i + 1;

	<bb 8> :
	putchar  ( 10 );

	<bb 9> :
	i = 0;

	<bb 10> :
	if ( i > 4 )
		goto <bb 19>;
	else
		goto <bb 11>;

	<bb 11> :
	$T2 = &emp[i].Name;
	$T3 = emp[i].employeeID;
	printf  ( "Emplyee ID: %d - Employee Name: %s\n", $T3, $T2 );

	<bb 12> :
	puts  ( &"Attendence"[0] );

	<bb 13> :
	week = 0;

	<bb 14> :
	if ( week > 6 )
		goto <bb 17>;
	else
		goto <bb 15>;

	<bb 15> :
	$T4 = emp[i].WeekAttendence[week];
	printf  ( "%d ", $T4 );

	<bb 16> :
	week = week + 1;

	<bb 17> :
	putchar  ( 10 );

	<bb 18> :
	i = i + 1;

	<bb 19> :
	$T31 = 0;
	emp = {CLOBBER};

	<bb 20> :
	label <L13>;
	return $T31;

	<bb 21> :
	label <L14>;
	emp = {CLOBBER};
	nop;

}


