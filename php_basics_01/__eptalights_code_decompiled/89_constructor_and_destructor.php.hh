

// Class Properties and Constants 
class Book  { 

}


Book :: __construct  ( [unnamed] $param1, [unnamed] $param2 )
{

	<bb 0> :
	nop;
	nop;
	$this->title = $param1;
	$this->price = $param2;
	return 'null';

}

Book :: getTitle  (  )
{

	<bb 0> :
	T2 = 'Title: ';
	T0 = $this->title;
	T2 = T2 + T0;
	T1 = T2 + ' \n';
	echo  ( T1 );
	return 'null';

}

Book :: getPrice  (  )
{

	<bb 0> :
	T2 = 'Price: ';
	T0 = $this->price;
	T2 = T2 + T0;
	T1 = T2 + ' \n';
	echo  ( T1 );
	return 'null';

}

main  (  )
{

	<bb 0> :
	@2 = Book  ( 'PHP Fundamentals', 375 );
	$b1 = @2;
	@5 = Book  ( 'PHP Programming', 450 );
	$b2 = @5;
	$b1->getTitle  (  );
	$b1->getPrice  (  );
	$b2->getTitle  (  );
	$b2->getPrice  (  );
	return 1;

}


