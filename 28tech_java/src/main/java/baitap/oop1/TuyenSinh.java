package baitap.oop1;

public class TuyenSinh {
    private String ma, hoTen;
    private double t, l, h;
    TuyenSinh(String ma, String hoTen, double t, double l, double h) {
        this.ma = ma;
        this.hoTen = hoTen;
        this.t = t;
        this.l = l;
        this.h = h;
    }
    private char kv = '\0';
    public char getKv() {
        for(int i = 0; i < ma.length(); i++) {
            if(ma.charAt(i) == '1') {
                kv = ma.charAt(i);
                return ma.charAt(i);
            }else if(ma.charAt(i) == '2') {
                kv = ma.charAt(i);
                return ma.charAt(i);
            }else if(ma.charAt(i) == '3') {
                kv = ma.charAt(i);
                return ma.charAt(i);
            }
        }
        return kv;
    }
    public double tongDiem(){
        double tong = this.t + this.l + this.h;
        if(this.kv == '1'){
            return tong + 0.5;
        }else if(this.kv == '2'){
            return tong + 1.0;
        }else if(this.kv == '3'){
            return tong + 2.5;
        }
        return tong;
    }
    public String toString() {
        return ma + " " + hoTen + " " + getKv() + " " + tongDiem() + " ";
    }

    public static void main(String[] args) {
        TuyenSinh ts = new TuyenSinh("kv2b", "tuitentai", 3.4, 9, 0);
        System.out.println(ts.toString());
        if(ts.tongDiem() >= 24){
            System.out.println("DAU");
        }else System.out.println("TRUOT");
    }
}
