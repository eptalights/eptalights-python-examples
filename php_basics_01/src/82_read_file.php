<?php
   $fp = fopen("employees.txt", "r");
   while ($employee_info = fscanf($fp, "%s\t%s\t%s\t%d\n")) {
      list ($name, $email, $post, $salary) = $employee_info;
      echo "<b>Name</b>: $name <b>Email</b>: 
	  $email <b>Salary</b>: Rs. $salary <br>";
   }
   fclose($fp);
?>