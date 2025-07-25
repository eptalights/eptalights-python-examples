

main  (  )
{

	<bb 0> :
	@3 = fopen  ( hello.txt, r );
	$file = @3;
	@5 = fopen  ( new.txt, w );
	$newfile = @5;
	goto BB_2;

	<bb 1> :
	@7 = fgets  ( $file );
	$str = @7;
	fputs  ( $newfile, $str );

	<bb 2> :
	@10 = feof  ( $file );
	T11 = $$bool_not  ( @10 );
	if ( T11 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 3> :
	fclose  ( $file );
	fclose  ( $newfile );
	return 1;

}


