<?php
   class ellipse {
      final public const PI=22/7;
      private float $a, $b;
      public function __construct($x, $y) {
         $this->a = $x;
         $this->b = $y;
      }
      final public function area() : float {
         return self::PI*$this->a*$this->b;
      }
   }
   class circle extends ellipse {
      public function __construct(float $x) {
         parent::__construct($x, $x);
      }
   }
   $c1 = new circle(5);
   echo "Area: " . $c1->area() . PHP_EOL;


// output −
// Area: 78.571428571429
?>
