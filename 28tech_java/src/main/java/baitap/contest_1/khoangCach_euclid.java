/*
[Kiểu dữ liệu-IF ELSE]. Bài 5. Khoảng cách Euclid.

Có nhiều khoảng cách giữa 2 điểm trong hệ tọa độ ví dụ như khoảng cách Manhattan, 
Euclid, Minkowski. Nhưng trong chương trình toán phổ thông các bạn sử dụng nhiều 
nhất là khoảng cách Euclid. Vì vậy bạn hãy tính khoảng cách Euclid giữa 2 điểm trong 
hệ tọa độ Oxy

Input Format
Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên

Constraints
-10^6≤xi,yi≤10^6

Output Format
In ra khoảng cách giữa 2 điểm, lấy độ chính xác 2 số sau dấu phẩy.

Sample Input 0
1 4 4 8

Sample Output 0
5.00
 */
package baitap.contest_1;

import java.util.Scanner;

public class khoangCach_euclid {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x1 = sc.nextInt(), y1 = sc.nextInt();
        int x2 = sc.nextInt(), y2 = sc.nextInt();
        long tmp = (long)Math.pow((x2 - x1), 2) +(long) Math.pow((y2 - y1), 2);
        double r = (double)Math.sqrt(tmp);
        System.out.printf("%.2f", r);
    }
}
