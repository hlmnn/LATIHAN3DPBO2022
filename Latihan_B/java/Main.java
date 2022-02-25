public class Main {
    public static void main(String[] args) {
        // buat objek oProcie, oDisk, dan oRam
        Processor oProcie = new Processor("AMD Intel Ryzen i9 5900K", 69000420);
        Disk oDisk = new Disk("SSD", "420 TB", 6969696);
        Ram oRam = new Ram("69 GB", 4200069);

        int total = oProcie.getPrice() + oDisk.getPrice() + oRam.getPrice(); // menjumlahkan total harga nya
        Pc computer = new Pc(oProcie, oDisk, oRam, total); // membuat objek computer lalu masukan semua objek diatas tadi

        computer.printComputer(); // print hasilnya
    }
}
