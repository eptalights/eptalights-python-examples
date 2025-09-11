

main  (  )
{

	<bb 0> :
	$filename = '/home/user/guest/newfile.txt';
	@5 = fopen  ( $filename, 'w' );
	$file = @5;
	T7 = $$bool_not  ( $file );
	if ( T7 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	echo  ( 'Error in opening new file' );
	exit  (  );

	<bb 2> :
	fwrite  ( $file, 'This is  a simple test\n' );
	fclose  ( $file );
	echo  ( '<html>\n<head>\n   <title>Writing a file using PHP</title>\n</head>\n<body>\n   ' );
	$filename = 'newfile.txt';
	@11 = fopen  ( $filename, 'r' );
	$file = @11;
	T13 = $$bool_not  ( $file );
	if ( T13 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	echo  ( 'Error in opening file' );
	exit  (  );

	<bb 4> :
	@14 = filesize  ( $filename );
	$filesize = @14;
	@16 = fread  ( $file, $filesize );
	$filetext = @16;
	fclose  ( $file );
	T20 = 'File size : ';
	T20 = T20 + $filesize;
	T19 = T20 + ' bytes';
	echo  ( T19 );
	T22 = $filetext;
	echo  ( T22 );
	nop;
	T23 = 'file name: ' + $filename;
	echo  ( T23 );
	echo  ( '</body>\n</html>' );
	return 1;

}


