/*Kiểu dữ liệu-IF ELSE]. Bài 12. Số ngày của tháng

Cho biết tháng và năm, hãy in ra số ngày tương ứng có trong tháng đó. Chú ý tháng 2 của năm nhuận có 29 ngày.

Input Format
2 số nguyên t và n tương ứng với tháng và năm.

Constraints
0<=t<=100; 0<=n<=5000;

Output Format
Nếu tháng là hợp lệ(tháng 1 tới 12) và năm là hợp lệ (lớn hơn 0) thì in ra số ngày tương ứng của năm đó, ngược lại in ra "INVALID".

Sample Input 0
11 2021

Sample Output 0
30
 */
package baitap.contest_1;

import java.util.Scanner;

public class soNgayCuaThang {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(), n = sc.nextInt();
        if(t > 12 && t == 0){
            System.out.println("invalid");
            return;
        }
        if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
            if (t == 2) {
                System.out.println("thang " + t + " co 29 ngay");
            }
        }else{
            if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12){
                System.out.println("thang " + t + " co 31 ngay");
            }else{
                System.out.println("thang " + t + " co 30 ngay");
            }
        }
    }
}
