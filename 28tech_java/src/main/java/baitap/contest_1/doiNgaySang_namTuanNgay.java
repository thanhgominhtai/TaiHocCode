/*Kiểu dữ liệu-IF ELSE]. Bài 13. Đổi ngày sang năm, tuần, ngày

Cho trước N ngày, hãy đổi N thành số năm, số tuần và số ngày. Biết rằng một năm có 365 ngày.

Input Format
Số nguyên không âm N

Constraints
0<=N<=1000000

Output Format
In ra số năm, tuần, ngày tương ứng với N ngày

Sample Input 0
373

Sample Output 0
1 1 1
 */
package baitap.contest_1;

import java.util.Scanner;



public class doiNgaySang_namTuanNgay {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int nam = n / 365;
        System.out.println(nam);
        n = n - (365 * nam);
        int tuan =  n / 7;
        n = n - (tuan * 7);
        System.out.println(tuan);
        System.out.println(n);
    }
}
