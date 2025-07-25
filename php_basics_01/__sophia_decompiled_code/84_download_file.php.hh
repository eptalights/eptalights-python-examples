

main  (  )
{

	<bb 0> :
	$filename = welcome.png;
	header  ( Content-Type: application/octet-stream );
	@6 = basename  ( $filename );
	T7 = Content-Disposition: attachment; filename=" + @6;
	T8 = T7 + ";
	header  ( T8 );
	@10 = fopen  ( $filename, rb );
	$handle = @10;
	$buffer = ;
	$chunkSize = 1048576;
	ob_start  (  );
	goto BB_2;

	<bb 1> :
	@15 = fread  ( $handle, $chunkSize );
	$buffer = @15;
	echo  ( $buffer );
	ob_flush  (  );
	flush  (  );

	<bb 2> :
	@19 = feof  ( $handle );
	T20 = $$bool_not  ( @19 );
	if ( T20 )
		goto <bb 1>;
	else
		goto <bb 3>;

	<bb 3> :
	fclose  ( $handle );
	return 1;

}


