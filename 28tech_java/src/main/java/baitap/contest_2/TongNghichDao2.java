/*[Vòng lặp]. Bài 5. Tổng nghịch đảo 2

Tính tổng : S = 1/2 + 1/4 + 1/6 + 1/8 +…….+ 1/(2n)

Input Format
Số nguyên dương n

Constraints
1≤n≤10^6

Output Format
Kết quả S(n) lấy độ chính xác 5 số sau dấu phẩy.

Sample Input 0
993856

Sample Output 0
7.19328
 */
package baitap.contest_2;

import java.util.Scanner;

/**
 *
 * @author nmt17
 */
public class TongNghichDao2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double tong = 0;
        for(int i = 2; i <= 2*n; i+=2){
            tong += ((double) 1 / i);
            
        }
        System.out.printf("%.5f", tong);
    }
}
