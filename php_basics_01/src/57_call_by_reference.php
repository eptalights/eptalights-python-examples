<?php  
   function  swap_value($a, $b) {
      echo "Initial values a = $a b = $b \n";
      $c = $a; $a = $b; $b = $c;
      echo "Swapped values a = $a b = $b \n";
   }

   $x = 10; $y =20;
   echo "Actual arguments x = $x y = $y \n\n";

   swap_value($x, $y);
   echo "Actual arguments do not change after the function: \n";
   echo "x = $x y = $y \n\n";

   function  swap_ref(&$a, &$b) {
      echo "Initial values a = $a b = $b \n";
      $c = $a; $a = $b; $b = $c;
      echo "Swapped values a = $a b = $b \n";
   }

   swap_ref($x, $y);
   echo "Actual arguments get changed after the function: \n";
   echo "x = $x y = $y";
?>