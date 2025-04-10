<?php
   trait mytrait {
      public function sayHello() {
         echo 'Hello World!' . PHP_EOL;
      }
   }

   trait newtrait {
      public function sayHello() {
         echo 'Hello PHP!' . PHP_EOL;
      }
   }

   class myclass {
      use mytrait, newtrait{
         mytrait::sayHello as hello;
         newtrait::sayHello insteadof mytrait;
      }
   }

   $o = new myclass();
   $o->hello();
   $o->sayHello();
?>

<!-- output −

Hello World!
Hello PHP! -->

