<?php  
   function  myfunction($x, $y, $z=30) {
      echo "x = $x  y = $y  z = $z";
   }
   myfunction(...[10, 20], z:30);
?>


<!-- output −

x = 10  y = 20  z = 30 -->