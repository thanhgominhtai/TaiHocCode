package baitap.oop1;

import java.util.Scanner;

public class NhanVien {
    private String ma, ten, gt, ns, dc, mst, khd;
    NhanVien(String ma, String ten, String gt, String ns, String dc,String mst, String khd) {
        this.ma = ma;
        this.ten = ten;
        this.gt = gt;
        this.ns = ns;
        this.dc = dc;
        this.mst = mst;
        this.khd = khd;
    }

    @Override
    public String toString() {
        return "NhanVien{" +
                "ma='" + ma + '\'' +
                ", ten='" + ten + '\'' +
                ", gt='" + gt + '\'' +
                ", ns='" + ns + '\'' +
                ", dc='" + dc + '\'' +
                ", mst='" + mst + '\'' +
                ", khd='" + khd + '\'' +
                '}';
    }

    public static void main(String[] args) {
        NhanVien nv = new NhanVien("001", "tuiten", "nam", "20/3", "duongso5", "01234", "13/2/345");
        System.out.println(nv.toString());
    }
}
