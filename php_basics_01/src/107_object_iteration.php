<?php
   class myclass {
      private $var;
      protected $var1;
      public $x, $y, $z;
      public function __construct() {
         $this->var="Hello World";
         $this->var1=array(1,2,3);
         $this->x=100;
         $this->y=200;
         $this->z=300;
      }
   }
   $obj = new myclass();
   foreach($obj as $key => $value) {
      print "$key => $value\n";
   }


// output −
// x => 100
// y => 200
// z => 300 

?>


<!-- -->