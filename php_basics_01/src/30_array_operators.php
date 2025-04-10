<?php
   $arr1=array("phy"=>70, "che"=>80, "math"=>90);
   $arr2=array("Eng"=>70, "Bio"=>80,"CompSci"=>90);
   $arr3=$arr1+$arr2;
   var_dump($arr3);


// output −
// array(6) {
//    ["phy"]=>
//    int(70)
//    ["che"]=>
//    int(80)
//    ["math"]=>
//    int(90)
//    ["Eng"]=>
//    int(70)
//    ["Bio"]=>
//    int(80)
//    ["CompSci"]=>
//    int(90)
// }
?>
