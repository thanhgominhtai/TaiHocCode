package baitap.oop2;

import java.util.ArrayList;
import java.util.Scanner;

public class BankAccount {
    private String id, cuscomerId, STK, PinCode;
    private long SoDu;
    BankAccount(String id, String cuscomerId, String STK, String pinCode, long SoDu) {
        this.id = id;
        this.cuscomerId = cuscomerId;
        this.STK = STK;
        this.PinCode = pinCode;
        this.SoDu = SoDu;
    }
    public void withDraw(String tk, long amount) {
        if(this.STK.equals(tk) && this.SoDu - 50000 >= amount){
            this.SoDu -= amount;
        }
    }
    public void deposit(String tk, long amount) {
        if(this.STK.equals(tk)){
            this.SoDu += amount;
        }
    }
    public String toString() {
        return "ID : " + this.id + "\n" +
                "CusId : " + this.cuscomerId + "\n" +
                "Number : " + this.STK + "\n" +
                "PinCode : " + this.PinCode + "\n" +
                "Balance : " + this.SoDu + "\n" +
                "----------------\n";
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("so luong tk");
        int n = sc.nextInt();
        ArrayList<BankAccount> bankaccs = new ArrayList<>();
        for(int i = 0; i < n; i++) {
            sc.nextLine();
            System.out.println("nhap thong tin tk");
            BankAccount ba = new BankAccount(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLong());
            bankaccs.add(ba);
        }
        System.out.println("nhap truy van tk");
        int q = sc.nextInt();
        sc.nextLine();
        for(int i = 0; i < q; i++) {
            System.out.println("nhap lua chon");
            String lc = sc.nextLine();
            switch(lc) {
                case "withdraw":
                    System.out.println("STK");
                    String tk = sc.nextLine();
                    System.out.println("SOTIENRUT");
                    long amount = sc.nextLong();
                    bankaccs.get(i).withDraw(tk, amount);
                    break;
                case "deposit":
                    System.out.println("STK");
                    String tk1 = sc.nextLine();
                    System.out.println("SOTIENNAP");
                    Long amount1 = sc.nextLong();
                    bankaccs.get(i).deposit(tk1, amount1);
                    break;
                default:
                    System.out.println("Invalid input");
            }
        }
        for(BankAccount ba : bankaccs) {
            System.out.println(ba.toString());
        }
    }
}
