<?php
   function myfunction() {
      $sum = 0;
      foreach (func_get_args() as $n) {
         $sum += $n;
      }
      return $sum;
   }
   echo myfunction(5, 12, 9, 23, 8, 41);
?>