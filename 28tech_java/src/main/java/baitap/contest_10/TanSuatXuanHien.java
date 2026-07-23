package baitap.contest_10;

import java.util.Scanner;

public class TanSuatXuanHien {
    static int mark[] = new int[256];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        for(int c : s.toCharArray()){
            mark[c]++;
        }
        for(int i = 0; i < mark.length; i++){
            if(mark[i] > 0){
                System.out.printf("%c %d\n", i, mark[i]);
            }
        }
    }
}
