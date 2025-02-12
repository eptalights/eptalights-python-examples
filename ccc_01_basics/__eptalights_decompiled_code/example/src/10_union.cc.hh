
main  (  )
{

	<bb 2> :
	j.salary = 1.230000019073486328125e+1;
	abc = 10;
	j.workerNo = 100;
	abc = 20;
	$T1 = j.salary;
	$T2 = $T1;
	printf  ( R"("Salary = %.1f\n")", $T2 );

	<bb 3> :
	$T3 = j.workerNo;
	printf  ( R"("Number of workers = %d")", $T3 );

	<bb 4> :
	$T12 = 0;
	j = R"({)"R"(CLOBBER)"R"(})";

	<bb 5> :
	nop;
	return $T12;

	<bb 6> :
	nop;
	j = R"({)"R"(CLOBBER)"R"(})";
	nop;

}
