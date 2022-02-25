class Ram:
    # atribut private
    __capacity = ""
    __price = 0

    # constructor
    def __init__(self, capacity="", price=0):
        self.__capacity = capacity
        self.__price = price

    # method set untuk capacity dan price
    def setCapacity(self, capacity):
        self.__capacity = capacity
    def setPrice(self, price):
        self.__price = price

    # method get untuk capacity dan price
    def getCapacity(self):
        return self.__capacity
    def getPrice(self):
        return self.__price
    
    # method untuk output Ram
    def printRam(self):
        print("Ram")
        print("-------------")
        print("Capacity    : " + self.getCapacity())
        print("Price       : " + "Rp. " + str(self.getPrice()))