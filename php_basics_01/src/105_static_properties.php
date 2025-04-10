<?php
   class myclass {
   
      /* Member variables */
      static int $var1 = 0;
      function __construct() {
         self::$var1++;
         echo "object number ". self::$var1 . PHP_EOL;
      }
   }

   class newclass extends myclass{
      function getstatic() {
         echo "Static property in parent class: " . parent::$var1 . PHP_EOL;
      }
   }
   $obj = new newclass;
   $obj->getstatic();

// output −
// object number 1
// Static property in parent class: 1 

?>


<!-- -->
