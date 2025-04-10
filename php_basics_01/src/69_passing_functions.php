<?php
   function mysort($a, $b) {
      if ($a == $b) {
         return 0;
      }
      return ($a < $b) ? -1 : 1;
   }

   $a = array(3, 2, 5, 6, 1);

   usort($a, "mysort");

   foreach ($a as $key => $value) {
      echo "$key: $value\n";
   }
?>


<!-- output −

0: 1
1: 2
2: 3
3: 5
4: 6 -->