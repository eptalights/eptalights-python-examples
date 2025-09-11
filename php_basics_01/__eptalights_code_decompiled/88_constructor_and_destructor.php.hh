

// Class Properties and Constants 
class Book  { 

}


Book :: __construct  (  )
{

	<bb 0> :
	$this->title = 'PHP Fundamentals';
	$this->price = 275;
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
	@1 = Book  (  );
	$b1 = @1;
	$b1->getTitle  (  );
	$b1->getPrice  (  );
	return 1;

}


