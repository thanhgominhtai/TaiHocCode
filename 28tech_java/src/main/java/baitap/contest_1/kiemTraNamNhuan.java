/*
[Kiểu dữ liệu-IF ELSE]. Bài 9.Kiểm tra năm nhuận

Năm nhuận là năm chia hết cho 400 hoặc (chia hết cho 4 và không chia hết cho 100). Nhập vào N là một năm và kiểm tra xem N có phải là năm nhuận hay không?

Input Format
Số nguyên dương N.

Constraints
1<=N<=5000

Output Format
In ra YES nếu N là năm nhuận, ngược lại in ra NO.

Sample Input 0
2020

Sample Output 0
YES
 */
package baitap.contest_1;

import java.util.Scanner;

public class kiemTraNamNhuan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)){
            System.out.println("la nam nhuan");
        }else{
            System.out.println("khong la nam nhuan");
        }
    }
}
