package baitap.contest_9;

import java.util.Scanner;

public class SoDep {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int check = 1;
        for (int i = 1; i < s.length(); i++) {
            if(Math.abs(s.charAt(i) - s.charAt(i - 1)) != 1){
                check = 0; break;
            }
        }
        if(check == 1){
            System.out.println("yes");
        }else System.out.println("no");
    }
}
