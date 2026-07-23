package baitap.kethuaTOdahinh.kethua;

public class Person {
    private String ten, date, adress;
    Person(String ten, String date, String adress) {
        this.ten = ten;
        this.date = date;
        this.adress = adress;
    }
    public void chuanHoaTen(){
        StringBuilder sb = new StringBuilder("");
        for(char c : ten.toCharArray()){
            sb.append(Character.toLowerCase(c));
        }
        for(int i = 0; i < ten.length(); i++){
            if( i == 0){

            }else if (ten.charAt(i) == ' '){
                Character.toUpperCase(ten.charAt(i));
            }
        }
    }
    public void chuanHoaDate(){
        StringBuilder sb = new StringBuilder(date);
        if(date.charAt(1) == '/'){
            sb.insert(0, '0');
        }else if (date.charAt(5) == '/'){
            sb.insert(4, '0');
        }
        this.date = sb.toString();
    }
    public String toString() {
        chuanHoaTen();
        chuanHoaDate();
        return ten + " " + date + " " + adress;
    }
}
