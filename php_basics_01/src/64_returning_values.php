<?php
   function raiseto($x, $i) {
      if ($i == 2) {
         return $x**2;
      } elseif ($i==3) {
         return $x**3;
      }
   }
   $a = 5;
   $b = 2;
   $val = raiseto($a, $b);
   echo "$a raised to $b = $val" . PHP_EOL;

   $x = 7;
   $y = 3;
   echo "$x raised to $y = " . raiseto($x, $y) . PHP_EOL;
?>