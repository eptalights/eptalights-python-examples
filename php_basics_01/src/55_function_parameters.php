<?php
   function addition($first, $second) {
      $result = $first+$second;
      echo "First number: $first \n";
      echo "Second number: $second \n"; 
      echo "Addition: $result";
   }

   addition(10, 20);

   $x=100;
   $y=200;
   addition($x, $y);
?>