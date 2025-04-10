<?php
   class foo {
      var $var1 = 'Hello World';
   }

   $x = new foo();

   # shallow copy
   $y = clone $x;
   echo $x->var1 . " " . $y->var1 . PHP_EOL;

   $x->var1 = "Hello PHP";
   echo $x->var1 . " " . $y->var1 . PHP_EOL;

// output −
// Hello World Hello World
// Hello PHP Hello World
?>