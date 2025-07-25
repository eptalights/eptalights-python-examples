

// Class Properties and Constants 
class HelloWorld  { 

}


HelloWorld :: main  ( java.lang.String[] l0 )
{
	java.io.PrintStream $stack1 ;
	java.lang.String[] parameter0 ;

	<bb 0> :
	l0 = @parameter0;
	$stack1 = sootup.core.signatures.FieldSignature.out;
	$stack1.println  ( "Hello World" );
	return;

}

HelloWorld :: <init>  (  )
{
	HelloWorld this ;

	<bb 0> :
	this = @this;
	this.<init>  (  );
	return;

}


