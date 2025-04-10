<?php
   class Book {
   
      /* Member variables */
      var $price;
      var $title;

      /*Constructor*/
      function __construct(){
         $this->title = "PHP Fundamentals";
         $this->price = 275;
      }
	  
      /* Member functions */
      function getPrice() {
         echo "Price: $this->price \n";
      }

      function getTitle(){
         echo "Title: $this->title \n";
      }    
   }

   $b1 = new Book;
   $b1->getTitle();
   $b1->getPrice();
?>