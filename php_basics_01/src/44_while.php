<?php
   $i = 0;
   $num = 50;

   while($i < 10) {
      $num--;
      $i++;
   }

   echo ("Loop stopped at i = $i and num = $num" );

   $numbers = array(10, 20, 30, 40, 50);
   $size = count($numbers);
   $x=0;

   while ($x<$size) {
      echo "Number at index $x is $numbers[$x] \n";
      $x++;
   }
?>