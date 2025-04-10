<?php
   $x = 10;
   $y = &$x;
   $z = $x+$y;
   echo "x=". $x . " y=" . $y . " z = ". $z . "\n";

   $y=20;
   $z = $x+$y;
   echo "x=". $x . " y=" . $y . " z = ". $z . "";
?>