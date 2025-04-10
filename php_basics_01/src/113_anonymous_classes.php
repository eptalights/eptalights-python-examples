<?php
   $obj = new class(10) {
      private int $x;
      function __construct($x) {
         $this->x = $x;
      }

      public function addition($x) {
         return $this->x+$x;
      }
      public function division($x) {
         return $this->x/$x;
      }
   };

   echo "Addition: " . $obj->addition(20) . PHP_EOL;
   echo "Division: " . $obj->division(20) . PHP_EOL;

// output −
// Addition: 30
// Division: 0.5
?>
