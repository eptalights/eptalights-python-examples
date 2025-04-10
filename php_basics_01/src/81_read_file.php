<?php
   $name = "hello.txt";
   $file = fopen($name, "r");
   $data = fread($file, filesize($name));
   echo $data;
   fclose($file);
?>