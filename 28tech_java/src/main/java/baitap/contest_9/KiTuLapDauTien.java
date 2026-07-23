package baitap.contest_9;

import java.util.Scanner;

public class KiTuLapDauTien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        char[] ch = s.toCharArray();
        boolean flag = true;
        for (int i = 0; i < ch.length - 1; i++) {
            for(int j = i + 1; j < ch.length; j++) {
                if (ch[i] == ch[j]) {
                    System.out.print(ch[i]);
                    flag = false;
                }
            }
        }
        if (flag) {
            System.out.println("none");
        }
    }
}
