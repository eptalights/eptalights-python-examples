

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
	T1 = T2 + ' \n;';
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
	T9 = 'Title : ';
	T6 = $b1->title;
	T9 = T9 + T6;
	T9 = T9 + ' Price: ';
	T7 = $b1->price;
	T8 = T9 + T7;
	echo  ( T8 );
	return 1;

}


