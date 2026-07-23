package hocjava;

import java.util.Scanner;

public class nhapxuatdulieu {

    public static void main(String[] args) {
        String name;
        float heSoLuong;
        Scanner sc = new Scanner(System.in);
        System.out.print("nhap ho ten: ");
        name = sc.nextLine();
        System.out.print("nhap he so luong: ");
        heSoLuong = sc.nextFloat();
        System.out.println("ten la: " + name);
        System.out.println("hsl la: " + heSoLuong);
        System.out.println("luong la: " + (heSoLuong * 1800000));
    }
}
