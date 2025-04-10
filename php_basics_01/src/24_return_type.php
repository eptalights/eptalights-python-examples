<?php
   function division(int $x, int $y): int {
      $z = $x/$y;
      return $z;
   }

   $x=20.5;
   $y=10;

   echo "First number: " . $x; 
   echo "\nSecond number: " . $y; 
   echo "\nDivision: " . division($x, $y);
?>