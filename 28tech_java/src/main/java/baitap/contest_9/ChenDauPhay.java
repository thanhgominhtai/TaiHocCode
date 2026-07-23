package baitap.contest_9;

import java.util.Scanner;

public class ChenDauPhay {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        StringBuilder sb = new StringBuilder("");
        int dem = 0;
        for(int i = s.length()-1;i>=0;i--){
            sb.append(s.charAt(i));
            ++dem;
            if(dem % 3 == 0 && i != 0){
                sb.append(",");
            }
        }
        System.out.println(sb.reverse().toString());
    }
}
