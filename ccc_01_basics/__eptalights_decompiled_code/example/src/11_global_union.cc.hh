
main  (  )
{

	<bb 2> :
	j.salary = 1.230000019073486328125e+1;
	j.workerNo = 100;
	$T1 = j.salary;
	$T2 = $T1;
	printf  ( R"("Salary = %.1f\n")", $T2 );
	$T3 = j.workerNo;
	printf  ( R"("Number of workers = %d")", $T3 );
	$T9 = 0;

	<bb 3> :
	nop;
	return $T9;

}
