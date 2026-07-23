/*
[Kiểu dữ liệu-IF ELSE]. Bài 1. Tính toán giá trị của biểu thức

Cho biểu thức A(x) = x^3 + 3x^2 + x + 1 Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên

Input Format
Số nguyên x

Constraints
-10^5≤x≤10^5

Output Format
In ra kết quả cùa biểu thức

Sample Input 0
2

Sample Output 0
23
 */
package baitap.contest_1;

import java.util.Scanner;


public class tinhToanBieuThuc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        System.out.println((Math.pow(x, 3) + 3 * Math.pow(x, 2) + x + 1));
    }
}
