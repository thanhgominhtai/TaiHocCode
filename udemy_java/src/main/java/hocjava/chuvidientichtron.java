package hocjava;

import static java.lang.Math.PI;
import java.util.Scanner;

public class chuvidientichtron {

    public static void main(String[] args) {
        float r;
        Scanner sc = new Scanner(System.in);
        System.out.print("nhap ban kinh: ");
        r = sc.nextFloat();
        System.out.printf("chu vi la: %f\ndien tich la: %f", r * 2 * PI, r * r * PI);
    }
}
