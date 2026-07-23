package baitap.contest_9;

import java.util.Scanner;

public class KiTuTrongDoan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int t = 0;
        for(int num : s.toCharArray()){
            if(Character.isDigit(num)){
                t += num - '0';
            }
        }
        System.out.println(t);
    }
}
