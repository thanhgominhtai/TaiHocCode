package baitap.contest_9;

import java.util.Arrays;
import java.util.Collection;
import java.util.Scanner;

public class XapSepChuSo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        char[] c = s.toCharArray();
        Arrays.sort(c);
        for(char cc : c){
            if(cc != '0'){
                System.out.print(cc);
            }
        }
    }
}
