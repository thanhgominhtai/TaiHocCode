package baitap.contest_9;

import java.util.Scanner;

public class InRaChuSo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        for(char c : s.toCharArray()){
            if(Character.isDigit(c)){
                System.out.print(c);
            }
        }
        System.out.println("\n");
        for(char c : s.toCharArray()){
            if(!Character.isAlphabetic(c)){
                System.out.print(c);
            }
        }
    }
}
