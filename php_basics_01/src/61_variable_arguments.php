<?php
   function myfunction($x, ...$numbers) {
      echo "First number: $x" . PHP_EOL;
      echo "Remaining numbers: ";
      foreach ($numbers as $n) {
         echo "$n  ";
      }
   }
   myfunction(5, 12, 9, 23, 8, 41);
?>