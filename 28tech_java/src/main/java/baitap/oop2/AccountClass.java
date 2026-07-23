package baitap.oop2;

import java.util.ArrayList;
import java.util.Scanner;

public class AccountClass {
    private String id , customerId, userName, passWord;
    AccountClass(String id, String customerId, String userName, String passWord) {
        this.id = id;
        this.customerId = customerId;
        this.userName = userName;
        this.passWord = passWord;
    }
    public boolean checkAccount(String userName, String passWord) {
        if(this.userName.equals(userName) && this.passWord.equals(passWord)){
            return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        ArrayList<AccountClass> account = new ArrayList<>();
        for(int i = 0; i < n; i++) {
            AccountClass a = new AccountClass(sc.next(), sc.next(), sc.next(), sc.next());
            account.add(a);
        }
        int q = sc.nextInt();
        sc.nextLine();
        for(int i = 0; i < q; i++) {
            String userName = sc.nextLine();
            String passWord = sc.nextLine();
            boolean check = false;
            for(int j = 0; j < n; j++){
                if(account.get(j).checkAccount(userName, passWord)){
                    check = true;
                    break;
                }
            }
            if(check) System.out.println("success");
            else System.out.println("fail");
        }
    }
}
