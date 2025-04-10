<?php
   $arr1 = array("a"=>10, "b"=>20, "c"=>30, "d"=>40);
   foreach ($arr1 as $k=>$v){
      $arr2[$k] = $v*2;
   }
   print_r($arr2);
?>