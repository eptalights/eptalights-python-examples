<?php
   class myclass {
   
      /* Member variables */
      static int $var1 = 0;
      public static function mystaticmethod() {
         echo "This is a static method".  PHP_EOL;
      }
      public function myinstancemethod() {
         echo "This is an instance method".  PHP_EOL;
         echo "calling static method from instance method" . PHP_EOL;
         self::mystaticmethod();
      }
   }

   class mynewclass extends myclass {
      public function myfunction() {
         echo "This an instance method of the derived class" . PHP_EOL;
         echo "Calling static method of the parent class" . PHP_EOL;
         parent::mystaticmethod();
      }
   }
   $obj = new mynewclass;
   mynewclass::mystaticmethod();
   $obj->myfunction();

// output −
// This is a static method
// This an instance method of the derived class
// Calling static method of the parent class
// This is a static method
?>