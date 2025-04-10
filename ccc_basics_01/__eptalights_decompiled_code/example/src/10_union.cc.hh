

main  (  )
{
	<bb 2> :
	j.salary = 1.230000019073486328125e+1;
	abc = 10;
	j.workerNo = 100;
	abc = 20;
	$T1 = j.salary;
	$T2 = $T1;
	printf  ( '"Salary = %.1f\\n"', $T2 );

	<bb 3> :
	$T3 = j.workerNo;
	printf  ( '"Number of workers = %d"', $T3 );

	<bb 4> :
	$T12 = 0;
	j = '{''CLOBBER''}';

	<bb 5> :
	label '<L1>';
	return $T12;

	<bb 6> :
	label '<L2>';
	j = '{''CLOBBER''}';
	nop;

}


