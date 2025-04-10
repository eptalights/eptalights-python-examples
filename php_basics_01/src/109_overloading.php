<?php
   class myclass {
      public function __set($name, $value) {
         echo "setting $name property to $value \n";
         $this->$name = $value;
      }

      public function __get($name) {
         echo "value of $name property is ";
         return $this->$name;
      }
   }

   $obj = new myclass();

   # This calls __set() method
   $obj->myproperty="Hello World!";

   # This call __get() method
   echo "Retrieving myproperty: " . $obj->myproperty . PHP_EOL;
?>


<!-- output −

setting myproperty property to Hello World! 
Retrieving myproperty: Hello World! -->

