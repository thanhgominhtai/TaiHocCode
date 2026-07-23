package baitap.oop1;

import java.util.ArrayList;
import java.util.Scanner;

public class DanhSachMatHang {
    private String ma, ten, dvt;
    private int giamua, giaban;

    public DanhSachMatHang() {
    }

    public DanhSachMatHang(int ma, String ten, String dvt, int giamua, int giaban) {
        this.ma = "MH" + String.format("%04d", ma);
        this.ten = ten;
        this.dvt = dvt;
        this.giamua = giamua;
        this.giaban = giaban;
    }
    public int getLoiNhuan(){
        return this.giaban - this.giamua;
    }
    public String toString(){
        return this.ma + " " + this.ten + " " + this.dvt + " " + this.giamua + " " + this.getLoiNhuan();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<DanhSachMatHang> ar = new ArrayList<>();
        for(int i = 0; i < n; i++){
            sc.nextLine();
            DanhSachMatHang h = new DanhSachMatHang(i+1, sc.nextLine(), sc.nextLine(), sc.nextInt(), sc.nextInt());
            ar.add(h);
        }
        for(DanhSachMatHang h : ar){
            System.out.println(h);
        }
    }
}
