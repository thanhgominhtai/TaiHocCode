package hocjava;

import java.util.Scanner;

public class giaiPtBacNhat {

    public static void main(String[] args) {
        int a, b;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        if (a != 0) {
            System.out.println("pt co nghiem suy nhat la: " + (-b * 1.0 / a));
        } else {
            if (b == 0) {
                System.out.println("pt co vo so nghiem");
            } else {
                System.out.println("phuong trinh vo nghiem");
            }
        }
    }
}