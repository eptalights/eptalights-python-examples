

// Class Properties and Constants 
class REV  { 

}


REV :: main  ( java.lang.String[] l0 )
{
	int l3#1 ;
	java.io.PrintStream $stack17 ;
	int l1 ;
	int l3#0 ;
	int $stack18 ;
	int $stack15 ;
	int $stack16 ;
	int l4 ;
	java.io.PrintStream $stack13 ;
	java.util.Scanner l5 ;
	int $stack14 ;
	int[] l6 ;
	java.io.PrintStream $stack11 ;
	int[] l7 ;
	java.lang.String $stack12 ;
	java.io.PrintStream $stack10 ;
	java.util.Scanner $stack9 ;
	java.io.InputStream $stack8 ;
	java.lang.String[] parameter0 ;

	<bb 0> :
	nop;
	l4 = 0;
	$stack9 = new  ( 'java.util.Scanner' );
	$stack8 = java.io.InputStream.in;
	$stack9.<init>  ( $stack8 );
	l5 = $stack9;
	$stack10 = java.io.PrintStream.out;
	$stack10.print  ( '"Enter number of elements in the array:"' );
	l1 = $stack9.nextInt  (  );
	l6 = newarray(int )[l1];
	l7 = newarray(int )[l1];
	$stack11 = java.io.PrintStream.out;
	$stack12 = java.lang.invoke.StringConcatFactory.makeConcatWithConstants  ( '"Enter \\u0001 elements "', l1 );
	$stack11.println  ( $stack12 );
	l3#0 = 0;

	<bb 1> :
	if ( l3#0 >= l1 )
		goto <bb 6>;
	else
		goto <bb 2>;

	<bb 2> :
	$stack13 = java.io.PrintStream.out;
	$stack13.println  ( '"Reverse of an array is :"' );
	l3#1 = l1;

	<bb 3> :
	if ( l3#1 <= 0 )
		goto <bb 5>;
	else
		goto <bb 4>;

	<bb 4> :
	return;

	<bb 5> :
	$stack14 = l3#1 - 1;
	$stack15 = l6[$stack14];
	l7[l4] = $stack15;
	$stack17 = java.io.PrintStream.out;
	$stack16 = l7[l4];
	$stack17.println  ( $stack16 );
	l3#1 = l3#1 + -1;
	l4 = l4 + 1;
	goto 'BB_3';

	<bb 6> :
	$stack18 = $stack9.nextInt  (  );
	l6[l3#0] = $stack18;
	l3#0 = l3#0 + 1;
	goto 'BB_1';

}

REV :: <init>  (  )
{
	REV this ;

	<bb 0> :
	nop;
	this.<init>  (  );
	return;

}


