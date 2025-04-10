<?php
   trait addition {
      function add($x, $y) {
         return $x+$y;
      }
   }

   trait multiplication {
      function multiply($x, $y) {
         return $x*$y;
      }
   }

   class numbers {
      use addition, multiplication;
      private int $m1, $m2;
      function __construct($x, $y) {
         $this->m1 = $x;
         $this->m2 = $y;
      }
      function calculate():array {
         $arr = [$this->add($this->m1, $this->m2), $this->multiply($this->m1, $this->m2)];
         return $arr;
      }
   }

   $obj = new numbers(50, 60);
   $res = $obj->calculate();
   echo "Addition: " . $res[0] . PHP_EOL;
   echo "Multiplication: " . $res[1] . PHP_EOL;
?>



<!-- output −

Addition: 110
Multiplication: 3000 -->