

// Class Properties and Constants 
class ReverseofaString  { 

}


ReverseofaString :: main  ( java.lang.String[] l0 )
{
	ReverseofaString l1 ;
	java.util.Scanner l2 ;
	java.lang.String l3 ;
	java.io.PrintStream $stack9 ;
	ReverseofaString $stack8 ;
	java.lang.String $stack11 ;
	java.io.InputStream $stack5 ;
	ReverseofaString $stack4 ;
	java.lang.String $stack10 ;
	java.io.PrintStream $stack7 ;
	java.util.Scanner $stack6 ;
	java.lang.String[] parameter0 ;

	<bb 0> :
	nop;
	$stack4 = new  ( 'ReverseofaString' );
	$stack4.<init>  (  );
	l1 = $stack4;
	$stack6 = new  ( 'java.util.Scanner' );
	$stack5 = java.io.InputStream.in;
	$stack6.<init>  ( $stack5 );
	l2 = $stack6;
	$stack7 = java.io.PrintStream.out;
	$stack7.print  ( '"Enter a string : "' );
	l3 = $stack6.nextLine  (  );
	$stack9 = java.io.PrintStream.out;
	$stack8 = $stack4;
	$stack10 = reverse  ( l3 );
	$stack11 = java.lang.invoke.StringConcatFactory.makeConcatWithConstants  ( '"Reverse of a String  is : \\u0001"', $stack10 );
	$stack9.println  ( $stack11 );
	return;

}

ReverseofaString :: <init>  (  )
{
	ReverseofaString this ;

	<bb 0> :
	nop;
	this.<init>  (  );
	return;

}

ReverseofaString :: reverse  ( java.lang.String l0 )
{
	int $stack3 ;
	java.lang.String l1 ;
	int l2 ;
	char $stack4 ;
	java.lang.String parameter0 ;

	<bb 0> :
	nop;
	l1 = '""';
	l2 = l0.length  (  );

	<bb 1> :
	if ( l2 <= 0 )
		goto <bb 3>;
	else
		goto <bb 2>;

	<bb 2> :
	return l1;

	<bb 3> :
	$stack3 = l2 - 1;
	$stack4 = l0.charAt  ( $stack3 );
	l1 = java.lang.invoke.StringConcatFactory.makeConcatWithConstants  ( '"\x01\x01"', l1, $stack4 );
	l2 = l2 + -1;
	goto 'BB_1';

}


