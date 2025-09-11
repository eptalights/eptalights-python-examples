

// Class Properties and Constants 
class ebook  { 

}


ebook :: dispbook  (  )
{

	<bb 0> :
	T3 = 'Title: ';
	T0 = $this->title;
	T3 = T3 + T0;
	T3 = T3 + ' Price: ';
	T1 = $this->price;
	T3 = T3 + T1;
	T2 = T3 + ' \n';
	echo  ( T2 );
	return 'null';

}

ebook :: dispebook  (  )
{

	<bb 0> :
	T3 = 'Title: ';
	T0 = $this->title;
	T3 = T3 + T0;
	T3 = T3 + ' Price: ';
	T1 = $this->price;
	T3 = T3 + T1;
	T2 = T3 + '\n';
	echo  ( T2 );
	T8 = 'Format: ';
	T6 = $this->format;
	T8 = T8 + T6;
	T7 = T8 + ' \n';
	echo  ( T7 );
	return 'null';

}

ebook :: getebook  ( [unnamed] $param1, [unnamed] $param2, [unnamed] $param3 )
{

	<bb 0> :
	nop;
	nop;
	nop;
	$this->title = $param1;
	$this->price = $param2;
	$this->format = $param3;
	return 'null';

}

ebook :: getbook  ( [unnamed] $param1, [unnamed] $param2 )
{

	<bb 0> :
	nop;
	nop;
	$this->title = $param1;
	$this->price = $param2;
	return 'null';

}


// Class Properties and Constants 
class ebook  { 

}


ebook :: dispbook  (  )
{

	<bb 0> :
	T3 = 'Title: ';
	T0 = $this->title;
	T3 = T3 + T0;
	T3 = T3 + ' Price: ';
	T1 = $this->price;
	T3 = T3 + T1;
	T2 = T3 + ' \n';
	echo  ( T2 );
	return 'null';

}

ebook :: dispebook  (  )
{

	<bb 0> :
	T3 = 'Title: ';
	T0 = $this->title;
	T3 = T3 + T0;
	T3 = T3 + ' Price: ';
	T1 = $this->price;
	T3 = T3 + T1;
	T2 = T3 + '\n';
	echo  ( T2 );
	T8 = 'Format: ';
	T6 = $this->format;
	T8 = T8 + T6;
	T7 = T8 + ' \n';
	echo  ( T7 );
	return 'null';

}

ebook :: getebook  ( [unnamed] $param1, [unnamed] $param2, [unnamed] $param3 )
{

	<bb 0> :
	nop;
	nop;
	nop;
	$this->title = $param1;
	$this->price = $param2;
	$this->format = $param3;
	return 'null';

}

ebook :: getbook  ( [unnamed] $param1, [unnamed] $param2 )
{

	<bb 0> :
	nop;
	nop;
	$this->title = $param1;
	$this->price = $param2;
	return 'null';

}
// Class Properties and Constants 
class Book  { 

}


Book :: getbook  ( [unnamed] $param1, [unnamed] $param2 )
{

	<bb 0> :
	nop;
	nop;
	$this->title = $param1;
	$this->price = $param2;
	return 'null';

}

Book :: dispbook  (  )
{

	<bb 0> :
	T3 = 'Title: ';
	T0 = $this->title;
	T3 = T3 + T0;
	T3 = T3 + ' Price: ';
	T1 = $this->price;
	T3 = T3 + T1;
	T2 = T3 + ' \n';
	echo  ( T2 );
	return 'null';

}

main  (  )
{

	<bb 0> :
	@1 = ebook  (  );
	$eb = @1;
	$eb->getebook  ( 'PHP Fundamentals', 450, 'EPUB' );
	$eb->dispebook  (  );
	echo  ( '' );
	return 1;

}


