from Processor import Processor
from Disk import Disk
from Ram import Ram

class Pc:
    # atribut private
    __procie = Processor()
    __storage = Disk()
    __memory = Ram()
    __totalPrice = 0

    # constructor
    def __init__(self, procie, storage, memory, totalPrice=0):
        self.__procie = procie
        self.__storage = storage
        self.__memory = memory
        self.__totalPrice = totalPrice

    # method set untuk procie, storage, memory, dan totalPrice
    def setProcie(self, procie):
        self.__procie = procie
    def setStorage(self, storage):
        self.__storage = storage
    def setMemory(self, memory):
        self.__memory = memory
    def setPrice(self, totalPrice):
        self.__totalPrice = totalPrice

    # method get untuk procie, storage, memory, dan totalPrice
    def getProcie(self):
        return self.__procie
    def getStorage(self):
        return self.__storage
    def getMemory(self):
        return self.__memory
    def getTotalPrice(self):
        return self.__totalPrice
    
    # method untuk output Pc
    def printComputer(self):
        self.__procie.printProcie()
        print("============================")
        self.__storage.printDisk()
        print("============================")
        self.__memory.printRam()
        print("============================")
        print("Total Price : " + "Rp. " + str(self.getTotalPrice()))