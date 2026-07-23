package hocjava;

import java.util.Scanner;

public class tinhTienDien {

    public static void main(String[] args) {
        float soCu, soMoi;
        Scanner sc = new Scanner(System.in);
        System.out.println("nhap so tien dien cu:");
        soCu = sc.nextFloat();
        System.out.println("nhap so tien dien moi:");
        soMoi = sc.nextFloat();
        System.out.printf("tien dien la: %.2f", (soMoi - soCu) * 3000);
    }
}
