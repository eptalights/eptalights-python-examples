

// Class Properties and Constants 
class HSort  { 

}


HSort :: bheap  ( int[] l0 )
{
	int $stack3 ;
	int $stack2 ;
	int l1 ;
	int $stack4 ;
	int[] parameter0 ;

	<bb 0> :
	nop;
	$stack2 = lengthof  ( l0 );
	$stack3 = $stack2 / 2;
	l1 = $stack3 - 1;

	<bb 1> :
	if ( l1 < 0 )
		goto <bb 3>;
	else
		goto <bb 2>;

	<bb 2> :
	return;

	<bb 3> :
	$stack4 = lengthof  ( l0 );
	heapify  ( l0, l1, $stack4 );
	l1 = l1 + -1;
	goto BB_1;

}

HSort :: printarray  ( int[] l0 )
{
	int $stack3 ;
	java.io.PrintStream $stack2 ;
	int l1 ;
	java.io.PrintStream $stack5 ;
	int $stack4 ;
	java.lang.String $stack6 ;
	int[] parameter0 ;

	<bb 0> :
	nop;
	$stack2 = java.io.PrintStream.out;
	$stack2.println  (  );
	l1 = 0;

	<bb 1> :
	$stack3 = lengthof  ( l0 );
	if ( l1 >= $stack3 )
		goto <bb 3>;
	else
		goto <bb 2>;

	<bb 2> :
	return;

	<bb 3> :
	$stack5 = java.io.PrintStream.out;
	$stack4 = l0[l1];
	$stack6 = java.lang.invoke.StringConcatFactory.makeConcatWithConstants  ( "\u0001 ", $stack4 );
	$stack5.print  ( $stack6 );
	l1 = l1 + 1;
	goto BB_1;

}

HSort :: Sort  ( int[] l0 )
{
	int l1 ;
	int l3 ;
	int $stack5 ;
	int $stack4 ;
	int $stack6 ;
	int[] parameter0 ;

	<bb 0> :
	nop;
	bheap  ( l0 );
	$stack4 = lengthof  ( l0 );
	l3 = $stack4 - 1;

	<bb 1> :
	if ( l3 <= 0 )
		goto <bb 3>;
	else
		goto <bb 2>;

	<bb 2> :
	return;

	<bb 3> :
	l1 = l0[0];
	$stack5 = l0[l3];
	l0[0] = $stack5;
	l0[l3] = l1;
	$stack6 = l3;
	l3 = l3 + -1;
	heapify  ( l0, 0, $stack6 );
	goto BB_1;

}

HSort :: main  ( java.lang.String[] l0 )
{
	int l1 ;
	int l3 ;
	java.util.Scanner l4 ;
	int $stack13 ;
	int[] l5 ;
	java.io.PrintStream $stack11 ;
	java.io.PrintStream $stack12 ;
	java.lang.String $stack10 ;
	java.io.PrintStream $stack9 ;
	java.io.PrintStream $stack8 ;
	java.util.Scanner $stack7 ;
	java.io.InputStream $stack6 ;
	java.lang.String[] parameter0 ;

	<bb 0> :
	nop;
	$stack7 = new  ( java.util.Scanner );
	$stack6 = java.io.InputStream.in;
	$stack7.<init>  ( $stack6 );
	l4 = $stack7;
	$stack8 = java.io.PrintStream.out;
	$stack8.print  ( "Enter number of elements in the array:" );
	l1 = $stack7.nextInt  (  );
	l5 = newarray(int)[l1];
	$stack9 = java.io.PrintStream.out;
	$stack10 = java.lang.invoke.StringConcatFactory.makeConcatWithConstants  ( "Enter \u0001 elements ", l1 );
	$stack9.println  ( $stack10 );
	l3 = 0;

	<bb 1> :
	if ( l3 >= l1 )
		goto <bb 3>;
	else
		goto <bb 2>;

	<bb 2> :
	$stack11 = java.io.PrintStream.out;
	$stack11.println  ( "elements in array " );
	printarray  ( l5 );
	Sort  ( l5 );
	$stack12 = java.io.PrintStream.out;
	$stack12.println  ( "\nelements after sorting" );
	printarray  ( l5 );
	return;

	<bb 3> :
	$stack13 = $stack7.nextInt  (  );
	l5[l3] = $stack13;
	l3 = l3 + 1;
	goto BB_1;

}

HSort :: <init>  (  )
{
	HSort this ;

	<bb 0> :
	nop;
	this.<init>  (  );
	return;

}

HSort :: heapify  ( int[] l0, int l1, int l2 )
{
	int l3 ;
	int l4 ;
	int $stack13 ;
	int l5 ;
	int l6 ;
	int $stack11 ;
	int $stack12 ;
	int $stack10 ;
	int $stack9 ;
	int $stack8 ;
	int $stack7 ;
	int[] parameter0 ;
	int parameter1 ;
	int parameter2 ;

	<bb 0> :
	nop;
	nop;
	nop;
	$stack7 = 2 * l1;
	l3 = $stack7 + 1;
	$stack8 = 2 * l1;
	l4 = $stack8 + 2;
	if ( l3 >= l2 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	$stack13 = l0[l3];
	$stack12 = l0[l1];
	if ( $stack13 <= $stack12 )
		goto <bb 3>;
	else
		goto <bb 2>;

	<bb 2> :
	l6 = l1;

	<bb 3> :
	l6 = l3;
	goto BB_4;

	<bb 4> :
	if ( l4 >= l2 )
		goto <bb 5>;
	else
		goto <bb 7>;

	<bb 5> :
	$stack11 = l0[l4];
	$stack10 = l0[l6];
	if ( $stack11 <= $stack10 )
		goto <bb 6>;
	else
		goto <bb 7>;

	<bb 6> :
	l6 = l4;

	<bb 7> :
	if ( l6 == l1 )
		goto <bb 8>;
	else
		goto <bb 9>;

	<bb 8> :
	l5 = l0[l6];
	$stack9 = l0[l1];
	l0[l6] = $stack9;
	l0[l1] = l5;
	heapify  ( l0, l6, l2 );

	<bb 9> :
	return;

}


