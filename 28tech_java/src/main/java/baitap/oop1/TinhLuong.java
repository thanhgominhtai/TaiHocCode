package baitap.oop1;

public class TinhLuong {
    private String hoTen, chucVu;
    private int SoNgayCong = 0, luong = 0;
    private static int ma = 0;
    TinhLuong(String hoTen, int luong, int soNgayCong, String chucVu) {
        this.hoTen = hoTen;
        this.luong = luong;
        this.SoNgayCong = soNgayCong;
        this.chucVu = chucVu;
        this.ma++;
    }
    public int tinhLuong(){
        if(this.chucVu.equals("gd")){
            return 250000;
        }else if(this.chucVu.equals("pgd")){
            return 200000;
        }else if(this.chucVu.equals("tp")){
            return 180000;
        }else if(this.chucVu.equals("nv")) return 150000;
        return 0;
    }
    public double tinhLuongThuong(){
        if(SoNgayCong >= 25){
            return this.tinhLuong() + this.luong * this.SoNgayCong + (luong * 0.2);
        }else if(SoNgayCong >= 22 && SoNgayCong <= 25){
            return this.tinhLuong() + this.luong * this.SoNgayCong + (luong * 0.1);
        }else if(SoNgayCong <22){
            return this.tinhLuong() + this.luong * this.SoNgayCong;
        }
        return 0;
    }
    public String toString(){
        return "NV" + this.ma + " " + this.hoTen + " " + this.luong + " " + tinhLuongThuong();
    }

    public static void main(String[] args) {
        TinhLuong t1 = new TinhLuong("tuiteo", 26000, 21, "pgd");
        System.out.println(t1.toString());
    }
}
