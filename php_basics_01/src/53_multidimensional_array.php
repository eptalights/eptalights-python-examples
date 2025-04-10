<?php
   $arr3D = [ 
      [[1, 0, 9],[0, 5, 6],[1, 0, 3]],
      [[0, 4, 6],[0, 0, 1],[1, 2, 7]],
   ];

   function showarray($arr){
      foreach ($arr as $k=>$v){
         if (is_array($v)){
            showarray($v);
         } else {
            echo "$k => $v  ";
         }
      }
      echo "\n";
   }
   showarray($arr3D);
?>