<?php
   function myfunction() {
      $len = func_num_args();
      echo "Numbers : ";
      $i=0;
      for ($i=0; $i<$len; $i++)
      echo func_get_arg($i) . " ";
   }
   myfunction(5, 12, 9, 23, 8, 41);
?>