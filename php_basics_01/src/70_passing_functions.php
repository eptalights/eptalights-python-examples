<?php
   function myfunction($function, $number) {
      $result = $function($number);
      return $result;
   }

   function cube($number) {
      return $number ** 2;
   }

   function square($number) {
      return $number ** 3;
   }

   $x = 5;

   $cube = myfunction('cube', $x);
   $square = myfunction('square', $x);

   echo "Square of $x = $square" . PHP_EOL;
   echo "Cube of $x = $cube" . PHP_EOL;
?>




<!-- output −

Square of 5 = 125
Cube of 5 = 25 -->