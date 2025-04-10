<?php
   $obj=new stdClass;
   $obj->name="Deepak";
   $obj->age=21;
   $obj->marks=75;

   $arr=(array)$obj;
   print_r($arr);
?>