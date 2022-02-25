public class Processor 
{
    private String name;
    private int price;

    // constructor
    public Processor(){}
    public Processor(String name, int price) {
        this.name = name;
        this.price = price;
    }

    // method set untuk name dan price
    public void setName(String name) {
        this.name = name;
    }
    public void setPrice(int price) {
        this.price = price;
    }

    // method get untuk name dan price
    public String getName() {
        return name;
    }
    public int getPrice() {
        return price;
    }

    // method output untuk Processor
    public void printProcie() {
        System.out.println("Processor");
        System.out.println("-------------");
        System.out.println("Name        : " + name);
        System.out.println("Price       : " + "Rp. " + price);
    }
}
