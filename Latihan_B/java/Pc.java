public class Pc
{
    private Processor procie;
    private Disk storage;
    private Ram memory;
    private int totalPrice;

    // constructor
    public Pc(){}
    public Pc(Processor procie, Disk storage, Ram memory, int totalPrice) {
        this.procie = procie;
        this.storage = storage;
        this.memory = memory;
        this.totalPrice = totalPrice;
    }

    // method set untuk procie, storage, memory, dan totalPrice
    public void setProcie(Processor procie) {
        this.procie = procie;
    }
    public void setStorage(Disk storage) {
        this.storage = storage;
    }
    public void setMemory(Ram memory) {
        this.memory = memory;
    }
    public void setTotalPrice(int totalPrice) {
        this.totalPrice = totalPrice;
    }

    // method get untuk procie, storage, memory, dan totalPrice
    public Processor getProcie() {
        return procie;
    }
    public Disk getStorage() {
        return storage;
    }
    public Ram getMemory() {
        return memory;
    }
    public int getTotalPrice() {
        return totalPrice;
    }

    // method output untuk Pc
    public void printComputer() {
        procie.printProcie();
        System.out.println("============================");
        storage.printDisk();
        System.out.println("============================");
        memory.printRam();
        System.out.println("============================");
        System.out.println("Total Price : " + "Rp. " + totalPrice);
    }
}
