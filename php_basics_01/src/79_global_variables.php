<?php
   $name = "Amar";
   function sayhello() {
      GLOBAL $name;
      echo "Hello " . $name;
   }
   sayhello();
?>


<!-- output −

Hello Amar -->
