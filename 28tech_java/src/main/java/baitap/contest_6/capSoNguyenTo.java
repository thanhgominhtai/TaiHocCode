package baitap.contest_6;

import java.util.ArrayList;
import java.util.Scanner;

public class capSoNguyenTo {
    public static boolean nt(int n){
        for(int i=2;i<=Math.sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> list = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }
        int dem = 0;
        for(int i = 0; i < list.size() - 1; i++){
            for(int j = i+1; j < list.size(); j++){
                if(nt(list.get(j)+list.get(i))){
                    ++dem;
                }
            }
        }
        System.out.println(dem);
    }
}
