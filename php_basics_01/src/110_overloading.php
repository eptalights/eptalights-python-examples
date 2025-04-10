<?php
   class myclass {
      public function __call($name, $args) {
	  
         // Value of $name is case sensitive.
         echo "Calling object method $name with " . implode(" ", $args). "\n";
      }
      public static function __callStatic($name, $args) {
         echo "Calling static method $name with " . implode(" ", $args). "\n";
      }
   }
   $obj = new myclass();

   # This invokes __call() magic method
   $obj->mymethod("Hello World!");

   # This invokes __callStatic() method
   myclass::mymethod("Hello World!");

// output −
// Calling object method mymethod with Hello World!
// Calling static method mymethod with Hello World!

?>
