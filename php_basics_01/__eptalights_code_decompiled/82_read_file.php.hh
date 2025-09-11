

main  (  )
{

	<bb 0> :
	@6 = fopen  ( 'employees.txt', 'r' );
	$fp = @6;
	goto 'BB_2';

	<bb 1> :
	T8 = $employee_info;
	@9 = $$fetch_list  ( T8, 0 );
	$name = @9;
	@11 = $$fetch_list  ( T8, 1 );
	$email = @11;
	@13 = $$fetch_list  ( T8, 2 );
	$post = @13;
	@15 = $$fetch_list  ( T8, 3 );
	$salary = @15;
	$$free  ( T8 );
	T18 = '<b>Name</b>: ';
	T18 = T18 + $name;
	T18 = T18 + ' <b>Email</b>: \n\t  ';
	T18 = T18 + $email;
	T18 = T18 + ' <b>Salary</b>: Rs. ';
	T18 = T18 + $salary;
	T17 = T18 + ' <br>';
	echo  ( T17 );

	<bb 2> :
	@22 = fscanf  ( $fp, '%s\t%s\t%s\t%d\n' );
	$employee_info = @22;
	T23 = $employee_info;
	if ( T23 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 3> :
	fclose  ( $fp );
	return 1;

}


