<?php
   $x = 10;
   $y = 20;

   function addition() {
      $z = $GLOBALS['x']+$GLOBALS['y'];
      echo "Addition: $z" .PHP_EOL;
   }
   addition();
?>


<!-- output −

Addition: 30 -->