<?php
   class foo {
      var $var1 = 'Hello';
   }
   $x = new foo();
   $y = $x;		# reference copy
   echo $x->var1 . " " . $y->var1 . PHP_EOL;

   $x->var1 = "Hello World";
   echo $x->var1 . " " . $y->var1 . PHP_EOL;

// output −
// Hello Hello
// Hello World Hello World
?>