<?php
   $var=100;   // global variable
   function myfunction() {
      $var1="Hello"; 	// local variable
      echo "var=$var  var1=$var1" . PHP_EOL;
   }
   myfunction();
   echo "var=$var  var1=$var1" . PHP_EOL; 
?>


<!-- 
var=  var1=Hello
var=100  var1=
 -->