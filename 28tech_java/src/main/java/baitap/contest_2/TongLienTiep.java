/*
[Vòng lặp]. Bài 1. Tổng tự nhiên liên tiếp

Tính tổng S(n) = 1 + 2 + 3 + ... + n. Công thức tổng quát của dãy : n * (n + 1) / 2. Gợi ý : Tạo 1 biến kết quả gọi là tong và khởi tạo bằng 0(tránh giá trị rác), sau đó sinh ra 1 vòng lặp chạy từ 1 tới n, mỗi vòng lặp thì cộng biến i của vòng lặp vào biến tong. In ra biến tong SAU KHI VÒNG LẶP KẾT THÚC

Input Format
Số nguyên dương N

Constraints
1≤N≤10^6

Output Format
Kết quả S(n)

Sample Input 0
6

Sample Output 0
21
 */
package baitap.contest_2;

import java.util.Scanner;

/**
 *
 * @author nmt17
 */
public class TongLienTiep {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int tong = 0;
        for(int i = 0; i <= n; i++){
            tong += i;
        }
        System.out.println(tong);
    }
}
