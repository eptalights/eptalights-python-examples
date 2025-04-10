<?php
   class Book {
   
      /* Member variables */
      var $price;
      var $title;

      /*Constructor*/
      function __construct($param1, $param2) {
         $this->title = $param1;
         $this->price = $param2;
      }

      /* Member functions */
      function getPrice(){
         echo "Price: $this->price \n";
      }

      function getTitle(){
         echo "Title: $this->title \n";
      }
   }

   $b1 = new Book("PHP Fundamentals", 375);
   $b2 = new Book("PHP Programming", 450);

   $b1->getTitle();
   $b1->getPrice();
   $b2->getTitle();
   $b2->getPrice();
?>