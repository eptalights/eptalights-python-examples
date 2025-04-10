<?php
   $file = fopen("hello.txt", "r");
   $newfile = fopen("new.txt", "w");
   while(! feof($file)) {
      $str = fgets($file);
      fputs($newfile, $str);
   }
   fclose($file);
   fclose($newfile);
?>