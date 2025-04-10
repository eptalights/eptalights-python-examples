<?php
   class marks {
      protected int $m1, $m2, $m3;
      public function __construct($x, $y, $z) {
         $this->m1 = $x;
         $this->m2 = $y;
         $this->m3 = $z;
      }
   }
   interface percent {
      public function percent(): float;
   }

   class student extends marks implements percent {
      public function percent(): float {
         return ($this->m1+$this->m2+$this->m3)*100/300;
      }
   }

   $s1 = new student(50, 60, 70);
   echo "Percentage of marks: ". $s1->percent() . PHP_EOL;
?>


<!-- output −

Percentage of marks: 60 -->
