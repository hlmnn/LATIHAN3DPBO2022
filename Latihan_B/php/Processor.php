<?php
class Processor {
    private $name;
    private $price;

    // constructor
    function __construct($name, $price) {
        $this->name = $name;
        $this->price = $price;
    }

    // method set untuk name dan price
    function setName($name) {
        $this->name = $name;
    }
    function setPrice($price) {
        $this->price = $price;
    }
    // method get untuk name dan price
    function getName() {
        return $this->name;
    }
    function getPrice() {
        return $this->price;
    }

    // method untuk output Processor
    function printProcie() {
        echo "Processor". "<br/>";
        echo "-------------". "<br/>";
        echo "Name        : ".  $this->getName(). "<br/>";
        echo "Price       : ". "Rp. ". $this->getPrice(). "<br/>";
    }

    // destructor
    function __destruct() {}
}
?>