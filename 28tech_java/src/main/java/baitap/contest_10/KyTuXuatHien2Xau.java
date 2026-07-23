package baitap.contest_10;

import java.util.Scanner;

public class KyTuXuatHien2Xau {
    static int mark[] = new int[256];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String s1 = sc.nextLine();
        for(int i = 0; i < s.toCharArray().length; i++){
            for(int j = 0; j < s1.toCharArray().length; j++){
                if(s.charAt(i) == s1.charAt(j)){
                    System.out.printf("%c", s.charAt(i));
                }
            }
        }
        System.out.println();
        for(char c : s.toCharArray()){
            mark[c]++;
        }
        for(char c : s1.toCharArray()){
            mark[c]++;
        }
        for(int i = 0; i < mark.length; i++){
            if(mark[i] > 0){
                System.out.printf("%c", i);
            }
        }
    }
}
