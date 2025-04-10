<?php
   const X = 22;
   const Y=7;

   class square {
      const PI=X/Y;
      var $side=5;
      function area() {
         $area=$this->side**2*self::PI;
         return $area;
      }
   }
   $s1=new square();
   echo "PI=". square::PI . "\n";
   echo "area=" . $s1->area();
?>


<!-- 
output −

PI=3.1428571428571
area=78.571428571429 -->