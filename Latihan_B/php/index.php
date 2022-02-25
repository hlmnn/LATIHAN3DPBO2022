<?php
include "Pc.php";
// buat objek oProcie, oDisk, dan oRam
$oProcie = new Processor("AMD Intel Ryzen i9 5900K", 69000420);
$oDisk = new Disk("SSD", "420 TB", 6969696);
$oRam = new Ram("69 GB", 4200069);

$total = $oProcie->getPrice() + $oDisk->getPrice() + $oRam->getPrice(); // menjumlahkan total harga nya
$computer = new Pc($oProcie, $oDisk, $oRam, $total); // membuat objek computer lalu masukan semua objek diatas tadi

$computer->printComputer(); // print hasilnya
?>