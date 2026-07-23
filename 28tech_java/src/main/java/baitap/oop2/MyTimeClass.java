package baitap.oop2;

import java.util.Scanner;

public class MyTimeClass {
    private int hour, minute, second;
    MyTimeClass() {}
    public MyTimeClass(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }
    public void setTime(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }

    public int getHour() {
        return this.hour;
    }
    public int getMinute() {
        return this.minute;
    }
    public int getSecond() {
        return this.second;
    }

    public void setHour(int hour) {
        this.hour = hour;
    }

    public void setMinute(int minute) {
        this.minute = minute;
    }

    public void setSecond(int second) {
        this.second = second;
    }
    public String toString() {
        return String.format("%02d", this.hour) + ":" + String.format("%02d", this.minute) + ":" + String.format("%02d", this.second);
    }
    public MyTimeClass nextHour() {
        MyTimeClass next = new MyTimeClass(hour, minute, second);
        next.setHour(hour + 1 > 23 ? 0 : hour + 1);
        return next;
    }
    public MyTimeClass nextMinute() {
        MyTimeClass next = new MyTimeClass(hour, minute, second);
        if(minute + 1 > 59) {
            next.nextHour();
        }
        next.setMinute(minute + 1 > 59 ? 0 : minute + 1);
        return next;
    }
    public MyTimeClass nextSecond() {
        MyTimeClass next = new MyTimeClass(hour, minute, second);
        if(second + 1 > 59) {
            next.nextMinute();
        }
        next.setSecond(second + 1 > 59 ? 0 : second + 1);
        return next;
    }
    public MyTimeClass previousHour(){
        MyTimeClass previous = new MyTimeClass(hour, minute, second);
        previous.setHour(hour - 1 < 0 ? 23 : hour -1);
        return previous;
    }
    public MyTimeClass previousMinute(){
        MyTimeClass previous = new MyTimeClass(hour, minute, second);
        if(minute - 1 < 0) {
            previous.previousHour();
        }
        previous.setMinute(minute - 1 < minute ? 59 : minute - 1);
        return previous;
    }
    public MyTimeClass previousSecond(){
        MyTimeClass previous = new MyTimeClass(hour, minute, second);
        if(second - 1 < 0) {
            previous.previousMinute();
        }
        previous.setSecond(second - 1 < 0 ? 59 : second - 1);
        return previous;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("nhap time");
        int hour = sc.nextInt();
        int minute = sc.nextInt();
        int second = sc.nextInt();
        MyTimeClass mc = new MyTimeClass(hour, minute, second);
        System.out.println(mc.nextSecond().toString());
        System.out.println(mc.nextMinute().toString());
        System.out.println(mc.nextHour().toString());
        System.out.println(mc.previousSecond().toString());
        System.out.println(mc.previousMinute().toString());
        System.out.println(mc.previousHour().toString());
    }
}
