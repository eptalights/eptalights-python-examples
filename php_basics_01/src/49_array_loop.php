<?php
   $capitals = array(
      "Maharashtra"=>"Mumbai", 
      "Telangana"=>"Hyderabad", 
      "UP"=>"Lucknow", 
      "Tamilnadu"=>"Chennai"
   );
   $keys=array_keys($capitals);

   for ($i=0; $i<count($keys); $i++){
      $cap = $keys[$i];
      echo "Capital of $cap is $capitals[$cap] \n";
   }
?>