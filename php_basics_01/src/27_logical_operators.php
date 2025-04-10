<?php
   $a = 42;
   $b = 0;

   if ($a && $b) {
      echo "TEST1 : Both a and b are true \n";
   } else {
      echo "TEST1 : Either a or b is false \n";
   }

   if ($a and $b) {
      echo "TEST2 : Both a and b are true \n";
   } else {
      echo "TEST2 : Either a or b is false \n";
   }

   if ($a || $b) {
      echo "TEST3 : Either a or b is true \n";
   } else {
      echo "TEST3 : Both a and b are false \n";
   }

   if ($a or $b) {
      echo "TEST4 : Either a or b is true \n";
   } else {
      echo "TEST4 : Both a and b are false \n";
   }

   $a = 10;
   $b = 20;

   if ($a) {
      echo "TEST5 : a is true \n";
   } else {
      echo "TEST5 : a is false \n";
   }

   if ($b) {
      echo "TEST6 : b is true \n";
   } else {
      echo "TEST6 : b is false \n";
   }

   if (!$a) {
      echo "TEST7 : a is true \n";
   } else {
      echo "TEST7 : a is false \n";
   }

   if (!$b) {
      echo "TEST8 : b is true \n";
   } else {
      echo "TEST8 : b is false";
   }
?>