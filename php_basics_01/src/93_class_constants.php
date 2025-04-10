<?php
   class square {
      const PI=M_PI;
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


<!-- output −

PI=3.1415926535898
area=78.539816339745 -->