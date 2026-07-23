
package hocjava;

import java.util.Scanner;

public class tinhTuoiTheoNam_method {
    public static int nhap(){
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        return n;
    }
    public static int tuoi(int n)
    {
        return 2025 - n;
    }
    
    public static void main(String[] args) {
        System.out.println("tuoi la " + tuoi(nhap()));
    }
}
