package baitap.contest_6;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class XepChanLe {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> list = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }
        Collections.sort(list, new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                if(o1 % 2 == 1 && o2 % 2 == 0) return -1;
                if(o1 % 2 == 0 && o2 % 2 == 1) return 1;
                if(o1 % 2 == 0 && o2 % 2 == 0) return o1 - o2;
                return o2 - o1;
            }
        });
        for (int i = 0; i < n; i++) {
            System.out.print(list.get(i) + " ");
        }
    }
}
