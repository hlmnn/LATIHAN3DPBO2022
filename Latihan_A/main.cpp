#include <bits/stdc++.h>
#include <string>

using namespace std;

#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"
#include "Pc.cpp"

int main()
{
    // buat objek oProcie, oDisk, dan oRam
    Processor oProcie("AMD Intel Ryzen i9 5900K", 69000420);
    Disk oDisk("SSD", "420 TB", 6969696);
    Ram oRam("69 GB", 4200069);

    int total = oProcie.getPrice() + oDisk.getPrice() + oRam.getPrice(); // menjumlahkan total harga nya
    Pc computer(oProcie, oDisk, oRam, total); // membuat objek computer lalu masukan semua objek diatas tadi

    computer.printComputer(); // print hasilnya

    return 0;
}
