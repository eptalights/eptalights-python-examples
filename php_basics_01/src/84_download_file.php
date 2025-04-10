<?php
   $filename = 'welcome.png';

   header('Content-Type: application/octet-stream');
   header('Content-Disposition: attachment; filename="' . basename($filename) . '"');

   $handle = fopen($filename, 'rb');
   $buffer = '';
   $chunkSize = 1024 * 1024;

   ob_start();
   while (!feof($handle)) {
      $buffer = fread($handle, $chunkSize);		
      echo $buffer;
      ob_flush();
      flush();
   }
   fclose($handle);
?>