package baitap.oop1;

import java.util.Scanner;

public class SinhVien2 {
    private String ma, ten, lop ,ns;
    private float diem;
    SinhVien2(){
        this.ma = "sv001";
        this.ten = "";
        this.lop = "";
        this.ns = "";
        this.diem = 0;
    }

    public SinhVien2(String ma, String ten, String lop, String ns, float diem) {
        this.ma = ma;
        this.ten = ten;
        this.lop = lop;
        this.ns = ns;
        this.diem = diem;
    }

    @Override
    public String toString() {
        return  "ma='" + ma + '\'' +
                ", ten='" + ten + '\'' +
                ", lop='" + lop + '\'' +
                ", ns='" + ns + '\'' +
                ", diem=" + diem +
                '}';
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SinhVien2 sv = new SinhVien2("sv001", sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextFloat());
        System.out.println(sv);
    }
}
