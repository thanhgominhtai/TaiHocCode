package baitap.kethuaTOdahinh.kethua;

public class Student extends Person {
    protected String maSv;
    protected float gpa;

    Student(String ten, String date, String adress, String maSv, float gpa) {
        super(ten, date, adress);
        this.maSv = maSv;
        this.gpa = gpa;
    }

    @Override
    public String toString() {
        return String.format("%03d", this.maSv) + super.toString() ;
    }
}
