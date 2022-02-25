class Pc
{
    private:
        // atribut
        Processor procie;
        Disk storage;
        Ram memory;
        int totalPrice;

    public:
        // constructor
        Pc(){}
        Pc(Processor procie, Disk storage, Ram memory, int totalPrice) {
            this->procie = procie;
            this->storage = storage;
            this->memory = memory;
            this->totalPrice = totalPrice;
        }

        // method set untuk procie, storage, memory, dan totalPrice
        void setProcie(Processor procie) {
            this->procie = procie;
        }
        void setStorage(Disk storage) {
            this->storage = storage;
        }
        void setMemory(Ram memory) {
            this->memory = memory;
        }
        void setTotalPrice(int totalPrice) {
            this->totalPrice = totalPrice;
        }
        
        // method get untuk procie, storage, memory, dan totalPrice
        Processor getProcie() {
            return this->procie;
        }
        Disk getStorage() {
            return this->storage;
        }
        Ram getMemory() {
            return this->memory;
        }
        int getTotalPrice() {
            return this->totalPrice;
        }

        // method output untuk Pc
        void printComputer(){
            this->procie.printProcie();
            cout << "============================" << endl;
            this->storage.printDisk();
            cout << "============================" << endl;
            this->memory.printRam();
            cout << "============================" << endl;
            cout << "Total Price : " << "Rp. " << this->totalPrice << endl;
        }

        // destructor
        ~Pc(){}
};