<?php
   $x=13;
   if ($x%2==0) {
      if ($x%3==0) 
         echo "<h3>$x is divisible by 2 and 3</h3>";
      else
         echo "<h3>$x is divisible by 2 but not divisible by 3</h3>";
   }

   elseif ($x%3==0)
      echo "<h3>$x is divisible by 3 but not divisible by 2</h3>"; 

   else
      echo "<h3>$x is not divisible by 3 and not divisible by 2</h3>"; 
?>