<?php
   class Book {
   
      /* Member variables */
      protected int $price;
      protected string $title;

      public function getbook(string $param1, int $param2) {
         $this->title = $param1;
         $this->price = $param2;
      }
      public function dispbook() {
         echo "Title: $this->title Price: $this->price \n";
      }
   }

   class ebook extends Book {
      private string $format;
      public function getebook(string $param1, int $param2, string $param3) {
         $this->title = $param1;
         $this->price = $param2;
         $this->format = $param3;
      }
      public function dispebook() {
         echo "Title: $this->title Price: $this->price\n";
         echo "Format: $this->format \n";
      }
   }
   $eb = new ebook;
   $eb->getebook("PHP Fundamentals", 450, "EPUB");
   $eb->dispebook();
?>


<!-- output is as shown below −

Title: PHP Fundamentals Price: 450
Format: EPUB -->