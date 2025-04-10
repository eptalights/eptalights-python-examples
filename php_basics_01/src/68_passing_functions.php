<?php
   function square($number) {
      return $number * $number;
   }
   $arr = [1, 2, 3, 4, 5];
   foreach($arr as $a) {
      echo "square of $a:" . call_user_func("square", $a). PHP_EOL;
   }
?>



<!-- output −

square of 1:1
square of 2:4
square of 3:9
square of 4:16
square of 5:25 -->
