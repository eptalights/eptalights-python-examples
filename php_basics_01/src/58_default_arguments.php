<?php
   function  percent($p, $c, $m, $ttl=300) {
      $per = ($p+$c+$m)*100/$ttl;
      echo "Marks obtained: \n";
      echo "Physics = $p Chemistry = $c Maths = $m \n";
      echo "Percentage = $per \n";
   }
   percent(30, 35, 40, 150);
?>