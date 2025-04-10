<?php
   $a=10; 
   $b=20;
   echo "Global variables before function call: a = $a b = $b" . PHP_EOL;
   function myfunction() {
      global $a, $b;
      $c=($a+$b)/2;
      echo "inside function a = $a b = $b c = $c" . PHP_EOL;
      $a=$a+10;
   }
   myfunction();
   echo "Variables after function call: a = $a b = $b c = $c";
?>


<!-- output −

Global variables before function call: a = 10 b = 20
inside function a = 10 b = 20 c = 15
Variables after function call: a = 20 b = 20 c = 
PHP Warning:  Undefined variable $c in /home/cg/root/48499/main.php on line 12 -->