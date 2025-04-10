<?php
   $arr1 = [4,5];
   $arr2 = [1,2,3, ...$arr1];

   print_r($arr2);


   $arr1 = [1,2,3];
   $arr2 = [4,5,6];
   $arr3 = [...$arr1, ...$arr2];

   print_r($arr3);


   function  myfunction($x, $y, $z=30) {
      echo "x = $x  y = $y  z = $z";
   }

   myfunction(...[10, 20], z:30);


   function get_squares() {
      for ($i = 0; $i < 5; $i++) {
         $arr[] = $i**2;
      }
      return $arr;
   }
   $squares = [...get_squares()];
   print_r($squares);

// output −

// Array
// (
//    [0] => 1
//    [1] => 2
//    [2] => 3
//    [3] => 4
//    [4] => 5
// )

// Array
// (
//    [0] => 1
//    [1] => 2
//    [2] => 3
//    [3] => 4
//    [4] => 5
//    [5] => 6
// )

// x = 10  y = 20  z = 30

// Array
// (
//    [0] => 0
//    [1] => 1
//    [2] => 4
//    [3] => 9
//    [4] => 16
// )
?>
