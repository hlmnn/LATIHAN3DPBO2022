class Processor
{
    private:
        // atribut
        string name;
        int price;

    public:
        // constructor
        Processor(){}
        Processor(string name, int price) {
            this->name = name;
            this->price = price;
        }

        // method set untuk name dan price
        void setName(string name) {
            this->name = name;
        }
        void setPrice(int price) {
            this->price = price;
        }

        // method get untuk name dan price
        string getName() {
            return this->name;
        }
        int getPrice() {
            return this->price;
        }

        // method output untuk Processor
        void printProcie() {
            cout << "Processor" << endl;
            cout << "-------------" << endl;
            cout << "Name        : " << this->name << endl;
            cout << "Price       : " << "Rp. " << this->price << endl;
        }

        // destructor
        ~Processor(){}
};