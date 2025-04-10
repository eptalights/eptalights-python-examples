<?php
   function square($number) {
      return $number * $number;
   }

   $arr = [1, 2, 3, 4, 5];
   $squares = array_map('square', $arr);
   var_dump($squares);
?> 


<!-- output −

array(5) {
   [0]=>
   int(1)
   [1]=>
   int(4)
   [2]=>
   int(9)
   [3]=>
   int(16)
   [4]=>
   int(25)
} -->