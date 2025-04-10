<?php
   $a = 42;
   $b = 20;

   if ($a == $b) {
      echo "TEST1 : a is equal to b \n";
   } else {
      echo "TEST1 : a is not equal to b \n";
   }

   if ($a > $b) {
      echo "TEST2 : a is greater than  b \n";
   } else {
      echo "TEST2 : a is not greater than b \n";
   }

   if ($a < $b) {
      echo "TEST3 : a is less than  b \n";
   } else {
      echo "TEST3 : a is not less than b \n";
   }

   if ($a != $b) {
      echo "TEST4 : a is not equal to b \n";
   } else {
      echo "TEST4 : a is equal to b \n";
   }

   if ($a >= $b) {
      echo "TEST5 : a is either greater than or equal to b \n";
   } else {
      echo "TEST5 : a is neither greater than nor equal to b \n";
   }    
   if ($a <= $b) {
      echo "TEST6 : a is either less than or equal to b \n";
   } else {
      echo "TEST6 : a is neither less than nor equal to b";
   }
?>