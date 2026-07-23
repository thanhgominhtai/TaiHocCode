/*
*
* */

package baitap.contest_6;

import java.util.ArrayList;
import java.util.Scanner;

public class DieHard {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> list = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }
        int tien = 0;
        for(int i = 0; i < list.size(); i++){
            if(list.get(i) == 25){
                tien += list.get(i);
            }else if(list.get(i) == 50){
                tien -= 25 + list.get(i);
            }else if(list.get(i) == 100){
                tien -= 75 + list.get(i);
            }
        }
        if(tien <= 0){
            System.out.println("no");
        }else System.out.println("yes");
    }
}
