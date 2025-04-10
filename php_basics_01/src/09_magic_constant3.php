<?php
   class myclass {    
      public function __construct() {    
         echo "Inside the constructor of ". __CLASS__ . PHP_EOL;    
      }    
      function getClassName(){                      
         echo "from an instance method of " . __CLASS__ . "";   
      }    
   }    
   $obj = new myclass;    
   $obj->getClassName();    
?>