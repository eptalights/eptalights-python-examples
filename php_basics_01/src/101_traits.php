<?php
   trait mytrait {
      public function sayHello() {
         echo 'Hello World!';
      }
   }

   trait newtrait {
      public function sayHello() {
         echo 'Hello PHP!';
      }
   }

   class myclass {
      use mytrait, newtrait{
         newtrait::sayHello insteadof mytrait;
      }
   }

   $o = new myclass();
   $o->sayHello();

//    output −

// Hello PHP! 
?>


