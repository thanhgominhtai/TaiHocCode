/*[Vòng lặp]. Bài 2. Tổng bình phương

Tính tổng S(n) = 1^2 + 2^2 + 3^2 + 4^2 + ... + n^2.

Gợi ý : Tạo 1 biến kết quả gọi là tong và khởi tạo bằng 0(tránh giá trị rác), sau đó sinh ra 1 vòng lặp chạy từ 1 tới n, mỗi vòng lặp thì giá trị i * i với i là biến của vòng lặp vào biến tong. In ra biến tong SAU KHI VÒNG LẶP KẾT THÚC

Input Format
Số nguyên dương n

Constraints
1≤N≤10^5

Output Format
S(n)

Sample Input 0
3

Sample Output 0
14
 */
package baitap.contest_2;

import java.util.Scanner;

/**
 *
 * @author nmt17
 */
public class TongBinhPhuong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int tong = 0;
        for(int i = 1; i <= n; i++){
            tong += Math.pow(i, 2);
        }
        System.out.println(tong);
    }
}
