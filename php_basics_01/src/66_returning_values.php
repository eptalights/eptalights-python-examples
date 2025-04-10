<?php
   function raiseto($x){
      $sqr =  $x**2;
      $cub =  $x**3;
      $ret = ["sqr" => $sqr, "cub" => $cub];
      return $ret;
   }
   $a = 5;
   $val = raiseto($a);
   echo "Square of $a: " . $val["sqr"] . PHP_EOL;
   echo "Cube of $a: " . $val["cub"] . PHP_EOL;
?>