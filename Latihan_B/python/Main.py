from Processor import Processor
from Disk import Disk
from Ram import Ram
from Pc import Pc

# buat objek oProcie, oDisk, dan oRam
oProcie = Processor("AMD Intel Ryzen i9 5900K", 69000420)
oDisk = Disk("SSD", "420 TB", 6969696)
oRam = Ram("69 GB", 4200069)

total = oProcie.getPrice() + oDisk.getPrice() + oRam.getPrice() # menjumlahkan total harga nya
computer = Pc(oProcie, oDisk, oRam, total) # membuat objek computer lalu masukan semua objek diatas tadi

computer.printComputer() # print hasilnya