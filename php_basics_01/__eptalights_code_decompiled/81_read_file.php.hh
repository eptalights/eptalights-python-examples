

main  (  )
{

	<bb 0> :
	$name = 'hello.txt';
	@4 = fopen  ( $name, 'r' );
	$file = @4;
	@6 = filesize  ( $name );
	@7 = fread  ( $file, @6 );
	$data = @7;
	echo  ( $data );
	fclose  ( $file );
	return 1;

}


