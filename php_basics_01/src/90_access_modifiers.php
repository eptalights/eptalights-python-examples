<?php
   class Book {
      /* Member variables */
      private $price;
      private $title;

      /*Constructor*/
      function __construct(string $param1="PHP Basics", int $param2=380) {
         $this->title = $param1;
         $this->price = $param2;
      }

      public function getPrice() {
         echo "Price: $this->price \n";
      }

      public function getTitle() {
         echo "Title: $this->title \n;";
      }
   }
   $b1 = new Book();
   $b1->getTitle();
   $b1->getPrice(); 
   echo "Title : $b1->title Price: $b1->price";
?>