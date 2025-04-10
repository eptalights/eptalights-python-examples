<?php
   $arr1 = array(10, 20, 30, 40, 50);
   $size = count($arr1);

   for ($i=0; $i<$size; $i++){
      $arr2[$size-$i-1] = $arr1[$i];
   }

   for ($i=0; $i<$size; $i++){
      echo "arr1[$i] = $$arr1[$i] arr2[$i] = $$arr2[$i] \n";
   }
?>