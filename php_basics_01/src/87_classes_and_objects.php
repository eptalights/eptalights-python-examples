<?php
   class Book {
   
      /* Member variables */
      var $price;
      var $title;

      /* Member functions */
      function setPrice($par){
         $this->price = $par;
      }

      function getPrice(){
         echo $this->price ."\n";
      }

      function setTitle($par){
         $this->title = $par;
      }

      function getTitle(){
         echo $this->title ."\n";
      }
   }

   $b1 = new Book;
   $b2 =new Book;

   $b1->setTitle("PHP Programming");
   $b1->setPrice(450);
   $b2->setTitle("PHP Fundamentals");
   $b2->setPrice(275);
   $b1->getTitle();
   $b1->getPrice();
   $b2->getTitle();
   $b2->getPrice();
?>