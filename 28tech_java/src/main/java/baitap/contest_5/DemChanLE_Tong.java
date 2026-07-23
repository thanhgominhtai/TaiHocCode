/*
 */
package baitap.contest_5;

import java.util.Scanner;

/**
 *
 * @author nmt17
 */
public class DemChanLE_Tong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[6];
        int tongChan = 0;
        int tongLe = 0;
        int demChan = 0, demLe = 0;
        for(int i = 0; i < 6; i++){
            a[i] = sc.nextInt();
        }
        for(int i = 0; i < 6; i++){
            if(a[i] % 2 == 0){
                ++demChan;
                tongChan += a[i];
            }else{
                ++demLe;
                tongLe += a[i];
            }
        }
        System.out.println(demChan + "\n" + demLe + "\n" + tongChan + "\n" + tongLe);
    }
}
