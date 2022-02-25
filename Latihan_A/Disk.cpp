class Disk
{
    private:
        // atribut
        string type;
        string capacity;
        int price;

    public:
        // constructor
        Disk(){}
        Disk(string type, string capacity, int price) {
            this->type = type;
            this->capacity = capacity;
            this->price = price;
        }

        // method set untuk type, capacity, dan price
        void setType(string type) {
            this->type = type;
        }
        void setCapacity(string capacity) {
            this->capacity = capacity;
        }
        void setPrice(int price) {
            this->price = price;
        }
        
        // method get untuk type, capacity, dan price
        string getType() {
            return this->type;
        }
        string getCapacity() {
            return this->capacity;
        }
        int getPrice() {
            return this->price;
        }

        // method output untuk Disk
        void printDisk() {
            cout << "Disk" << endl;
            cout << "-------------" << endl;
            cout << "Type        : " << this->type << endl;
            cout << "Capacity    : " << this->capacity << endl;
            cout << "Price       : " << "Rp. " << this->price << endl;
        }

        // destructor
        ~Disk(){}
};