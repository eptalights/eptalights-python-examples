<?php
   $array = array( 1, 2, 3, 4, 5);

   foreach( $array as $value ) {
      echo "Value is $value \n";
   }

   $capitals = array(
      "Maharashtra"=>"Mumbai", "Telangana"=>"Hyderabad", 
      "UP"=>"Lucknow", "Tamilnadu"=>"Chennai"
   );

   foreach ($capitals as $k=>$v) {
      echo "Capital of $k is $v \n";
   }
?>