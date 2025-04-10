<?php
   trait mytrait {
      public function sayHello() {
         echo 'Hello World!';
      }
   }

   class myclass {
      use mytrait;
      public function sayHello() {
         echo 'Hello PHP!';
      }
   }

   $o = new myclass();
   $o->sayHello();

//    output −
// Hello PHP! 
?>
