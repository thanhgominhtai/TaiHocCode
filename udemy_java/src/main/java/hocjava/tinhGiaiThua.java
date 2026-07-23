/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package hocjava;

import java.awt.BorderLayout;
import java.util.Scanner;

/**
 *
 * @author nmt17
 */
public class tinhGiaiThua {
    public static void main(String[] args) {
        int n, kq = 1;
        Scanner sc = new Scanner(System.in);
        System.out.println("nhap n");
        n = sc.nextInt();
        for(int i = n; i > 0; i--)
        {
            kq *= i;
        }
        System.out.println("kq la: " + kq);
    }
}
