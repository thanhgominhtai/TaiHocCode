package hocjava;

import java.util.Scanner;

public class doitien {

    public static void main(String[] args) {
        int tien;
        float tiGia;
        Scanner sc = new Scanner(System.in);
        System.out.println("nhap tien VND: ");
        tien = sc.nextInt();
        System.out.println("nhap ti gia: ");
        tiGia = sc.nextFloat();
        System.out.printf("tien $ la: %f", tien / tiGia);
    }
}
