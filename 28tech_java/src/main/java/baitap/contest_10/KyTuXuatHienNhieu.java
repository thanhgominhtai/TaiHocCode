package baitap.contest_10;

import java.util.Scanner;

public class KyTuXuatHienNhieu {
    static int mark[] = new int[256];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        for(int c : s.toCharArray()){
            mark[c]++;
        }

        int min = 1000000, max = -1;
        for(int i = 0; i < mark.length; i++){
            if(mark[i] == 0){
                continue;
            }
            max = Math.max(max, mark[i]);
            min = Math.min(min, mark[i]);
        }
        for(int i = 0; i < mark.length; i++){
            if(mark[i] == max){
                System.out.printf("%c %d\n", i, mark[i]);
            }
            if(mark[i] == min){
                System.out.printf("%c %d\n", i, mark[i]);
            }
        }
    }
}
