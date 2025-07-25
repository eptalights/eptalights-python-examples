

// Class Properties and Constants 
class VowelsInaString  { 

}


VowelsInaString :: <init>  (  )
{
	VowelsInaString this ;

	<bb 0> :
	this = @this;
	this.<init>  (  );
	return;

}

VowelsInaString :: main  ( java.lang.String[] l0 )
{
	java.lang.String l1 ;
	char l2 ;
	boolean l3 ;
	java.util.Scanner l4 ;
	int l5 ;
	java.io.PrintStream $stack11 ;
	java.io.PrintStream $stack12 ;
	int $stack10 ;
	java.io.PrintStream $stack9 ;
	java.io.PrintStream $stack8 ;
	java.util.Scanner $stack7 ;
	java.io.InputStream $stack6 ;
	java.lang.String[] parameter0 ;

	<bb 0> :
	l0 = @parameter0;
	l3 = 0;
	$stack7 = new  ( java.util.Scanner );
	$stack6 = sootup.core.signatures.FieldSignature.in;
	$stack7.<init>  ( $stack6 );
	l4 = $stack7;
	$stack8 = sootup.core.signatures.FieldSignature.out;
	$stack8.print  ( "Enter a string : " );
	l1 = $stack7.nextLine  (  );
	$stack9 = sootup.core.signatures.FieldSignature.out;
	$stack9.println  ( "Vowels in a string are" );
	l5 = 0;

	<bb 1> :
	$stack10 = l1.length  (  );
	if ( l5 >= $stack10 )
		goto <bb 5>;
	else
		goto <bb 2>;

	<bb 2> :
	if ( l3 != 0 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	$stack11 = sootup.core.signatures.FieldSignature.out;
	$stack11.println  ( "There are no vowels in a string" );

	<bb 4> :
	return;

	<bb 5> :
	l2 = l1.charAt  ( l5 );
	switch ( l2 )
	case 65 :
		goto <bb 6>;
	case 69 :
		goto <bb 6>;
	case 73 :
		goto <bb 6>;
	case 79 :
		goto <bb 6>;
	case 85 :
		goto <bb 6>;
	case 97 :
		goto <bb 6>;
	case 101 :
		goto <bb 6>;
	case 105 :
		goto <bb 6>;
	case 111 :
		goto <bb 6>;
	case 117 :
		goto <bb 6>;
	case default :
		goto <bb 7>;

	<bb 6> :
	l3 = 1;
	$stack12 = sootup.core.signatures.FieldSignature.out;
	$stack12.println  ( l2 );

	<bb 7> :
	l5 = l5 + 1;
	goto BB_1;

}


