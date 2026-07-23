package baitap.contest_10;

import java.util.Scanner;

public class DemSoKyTu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int chu = 0, so = 0, kyTu = 0;
        for(char c : s.toCharArray()) {
            if(Character.isLetter(c)) {
                ++chu;
            }else if(Character.isDigit(c)) {
                ++so;
            }else ++kyTu;
        }
        System.out.println(chu + " " + so + " " + kyTu);
    }
}
