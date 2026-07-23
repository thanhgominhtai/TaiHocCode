/*
[Làm quen với OJ]. Bài 11. Nhân chia

Cho số nguyên N hãy in ra kết quả của những phép toán sau : Dòng 1. In ra 2 lần số N, 
Dòng 2. In ra 10 lần số N, Dòng 3. In ra kết quả của phép chia nguyên của N với 2, Dòng 4. 
In ra kết quả của phép chia lấy phần thập phân của N với 2, in ra 3 chữ số phần thập phân.

Input Format
Dòng duy nhất chứa số nguyên dương N

Constraints
1<=N<=10^9

Output Format
In ra 4 dòng theo yêu cầu, mỗi kết quả cách nhau thêm 1 dòng trống, xem output để rõ hơn yêu cầu.

Sample Input 0
570

Sample Output 0
1140
5700
285
285.000
 */
package baitap.contest_0;

import java.util.Scanner;

public class nhanchia {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(n * 2);
        System.out.println(10 * n);
        System.out.println(n / 2);
        System.out.printf("%.3f",(float)n / 2);
    }
}
