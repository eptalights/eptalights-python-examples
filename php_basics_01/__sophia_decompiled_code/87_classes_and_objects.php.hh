

// Class Properties and Constants 
class Book  { 

}


Book :: setPrice  ( [unnamed] $par )
{

	<bb 0> :
	nop;
	$this->price = $par;
	return null;

}

Book :: setTitle  ( [unnamed] $par )
{

	<bb 0> :
	nop;
	$this->title = $par;
	return null;

}

Book :: getTitle  (  )
{

	<bb 0> :
	T0 = $this->title;
	T1 = T0 + 
;
	echo  ( T1 );
	return null;

}

Book :: getPrice  (  )
{

	<bb 0> :
	T0 = $this->price;
	T1 = T0 + 
;
	echo  ( T1 );
	return null;

}

main  (  )
{

	<bb 0> :
	@2 = Book  (  );
	$b1 = @2;
	@5 = Book  (  );
	$b2 = @5;
	$b1->setTitle  ( PHP Programming );
	$b1->setPrice  ( 450 );
	$b2->setTitle  ( PHP Fundamentals );
	$b2->setPrice  ( 275 );
	$b1->getTitle  (  );
	$b1->getPrice  (  );
	$b2->getTitle  (  );
	$b2->getPrice  (  );
	return 1;

}


