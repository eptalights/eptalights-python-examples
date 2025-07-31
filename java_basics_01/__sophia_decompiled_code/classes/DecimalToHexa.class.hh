

// Class Properties and Constants 
class DecimalToHexa  { 

}


DecimalToHexa :: main  ( java.lang.String[] l0 )
{
	char[] l1 ;
	int l2 ;
	int l3 ;
	java.lang.String l4 ;
	java.util.Scanner l5 ;
	java.io.PrintStream $stack11 ;
	char $stack12 ;
	java.io.PrintStream $stack10 ;
	java.io.PrintStream $stack9 ;
	java.util.Scanner $stack8 ;
	java.io.InputStream $stack7 ;
	char[] $stack6 ;
	java.lang.String[] parameter0 ;

	<bb 0> :
	nop;
	$stack6 = newarray(char)[16];
	$stack6[0] = 48;
	$stack6[1] = 49;
	$stack6[2] = 50;
	$stack6[3] = 51;
	$stack6[4] = 52;
	$stack6[5] = 53;
	$stack6[6] = 54;
	$stack6[7] = 55;
	$stack6[8] = 56;
	$stack6[9] = 57;
	$stack6[10] = 65;
	$stack6[11] = 66;
	$stack6[12] = 67;
	$stack6[13] = 68;
	$stack6[14] = 69;
	$stack6[15] = 70;
	l1 = $stack6;
	l4 = "";
	$stack8 = new  ( java.util.Scanner );
	$stack7 = java.io.InputStream.in;
	$stack8.<init>  ( $stack7 );
	l5 = $stack8;
	$stack9 = java.io.PrintStream.out;
	$stack9.println  ( "Enter a Decimal number: " );
	l3 = $stack8.nextInt  (  );
	$stack10 = java.io.PrintStream.out;
	$stack10.println  ( "Hexadecimal number is : " );

	<bb 1> :
	if ( l3 == 0 )
		goto <bb 3>;
	else
		goto <bb 2>;

	<bb 2> :
	$stack11 = java.io.PrintStream.out;
	$stack11.print  ( l4 );
	return;

	<bb 3> :
	l2 = l3 % 16;
	$stack12 = $stack6[l2];
	l4 = java.lang.invoke.StringConcatFactory.makeConcatWithConstants  ( "", $stack12, l4 );
	l3 = l3 / 16;
	goto BB_1;

}

DecimalToHexa :: <init>  (  )
{
	DecimalToHexa this ;

	<bb 0> :
	nop;
	this.<init>  (  );
	return;

}


