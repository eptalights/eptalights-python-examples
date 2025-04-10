<?php
   $z = 1;
   $fn = fn($x) => fn($y) => $x * $y + $z;
   $x = 5;
   $y = 10; 
   echo "x:$x y:$y \n";
   echo "Result of nested arrow functions: " . ($fn($x)($y));
?>