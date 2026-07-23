package baitap.oop1;

import java.util.Scanner;

public class SInhVien {
    private String ten, ns;
    private double m1, m2, m3;
    public SInhVien(String ten, String ns, double m1, double m2, double m3) {
        this.ten = ten;
        this.ns = ns;
        this.m1 = m1;
        this.m2 = m2;
        this.m3 = m3;
    }

    @Override
    public String toString() {
        return ten + " " + ns + " " + (m1 + m2 + m3);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SInhVien sv = new SInhVien(sc.nextLine(), sc.nextLine(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
        System.out.println(sv);
    }
    }

