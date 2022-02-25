class Processor:
    # atribut private
    __name = ""
    __price = 0

    # constructor
    def __init__(self, name="", price=0):
        self.__name = name
        self.__price = price

    # method set untuk name dan price
    def setName(self, name):
        self.__name = name
    def setPrice(self, price):
        self.__price = price

    # method get untuk name dan price
    def getName(self):
        return self.__name
    def getPrice(self):
        return self.__price
    
    # method untuk output Processor
    def printProcie(self):
        print("Processor")
        print("-------------")
        print("Name        : " + self.getName())
        print("Price       : " + "Rp. " + str(self.getPrice()))