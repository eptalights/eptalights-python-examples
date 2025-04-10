<?php
   trait mytrait {
      public function hello() {
         echo "Hello World from " . __TRAIT__ . "";
      }
   }
   class myclass {
      use mytrait;
   }
   $obj = new myclass();
   $obj->hello();
?>

<!-- output −

Hello World from mytrait -->


