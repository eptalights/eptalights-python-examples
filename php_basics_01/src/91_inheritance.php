<?php
   class myclass {
      public function hello() {
         echo "Hello from the parent class" . PHP_EOL;      
      }
      public  function thanks() {
         echo "Thank you from parent class" . PHP_EOL;
      }
   }
   class newclass extends myclass {
      public function thanks() {
         echo "Thank you from the child class" . PHP_EOL;
      }
   }

   # object of parent class
   $obj1 = new myclass;
   $obj1->hello();
   $obj1->thanks();

   # object of child class
   $obj2 = new newclass;
   $obj2->hello();
   $obj2->thanks();
?>


<!-- output −

Hello from the parent class
Thank you from parent class
Hello from the parent class
Thank you from the child class -->