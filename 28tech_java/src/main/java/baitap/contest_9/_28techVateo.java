package baitap.contest_9;

import java.util.Scanner;

public class _28techVateo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        StringBuilder sb = new StringBuilder("");
        for(char c : s.toCharArray()){
            if(c == '2' || c == '8' || c == 't' || c == 'e' || c == 'c' || c == 'h'){
                continue;
            }
            sb.append(c);
        }
        if(sb.isEmpty()){
            System.out.println("nothing");
        }else System.out.println(sb.toString());

    }
}
