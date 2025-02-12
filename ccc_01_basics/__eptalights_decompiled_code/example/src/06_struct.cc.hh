
main  (  )
{

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
	memcpy  ( $T1, R"("Amit")", 5 );
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
	printf  ( R"("Emplyee ID: %d - Employee Name: %s\n")", $T3, $T2 );

	<bb 12> :
	puts  ( &R"("Attendence")"[0] );

	<bb 13> :
	week = 0;

	<bb 14> :
	if ( week > 6 )
		goto <bb 17>;
	else
		goto <bb 15>;

	<bb 15> :
	$T4 = emp[i].WeekAttendence[week];
	printf  ( R"("%d ")", $T4 );

	<bb 16> :
	week = week + 1;

	<bb 17> :
	putchar  ( 10 );

	<bb 18> :
	i = i + 1;

	<bb 19> :
	$T31 = 0;
	emp = R"({)"R"(CLOBBER)"R"(})";

	<bb 20> :
	nop;
	return $T31;

	<bb 21> :
	nop;
	emp = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
