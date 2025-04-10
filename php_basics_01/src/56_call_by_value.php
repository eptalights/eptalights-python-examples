<?php
   function addFunction($num1, $num2) {
      $sum = $num1 + $num2;
      return $sum;
   }
   $x = 10;
   $y = 20;
   $num = addFunction($x, $y);
   echo "Sum of the two numbers is : $num";
?>    