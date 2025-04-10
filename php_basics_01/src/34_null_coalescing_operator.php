<?php
   $username = $_GET['name'] ?? $_POST['name'] ?? 'Guest';
   echo "Welcome $username";
?>