<?php
class Ram {
    private $capacity;
    private $price;

    // constructor
    function __construct($capacity, $price) {
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // method set untuk capacity dan price
    function setCapacity($capacity) {
        $this->capacity = $capacity;
    }
    function setPrice($price) {
        $this->price = $price;
    }

    // method get untuk capacity dan price
    function getCapacity() {
        return $this->capacity;
    }
    function getPrice() {
        return $this->price;
    }

    // method untuk output Ram
    function printRam() {
        echo "Ram". "<br/>";
        echo "-------------". "<br/>";
        echo "Capacity    : ". $this->getCapacity(). "<br/>";
        echo "Price       : ". "Rp. ". $this->getPrice(). "<br/>";
    }

    // destructor
    function __destruct() {}
}
?>