<?php
include "Processor.php";
include "Disk.php";
include "Ram.php";

class Pc {
    private $procie;
    private $storage;
    private $memory;
    private $totalPrice;

    // constructor
    function __construct($procie, $storage, $memory, $totalPrice) {
        $this->procie = $procie;
        $this->storage = $storage;
        $this->memory = $memory;
        $this->totalPrice = $totalPrice;
    }

    // method set untuk procie, storage, memory, dan totalPrice
    function setProcie($procie) {
        $this->procie = $procie;
    }
    function setStorage($storage) {
        $this->storage = $storage;
    }
    function setMemory($memory) {
        $this->memory = $memory;
    }
    function setTotalPrice($totalPrice) {
        $this->totalPrice = $totalPrice;
    }

    // method get untuk procie, storage, memory, dan totalPrice
    function getProcie() {
        return $this->procie;
    }
    function getStorage() {
        return $this->storage;
    }
    function getMemory() {
        return $this->memory;
    }
    function getTotalPrice() {
        return $this->totalPrice;
    }

    // method untuk output Pc
    function printComputer() {
        $this->procie->printProcie();
        echo "============================". "<br/>";
        $this->storage->printDisk();
        echo "============================". "<br/>";
        $this->memory->printRam();
        echo "============================". "<br/>";
        echo "Total Price : ". "Rp. ". $this->getTotalPrice(). "<br/>";
    }

    // destructor
    function __destruct() {}
}
?>