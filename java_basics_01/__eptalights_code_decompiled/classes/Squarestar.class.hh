

// Class Properties and Constants 
class Squarestar  { 

}


Squarestar :: <init>  (  )
{
	Squarestar this ;

	<bb 0> :
	nop;
	this.<init>  (  );
	return;

}

Squarestar :: main  ( java.lang.String[] l0 )
{
	java.io.PrintStream $stack2 ;
	int l1 ;
	java.lang.String[] parameter0 ;

	<bb 0> :
	nop;
	l1 = 0;

	<bb 1> :
	if ( l1 >= 5 )
		goto <bb 3>;
	else
		goto <bb 2>;

	<bb 2> :
	return;

	<bb 3> :
	$stack2 = java.io.PrintStream.out;
	$stack2.println  ( '"***** "' );
	l1 = l1 + 1;
	goto 'BB_1';

}


