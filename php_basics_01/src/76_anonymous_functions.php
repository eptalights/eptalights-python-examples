<?php
   $maxmarks=300;
   $percent=function ($marks) use ($maxmarks) {
      return $marks*100/$maxmarks;
   };
   $m = 250;
   echo "Marks = $m Percentage = ". $percent($m);
?>


<!-- output −

Marks = 250 Percentage = 83.333333333333 -->
