<?php
   function factorial ($n) {
      if ($n == 1) {
         echo $n . PHP_EOL;
         return 1;
      } else {
         echo "$n * ";
         return $n*factorial($n-1);
      }
   }
   echo "Factorial of 5 = " . factorial(5);


// output −

// 5 * 4 * 3 * 2 * 1
// Factorial of 5 = 120
?>
