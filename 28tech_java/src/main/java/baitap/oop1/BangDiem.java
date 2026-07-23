package baitap.oop1;

import java.util.ArrayList;
import java.util.Scanner;

public class BangDiem {
    private String ten;
    private double t, tv, bb, vl, hh, sh, lh, d, gd, cn;
    public BangDiem (String ten, double t, double tv, double bb, double vl, double hh, double sh, double lh, double d, double v, double nextDouble){
        this.ten = ten;
        this.t = t;
        this.tv = tv;
        this.bb = bb;
        this.vl = vl;
        this.hh = hh;
        this.sh = sh;
        this.lh = lh;
        this.d = d;
        this.gd = gd;
        this.cn = cn;
    }
     public double getDTB(){
        return (t + tv + bb + vl + hh + sh + lh + d + gd + cn) / 10;
     }
     public String toString(){
         String xl = "";
        if(getDTB() <= 10 && getDTB() >= 9){
            xl = "xuat sac";
        }else if(getDTB() < 9 && getDTB() >= 8){
            xl = "gioi";
        }else if(getDTB() < 8 && getDTB() >= 7){
            xl = "kha";
        }else if(getDTB() < 7 && getDTB() >= 5){
            xl = "trung binh";
        }else if(getDTB() < 5 && getDTB() >= 0){
            xl = "yeu";
        }
        return this.ten + " " + getDTB() + " " + xl;
     }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<BangDiem> list = new ArrayList<BangDiem>();
        for(int i = 0; i < n; i++){
            sc.nextLine();
            BangDiem bd = new BangDiem(sc.nextLine(), sc.nextDouble(), sc.nextDouble(),sc.nextDouble(),sc.nextDouble(),sc.nextDouble(),sc.nextDouble(),sc.nextDouble(),sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
            list.add(bd);
        }
        for(BangDiem bd : list){
            System.out.println(bd);
        }
    }
}
