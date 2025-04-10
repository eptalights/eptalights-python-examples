<?php
   class myclass {
      public function hello() {
         echo "Hello World!" . PHP_EOL;
      }
   }
   $obj = new class("Neena") extends myclass {
      private string $nm;
      function __construct($x) {
         $this->nm = $x;
      }
      public function greeting() {
         parent::hello();
         echo "Welcome " . $this->nm . PHP_EOL;
      }
   };
   $obj->greeting();
?>


<!-- output −

Hello World!
Welcome Neena -->